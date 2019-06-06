#include "AddTxtToPicturePanel.h"

BEGIN_EVENT_TABLE(AddTxtToPicturePanel, MainPanel)
	
END_EVENT_TABLE()

AddTxtToPicturePanel::AddTxtToPicturePanel( wxWindow* parent )
	: MainPanel( parent )
{
}

AddTxtToPicturePanel::~AddTxtToPicturePanel()
{
}

void AddTxtToPicturePanel::OnOK( wxCommandEvent& event )
{
	wxMessageBox( wxT("OK Button Pressed") );
}