#pragma once

class CClientPlayer
{
public:
	int networkID;
	int gameID;
	CPed * ped;

	CClientPlayer(int nID);
	CClientPlayer(int nID, int gID);
	~CClientPlayer();

	WORD GetKeys();
	GTA_CONTROLSET SetKeys(WORD wKeys);
};