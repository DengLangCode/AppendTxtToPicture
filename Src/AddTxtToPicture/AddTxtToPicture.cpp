#include "AddTxtToPicture.h"
#include "AddTxtToPictureFrame.h"

IMPLEMENT_APP( MyApp );

bool MyApp::OnInit()
{
	AddTxtToPictureFrame* frame = new AddTxtToPictureFrame();
	frame->SetIcon( wxICON( amain ) );
	frame->Show();
	return true;
}
