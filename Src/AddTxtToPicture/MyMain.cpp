#include "AddTxtToPicture_GUI.h"
#include <wx/dir.h>
#include "MyThread.h"
#include "RingBuffer.h"

#include <wx/hashmap.h>

#define TRAVERSALThread  1
#define WRITEThread  2


void MainFrame::DirPicked( wxFileDirPickerEvent& event )
{
	wxFileName m_FileName = m_dirPicker1->GetDirName();
	if (m_FileName.Exists())
	{
		m_textCtrl2->SetLabelText(wxT("目录可读"));
		if (m_FileName.IsDirReadable())
		{
			wxString strDirRout = m_FileName.GetFullPath();//需要遍历的文件夹路径
			
			m_pRingBufferRout = new CringBuffer();
			m_pRingBufferRout->Init();
			MyThread *TraversalThread = new MyThread(TRAVERSALThread, m_pRingBufferRout, strDirRout);
			if (wxTHREAD_NO_ERROR == TraversalThread->Create())
			{
				TraversalThread->Run();
				m_textCtrl2->SetLabelText(wxT("遍历线程已在运行"));
			} 
			else
			{
				wxMessageBox(wxT("线程创建失败"),wxT("错误"));
			}
			
		} 
		else
		{
			wxMessageBox(wxT("目录不可读"),wxT("错误"));
		}
		
	} 
	else
	{
		wxMessageBox(wxT("目录不存在"),wxT("错误"));
	}
}
void MainFrame::BeginClicked( wxCommandEvent& event )
{
	
	MyThread *WriteThreadOne = new MyThread(WRITEThread, m_pRingBufferRout, m_textCtrl4);
	if (wxTHREAD_NO_ERROR == WriteThreadOne->Create())
	{
		WriteThreadOne->Run();
		//m_textCtrl1->SetLabel();
		m_textCtrl2->SetLabelText(wxT("写线程已在运行"));
	} 
	MyThread *WriteThreadTwo = new MyThread(WRITEThread, m_pRingBufferRout,m_textCtrl6);
	if (wxTHREAD_NO_ERROR == WriteThreadTwo->Create())
	{
		WriteThreadTwo->Run();
		//m_textCtrl1->SetLabel();
		m_textCtrl2->SetLabelText(wxT("写线程已在运行"));
	} 
	else
	{
		wxMessageBox(wxT("线程创建失败"),wxT("错误"));
	}
}