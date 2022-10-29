//Find in bool CPythonNetworkStream::RecvChatPacket()
	buf[uChatSize]='\0';

///Add
#if defined(__BL_CLIENT_LOCALE_STRING__)
	TTokenVector vecMultiLine;

	if (kChat.bCanFormat && CHAT_TYPE_SHOUT != kChat.type) {
		std::string sFormat{ buf };
		CPythonLocale::Instance().FormatString(sFormat);
		strncpy(buf, sFormat.c_str(), sizeof(buf));
		buf[sizeof(buf) - 1] = '\0';

		CPythonLocale::Instance().MultiLineSplit(sFormat, vecMultiLine);
	}
#endif

//Find in bool CPythonNetworkStream::RecvChatPacket()
		if (CHAT_TYPE_NOTICE == kChat.type)
		{
			PyCallClassMemberFunc(m_apoPhaseWnd[PHASE_WINDOW_GAME], "BINARY_SetTipMessage", Py_BuildValue("(s)", buf));
		}
		else if (CHAT_TYPE_BIG_NOTICE == kChat.type)
		{
			PyCallClassMemberFunc(m_apoPhaseWnd[PHASE_WINDOW_GAME], "BINARY_SetBigMessage", Py_BuildValue("(s)", buf));
		}

///Change
		if (CHAT_TYPE_NOTICE == kChat.type)
		{
#if defined(__BL_CLIENT_LOCALE_STRING__)
			if (!vecMultiLine.empty()) {
				for (std::string& sMessage : vecMultiLine)
					PyCallClassMemberFunc(m_apoPhaseWnd[PHASE_WINDOW_GAME], "BINARY_SetTipMessage", Py_BuildValue("(s)", sMessage.c_str()));
			}
			else {
				PyCallClassMemberFunc(m_apoPhaseWnd[PHASE_WINDOW_GAME], "BINARY_SetTipMessage", Py_BuildValue("(s)", buf));
			}
#else
			PyCallClassMemberFunc(m_apoPhaseWnd[PHASE_WINDOW_GAME], "BINARY_SetTipMessage", Py_BuildValue("(s)", buf));
#endif
		}
		else if (CHAT_TYPE_BIG_NOTICE == kChat.type)
		{
#if defined(__BL_CLIENT_LOCALE_STRING__)
			if (!vecMultiLine.empty()) {
				for (std::string& sMessage : vecMultiLine)
					PyCallClassMemberFunc(m_apoPhaseWnd[PHASE_WINDOW_GAME], "BINARY_SetBigMessage", Py_BuildValue("(s)", sMessage.c_str()));
			}
			else {
				PyCallClassMemberFunc(m_apoPhaseWnd[PHASE_WINDOW_GAME], "BINARY_SetBigMessage", Py_BuildValue("(s)", buf));
			}
#else
			PyCallClassMemberFunc(m_apoPhaseWnd[PHASE_WINDOW_GAME], "BINARY_SetBigMessage", Py_BuildValue("(s)", buf));
#endif
		}

//Find in bool CPythonNetworkStream::RecvChatPacket()
		CPythonChat::Instance().AppendChat(kChat.type, buf);

///Change
#if defined(__BL_CLIENT_LOCALE_STRING__)
		if (!vecMultiLine.empty()) {
			for (std::string& sMessage : vecMultiLine)
				CPythonChat::Instance().AppendChat(kChat.type, sMessage.c_str());
		}
		else {
			CPythonChat::Instance().AppendChat(kChat.type, buf);
		}
#else
		CPythonChat::Instance().AppendChat(kChat.type, buf);
#endif

//Find in bool CPythonNetworkStream::RecvWhisperPacket()
	buf[whisperPacket.wSize - sizeof(whisperPacket)] = '\0';

///Add
#if defined(__BL_CLIENT_LOCALE_STRING__)
	if (whisperPacket.bCanFormat)
		CPythonLocale::Instance().FormatString(buf, sizeof(buf));
#endif

//Find in bool CPythonNetworkStream::RecvQuestInfoPacket()
		szTitle[30]='\0';

///Add
#if defined(__BL_CLIENT_LOCALE_STRING__)
		CPythonLocale::Instance().FormatString(szTitle, sizeof(szTitle));
#endif

//Find in bool CPythonNetworkStream::RecvQuestInfoPacket()
		szClockName[16]='\0';

///Add
#if defined(__BL_CLIENT_LOCALE_STRING__)
		CPythonLocale::Instance().FormatString(szClockName, sizeof(szClockName));
#endif

//Find in bool CPythonNetworkStream::RecvQuestInfoPacket()
		szCounterName[16]='\0';

///Add
#if defined(__BL_CLIENT_LOCALE_STRING__)
		CPythonLocale::Instance().FormatString(szCounterName, sizeof(szCounterName));
#endif

//Find in bool CPythonNetworkStream::RecvQuestConfirmPacket()
	if (!Recv(sizeof(kQuestConfirmPacket), &kQuestConfirmPacket))
	{
		Tracen("RecvQuestConfirmPacket Error");
		return false;
	}

///Add
#if defined(__BL_CLIENT_LOCALE_STRING__)
	CPythonLocale::Instance().FormatString(kQuestConfirmPacket.msg, sizeof(kQuestConfirmPacket.msg));
#endif

//Find in bool CPythonNetworkStream::RecvScriptPacket()
	str[str.size()-1] = '\0';

///Add
#if defined(__BL_CLIENT_LOCALE_STRING__)
	CPythonLocale::Instance().FormatString(str);
#endif

//Find in bool CPythonNetworkStream::RecvGuild()
		case GUILD_SUBHEADER_GC_GRADE:
		{
			BYTE byCount;
			if (!Recv(sizeof(byCount), &byCount))
				return false;

			for (BYTE i = 0; i < byCount; ++ i)
			{
				BYTE byIndex;
				if (!Recv(sizeof(byCount), &byIndex))
					return false;
				TPacketGCGuildSubGrade GradePacket;
				if (!Recv(sizeof(GradePacket), &GradePacket))
					return false;

///Add
#if defined(__BL_CLIENT_LOCALE_STRING__)
				CPythonLocale::Instance().FormatString(GradePacket.grade_name, sizeof(GradePacket.grade_name));
#endif

//Find in bool CPythonNetworkStream::RecvGuild()
		case GUILD_SUBHEADER_GC_GRADE_NAME:
		{
			BYTE byGradeNumber;
			if (!Recv(sizeof(byGradeNumber), &byGradeNumber))
				return false;

			char szGradeName[GUILD_GRADE_NAME_MAX_LEN+1] = "";
			if (!Recv(sizeof(szGradeName), &szGradeName))
				return false;

///Add
#if defined(__BL_CLIENT_LOCALE_STRING__)
			CPythonLocale::Instance().FormatString(szGradeName, sizeof(szGradeName));
#endif

//Find in bool CPythonNetworkStream::RecvTargetCreatePacket()
	TPacketGCTargetCreate kTargetCreate;
	if (!Recv(sizeof(kTargetCreate), &kTargetCreate))
		return false;

///Add
#if defined(__BL_CLIENT_LOCALE_STRING__)
	CPythonLocale::Instance().FormatString(kTargetCreate.szTargetName, sizeof(kTargetCreate.szTargetName));
#endif