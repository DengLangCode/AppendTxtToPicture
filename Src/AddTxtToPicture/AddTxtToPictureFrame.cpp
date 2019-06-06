#include "AddTxtToPictureFrame.h"
#include "AddTxtToPicturePanel.h"
#include "AddTxtToPictureAbout.h"

BEGIN_EVENT_TABLE( AddTxtToPictureFrame, MainFrame )
	EVT_MENU( ID_FILE_EXIT, AddTxtToPictureFrame::OnExit )
	EVT_MENU( ID_HELP_ABOUT, AddTxtToPictureFrame::OnAbout )
END_EVENT_TABLE()

AddTxtToPictureFrame::AddTxtToPictureFrame( wxWindow *parent, int id )
	: MainFrame( parent, id )
{
	wxBoxSizer* sizer = new wxBoxSizer( wxVERTICAL );
	wxPanel* panel = new AddTxtToPicturePanel( this );
	sizer->Add( panel, 1, wxEXPAND );
	wxSize panelSize = panel->GetSize();
	this->SetSizerAndFit( sizer );
	this->SetClientSize( panelSize );	
}

void AddTxtToPictureFrame::OnExit( wxCommandEvent& event )
{
	Close();
}

void AddTxtToPictureFrame::OnAbout( wxCommandEvent& event )
{
	AddTxtToPictureAbout* about = new AddTxtToPictureAbout( this );
	about->Show();
}

AddTxtToPictureFrame::~AddTxtToPictureFrame()
{
}