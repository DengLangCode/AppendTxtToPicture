#include "MyDirTraverser.h"



MyDirTraverser::~MyDirTraverser(void)
{
}

wxDirTraverseResult MyDirTraverser::OnDir(const wxString& dirname)
{

	return wxDIR_CONTINUE;
}

wxDirTraverseResult MyDirTraverser::OnFile(const wxString& filename)
{
	filename
	wxString strPng = "";
	strPng = pPicArry->Item(iCount);
	wxString strTxT = strPng;
	wxString strReplacePng = wxT(".png");
	wxString strReplaTxt = wxT("_PNG.txt");
	strTxT.Replace(strReplacePng,strReplaTxt,true);
	wxFile Txt(strTxT);
	if (Txt.Exists(strTxT))
	{
		m_pRingBufferRout->PushDataToBuffer(strPng,strTxT);

	} 
		//wxMessageBox(wxT("д�����"),wxT("��ʾ"));
	else
	{
		wxMessageBox(wxT("û��png�ļ�"),wxT("��ʾ"));
	}
	return wxDIR_CONTINUE;
}

wxDirTraverseResult MyDirTraverser::OnOpenError(const wxString& dirname)
{
	wxMessageBox(wxT("�����ļ��д���"));
	return wxDIR_CONTINUE;
}
