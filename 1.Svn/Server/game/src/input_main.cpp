//Find in int CInputMain::Whisper(LPCHARACTER ch, const char * data, size_t uiBytes)
				strlcpy(pack.szNameFrom, ch->GetName(), sizeof(pack.szNameFrom));

///Add
#if defined(__BL_CLIENT_LOCALE_STRING__)
				pack.bCanFormat = false;
#endif

//Find in int CInputMain::Chat(LPCHARACTER ch, const char * data, size_t uiBytes)
	pack_chat.id = ch->GetVID();

///Add
#if defined(__BL_CLIENT_LOCALE_STRING__)
	pack_chat.bCanFormat = false;
#endif