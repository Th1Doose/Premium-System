//Search for:
#ifdef ENABLE_HIDE_COSTUME_SYSTEM
	PyModule_AddIntConstant(poModule, "ENABLE_HIDE_COSTUME_SYSTEM",	1);
#else
	PyModule_AddIntConstant(poModule, "ENABLE_HIDE_COSTUME_SYSTEM",	0);
#endif

//Add after:
#ifdef PREMIUM
	PyModule_AddIntConstant(poModule, "PREMIUM", 1);
#else
	PyModule_AddIntConstant(poModule, "PREMIUM", 0);
#endif