// RichTop10.cpp : implementation file
//

#include "stdafx.h"
#include "duallistdemo.h"
#include "RichTop10.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CRichTop10 dialog


CRichTop10::CRichTop10(CWnd* pParent /*=NULL*/)
	: CDialog(CRichTop10::IDD, pParent)
{
	//{{AFX_DATA_INIT(CRichTop10)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CRichTop10::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CRichTop10)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	DDX_Text(pDX, IDC_MY_NAME, m_strName);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CRichTop10, CDialog)
	//{{AFX_MSG_MAP(CRichTop10)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CRichTop10 message handlers

BOOL CRichTop10::OnInitDialog() 
{
	CDialog::OnInitDialog();
	CString str[5]={
		    "����������׬ǮԱ",
			"����ʮ��ܳ�С����",
			"������ᵹ����",
			"������Ǯ��ʦ",
			"������һ����ָ"};
	// TODO: Add extra initialization here
	m_strMsg.Format("���ĲƸ�%ld������Ѿ����뱱������ǰ%d����",m_Score, m_Order);
	GetDlgItem(IDC_RICH_MSG)->SetWindowText(m_strMsg);
	CString fm=str[rand()%5];
    m_strMsg="���������衰";
    m_strMsg+=fm;
    m_strMsg+="����";
	GetDlgItem(IDC_FAME_GET)->SetWindowText(m_strMsg);
	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}
