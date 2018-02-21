#pragma once
class CServerNetwork
{
public:
	CServerNetwork();
	~CServerNetwork();

	/* Server Configuration */
	static int ServerPort;
	static int ServerSecret;

	//------------------------------------------------------------------------------------------------

	static HANDLE server_handle;
	static bool server_running, console_active;
	static librg_ctx_t ctx;

	static std::pair<char*, int> LoadScript(std::string filename);

	//------------------------------------------------------------------------------------------------

	static void ClientSendMessage(librg_message_t* msg);
	static void PedCreateEvent(librg_message_t* msg);
	static void VehCreateEvent(librg_message_t* msg);
	static void PlayerDeathEvent(librg_message_t* msg);
	static void PlayerSpawnEvent(librg_message_t* msg);
	static void HandShakeIsDone(librg_message_t *msg);

	//------------------------------------------------------------------------------------------------

	static void on_connect_request(librg_event_t *event);
	static void on_connect_accepted(librg_event_t *event);
	static void on_creating_entity(librg_event_t *event);
	static void on_entity_update(librg_event_t *event);
	static void on_disconnect(librg_event_t* event);
	static void on_stream_update(librg_event_t *event);

	//------------------------------------------------------------------------------------------------

	static void measure(void *userptr);
	static void server_thread();
};

