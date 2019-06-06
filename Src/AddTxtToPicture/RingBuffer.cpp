#include "RingBuffer.h"


CringBuffer::CringBuffer(void)
{
	
}


CringBuffer::~CringBuffer(void)
{

}

bool CringBuffer::Init()
{
	m_pRoutData = new tag_RoutData[10];
	if (NULL == m_pRoutData)
	{
		return false;
	}
	m_iCount = 0;
	m_iRead = 0;
	m_iWrite = 0;
	return true;
}


bool CringBuffer::PushDataToBuffer(const wxString &pngrout, const wxString &txtrout)
{
	wxCriticalSectionLocker locker(m_locker);//иокЬ
	if (m_iCount > sMax)
	{
		return false;
	}
	if (m_iWrite >= sMax)
	{
		m_iWrite = 0;
	}
	strcpy(m_pRoutData[m_iWrite].m_cPngRout, pngrout);
	strcpy(m_pRoutData[m_iWrite].m_cTxtRout, txtrout);
	m_iWrite++;
	m_iCount++;
	return true;
}

bool CringBuffer::GetDataFromBuffer(tag_RoutData &routdata)
{
	wxCriticalSectionLocker locker(m_locker);//иокЬ
	if (m_iCount <= 0)
	{
		return false;
	}
	if (m_iRead >= sMax)
	{
		m_iRead = 0;
	}
	routdata = m_pRoutData[m_iRead];
	m_iRead++;
	m_iCount--;
	return true;
}
