#pragma once
#include <wx/dir.h>
class MyDirTraverser:public wxDirTraverser
{
public:
	MyDirTraverser(wxArrayString &files): m_files(files){}
	~MyDirTraverser(void);
	wxDirTraverseResult OnDir(const wxString& dirname);
	wxDirTraverseResult OnFile(const wxString& filename);
	wxDirTraverseResult OnOpenError(const wxString& dirname);
private:
	wxArrayString &m_files;
};

