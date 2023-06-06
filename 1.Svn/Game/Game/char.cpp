//Search for:
void CHARACTER::Create(const char * c_pszName, DWORD vid, bool isPC)
{
	static int s_crc = 172814;

	char crc_string[128+1];
	snprintf(crc_string, sizeof(crc_string), "%s%p%d", c_pszName, this, ++s_crc);
	m_vid = VID(vid, GetCRC32(crc_string, strlen(crc_string)));

	if (isPC)
		m_stName = c_pszName;
}

//Add after:
#ifdef PREMIUM
bool CHARACTER::usePremiumItemOnMap()
{
	switch(GetMapIndex())
	{ //The maps below are the maps which allows the player to use the premium.
		case 1:
		case 21:
		case 41:
			break;
		default:
			return true;
	}
	return false;
}
#endif