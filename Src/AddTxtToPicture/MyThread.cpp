#include "MyThread.h"
#include "MyDirTraverser.h"

/*
tag_MyThread::tag_MyThread(int model, CringBuffer *RingBufferRout)
{
	iModel = model;
}*/

MyThread::MyThread(int model, CringBuffer *RingBufferRout, wxString &DirRout)
{
	m_iModel = model;
	m_strDirRout = DirRout;
	m_pRingBufferRout = RingBufferRout;
}

MyThread::MyThread(int model, CringBuffer *RingBufferRout,  wxTextCtrl *textctrl)
{
	m_iModel =model;
	m_pRingBufferRout = RingBufferRout;
	m_TextCtrl = textctrl;
}

MyThread::~MyThread(void)
{
}

void * MyThread::Entry()
{
	if (m_iModel == TRAVERSALThread)
	{
		wxArrayString files;
		MyDirTraverser traverser(files);
		wxDir dir(m_strDirRout);
		wxString PngFilter = wxT("*.png");
		dir.Traverse(traverser, PngFilter);
	}
	if (m_iModel == WRITEThread)
	{
		Sleep(100);
		while (!TestDestroy())
		{
			struct tag_RoutData RoutData;	
			if (m_pRingBufferRout->GetDataFromBuffer(RoutData))
			{
				m_TextCtrl->SetLabelText(RoutData.m_cPngRout);
				wxFile Txt;
				if(Txt.Open(RoutData.m_cTxtRout,wxFile::read))
				{
					int size = Txt.Length();
					wxString strTxt = "";
					Txt.ReadAll(&strTxt);
					//wxMessageBox(strTxt);
					Txt.Close();
					wxFile Png;
					if (Png.Open(RoutData.m_cPngRout,wxFile::write_append))
					{
						//strTxt ="\"+strTxt;
						Png.Write(strTxt, strTxt.size()+5);
						//wxMessageBox(strTxt);
						Png.Close();
					}
					
				}
			}
		}
	}
	return nullptr;
}

