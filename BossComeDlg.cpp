// BossComeDlg.cpp : implementation file
//

#include "stdafx.h"
#include "duallistdemo.h"
#include "BossComeDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CBossComeDlg dialog


CBossComeDlg::CBossComeDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CBossComeDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CBossComeDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CBossComeDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CBossComeDlg)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CBossComeDlg, CDialog)
	//{{AFX_MSG_MAP(CBossComeDlg)
	ON_BN_CLICKED(IDC_SPELL_CHECK, OnSpellCheck)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CBossComeDlg message handlers

BOOL CBossComeDlg::OnInitDialog() 
{
	CDialog::OnInitDialog();
	CString str;
	str="                              �������ñ��¹�����һЩ�����뷨  \r\n";
	str+="һ��������ñ�ְ��������ҵ��ͼ��������Э�������һ��\r\nץ����������Ҫרע��\r\n";
	str+="����������ȡͬ�µ��������һ�����Ҫ��\r\n";
	str+="������Ŀǰ��������ܺã�����Ҫ��ȡ���ã���ֹ��������Լ���������\r\n";
	str+="�ġ��������������ƶ��ƻ�����ʱ��ɼƻ���ÿһ�춼Ҫ���Լ���\r\n�ҹ�������ô���ˣ�\r\n";
	str+="�塢�ϰ塢����ǳ������������Ҷ��Һܹ��ĺ��չˣ���һ��Ҫ��\r\n�湤��,\r\n";
	str+="����ÿ���°�󣬰��Լ��İ칫����ʰ�ɾ�����Ϊ����������Ӫ��\r\n��Ч��Ĺ������գ�Ҳ�ܸ��˿�������ĸо���\r\n";
	str+="�ߡ�ÿ������ҹ��Ӧ����һ�ܸ��������鿼�Ǻã�������ðѽ���\r\n�׵��·����������磬������ڶ��ɾ�ʮ�㡣 \r\n";
	str+="�ˡ�˵�������²�Ҫ�������ţ���Ҫ���¶�Ҫ������ϰ�ָ�㣬������\r\n��������ȷ�ġ�\r\n";

	 // TODO: Add extra initialization here
	 m_Word.SubclassDlgItem (IDC_EDIT1, this);
     m_Word.SetWindowText (str);
	 // m_Word.LineScroll (m_Word.GetLineCount(), 0);
	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}

void CBossComeDlg::OnSpellCheck() 
{
	// TODO: Add your control notification handler code here
	AfxMessageBox("ƴд��齨�飺���������㡱��Ϊ���������¡�\n���ϰ塱��Ϊ���ϰ����",MB_ICONINFORMATION );
}
