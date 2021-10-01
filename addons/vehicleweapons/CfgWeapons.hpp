class CfgWeapons {
	// Base classes
	class MissileLauncher;
	class missiles_Firefist;
	
	class TMTM_missiles_firefist_lg: missiles_Firefist
	{
		displayName = "FireFIST LG ATGM";
		magazines[] = {"TMTM_2Rnd_127mm_Firefist_LG_missiles"};
		weaponLockDelay = 3;
		weaponLockSystem = "2 + 4";
	};
};