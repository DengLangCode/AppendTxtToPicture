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
		m_textCtrl2->SetLabelText(wxT("Ŀ¼�ɶ�"));
		if (m_FileName.IsDirReadable())
		{
			wxString strDirRout = m_FileName.GetFullPath();//��Ҫ�������ļ���·��
			
			m_pRingBufferRout = new CringBuffer();
			m_pRingBufferRout->Init();
			MyThread *TraversalThread = new MyThread(TRAVERSALThread, m_pRingBufferRout, strDirRout);
			if (wxTHREAD_NO_ERROR == TraversalThread->Create())
			{
				TraversalThread->Run();
				m_textCtrl2->SetLabelText(wxT("�����߳���������"));
			} 
			else
			{
				wxMessageBox(wxT("�̴߳���ʧ��"),wxT("����"));
			}
			
		} 
		else
		{
			wxMessageBox(wxT("Ŀ¼���ɶ�"),wxT("����"));
		}
		
	} 
	else
	{
		wxMessageBox(wxT("Ŀ¼������"),wxT("����"));
	}
}
void MainFrame::BeginClicked( wxCommandEvent& event )
{
	
	MyThread *WriteThreadOne = new MyThread(WRITEThread, m_pRingBufferRout, m_textCtrl4);
	if (wxTHREAD_NO_ERROR == WriteThreadOne->Create())
	{
		WriteThreadOne->Run();
		//m_textCtrl1->SetLabel();
		m_textCtrl2->SetLabelText(wxT("д�߳���������"));
	} 
	MyThread *WriteThreadTwo = new MyThread(WRITEThread, m_pRingBufferRout,m_textCtrl6);
	if (wxTHREAD_NO_ERROR == WriteThreadTwo->Create())
	{
		WriteThreadTwo->Run();
		//m_textCtrl1->SetLabel();
		m_textCtrl2->SetLabelText(wxT("д�߳���������"));
	} 
	else
	{
		wxMessageBox(wxT("�̴߳���ʧ��"),wxT("����"));
	}
}