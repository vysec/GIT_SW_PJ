#if !defined(AFX_NHALERT4SPACKX_H__F5D91406_58BD_4F2C_AA78_6A47F2E43C92__INCLUDED_)
#define AFX_NHALERT4SPACKX_H__F5D91406_58BD_4F2C_AA78_6A47F2E43C92__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.

/////////////////////////////////////////////////////////////////////////////
// CNHAlert4SPackX wrapper class

class CNHAlert4SPackX : public CWnd
{
protected:
	DECLARE_DYNCREATE(CNHAlert4SPackX)
public:
	CLSID const& GetClsid()
	{
		static CLSID const clsid
			= { 0x1f2fb39d, 0xf888, 0x43e6, { 0xb7, 0x8f, 0xe8, 0x2f, 0x24, 0x6, 0x5c, 0xa1 } };
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
	long GetGSensorSensibility();
	void SetGSensorSensibility(long);
	long GetAlarmStatus();
	void SetAlarmStatus(long);
	long GetButtonPushStatus();
	void SetButtonPushStatus(long);
	long GetDeviceStatus();
	void SetDeviceStatus(long);
	long GetGSensor();
	void SetGSensor(long);
	long GetEnableAlarmStatus();
	void SetEnableAlarmStatus(long);
	long GetExternalSensorStatus_1();
	void SetExternalSensorStatus_1(long);
	long GetExternalSensorStatus_2();
	void SetExternalSensorStatus_2(long);
	long GetExternalSensorEnableStatus_1();
	void SetExternalSensorEnableStatus_1(long);
	long GetExternalSensorEnableStatus_2();
	void SetExternalSensorEnableStatus_2(long);
	long GetBatteryLowStatus();
	void SetBatteryLowStatus(long);
	long GetDipSwitchStatus_1();
	void SetDipSwitchStatus_1(long);
	long GetDipSwitchStatus_2();
	void SetDipSwitchStatus_2(long);
	long GetACStopStatus();
	void SetACStopStatus(long);
// Operations
public:
	long OpenConnection();
	long CloseConnection();
	long Reset();
	long AlarmOn();
	long AlarmOff();
	long SetEnableControl(long byAlramEnable, long byExternal1Enable, long byExternal2Enable);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_NHALERT4SPACKX_H__F5D91406_58BD_4F2C_AA78_6A47F2E43C92__INCLUDED_)
