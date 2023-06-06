//Search for:
	POINT_RESIST_ICE = 133,          //   냉기 저항   : 얼음공격에 대한 대미지 감소
	POINT_RESIST_EARTH = 134,        //   대지 저항   : 얼음공격에 대한 대미지 감소
	POINT_RESIST_DARK = 135,         //   어둠 저항   : 얼음공격에 대한 대미지 감소

	POINT_RESIST_CRITICAL = 136,		// 크리티컬 저항	: 상대의 크리티컬 확률을 감소
	POINT_RESIST_PENETRATE = 137,		// 관통타격 저항	: 상대의 관통타격 확률을 감소

//Add after:
#ifdef PREMIUM
	POINT_PREMIUM,
#endif

//Search for:
		void			Save();		// DelayedSave
		void			SaveReal();	// 실제 저장
		void			FlushDelayedSaveItem();

//Add after:
#ifdef PREMIUM
		bool usePremiumItemOnMap();
#endif