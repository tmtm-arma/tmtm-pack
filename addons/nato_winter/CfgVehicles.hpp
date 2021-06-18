class CfgVehicles {
	class B_Soldier_base_F;
	class TMTM_B_natowinter_base: B_Soldier_base_F {
		author = "TMTM";
		scope = 1;
		displayName = "Base Class";
		uniformClass = "tmtm_u_combatuniform_winter";
		//hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"\tmtm\pack\nato_winter\data\tmtm_combatfatigues_winter.paa"};
		model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";
		
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