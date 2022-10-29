//Find in typedef struct packet_chat
	BYTE	bEmpire;

///Add
#if defined(__BL_CLIENT_LOCALE_STRING__)
	bool	bCanFormat;
	packet_chat() : bCanFormat(true) {}
#endif

//Find in typedef struct packet_whisper
	char	szNameFrom[CHARACTER_NAME_MAX_LEN + 1];

///Add
#if defined(__BL_CLIENT_LOCALE_STRING__)
	bool	bCanFormat;
	packet_whisper() : bCanFormat(true) {}
#endif