//Find in typedef struct packet_chatting
	BYTE	bEmpire;

///Add
#if defined(__BL_CLIENT_LOCALE_STRING__)
	bool	bCanFormat;
#endif

//Find in typedef struct packet_whisper
    char        szNameFrom[CHARACTER_NAME_MAX_LEN + 1];

///Add
#if defined(__BL_CLIENT_LOCALE_STRING__)
	bool		bCanFormat;
#endif