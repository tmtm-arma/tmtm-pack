class CfgWeapons {
	// Helmets
	class H_HelmetB;
	class tmtm_h_helmetb_white: H_HelmetB {
		author = "Superxpdude";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Combat Helmet (White)";
		picture="\tmtm\pack\nato_winter\data\ui\icon_tmtm_combat_helmet_white.paa";
		hiddenSelectionsTextures[] = {"\tmtm\pack\nato_winter\data\tmtm_combat_helmet_white.paa"};
	};
	
	class H_HelmetSpecB;
	class tmtm_h_helmetspecb_white: H_HelmetSpecB {
		author = "Superxpdude";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Enhanced Combat Helmet (White)";
		picture="\tmtm\pack\nato_winter\data\ui\icon_tmtm_combat_helmet_spec_white.paa";
		hiddenSelectionsTextures[] = {"\tmtm\pack\nato_winter\data\tmtm_combat_helmet_white.paa"};
	};
	
	class H_HelmetB_light;
	class tmtm_h_helmetb_light_white: H_HelmetB_light {
		author = "Superxpdude";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Light Combat Helmet (White)";
		picture="\tmtm\pack\nato_winter\data\ui\icon_tmtm_combat_helmet_light_white.paa";
		hiddenSelectionsTextures[] = {"\tmtm\pack\nato_winter\data\tmtm_combat_helmet_white.paa"};
	};
	
	// Booniehat
	class H_Booniehat_khk;
	class tmtm_h_booniehat_winter: H_Booniehat_khk {
		author = "Superxpdude";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Booniehat (Winter)";
		picture="\tmtm\pack\nato_winter\data\ui\icon_tmtm_h_booniehat_winter.paa";
		hiddenSelectionsTextures[] = {"\tmtm\pack\nato_winter\data\tmtm_booniehat_winter.paa"};
	};
	
	// Vests
	class V_PlateCarrier1_blk;
	class tmtm_v_platecarrier1_darkgreen: V_PlateCarrier1_blk {
		author = "Superxpdude";
		scope = 2;
		picture = "\tmtm\pack\nato_winter\data\ui\icon_tmtm_v_plate_carrier_darkgreen_lite.paa";
		displayName = "Carrier Lite (Dark Green)";
		hiddenSelectionsTextures[] = {"\tmtm\pack\nato_winter\data\tmtm_plate_carrier_darkgreen.paa"};
	};
	
	class V_PlateCarrier2_blk;
	class tmtm_v_platecarrier2_darkgreen: V_PlateCarrier2_blk {
		author = "Superxpdude";
		scope = 2;
		picture = "\tmtm\pack\nato_winter\data\ui\icon_tmtm_v_plate_carrier_darkgreen.paa";
		displayName = "Carrier Rig (Dark Green)";
		hiddenSelectionsTextures[] = {"\tmtm\pack\nato_winter\data\tmtm_plate_carrier_darkgreen.paa"};
	};
	
	// Uniforms
	class UniformItem;
	class Uniform_Base;
	class tmtm_u_combatuniform_winter: Uniform_Base {
		author = "Superxpdude";
		scope = 2;
		displayName = "Combat Fatigues (Winter)";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa"; // TODO
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"}; // TODO
		
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="TMTM_B_natowinter_base";
			containerClass="Supply40";
			mass=40;
		};
	};
};