////////////////////////////////////////////////////////////////////////////////
// �� �� �� : TranDepProc.cpp
// ��    �� : �Ա�
// �� �� �� : SE����
// ���泻�� : 1. 2007-05-07  Cd-Van ver 01.00.00  AUTO - �űԻ���
//               �������� T2
//            2. 2010-05-09  ver 03.00.07  T1,T2,CATM,NH2700 ����
//            3. 2010-10-14  ver 03.00.08  T1,T2,CATM,U8100,MX2800 ����
//
// Copyright (c) 2004, Nautilus Hyosung Inc
////////////////////////////////////////////////////////////////////////////////
#include "stdafx.h"
#include "TranFuncProc_STA.h"
#include "..\..\H\Common\CmnLibIn.h"
#include "..\..\H\Common\Define.h"
#include "..\..\H\Common\ConstDef.h"
#include "..\..\H\Common\ClassInclude.h"
#include "..\..\H\Dll\DevCmn.h"
#include "..\..\H\Tran\TranCmn.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif


////////////////////////////////////////////////////////////////////////////////
// �� �� �� : fnAPPC_TranDepProc
// ��    �� : �Ա�
// �Ķ���� : ����
// �� �� �� : T_OK     - ����
//            T_ERROR  - ����
// ���ǻ��� : ����
// ���泻�� : 1. 2007-05-07  Cd-Van ver 01.00.00  AUTO - �űԻ���
//               �������� T2
//            2. 2010-05-09  ver 03.00.07  T1,T2,CATM,NH2700 ����
//            3. 2010-10-14  ver 03.00.08  T1,T2,CATM,U8100,MX2800 ����
//
// Copyright (c) 2004, Nautilus Hyosung Inc
////////////////////////////////////////////////////////////////////////////////
int CTranCmn::fnAPPC_TranDepProc()
{
	// �ʱ���� ����
	int nNextState = TRANSACTIONDEPOSITINITIALIZE_STA;
	m_pDevCmn->fnAPL_SetProcCount('1');                              // ���༳��
	
	while (1)
	{
		MsgDump(TRACE_CODE_MODE, "Log", __FILE__, __LINE__,
			"fnAPPC_TranDepProc:m_nRetCode[%d], nNextState[%d]", m_nRetCode, nNextState);

		// nNextState�� ���� ���� �����ܰ�� �б�
		switch (nNextState)
		{
			// �Աݰŷ��ʱ�ȭ
			case TRANSACTIONDEPOSITINITIALIZE_STA:
				fnAPPF_TransactionDepositInitialize();
				switch(m_nRetCode)
				{
					case RET_NEXT_STEP:                              // NextStep
						nNextState = SETPROCEDURECOUNT1_STA;
						break;
					default:                                         // �̻�����
						fnAPP_CancelProc(T_PROGRAM);
				}
				break;

			// ����ī��Ʈ����1
			case SETPROCEDURECOUNT1_STA:
				fnAPPF_SetProcedureCount1();
				switch(m_nRetCode)
				{
					case RET_NEXT_STEP:                              // NextStep
						nNextState = TRANSACTIONDEPOSITINPUT_STA;
						break;
					default:                                         // �̻�����
						fnAPP_CancelProc(T_PROGRAM);
				}
				break;

			// �Աݼ۽����Է�
			case TRANSACTIONDEPOSITINPUT_STA:
				fnAPPF_TransactionDepositInput();
				switch(m_nRetCode)
				{
					case RET_NEXT_STEP:                              // NextStep
						nNextState = SETPROCEDURECOUNT3_STA;
						break;
					default:                                         // �̻�����
						fnAPP_CancelProc(T_PROGRAM);
				}
				break;

			// ����ī��Ʈ����3
			case SETPROCEDURECOUNT3_STA:
				fnAPPF_SetProcedureCount3();
				switch(m_nRetCode)
				{
					case RET_NEXT_STEP:                              // NextStep
						nNextState = SENDHOST_STA;
						break;
					default:                                         // �̻�����
						fnAPP_CancelProc(T_PROGRAM);
				}
				break;

			// ȣ��Ʈ�۽�
			case SENDHOST_STA:
				fnAPPF_SendHost();
				switch(m_nRetCode)
				{
					case RET_NEXT_STEP:                              // NextStep
						nNextState = CARDIMPRINT_STA;
						break;
					default:                                         // �̻�����
						fnAPP_CancelProc(T_PROGRAM);
				}
				break;

			// ī��������Ʈ
			case CARDIMPRINT_STA:
				fnAPPF_CardImprint();
				switch(m_nRetCode)
				{
					case RET_NEXT_STEP:                              // NextStep
						nNextState = RECVHOST_STA;
						break;
					default:                                         // �̻�����
						fnAPP_CancelProc(T_PROGRAM);
				}
				break;

			// ȣ��Ʈ����
			case RECVHOST_STA:
				fnAPPF_RecvHost();
				switch(m_nRetCode)
				{
					case RET_NEXT_STEP:                              // NextStep
						nNextState = GETHOSTRESULT_STA;
						break;
					default:                                         // �̻�����
						fnAPP_CancelProc(T_PROGRAM);
				}
				break;

			// ȣ��Ʈ������
			case GETHOSTRESULT_STA:
				fnAPPF_GetHostResult();
				switch(m_nRetCode)
				{
					case RET_HOST_OK:                                // HostOk
						nNextState = SETPROCEDURECOUNT5_STA;
						break;
					case RET_HOST_NG:                                // HostNg
						nNextState = SETPROCEDURECOUNT9_STA;
						break;
					default:                                         // �̻�����
						fnAPP_CancelProc(T_PROGRAM);
				}
				break;

			// ����ī��Ʈ����5
			case SETPROCEDURECOUNT5_STA:
				fnAPPF_SetProcedureCount5();
				switch(m_nRetCode)
				{
					case RET_NEXT_STEP:                              // NextStep
						nNextState = TRANSACTIONDEPOSITOUTPUT_STA;
						break;
					default:                                         // �̻�����
						fnAPP_CancelProc(T_PROGRAM);
				}
				break;

			// ����ī��Ʈ����9
			case SETPROCEDURECOUNT9_STA:
				fnAPPF_SetProcedureCount9();
				switch(m_nRetCode)
				{
					case RET_NEXT_STEP:                              // NextStep
						nNextState = TRANSACTIONDEPOSITOUTPUT_STA;
						break;
					default:                                         // �̻�����
						fnAPP_CancelProc(T_PROGRAM);
				}
				break;

			// �Աݼ�����ó��
			case TRANSACTIONDEPOSITOUTPUT_STA:
				fnAPPF_TransactionDepositOutput();
				switch(m_nRetCode)
				{
					case RET_NEXT_STEP:                              // NextStep
						nNextState = TRANSACTIONDEPOSITCHECKDEVICEACTION_STA;
						break;
					default:                                         // �̻�����
						fnAPP_CancelProc(T_PROGRAM);
				}
				break;

			// �Աݰŷ�����˻�
			case TRANSACTIONDEPOSITCHECKDEVICEACTION_STA:
				fnAPPF_TransactionDepositCheckDeviceAction();
				switch(m_nRetCode)
				{
					case RET_NEXT_STEP:                              // NextStep
						nNextState = TRANSACTIONDEPOSITCHECKMENUCONTINUE_STA;
						break;
					default:                                         // �̻�����
						fnAPP_CancelProc(T_PROGRAM);
				}
				break;

			// �Աݿ��ӿ��ΰ˻�
			case TRANSACTIONDEPOSITCHECKMENUCONTINUE_STA:
				fnAPPF_TransactionDepositCheckMenuContinue();
				switch(m_nRetCode)
				{
					case RET_NEXT_STEP:                              // NextStep
						return T_OK;
					case RET_LOOP_STEP:                              // LoopStep
						return T_OK;
					default:                                         // �̻�����
						fnAPP_CancelProc(T_PROGRAM);
				}
				break;

			default:                                         // �̻�����
				fnAPP_CancelProc(T_PROGRAM);

		}     // End switch

	}     // End while

	return T_OK;

}