#ifndef ADDTXTTOPICTUREPANEL_H
#define ADDTXTTOPICTUREPANEL_H

#include "AddTxtToPicture_GUI.h"

class AddTxtToPicturePanel : public MainPanel
{
public:
	AddTxtToPicturePanel( wxWindow* parent );
	~AddTxtToPicturePanel();

private:
	void OnOK( wxCommandEvent& event );
	DECLARE_EVENT_TABLE();
};

#endif //ADDTXTTOPICTUREPANEL_H