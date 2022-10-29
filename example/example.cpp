ch->ChatPacket(CHAT_TYPE_INFO, "[IN;299] earned from [MN;692].");
ch->ChatPacket(CHAT_TYPE_INFO, "[MN;692] is coming.");
ch->ChatPacket(CHAT_TYPE_INFO, "skill name is: [SN;1]");
ch->ChatPacket(CHAT_TYPE_INFO, "message: [LS;3] end of message.");

ch->ChatPacket(CHAT_TYPE_INFO, "message: [LS;24;[IN;299];%d] end of message.", 5);
ch->ChatPacket(CHAT_TYPE_INFO, "message: [LS;24;[IN;%d];%d] end of message.", 299, 5); // same as above

ch->ChatPacket(CHAT_TYPE_INFO, "[LS;16;Black;XD]");
ch->ChatPacket(CHAT_TYPE_INFO, "[LS;16;%s;%s]", "Black", "XD"); // same as above

ch->ChatPacket(CHAT_TYPE_INFO, "[LS;139;%s]", ch->GetName());