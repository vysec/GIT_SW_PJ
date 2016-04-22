#if !defined(AFX_NHMWI_H__81CECC00_B186_469C_80C9_B1FD24A8E567__INCLUDED_)
#define AFX_NHMWI_H__81CECC00_B186_469C_80C9_B1FD24A8E567__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.

/////////////////////////////////////////////////////////////////////////////
// CNHMWI wrapper class

class CNHMWI : public CWnd
{
protected:
	DECLARE_DYNCREATE(CNHMWI)
public:
	CLSID const& GetClsid()
	{
		static CLSID const clsid
			= { 0x984454bc, 0x621a, 0x41be, { 0xac, 0x67, 0x63, 0x6c, 0x0, 0x80, 0x1a, 0xfc } };
		return clsid;
	}
	virtual BOOL Create(LPCTSTR lpszClassName,
		LPCTSTR lpszWindowName, DWORD dwStyle,
		const RECT& rect,
		CWnd* pParentWnd, UINT nID,
		CCreateContext* pContext = NULL)
	{ return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID); }

    BOOL Create(LPCTSTR lpszWindowName, DWORD dwStyle,
		const RECT& rect, CWnd* pParentWnd, UINT nID,
		CFile* pPersist = NULL, BOOL bStorage = FALSE,
		BSTR bstrLicKey = NULL)
	{ return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID,
		pPersist, bStorage, bstrLicKey); }

// Attributes
public:
	long GetRejectMoneyTotalAmount();
	void SetRejectMoneyTotalAmount(long);
	long GetRejectMoneyTenThousand();
	void SetRejectMoneyTenThousand(long);
	long GetRejectMoneyFiveThousand();
	void SetRejectMoneyFiveThousand(long);
	long GetRejectMoneyOneThousand();
	void SetRejectMoneyOneThousand(long);
	long GetRejectMoneyCheck();
	void SetRejectMoneyCheck(long);
	long GetRejectMoneyUnknown();
	void SetRejectMoneyUnknown(long);
	long GetDepositMoneyStatus();
	void SetDepositMoneyStatus(long);
	long GetDepositMoneyTotalAmount();
	void SetDepositMoneyTotalAmount(long);
	long GetDepositMoneyTenThousand();
	void SetDepositMoneyTenThousand(long);
	long GetDepositMoneyFiveThousand();
	void SetDepositMoneyFiveThousand(long);
	long GetDepositMoneyOneThousand();
	void SetDepositMoneyOneThousand(long);
	long GetDepositMoneyUnknown();
	void SetDepositMoneyUnknown(long);
	long GetRetInfoStatus();
	void SetRetInfoStatus(long);
	long GetRetInfoActNum();
	void SetRetInfoActNum(long);
	long GetRetInfoRJTNum();
	void SetRetInfoRJTNum(long);
	long GetRetInfoTenThRJTNum();
	void SetRetInfoTenThRJTNum(long);
	long GetRetInfoFiveThRJTNum();
	void SetRetInfoFiveThRJTNum(long);
	long GetRetInfoOneThRJTNum();
	void SetRetInfoOneThRJTNum(long);
	long GetRetInfoCheckRJTNum();
	void SetRetInfoCheckRJTNum(long);
	long GetRetInfoUnknownRJTNum();
	void SetRetInfoUnknownRJTNum(long);
	long GetRejectMoneyHundredThousand();
	void SetRejectMoneyHundredThousand(long);
	long GetRejectMoneyFiftyThousand();
	void SetRejectMoneyFiftyThousand(long);
	long GetDepositMoneyHundredThousand();
	void SetDepositMoneyHundredThousand(long);
	long GetDepositMoneyFiftyThousand();
	void SetDepositMoneyFiftyThousand(long);
	long GetRetInfoHundredThRJTNum();
	void SetRetInfoHundredThRJTNum(long);
	long GetRetInfoFiftyThRJTNum();
	void SetRetInfoFiftyThRJTNum(long);

// Operations
public:
	CString TestMethod(LPCTSTR szParam1, LPCTSTR szParam2, LPCTSTR szParam3);
	void ProcSetDeviceEvent();
	void ProcSetDeviceStatus();
	long McuEntryDisable();
	CString McuGetCardData(long lDoNotUnPack);
	long McuInitialize();
	long McuRead();
	long McuRetract();
	long McuWrite(LPCTSTR szTrackData);
	long SprGetPaperStatus();
	long JprEmbossPrint();
	long JprGetPaperStatus();
	long JprInitialize();
	CString PbmGetMsData();
	long PbmInitialize();
	long PbmRetract();
	BOOL BrmCloseShutter();
	long BrmGetAutoloadCondition();
	long BrmGetNumberOfCash();
	long BrmGetPosition();
	long BrmGetRecycleBoxStatus();
	BOOL BrmOpenShutter();
	long BrmReady();
	BOOL BrmReadyCount();
	BOOL BrmReadyDispense();
	long McuDeinitialize();
	CString CheckDeviceAction(long nDevID, long nWaitSec);
	long McuWaitTaken();
	long SprDeinitialize();
	long SprWaitTaken();
	long PbmEject(long nWaitSec);
	long PbmDeinitialize();
	long PbmWaitTaken();
	long BrmDeinitialize();
	long BrmPresent(long nWaitSec);
	long BrmPresent2(long nWaitSec);
	long BrmCancelWaitTaken();
	long BrmRefillMoney(long nNumNotes);
	long BrmTakeupMoney(long nNumNotes);
	long BrmGetMaterialInfo();
	long UcmGetDepCSTStatus();
	long UcmGetWithCSTStatus();
	CString UcmGetCheckDataDispensed(long nCheckNum);
	long UcmGetPosition();
	long UcmInitialize(long nWaitSec);
	long UcmWaitTaken();
	long UcmCancelAccept();
	long UcmRejectAll(long nWaitSec);
	long UpsInitialize();
	long UpsDeinitialize();
	long UpsGetPowerStatus();
	long SplInitialize();
	long SplDeinitialize();
	long ScanDeviceAction(long nDevID, long nWaitSec, long nEventKind);
	long McuEntryEnable(long nWaitSec);
	long GetErrorDevice(long nDevID);
	long McuGetMaterialInfo();
	long SprGetMaterialInfo();
	long JprGetMaterialInfo();
	long PbmGetMaterialInfo();
	long UcmGetMaterialInfo(long nDepWithFlag);
	long SprInitialize();
	long UcmDeinitialize();
	long JprDeinitialize();
	long McuEject(long nWaitSec);
	long SprPrint(LPCTSTR szFormName, LPCTSTR szPrintData);
	long JprPrint(LPCTSTR szFormName, LPCTSTR szPrintData);
	long PbmPrint(LPCTSTR szFormName, LPCTSTR szPrintData);
	long BrmWaitLift();
	long BrmWaitTaken();
	long UcmOpenShutter(long nWaitSec);
	long UcmCloseShutter(long nWaitSec);
	long ProcBackupTrace(LPCTSTR szFileName, long nFileSize);
	long UcmCancelWaitTaken();
	long JprGetDeviceStatus();
	long SprGetDeviceStatus();
	long SprEject(long nWaitSec);
	long SprRetract();
	long McuGetDeviceStatus();
	long UcmGetDeviceStatus();
	long UcmGetAvailDeposit();
	long UcmGetAvailWithdraw();
	CString UcmGetACheckData();
	long UcmAccept(long nWaitSec);
	long UcmRead();
	long UcmEscrow(LPCTSTR szPrintData);
	long UcmStack();
	long UcmRejectA(long nWaitSec);
	long UcmDispense(long nCheckCnt, LPCTSTR szPrintData);
	long UcmPresent(long nWaitSec);
	long BrmGetDeviceStatus();
	long BrmGetAvailDeposit();
	long BrmGetAvailWithdraw();
	long BrmAccept(long nCashCnt);
	long BrmCount();
	long BrmStack();
	long BrmReject(long nWaitSec);
	long BrmRetract();
	long BrmDispense(long nCashCnt);
	long PbmGetDeviceStatus();
	CString PbmGetBarData();
	CString PbmGetLineData();
	long PbmEntryDisable();
	long PbmEntryEnable(long nWaitSec);
	long PbmRead();
	long CmrInitialize();
	long CmrDeinitialize();
	long CmrGetDeviceStatus();
	long CmrCaptureFace(LPCTSTR szFileName);
	long CmrCaptureHand(LPCTSTR szFileName);
	long DorInitialize();
	long DorDeinitialize();
	long DorGetDeviceStatus();
	long DorGetDoorStatus(long nDoor);
	long LgtInitialize();
	long LgtDeinitialize();
	long LgtSetFlicker(long nIndex, long nValue);
	long LgtSetIndicator(long nValue);
	long SplSetSegment(LPCTSTR szValue);
	long SplSetLed(LPCTSTR szValue);
	long SplSetRpl(LPCTSTR szValue);
	long SplSetInform(LPCTSTR szValue);
	long UpsGetDeviceStatus();
	CString BrmGetCountResult();
	CString BrmGetRetractResult();
	CString BrmGetRefillResult();
	CString BrmGetTakeupResult();
	long McuCancelWaitTaken();
	long BrmCheckThroat();
	long UcmRetract(long nDepWithFlag);
	long UcmCheckThroat(long nDepWithFlag);
	CString BrmGetErrorCode();
	CString UcmGetErrorCode();
	CString PbmGetErrorCode();
	CString McuGetErrorCode();
	CString SprGetErrorCode();
	CString JprGetErrorCode();
	long BrmClearErrorCode();
	long UcmClearErrorCode();
	long SprClearErrorCode();
	long JprClearErrorCode();
	long McuClearErrorCode();
	long PbmClearErrorCode();
	long CmrClearErrorCode();
	long UpsClearErrorCode();
	long DorClearErrorCode();
	long BrmGetChangeUnitLock();
	long BrmInitialize();
	long BrmGetClerkCSTStatus();
	long BrmGetRejectCSTStatus();
	long BrmGetAcceptCountStatus();
	CString JprGetSensorInfo();
	CString SprGetSensorInfo();
	CString McuGetSensorInfo();
	CString PbmGetSensorInfo();
	CString UcmGetSensorInfo();
	CString BrmGetSensorInfo();
	long SprClearRetractCnt();
	long McuClearRetractCnt();
	long PbmClearRetractCnt();
	CString CmrGetErrorCode();
	CString DorGetErrorCode();
	CString UpsGetErrorCode();
	CString SprGetRetractCnt();
	CString McuGetRetractCnt();
	CString PbmGetRetractCnt();
	long ScrInitialize();
	CString ScrGetKeyString(long nWaitSec);
	long ScrSetData(LPCTSTR szDataName, LPCTSTR szDataValue);
	long ScrDisplayScreen(LPCTSTR szTag, long nIndex, LPCTSTR szData);
	long SplSetLedOnOff(long nLedIndex, long nOnOff);
	long PbmBarLineRead();
	long PbmCancelWaitTaken();
	long SprCancelWaitTaken();
	long UpsPowerOff(long nWaitSec);
	long UpsPowerRestart(long nWaitSec, long nRestartSec);
	long SplGetTestKey();
	long SplGetLoadSwitch();
	long LgtClearErrorCode();
	long LgtGetDeviceStatus();
	CString LgtGetErrorCode();
	CString SplGetErrorCode();
	long SplGetDeviceStatus();
	long SplClearErrorCode();
	CString ScrGetScreenData(long nWaitSec);
	long ScrSetScreenData(LPCTSTR szDataName, LPCTSTR szDataValue);
	long ScrSetDisplayData(LPCTSTR szDataName, LPCTSTR szDataValue);
	CString ScrGetKeyData(long nWaitSec);
	long ScrClearKeyData();
	long GetTimeoutDevice(long nDevID);
	long IrdInitialize();
	long IrdDeinitialize();
	long IrdEntryEnable();
	long IrdEntryDisable();
	long IrdReady();
	long IrdVersion();
	long IrdTest();
	CString IrdGetData();
	long IrdGetDataOK();
	long IrdGetDeviceStatus();
	long FngInitialize();
	long FngDeinitialize();
	long FngAcquire();
	CString FngGetData();
	long FngCancelAcquire();
	long FngShowData(LPCTSTR ShowFlag);
	long FngShowSize(long XPos, long YPos, long WideSize, long HeightSize);
	long FngShowColor(long RedDegree, long GreenDegree, long BlueDegree);
	long FngSetMode(LPCTSTR SecurityMode);
	CString FngGetErrorCode();
	long FngClearErrorCode();
	CString McuGetICData();
	long McuICEntryEnable(long nWaitSec);
	long McuICEntryDisable();
	long McuICSendData(long ProtocolID, LPCTSTR szSendData, long nWaitSec);
	CString IrdGetErrorCode();
	long IrdClearErrorCode();
	long FngGetDeviceStatus();
	long McuICChipInitialize();
	long DesInitialize();
	long DesDeinitialize();
	CString DesGetErrorCode();
	long DesClearErrorCode();
	long DesGetDeviceStatus();
	long DesFunction(LPCTSTR szKeyData, LPCTSTR szPinNum, long nPinSize, LPCTSTR szmemberNum, long nParam, long nDesKind);
	CString DesGetData();
	long BarInitialize();
	long BarDeinitialize();
	long BarGetDeviceStatus();
	long BarClearErrorCode();
	CString BarGetErrorCode();
	long BarEntryEnable();
	long BarEntryDisable();
	CString BarGetData();
	CString IrdGetInfStatusData();
	long IrdGetVersion();
	CString IrdGetVersionData();
	long PinInitialize();
	long PinDeinitialize();
	CString PinGetErrorCode();
	long PinClearErrorCode();
	long PinGetDeviceStatus();
	long PinEntryDisable();
	long PinEntryEnable(long nEnableMode, long nMinKeyCount, long nMaxKeyCount, long bAutoEnd, LPCTSTR szActiveKeys, LPCTSTR szTerminatorKeys, LPCTSTR szCardData, long nTimeout, LPCTSTR szXORData, LPCTSTR szBuildPinBlockKey, 
		LPCTSTR szBuildPinBlockEncKey);
	CString PinGetPinKeyData();
	long PinMacingData(LPCTSTR szMacData, LPCTSTR szKey, LPCTSTR szAlgorithm);
	CString PinGetMacingData();
	long PinLoadIV(LPCTSTR szKeyName);
	long PinLoadKey(LPCTSTR szKeyName, LPCTSTR szKeyValue);
	long CduInitialize();
	long CduDeinitialize();
	long CduOpenShutter();
	long CduCloseShutter();
	long CduWaitTaken();
	long CduCancelWaitTaken();
	long CduRetract();
	long CduDispenseCount(long nCST1Cnt, long nCST2Cnt, long nCST3Cnt, long nCST4Cnt);
	CString CduGetDispenseOfCST(long nAmount);
	long CduDispenseAmount(long nAmount);
	long CduPresent(long nWaitSec);
	CString CduGetErrorCode();
	CString CduGetSensorInfo();
	long CduGetDeviceStatus();
	long CduGetPosition(long nCduType);
	long CduGetRejectCSTStatus();
	long CduGetRecycleBoxStatus();
	long CduGetCSTStatus(long nType);
	long CduGetNumberOfCST();
	long CduGetValueOfCash(long nCSTNo);
	long CduGetNumberOfCash(long nCSTNo);
	long CduGetNumberOfSetCash(long nCSTNo);
	long CduGetMaterialInfo();
	long CduGetAvailWithdraw();
	long CduClearErrorCode();
	long CduSetNumberOfCash(LPCTSTR szCashCntData);
	long CduSetMinMaxCST(LPCTSTR szMinCntData, LPCTSTR szMaxCntData);
	long DorGetCabinetStatus();
	long CduDispenseCashCheckCount(long nCashCnt, long nCheckCnt);
	long A4pInitialize();
	long A4pDeinitialize();
	CString A4pGetErrorCode();
	long A4pClearErrorCode();
	long A4pClearRetractCnt();
	CString A4pGetSensorInfo();
	long A4pGetDeviceStatus();
	long A4pGetPaperStatus();
	long A4pGetMaterialInfo();
	CString A4pGetRetractCnt();
	long A4pPrint(LPCTSTR szForm, LPCTSTR szPrintData, long lDoNotPack);
	long A4pEject(long nWaitSec);
	long A4pPrintAndEject(LPCTSTR szForm, LPCTSTR szPrintData, long nWaitSec, long lDoNotPack);
	long A4pWaitTaken();
	long A4pRetract();
	long A4pCancelWaitTaken();
	long CmrGetPersonCameraStatus();
	long CmrGetExitSlotCameraStatus();
	long BrmReset(long bResetType);
	BOOL BrmReadyStore();
	long BrmSetCarrySpeed(long bHighSpeed);
	long DvrInitialize();
	long DvrDeinitialize();
	long DvrClearErrorCode();
	CString DvrGetErrorCode();
	long DvrGetDeviceStatus();
	long DvrRecordStart(long nChannelIndex, LPCTSTR szFileName, long nTimeout);
	long DvrRecordStop(long nChannelIndex, long nTimeout);
	long DvrTakePicture(long nChannelIndex, LPCTSTR szFileName, long nTimeout);
	long VfdInitialize(long nPortNum, long nBaudRate);
	long VfdDeinitialize();
	long VfdInitializeDisplay();
	long VfdClearDisplay();
	long VfdSetBrightnessLevel(long nLevel);
	long VfdScrollDisplay(long nShiftNum, long lnRepeatNum, long nInterval);
	long VfdBlinkDisplay(long nPattern, long nNormalTime, long nReverseTime, long nRepeatNumber);
	long VfdRealTimeTextDisplay(LPCTSTR szTextData, long nOffsetX, long nOffsetY, long nCharSzX, long nCharSzY, long nBoldStyle, long nItalic, LPCTSTR szFontName);
	long VfdRealTimeBitImageDisplay(LPCTSTR szFileName, long nOffsetX, long nOffsetY);
	long VfdRealTimeTextBitImageDisplay(LPCTSTR szTextData, long nTxtOffsetX, long nOffsetY, long nCharSzX, long nCharSzY, long nBolStyle, long nItalic, LPCTSTR szFontName, LPCTSTR szFileName, long nImgOffsetX, long nImgOffsetY);
	long VfdFROMTextSave(long nMemIndex, LPCTSTR szTextData, long nOffsetX, long nOffsetY, long nCharSzX, long nCharSzY, long nBoldStyle, long nItalic, LPCTSTR szFontName);
	long VfdFROMBitImageSave(long nMemIndex, LPCTSTR szFileName, long nOffsetX, long nOffsetY);
	long VfdFROMTextBitImageSave(long nMemIndex, LPCTSTR szTextData, long nOffsetX, long nOffsetY, long nCharSzX, long nCharSzY, long nBolStyle, long nItalic, LPCTSTR szFontName, LPCTSTR szFileName, long nImgOffsetX, long nImgOffsetY);
	long VfdFROMDisplay(long nMemIndex);
	long VfdSetDisplayAtPowerOn(long nSMemIndex, long nEMemIndex, long nScrolled, long nInterval);
	CString VfdGetErrorCode();
	long VfdClearErrorCode();
	long VfdGetDeviceStatus();
	long SnsInitialize();
	long SnsDeinitialize();
	long SnsClearErrorCode();
	CString SnsGetErrorCode();
	long SnsGetDeviceStatus();
	long SnsGetOperatorSwitch();
	long SnsClearOperatorSwitch();
	long SnsGetProximity();
	long SnsClearProximity();
	long GroInitialize();
	long GroDeinitialize();
	CString GroGetDeviceStatus();
	CString GroGetErrorCode();
	CString GroGetGiroData();
	CString GroGetMediaStatus();
	long GroAccept(long nWaitSec);
	long GroCancelAccept();
	long GroReadyAccept();
	long GroRead(LPCTSTR szFileName);
	long GroReject();
	long GroEscrow();
	long GroStack();
	long GroRejectAll();
	long GroEnableStatusEvents();
	long GroDisableStatusEvents();
	long GroClearErrorCode();
	CString GroGetGiroType();
	long GroRead2D(LPCTSTR szFileName);
	long GiroReadOCRn2D(LPCTSTR szFileName);
	long GiroRead2DNotGetImg(LPCTSTR szFileName);
	long GroReadOCR(LPCTSTR szFileName);
	long GroConvertImage();
	long GroFreeReadOCR();
	long GroWaitForTaken(long nTimeout);
	long RfdInitialize();
	long RfdDeInitialize();
	CString RfdGetErrorCode();
	long RfdClearErrorCode();
	long RfdSendData(short nSendCmd, LPCTSTR ReqBuf);
	CString RfdGetData();
	CString BrmGetBCDistinctionMode();
	long SprAutoLoad();
	long SprGetMediaStatus();
	long BrmGetCSMNoteStatus();
	long BrmSetNoteInfo(short nNoteKind1, short nNoteKind2, short nNoteKind3, short nNoteKind4);
	long BrmGetNoteKindOfRB1();
	long BrmGetNoteKindOfRB2();
	long BrmGetNoteKindOfRB3();
	long BrmGetNoteKindOfRB4();
	void BrmSet10000NoteUsePriority(short n10000NoteKind);
	long BrmGet10000NoteUsePriority();
	void BrmEnableDepositNote(short nNoteKind, long bEnable);
	long BrmGetEnabledDepositNote();
	long BrmGetLog();
	long SnsGetCallKey();
	long SnsClearCallKey();
	CString FngGetImagePath();
	void FngSetImageSize(long width, long height);
	long GroReset();
	long GroSet2DAreaFromOCR(float dx1, float dy1, float dx2, float dy2);
	long GroSet2DRecogOption(float minSize, float maxSize, long tolerLaidOver, long billType);
	CString GroGetAreaLeft();
	CString GroGetAreaTop();
	CString GroGetAreaRight();
	CString GroGetAreaBottom();
	long IcsInitialize();
	long IcsDeinitialize();
	long IcsClearErrorCode();
	CString IcsGetErrorCode();
	long IcsGetStatus();
	long IcsReset(LPCTSTR Action);
	long IcsAcquire(LPCTSTR Options, long Timeout);
	CString IcsGetImagePath();
	long IcsCancelAccept();
	long SplGetKeyValue();
	long IcsCardScan();
	long IcsWaitTaken();
	long BrmChangeUnitLock();
	long SplSetInServiceLED(LPCTSTR szOnOff);
	long SplSetSuperviosrLED(LPCTSTR szOnOff);
	long SplSetErrorLED(LPCTSTR szOnOff);
	long SplSetCommunicationsLED(LPCTSTR szOnOff);
	long PinLoadEncryptedKey(LPCTSTR strKeyName, LPCTSTR strKeyValue, LPCTSTR strEncKeyName, LPCTSTR strUse);
	long CduDispenseAndPresentAmount(long nAmount, long nWaitSec);
	long CduDispenseAndPresentCount(long nCST1Cnt, long nCST2Cnt, long nCST3Cnt, long nCST4Cnt, long nWaitSec);
	long CduAddNumberOfCash(LPCTSTR szInitialCnt, LPCTSTR szAddCnt);
	long CduSetValueOfCash(LPCTSTR szCashValueData, LPCTSTR szCurrencyData);
	long CduGetLastDispensedAmount();
	long CduGetLastDispensedCount(long nCstNum);
	long CduGetShutterStatus();
	long SnsGetEnhancedAudio();
	long VfdCurtainDisplay(long nDirection, long nSpeed, long nPattern);
	long SiuInitialize();
	long SiuDeinitialize();
	long SiuGetOperatorSwitchStatus();
	long SiuClearOperatorSwitchStatus();
	long McrInitialize();
	long McrDeinitialize();
	long McrAcceptAndReadPassbook(long nWaitSec);
	long McrAcceptAndReadCardJIS(long nWaitSec);
	long McrAcceptAndReadCardISO(long nWaitSec);
	long McrCancelAccept();
	CString McrGetErrorCode();
	long McrClearErrorCode();
	CString McrGetReadData();
	long DepInitialize();
	long DepDeinitialize();
	CString DepGetErrorCode();
	long DepClearErrorCode();
	CString DepGetSensorInfo();
	long DepGetDeviceStatus();
	long DepGetDepositStatus();
	long DepGetDepositBoxStatus();
	long DepGetDepositInkStatus();
	long DepClearDepositCount();
	long DepGetMaterialInfo();
	long DepDeposit(LPCTSTR szPrintText, long nDepWaitSec, long nRjtWaitSec);
	long DepClear();
	long DepCancelDeposit();
	long DepReject(long nWaitSec);
	long DepStack(LPCTSTR szPrintText);
	long DepWaitTaken();
	long CdpGetDeviceStatus();
	long CdpGetMediaStatus();
	long CdpGetStackerStatus();
	long CdpInitialize();
	long CdpDeinitialize();
	long CdpClearErrorCode();
	long CdpEnableEntry();
	long CdpDisableEntry();
	long CdpIssue();
	long CdpEjectMedia();
	CString CdpGetErrorCode();
	long CdpReadRawData();
	CString CdpGetTrack1Data();
	CString CdpGetTrack2Data();
	CString CdpGetTrack3Data();
	long CdpRetainMedia();
	long CdpWaitTaken();
	long Cdp2GetDeviceStatus();
	long Cdp2GetMediaStatus();
	long Cdp2GetStackerStatus(long nStacker);
	long Cdp2Initialize();
	long Cdp2Deinitialize();
	long Cdp2Issue(long nStacker);
	long Cdp2EjectMedia();
	CString Cdp2GetErrorCode();
	long Cdp2ReadRawData(long nStacker);
	CString Cdp2GetTrack1Data();
	CString Cdp2GetTrack2Data();
	CString Cdp2GetTrack3Data();
	long Cdp2RetainMedia();
	long Cdp2ClearErrorCode();
	long Cdp2EnableEntry();
	long Cdp2DisableEntry();
	long Cdp3GetDeviceStatus();
	long Cdp3GetMediaStatus();
	long Cdp3GetStackerStatus(long nStacker);
	long Cdp3Initialize();
	long Cdp3Deinitialize();
	long Cdp3Issue(long nStacker);
	long Cdp3EjectMedia();
	CString Cdp3GetErrorCode();
	long Cdp3ReadRawData(long nStacker);
	CString Cdp3GetTrack1Data();
	CString Cdp3GetTrack2Data();
	CString Cdp3GetTrack3Data();
	long Cdp3RetainMedia();
	long Cdp3ClearErrorCode();
	long Cdp3EnableEntry();
	long Cdp3DisableEntry();
	long Cdp3PrintForm(LPCTSTR szFormName, LPCTSTR szFieldValues);
	long CdpGetRetainStatus();
	long CsmClearErrorCode();
	long CsmInitialize(LPCTSTR szInitType);
	long CsmDeInitialize();
	long CsmReset(LPCTSTR szInitType);
	CString CsmGetErrorCode();
	CString CsmGetData();
	long CsmGetImage();
	long CsmCancelAccept();
	CString CsmGetImageType();
	long CsmGetDeviceStatus();
	long CsmGetMediaStatus();
	long CsmGetInkStatus();
	long CsmProcessFormRead(long nTimeout);
	long CsmEjectMedia();
	long CsmRetainMedia();
	long CsmProcessFormWrite(LPCTSTR szEndorseData, long nTimeout);
	long BillGetStackerStatus();
	CString BillGetCashInStatus(long nNumberOfCashIn);
	CString BillGetLogicalUnit();
	long BillInitialize();
	long BillDeinitialize();
	long BillEntryEnable();
	long BillAccept();
	long BillCancelAccept();
	long BillStore();
	long BillStartInitCount();
	long BillEndInitCount();
	long BillReset();
	long BillSetNoteType();
	long BillRollbackCash();
	long BillGetNumberOfCashInStatus();
	CString BillDevGetLastCashInStatus();
	long BillDevGetLastRefusedCount();
	long BillGetDeviceStatus();
	CString BillGetErrorCode();
	long BillClearErrorCode();
	long ClearEventDevice(long nDevID);
	long ClearStatusDevice(long nDevID);
	long GetEventDevice(long nDevID);
	long GetStatusDevice(long nDevID);
	long Cdp3PrintFormAndEject(LPCTSTR FrontFormName, LPCTSTR FrontFieldValues, LPCTSTR BackFormName, LPCTSTR BackFieldValues);
	CString CduGetCurrencyID(long nCSTNo);
	long CmrStartMotionPerson(LPCTSTR szFileName, long nTime);
	long CmrEndMotionPerson();
	long CmrStartMotionSlot(LPCTSTR szFileName, long nTime);
	long CmrEndMotionSlot();
	long SnsClearEnhancedAudio();
	long TtuInitialize();
	long TtuDeinitialize();
	CString TtuGetErrorCode();
	long TtuClearErrorCode();
	long TtuGetDeviceStatus();
	long TtuClearScreenSync();
	long TtuSetLEDSync(long LEDNumber, LPCTSTR State);
	long TtuReadAt(long x, long y, long NumberOpChars, LPCTSTR EchoMode, LPCTSTR EchoFormat, LPCTSTR InputType, long CursorOn, long Flush, long AutoEnd, long Timeout);
	long TtuWriteAtSync(long x, long y, LPCTSTR Format, LPCTSTR Text);
	CString TtuGetReadData();
	long TtuClearAreaSync(long x, long y, long width, long Hight);
	long TtuCancelRead();
	long TtuReadAtEx(long x, long y, long NumberOfChars, LPCTSTR EchoMode, LPCTSTR EchoFormat, LPCTSTR InputType, long CursorOn, long Flush, long AutoEnd, long Timeout, LPCTSTR ActiveKeys, LPCTSTR ActiveCmdKeys, LPCTSTR TerminateCmdKeys);
	long McrAcceptAndReadCardAny(long nWaitSec);
	long GroEscrowEndorse(LPCTSTR szData);
	long A4pGetRetractBinStatus();
	long PbmMSWrite(LPCTSTR szFormName, LPCTSTR szMSData);
	long Delay(long nWaitMSec);
	long RunExe(LPCTSTR szPath);
	long SprPrint2(LPCTSTR szMedia, LPCTSTR szForm, LPCTSTR szData);
	long TraceDump(LPCTSTR szData);
	CString CsmGetFieldData(LPCTSTR FieldName);
	long DepRetract(LPCTSTR szPrintText);
	long DepGetDepositCount();
	long MopInitialize();
	long MopDeinitialize();
	CString MopGetExtraStatus(LPCTSTR KeyName);
	long MopEject(long Timeout);
	long MopCut();
	long MopReadBarCode(long Length);
	long MopLoadFormAndReadBarCode(long Length);
	long MopPrintForm(LPCTSTR FormName, LPCTSTR FieldData);
	long MopUnlockFeeder(long Timeout);
	long MopReset();
	CString MopGetErrorCode();
	long MopClearErrorCode();
	long MopGetDeviceStatus();
	long MopGetMediaStatus();
	long MopGetPaperStatus();
	CString MopGetBarCodeData();
	long MopGetMaxFeedStepX();
	long MopGetMaxFeedStepY();
	long MopGetFeedStepX();
	long MopGetFeedStepY();
	long GenerateDeviceID(const VARIANT& DevIds);
	long AdaInitialize();
	long AdaDeinitialize();
	long AdaClear();
	long AdaPlayText(LPCTSTR szText);
	long AdaSetBoardConfig(long nData, LPCTSTR szCommand);
	long CrdInitialize();
	long CrdCIU_SetIssuingLength(long nLenType);
	long CrdCIU_Issuing();
	long CrdCIU_Request();
	long CrdCIU_Clear();
	long CrdMainProc();
	long CrdGetStatus();
	long CoinOpenConnection();
	long CoinCloseConnection();
	long CoinInitialize(long rejectPos, LPCTSTR lpszDate, LPCTSTR lpszTime);
	void CoinEnableStatusEvents();
	void CoinDisableStatusEvents();
	long CoinDispense(LPCTSTR Amount, short MixAlgorithm);
	long CoinIndividualDispense(long lAmount1, long lAmount2, long lAmount3, long lAmount4);
	BOOL CoinIsDispensable(LPCTSTR lpszAmount, short hMixAlgorithm);
	long CoinSetRemainCount(long lAmount1, long lAmount2, long lAmount3, long lAmount4);
	void CoinClearDispenseTotalCount();
	long CoinAccept(long bIsContinue);
	long CoinCancelAccept();
	long CoinStack();
	long CoinEject();
	long CoinPresent(long Timeout);
	long CoinOpenShutter(long lShutterType);
	long CoinCloseShutter(long lShutterType);
	long CoinGetMaxDispCoinNum();
	long CoinGetDeviceStatus();
	long CoinGetAcceptMediaStatus();
	CString CoinGetDispCstStatus();
	CString CoinGetAcceptCurDenom();
	CString CoinGetDispCurDenom();
	CString CoinGetAcceptCurCnt();
	CString CoinGetDispLastCnt();
	CString CoinGetDispTotalCnt();
	CString CoinGetDispRemainCnt();
	CString CoinGetErrorCode();
	long CoinClearErrorCode();
	long CoinStartTransaction(LPCTSTR lpszDate, LPCTSTR lpszTime);
	long CoinEndTransaction();
	long CoinRetract(long lCount1, long lCount2, long lCount3, long lCount4);
	BOOL CoinGetIsInitialized();
	long CoinRefill();
	long CoinSetRetractCSTRemainCount(long lAmount1, long lAmount2, long lAmount3, long lAmount4, long lAmountOF, long lAmountReject);
	long CoinGetPositionStatus();
	long CoinGetIsAcceptAreaFull();
	CString CoinGetRetractCSTRemainCount();
	long CoinGetAvailWithdraw();
	long CoinGetAvailDeposit();
	long CoinGetIsRunningDispReject();
	long CoinGetIsRunningAutoRetract();
	long BillGetAvailDeposit();
	long BillNumberOfCash(long nType);
	CString CoinGetRetractCurCnt();
	long CoinGetEPLog(long nLogType);
	long CoinClearEPLog(long nLogType);
	long CoinResetUnit(long nUnitType);
	long CIMGetStackerStatus();
	CString CIMGetCashInStatus(long nNumberOfCashIn);
	CString CIMGetLogicalUnit();
	long CIMInitialize();
	long CIMDeinitialize();
	long CIMStartCashIn();
	long CIMAccept(long InsertionTimeout, long TakenTimeout);
	long CIMCancelAccept();
	long CIMStore();
	long CIMStartInitCount();
	long CIMEndInitCount();
	long CIMReset(short UnitNumber);
	long CIMSetNoteType();
	long CIMRollbackCash();
	long CIMGetNumberOfCashInStatus();
	CString CIMDevGetLastCashInStatus();
	long CIMDevGetLastRefusedCount();
	long CIMGetDeviceStatus();
	CString CIMGetErrorCode();
	long CIMClearErrorCode();
	long CIMRetract(short RetractArea);
	long CIMGetAvailDeposit();
	long CIMNumberOfCash(long nType);
	long CIMCount();
	long CIMWaitTaken();
	long IPMInitialize();
	long IPMDeinitialize();
	long IPMGetDeviceStatus();
	long IPMGetMediaStatus();
	CString IPMGetErrorCode();
	long IPMClearErrorCode();
	long IPMReset(LPCTSTR MediaControl, short BinNumber, long Timeout);
	long IPMMediaIn(LPCTSTR CodeLineFormat, short MaxMediaOnStacker, long ApplicationRefuse, long Timeout);
	long IPMCancelMediaIn();
	long IPMMediaInEnd(long Timeout);
	long IPMMediaInRollback(long Timeout);
	long IPMAddMediaInImageRequest(LPCTSTR Source, LPCTSTR Type, LPCTSTR ColorFormat, LPCTSTR ScanColor, LPCTSTR Path);
	long IPMClearMediaInImageRequest();
	long IPMPrintText(short MediaID, long Stamp, LPCTSTR PrintData);
	long IPMSetDestination(short MediaID, short BinNumber);
	long IPMPresentMedia(LPCTSTR Position, long Timeout);
	long IPMRetractMedia(LPCTSTR Location, short BinNumber);
	long CmrPreviewFace(long bOnOff, long nPositionX, long nPositionY, long nWidth, long nHeight);
	CString CduGetBarcodeData();
	long CduClearBarcodeData();
	long BrmDispenseLarge(long n100000Num, long n50000Num, long n10000Num);
	long BrmGetNumberOf50000Cash();
	long BrmAcceptLarge(long nCashCnt, long nCashAmt);
	long CduDispenseLarge(long n50000Cnt, long n10000Cnt, long nCheckCnt);
	long BrmGetLargeMoneySupport();
	long BrmGetRecycleBox50000Status();
	long BrmGetClerkRJBStatus();
	long CodInitialize();
	long CodDeinitialize();
	long CodOpenShutter();
	long CodCloseShutter();
	long CodWaitTaken();
	long CodCancelWaitTaken();
	long CodRetract();
	long CodDispenseCount(long nCST1Cnt, long nCST2Cnt, long nCST3Cnt, long nCST4Cnt);
	CString CodGetDispenseOfCST(long nAmount);
	long CodDispenseAmount(long nAmount);
	long CodPresent(long nWaitSec);
	CString CodGetErrorCode();
	CString CodGetSensorInfo();
	long CodGetDeviceStatus();
	long CodGetPosition(long nCduType);
	long CodGetRejectCSTStatus();
	long CodGetRecycleBoxStatus();
	long CodGetCSTStatus(long nType);
	long CodGetNumberOfCST();
	long CodGetValueOfCash(long nCSTNo);
	long CodGetNumberOfCash(long nCSTNo);
	long CodGetNumberOfSetCash(long nCSTNo);
	long CodGetMaterialInfo();
	long CodGetAvailWithdraw();
	long CodClearErrorCode();
	long CodSetNumberOfCash(LPCTSTR szCashCntData);
	long CodSetMinMaxCST(LPCTSTR szMinCntData, LPCTSTR szMaxCntData);
	long CodDispenseCashCheckCount(long nCashCnt, long nCheckCnt);
	long CodDispenseAndPresentAmount(long nAmount, long nWaitSec);
	long CodDispenseAndPresentCount(long nCST1Cnt, long nCST2Cnt, long nCST3Cnt, long nCST4Cnt, long nWaitSec);
	long CodAddNumberOfCash(LPCTSTR szInitialCnt, LPCTSTR szAddCnt);
	long CodSetValueOfCash(LPCTSTR szCashValueData, LPCTSTR szCurrencyData);
	long CodGetLastDispensedAmount();
	long CodGetLastDispensedCount(long nCstNum);
	long CodGetShutterStatus();
	CString CodGetCurrencyID(long nCSTNo);
	void AboutBox();
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_NHMWI_H__81CECC00_B186_469C_80C9_B1FD24A8E567__INCLUDED_)