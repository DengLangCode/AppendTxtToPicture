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
		//wxMessageBox(wxT("写入完成"),wxT("提示"));
	else
	{
		wxMessageBox(wxT("没有png文件"),wxT("提示"));
	}
	return wxDIR_CONTINUE;
}

wxDirTraverseResult MyDirTraverser::OnOpenError(const wxString& dirname)
{
	wxMessageBox(wxT("遍历文件夹错误"));
	return wxDIR_CONTINUE;
}
