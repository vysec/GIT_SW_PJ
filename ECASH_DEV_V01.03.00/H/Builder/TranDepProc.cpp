////////////////////////////////////////////////////////////////////////////////
// 파 일 명 : TranDepProc.cpp
// 설    명 : 입금
// 작 성 자 : SE본부
// 변경내역 : 1. 2007-05-07  Cd-Van ver 01.00.00  AUTO - 신규생성
//               동양증권 T2
//            2. 2010-05-09  ver 03.00.07  T1,T2,CATM,NH2700 통합
//            3. 2010-10-14  ver 03.00.08  T1,T2,CATM,U8100,MX2800 통합
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
// 함 수 명 : fnAPPC_TranDepProc
// 설    명 : 입금
// 파라미터 : 없음
// 리 턴 값 : T_OK     - 성공
//            T_ERROR  - 실패
// 주의사항 : 없음
// 변경내역 : 1. 2007-05-07  Cd-Van ver 01.00.00  AUTO - 신규생성
//               동양증권 T2
//            2. 2010-05-09  ver 03.00.07  T1,T2,CATM,NH2700 통합
//            3. 2010-10-14  ver 03.00.08  T1,T2,CATM,U8100,MX2800 통합
//
// Copyright (c) 2004, Nautilus Hyosung Inc
////////////////////////////////////////////////////////////////////////////////
int CTranCmn::fnAPPC_TranDepProc()
{
	// 초기상태 지정
	int nNextState = TRANSACTIONDEPOSITINITIALIZE_STA;
	m_pDevCmn->fnAPL_SetProcCount('1');                              // 진행설정
	
	while (1)
	{
		MsgDump(TRACE_CODE_MODE, "Log", __FILE__, __LINE__,
			"fnAPPC_TranDepProc:m_nRetCode[%d], nNextState[%d]", m_nRetCode, nNextState);

		// nNextState의 값에 따라 다음단계로 분기
		switch (nNextState)
		{
			// 입금거래초기화
			case TRANSACTIONDEPOSITINITIALIZE_STA:
				fnAPPF_TransactionDepositInitialize();
				switch(m_nRetCode)
				{
					case RET_NEXT_STEP:                              // NextStep
						nNextState = SETPROCEDURECOUNT1_STA;
						break;
					default:                                         // 이상종료
						fnAPP_CancelProc(T_PROGRAM);
				}
				break;

			// 진행카운트설정1
			case SETPROCEDURECOUNT1_STA:
				fnAPPF_SetProcedureCount1();
				switch(m_nRetCode)
				{
					case RET_NEXT_STEP:                              // NextStep
						nNextState = TRANSACTIONDEPOSITINPUT_STA;
						break;
					default:                                         // 이상종료
						fnAPP_CancelProc(T_PROGRAM);
				}
				break;

			// 입금송신전입력
			case TRANSACTIONDEPOSITINPUT_STA:
				fnAPPF_TransactionDepositInput();
				switch(m_nRetCode)
				{
					case RET_NEXT_STEP:                              // NextStep
						nNextState = SETPROCEDURECOUNT3_STA;
						break;
					default:                                         // 이상종료
						fnAPP_CancelProc(T_PROGRAM);
				}
				break;

			// 진행카운트설정3
			case SETPROCEDURECOUNT3_STA:
				fnAPPF_SetProcedureCount3();
				switch(m_nRetCode)
				{
					case RET_NEXT_STEP:                              // NextStep
						nNextState = SENDHOST_STA;
						break;
					default:                                         // 이상종료
						fnAPP_CancelProc(T_PROGRAM);
				}
				break;

			// 호스트송신
			case SENDHOST_STA:
				fnAPPF_SendHost();
				switch(m_nRetCode)
				{
					case RET_NEXT_STEP:                              // NextStep
						nNextState = CARDIMPRINT_STA;
						break;
					default:                                         // 이상종료
						fnAPP_CancelProc(T_PROGRAM);
				}
				break;

			// 카드임프린트
			case CARDIMPRINT_STA:
				fnAPPF_CardImprint();
				switch(m_nRetCode)
				{
					case RET_NEXT_STEP:                              // NextStep
						nNextState = RECVHOST_STA;
						break;
					default:                                         // 이상종료
						fnAPP_CancelProc(T_PROGRAM);
				}
				break;

			// 호스트수신
			case RECVHOST_STA:
				fnAPPF_RecvHost();
				switch(m_nRetCode)
				{
					case RET_NEXT_STEP:                              // NextStep
						nNextState = GETHOSTRESULT_STA;
						break;
					default:                                         // 이상종료
						fnAPP_CancelProc(T_PROGRAM);
				}
				break;

			// 호스트결과얻기
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
					default:                                         // 이상종료
						fnAPP_CancelProc(T_PROGRAM);
				}
				break;

			// 진행카운트설정5
			case SETPROCEDURECOUNT5_STA:
				fnAPPF_SetProcedureCount5();
				switch(m_nRetCode)
				{
					case RET_NEXT_STEP:                              // NextStep
						nNextState = TRANSACTIONDEPOSITOUTPUT_STA;
						break;
					default:                                         // 이상종료
						fnAPP_CancelProc(T_PROGRAM);
				}
				break;

			// 진행카운트설정9
			case SETPROCEDURECOUNT9_STA:
				fnAPPF_SetProcedureCount9();
				switch(m_nRetCode)
				{
					case RET_NEXT_STEP:                              // NextStep
						nNextState = TRANSACTIONDEPOSITOUTPUT_STA;
						break;
					default:                                         // 이상종료
						fnAPP_CancelProc(T_PROGRAM);
				}
				break;

			// 입금수신후처리
			case TRANSACTIONDEPOSITOUTPUT_STA:
				fnAPPF_TransactionDepositOutput();
				switch(m_nRetCode)
				{
					case RET_NEXT_STEP:                              // NextStep
						nNextState = TRANSACTIONDEPOSITCHECKDEVICEACTION_STA;
						break;
					default:                                         // 이상종료
						fnAPP_CancelProc(T_PROGRAM);
				}
				break;

			// 입금거래종료검사
			case TRANSACTIONDEPOSITCHECKDEVICEACTION_STA:
				fnAPPF_TransactionDepositCheckDeviceAction();
				switch(m_nRetCode)
				{
					case RET_NEXT_STEP:                              // NextStep
						nNextState = TRANSACTIONDEPOSITCHECKMENUCONTINUE_STA;
						break;
					default:                                         // 이상종료
						fnAPP_CancelProc(T_PROGRAM);
				}
				break;

			// 입금연속여부검사
			case TRANSACTIONDEPOSITCHECKMENUCONTINUE_STA:
				fnAPPF_TransactionDepositCheckMenuContinue();
				switch(m_nRetCode)
				{
					case RET_NEXT_STEP:                              // NextStep
						return T_OK;
					case RET_LOOP_STEP:                              // LoopStep
						return T_OK;
					default:                                         // 이상종료
						fnAPP_CancelProc(T_PROGRAM);
				}
				break;

			default:                                         // 이상종료
				fnAPP_CancelProc(T_PROGRAM);

		}     // End switch

	}     // End while

	return T_OK;

}
