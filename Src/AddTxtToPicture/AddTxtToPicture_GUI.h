///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Jan 23 2018)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __ADDTXTTOPICTURE_GUI_H__
#define __ADDTXTTOPICTURE_GUI_H__

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/statusbr.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/string.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/menu.h>
#include <wx/filepicker.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/sizer.h>
#include <wx/button.h>
#include <wx/frame.h>
#include <wx/panel.h>
#include <wx/statbmp.h>
#include <wx/statline.h>
#include <wx/statbox.h>
#include <wx/dialog.h>

#include "RingBuffer.h"

///////////////////////////////////////////////////////////////////////////

#define ID_DEFAULT wxID_ANY // Default
#define ID_FILE_EXIT 1000
#define ID_HELP_ABOUT 1001
#define ID_MAIN_OK 1002
#define ID_ABOUT_ICON 1003
#define ID_ABOUT_APPNAME 1004
#define ID_ABOUT_VERSION 1005
#define ID_ABOUT_COPYRIGHT 1006

///////////////////////////////////////////////////////////////////////////////
/// Class MainFrame
///////////////////////////////////////////////////////////////////////////////
class MainFrame : public wxFrame 
{
	private:
	
	protected:
		wxStatusBar* m_statusBar;
		wxMenuBar* m_menubar;
		wxMenu* m_fileMenu;
		wxMenu* m_helpMenu;
		wxDirPickerCtrl* m_dirPicker1;
		wxStaticText* m_staticText1;
		wxTextCtrl* m_textCtrl2;
		wxStaticText* m_staticText3;
		wxTextCtrl* m_textCtrl4;
		wxStaticText* m_staticText5;
		wxTextCtrl* m_textCtrl6;
		wxButton* m_OK;
		
		// Virtual event handlers, overide them in your derived class
		virtual void DirPicked( wxFileDirPickerEvent& event );
		virtual void BeginClicked( wxCommandEvent& event );
		
	
	public:
		CringBuffer *m_pRingBufferRout;

		MainFrame( wxWindow* parent, wxWindowID id = ID_DEFAULT, const wxString& title = wxT("AddTxtToPicture"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,300 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
		
		~MainFrame();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class MainPanel
///////////////////////////////////////////////////////////////////////////////
class MainPanel : public wxPanel 
{
	private:
	
	protected:
	
	public:
		
		MainPanel( wxWindow* parent, wxWindowID id = ID_DEFAULT, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,300 ), long style = wxTAB_TRAVERSAL ); 
		~MainPanel();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class AboutDlg
///////////////////////////////////////////////////////////////////////////////
class AboutDlg : public wxDialog 
{
	private:
	
	protected:
		wxStaticBitmap* m_icon;
		wxStaticText* m_staticAppName;
		wxStaticText* m_staticVersion;
		wxStaticLine* m_staticline1;
		wxStaticText* m_staticCopyright;
		wxStdDialogButtonSizer* m_aboutDialogButtonSizer;
		wxButton* m_aboutDialogButtonSizerOK;
	
	public:
		
		AboutDlg( wxWindow* parent, wxWindowID id = ID_DEFAULT, const wxString& title = wxT("About AddTxtToPicture..."), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE ); 
		~AboutDlg();
	
};

#endif //__ADDTXTTOPICTURE_GUI_H__
