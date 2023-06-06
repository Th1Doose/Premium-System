//Search for:
static bool IS_MONKEY_DUNGEON(int map_index)

//Add before:
#ifdef PREMIUM
static bool IS_ALLOWED_TO_GET_PREMIUM(int vnum1)
{
	switch (vnum1)
	{
		case 31052: //Vnum of items you want to Allow to get Premium.
			return true;
	}
	return false;
}
#endif

//Search for:
							case 50004: // 이벤트용 감지기
								{
									if (item->GetSocket(0))
									{
										item->SetSocket(0, item->GetSocket(0) + 1);
									}

//Add before:
#ifdef PREMIUM
							case 31052:
							{
								if (FindAffect(AFFECT_PREMIUM_1))
								{
									ChatPacket(CHAT_TYPE_INFO, "You already have premium.");
									return false;
								}
								else
								{
									AddAffect(AFFECT_PREMIUM_1, POINT_NONE, 1, AFF_NONE, 946707779, 0, true);
									item->SetCount(item->GetCount()-1);
									ChatPacket(CHAT_TYPE_INFO, "You received premium.");
								}
							}
							break;
#endif

//Search for:
	//PREVENT_TRADE_WINDOW
	if (IS_SUMMON_ITEM(item->GetVnum()))
	{

//Add before:
#ifdef PREMIUM
	if (usePremiumItemOnMap()){
		if (IS_ALLOWED_TO_GET_PREMIUM(item->GetVnum()))
		{
			ChatPacket(CHAT_TYPE_INFO, "You Can use this only on City1 from each kingdom.");
			return false;
		}
	}
#endif