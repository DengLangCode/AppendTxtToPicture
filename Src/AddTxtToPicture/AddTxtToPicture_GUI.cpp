///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Jan 23 2018)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "AddTxtToPicture_GUI.h"

///////////////////////////////////////////////////////////////////////////

MainFrame::MainFrame( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	m_statusBar = this->CreateStatusBar( 1, wxST_SIZEGRIP, ID_DEFAULT );
	m_menubar = new wxMenuBar( 0 );
	m_fileMenu = new wxMenu();
	wxMenuItem* fileExit;
	fileExit = new wxMenuItem( m_fileMenu, ID_FILE_EXIT, wxString( wxT("E&xit") ) + wxT('\t') + wxT("Alt+F4"), wxT("Exit the application"), wxITEM_NORMAL );
	m_fileMenu->Append( fileExit );
	
	m_menubar->Append( m_fileMenu, wxT("&File") ); 
	
	m_helpMenu = new wxMenu();
	wxMenuItem* helpAbout;
	helpAbout = new wxMenuItem( m_helpMenu, ID_HELP_ABOUT, wxString( wxT("&About") ) + wxT('\t') + wxT("F1"), wxT("Show info about this application"), wxITEM_NORMAL );
	m_helpMenu->Append( helpAbout );
	
	m_menubar->Append( m_helpMenu, wxT("&Help") ); 
	
	this->SetMenuBar( m_menubar );
	
	wxBoxSizer* bSizer5;
	bSizer5 = new wxBoxSizer( wxVERTICAL );
	
	m_dirPicker1 = new wxDirPickerCtrl( this, wxID_ANY, wxEmptyString, wxT("Select a folder"), wxDefaultPosition, wxDefaultSize, wxDIRP_DEFAULT_STYLE );
	m_dirPicker1->SetMinSize( wxSize( 477,-1 ) );
	
	bSizer5->Add( m_dirPicker1, 0, wxALL, 5 );
	
	wxBoxSizer* bSizer6;
	bSizer6 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText1 = new wxStaticText( this, wxID_ANY, wxT("当前状态："), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1->Wrap( -1 );
	bSizer6->Add( m_staticText1, 0, wxALL, 5 );
	
	m_textCtrl2 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_textCtrl2->SetMinSize( wxSize( 408,-1 ) );
	
	bSizer6->Add( m_textCtrl2, 0, wxALL, 5 );
	
	
	bSizer5->Add( bSizer6, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer7;
	bSizer7 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText3 = new wxStaticText( this, wxID_ANY, wxT("线程1正在处理："), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3->Wrap( -1 );
	bSizer7->Add( m_staticText3, 0, wxALL, 5 );
	
	m_textCtrl4 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_textCtrl4->SetMinSize( wxSize( 408,-1 ) );
	
	bSizer7->Add( m_textCtrl4, 0, wxALL, 5 );
	
	
	bSizer5->Add( bSizer7, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer8;
	bSizer8 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText5 = new wxStaticText( this, wxID_ANY, wxT("线程2正在处理："), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText5->Wrap( -1 );
	bSizer8->Add( m_staticText5, 0, wxALL, 5 );
	
	m_textCtrl6 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_textCtrl6->SetMinSize( wxSize( 408,-1 ) );
	
	bSizer8->Add( m_textCtrl6, 0, wxALL, 5 );
	
	
	bSizer5->Add( bSizer8, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer9;
	bSizer9 = new wxBoxSizer( wxVERTICAL );
	
	
	bSizer9->Add( 0, 0, 1, 0, 0 );
	
	m_OK = new wxButton( this, ID_MAIN_OK, wxT("开始"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer9->Add( m_OK, 0, wxALL|wxALIGN_RIGHT|wxALIGN_BOTTOM, 5 );
	
	
	bSizer5->Add( bSizer9, 1, wxEXPAND, 5 );
	
	
	this->SetSizer( bSizer5 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	m_dirPicker1->Connect( wxEVT_COMMAND_DIRPICKER_CHANGED, wxFileDirPickerEventHandler( MainFrame::DirPicked ), NULL, this );
	m_OK->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame::BeginClicked ), NULL, this );
}

MainFrame::~MainFrame()
{
	// Disconnect Events
	m_dirPicker1->Disconnect( wxEVT_COMMAND_DIRPICKER_CHANGED, wxFileDirPickerEventHandler( MainFrame::DirPicked ), NULL, this );
	m_OK->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame::BeginClicked ), NULL, this );
	
}

MainPanel::MainPanel( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style ) : wxPanel( parent, id, pos, size, style )
{
}

MainPanel::~MainPanel()
{
}

AboutDlg::AboutDlg( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* mainSizer;
	mainSizer = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* infoSizer;
	infoSizer = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxEmptyString ), wxVERTICAL );
	
	wxBoxSizer* bSizer10;
	bSizer10 = new wxBoxSizer( wxHORIZONTAL );
	
	m_icon = new wxStaticBitmap( infoSizer->GetStaticBox(), ID_ABOUT_ICON, wxICON( amain ), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer10->Add( m_icon, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	wxBoxSizer* textSizer;
	textSizer = new wxBoxSizer( wxVERTICAL );
	
	m_staticAppName = new wxStaticText( infoSizer->GetStaticBox(), ID_ABOUT_APPNAME, wxT("AddTxtToPicture"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticAppName->Wrap( -1 );
	m_staticAppName->SetFont( wxFont( 10, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial") ) );
	
	textSizer->Add( m_staticAppName, 0, wxTOP|wxRIGHT|wxLEFT, 5 );
	
	m_staticVersion = new wxStaticText( infoSizer->GetStaticBox(), ID_ABOUT_VERSION, wxT("Version"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticVersion->Wrap( -1 );
	textSizer->Add( m_staticVersion, 0, wxBOTTOM|wxRIGHT|wxLEFT, 5 );
	
	
	bSizer10->Add( textSizer, 0, wxALIGN_CENTER_VERTICAL, 5 );
	
	
	infoSizer->Add( bSizer10, 1, 0, 5 );
	
	m_staticline1 = new wxStaticLine( infoSizer->GetStaticBox(), ID_DEFAULT, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	infoSizer->Add( m_staticline1, 0, wxALL|wxEXPAND, 5 );
	
	m_staticCopyright = new wxStaticText( infoSizer->GetStaticBox(), ID_ABOUT_COPYRIGHT, wxT("Copyright © 2006"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTRE );
	m_staticCopyright->Wrap( -1 );
	infoSizer->Add( m_staticCopyright, 0, wxALIGN_CENTER_HORIZONTAL|wxEXPAND|wxBOTTOM|wxRIGHT|wxLEFT, 5 );
	
	
	mainSizer->Add( infoSizer, 1, wxEXPAND|wxRIGHT|wxLEFT, 5 );
	
	m_aboutDialogButtonSizer = new wxStdDialogButtonSizer();
	m_aboutDialogButtonSizerOK = new wxButton( this, wxID_OK );
	m_aboutDialogButtonSizer->AddButton( m_aboutDialogButtonSizerOK );
	m_aboutDialogButtonSizer->Realize();
	
	mainSizer->Add( m_aboutDialogButtonSizer, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	
	this->SetSizer( mainSizer );
	this->Layout();
	mainSizer->Fit( this );
	
	this->Centre( wxBOTH );
}

AboutDlg::~AboutDlg()
{
}
