#pragma once
#include <wx/thread.h>
#include "RingBuffer.h"
#include <wx/file.h>
#include <wx/dir.h>
#include "AddTxtToPicture_GUI.h"
#define TRAVERSALThread  1
#define WRITEThread  2
class MyThread :public wxThread
{
public:
	MyThread(int model, CringBuffer *RingBufferRout, wxTextCtrl *textctrl);
	MyThread(int model, CringBuffer *RingBufferRout, wxString &DirRout);
	~MyThread(void);
	void *Entry();
	void TraversalDir(wxString &dirRout);
	//MainFrame m_Frame;
private:
	int m_iModel;
	wxString m_strDirRout;
	CringBuffer *m_pRingBufferRout;
	 wxTextCtrl *m_TextCtrl;
};

