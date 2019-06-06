#pragma once
struct tag_RoutData
{
	char m_cPngRout[256];
	char m_cTxtRout[256];
};
class CringBuffer
{
private:
	wxCriticalSection m_locker;
	const static int sMax = 10;
	tag_RoutData *m_pRoutData;
	int m_iRead;
	int m_iWrite;
	int m_iCount;
public:
	CringBuffer(void);
	~CringBuffer(void);
	bool Init();
	bool PushDataToBuffer(const wxString &pngrout, const wxString &txtrout);
	bool GetDataFromBuffer(tag_RoutData &routdata);
};

