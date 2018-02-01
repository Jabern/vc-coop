#pragma once
#define VCCOOP_NAME					"VC CO-OP"
#define VCCOOP_VER					"0.01"
#define VCCOOP_SRVVER				"0.1.0.a"

#define DEFAULT_TIME_FORMAT			"%Y%m%d_%H%M%S"
#define LOGGER_TIME_FORMAT			"%H:%M:%S"
#define VC_TITLE					"GTA: Vice City"
#define SERVER_SECRET				420420420

// Define this to have a console window spawn on boot
#define VCCOOP_DEBUG

// Define this for verbose log output
#define VCCOOP_VERBOSE_LOG

// Temporary spawn position
#define VCCOOP_DEFAULT_SPAWN_POSITION	10.0f, 5.0f, 25.0f

// Default server address
#define VCCOOP_DEFAULT_SERVER_ADDRESS	"127.0.0.1"

// Default server port
#define VCCOOP_DEFAULT_SERVER_PORT		23546

struct SPlayerData {
	float Health;
	float Armour;
	int iModelIndex;
	float Rotation;
	int iInteriorID;
	int iCurrentAnimID;
	unsigned int CurrWep;
	unsigned int WepModelIndex;
	unsigned int Ammo;
};