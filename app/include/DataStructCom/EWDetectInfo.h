//EWDetectInfo.h: interface for the CEWDetectInfo module.
//!!HDOSE_CLASS(CEWDetectInfo,CEvt)
//////////////////////////////////////////////////////////////////////

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#if !defined(AFX_EWDetectInfo_H)
#define AFX_EWDetectInfo_H

#include "SensorData.h"

//{{HDOSE_CLS_DES(CEWDetectInfo)
/*
Author:		
Version:	1.0
Descript:	
*/
//}}HDOSE_CLS_DES

class DATASTRUCTCOMPONENTDLL_API CEWDetectInfo /*预警探测信息*/ : public CEvt 
{
	DECLARE_CREATE;
public:
	CEWDetectInfo();
	virtual ~CEWDetectInfo();
	static	void ClassInit(ClassInfo *clsinfo);
	
	virtual	void OnInit();

	void	SetTargetData(CSensorData val[150]){
		for(int i=0;i<150;i++)
			m_TargetData[i]=val[i];
	}
	CSensorData*	GetTargetData(){return m_TargetData;}
	void	SetTargetDataCount(long val){m_TargetDataCount=val;}
	long	GetTargetDataCount(){return m_TargetDataCount;}
	void	SetForceType(long val){m_ForceType=val;}
	long	GetForceType(){return m_ForceType;}
	//{{HDOSE_MEMBER_FUNCTION(CEWDetectInfo)
	//}}HDOSE_MEMBER_FUNCTION

public:
	
	//{{HDOSE_ATTRIBUTE(CEWDetectInfo)
	CSensorData	m_TargetData[150]/*目标数据(100个元素的数组，要修改）*/;
	long	m_TargetDataCount/*目标数据个数（最多100个）*/;
	long	m_ForceType/*红蓝方标识（0蓝，1红）*/;
	//}}HDOSE_ATTRIBUTE
};

#endif
