//Search for:
	PyModule_AddIntConstant(poModule, "NEW_AFFECT_DRAGON_SOUL_DECK2",		CInstanceBase::NEW_AFFECT_DRAGON_SOUL_DECK2);

//Add after:
#ifdef PREMIUM
	PyModule_AddIntConstant(poModule, "AFFECT_PREMIUM_1", CInstanceBase::AFFECT_PREMIUM_1);
#endif