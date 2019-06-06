#ifndef ADDTXTTOPICTUREFRAME_H
#define ADDTXTTOPICTUREFRAME_H

#include "AddTxtToPicture_GUI.h"

class AddTxtToPictureFrame : public MainFrame
{
public:
	AddTxtToPictureFrame( wxWindow *parent = NULL, int id = -1 );
	~AddTxtToPictureFrame();
private:
	void OnExit( wxCommandEvent& event );
	void OnAbout( wxCommandEvent& event );
	DECLARE_EVENT_TABLE();
};
#endif // ADDTXTTOPICTUREFRAME_H
