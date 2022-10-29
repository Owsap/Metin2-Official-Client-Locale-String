//Find in bool LoadLocaleData(const char* localePath)
	CPythonNetworkStream& rkNetStream = CPythonNetworkStream::Instance();

///Add
#if defined(__BL_CLIENT_LOCALE_STRING__)
	CPythonLocale& rkLocale = CPythonLocale::Instance();
#endif

//Find
	char szItemDesc[256];

///Add
#if defined(__BL_CLIENT_LOCALE_STRING__)
	char szLocaleTextString[256];
	char szLocaleQuestString[256];
	char szLocaleQuizString[256];
#endif

//Find
	snprintf(szItemDesc,	sizeof(szItemDesc),	"%s/itemdesc.txt",	localePath);

///Add
#if defined(__BL_CLIENT_LOCALE_STRING__)
	snprintf(szLocaleTextString, sizeof(szLocaleTextString), "%s/locale_string.txt", localePath);
	snprintf(szLocaleQuestString, sizeof(szLocaleQuestString), "%s/locale_quest.txt", localePath);
	snprintf(szLocaleQuizString, sizeof(szLocaleQuizString), "%s/locale_quiz.txt", localePath);
#endif

//Find
	if (!rkItemMgr.LoadItemDesc(szItemDesc))
	{
		...
	}

///Add
#if defined(__BL_CLIENT_LOCALE_STRING__)
	if (!rkLocale.LoadLocaleTextString(szLocaleTextString))
	{
		TraceError("LoadLocaleData - LoadLocaleTextString(%s) Error", szLocaleTextString);
		return false;
	}

	if (!rkLocale.LoadLocaleQuestString(szLocaleQuestString))
	{
		TraceError("LoadLocaleData - LoadLocaleQuestString(%s) Error", szLocaleQuestString);
		return false;
	}

	if (!rkLocale.LoadLocaleQuizString(szLocaleQuizString))
	{
		TraceError("LoadLocaleData - LoadLocaleQuizString(%s) Error", szLocaleQuizString);
		return false;
	}
#endif