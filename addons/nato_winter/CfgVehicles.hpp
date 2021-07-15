class CfgVehicles {
	// Backpacks
	class B_RadioBag_01_base_F;
	class TMTM_B_RadioBag_01_winter_b: B_RadioBag_01_base_F {
		author = "Superxpdude";
		scope = 2;
		displayName = "Radio Pack (Winter) [BLU]";
		picture = "\a3\Supplies_F_Enoch\Bags\Data\UI\icon_B_RadioBag_01_black_F_ca.paa"; // TODO: Replace
		hiddenSelectionsTextures[] = {"\tmtm\pack\nato_winter\data\tmtm_radiobag_01_winter.paa"};
		TFAR_BACKPACK_BLUFOR
	};
	
	class TMTM_B_RadioBag_01_darkgreen_b: B_RadioBag_01_base_F {
		author = "Superxpdude";
		scope = 2;
		displayName = "Radio Pack (Dark Green) [BLU]";
		picture = "\a3\Supplies_F_Enoch\Bags\Data\UI\icon_B_RadioBag_01_black_F_ca.paa"; // TODO: Replace
		hiddenSelectionsTextures[] = {"\tmtm\pack\nato_winter\data\tmtm_radiobag_01_darkgreen.paa"};
		TFAR_BACKPACK_BLUFOR
	};
	
	// Units
	class B_Soldier_base_F;
	class TMTM_B_natowinter_base: B_Soldier_base_F {
		author = "TMTM";
		scope = 1;
		displayName = "Base Class";
		uniformClass = "tmtm_u_combatuniform_winter";
		//hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"\tmtm\pack\nato_winter\data\tmtm_combatfatigues_winter.paa"};
		//model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";
		model = "\A3\Characters_F_Exp\BLUFOR\B_CTRG_Soldier_01_F.p3d";
		
		linkedItems[] = {
			"tmtm_v_platecarrier1_darkgreen", 
			"tmtm_h_helmetb_white",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"NVGoggles_OPFOR"
		};
		respawnLinkedItems[] = {
			"tmtm_v_platecarrier1_darkgreen", 
			"tmtm_h_helmetb_white",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"NVGoggles_OPFOR"
		};
	};
};