class CfgWeapons
{
	class ItemCore;
	class Vest_Camo_Base: ItemCore
	{
		class ItemInfo;
	};
	class tmtm_v_tacticalvest_base: Vest_Camo_Base
	{		
		scope=0;
		scopeArsenal=0;
		scopeCurator=0;
		picture="\A3\characters_f\Data\UI\icon_V_TacVest_blk_CA.paa";
		model="A3\Characters_F\Common\equip_tacticalvest";
		hiddenSelections[]=
		{
			"camo"
		};

		class ItemInfo: ItemInfo
		{
			uniformModel="A3\Characters_F\Common\equip_tacticalvest";
			containerClass="Supply100";
			mass=40;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=8;
					passThrough=0.5;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=8;
					passThrough=0.5;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=8;
					passThrough=0.5;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.5;
				};
			};
		};
	};
	class tmtm_v_platecarrier1_cbr: Vest_Camo_Base
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Carrier Lite (Coyote)";
		picture="\A3\characters_f\Data\UI\icon_V_plate_carrier_1_CA.paa";
		model="\A3\Characters_F\BLUFOR\equip_b_vest02";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\BLUFOR\Data\vests_cbr_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3\Characters_F\BLUFOR\equip_b_vest02";
			containerClass="Supply140";
			mass=80;
			hiddenSelections[]=
			{
				"camo"
			};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=16;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=16;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};

	////////////////////////////////////////////////////////
	// Blufor platecarriers
	class tmtm_v_platecarrier2_cbr: tmtm_v_platecarrier1_cbr
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Carrier Rig (Coyote)";
		picture="\A3\characters_f\Data\UI\icon_V_plate_carrier_2_CA.paa";
		model="\A3\Characters_F\BLUFOR\equip_b_vest01.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\BLUFOR\Data\vests_cbr_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3\Characters_F\BLUFOR\equip_b_vest01";
			containerClass="Supply140";
			mass=100;
			hiddenSelections[]=
			{
				"camo"
			};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=20;
					PassThrough=0.2;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=20;
					PassThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=20;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.2;
				};
			};
		};
	};
	class tmtm_v_platecarrier1_khk: tmtm_v_platecarrier1_cbr
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Carrier Lite (Khaki)";
		picture="\A3\characters_f\Data\UI\icon_V_plate_carrier_2_CA.paa";
		model="\A3\Characters_F\BLUFOR\equip_b_vest01.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\BLUFOR\Data\vests_khk_co.paa"
		};
	};
	class tmtm_v_platecarrier2_khk: tmtm_v_platecarrier2_cbr
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Carrier Rig (Khaki)";
		picture="\A3\characters_f\Data\UI\icon_V_plate_carrier_2_CA.paa";
		model="\A3\Characters_F\BLUFOR\equip_b_vest01.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\BLUFOR\Data\vests_khk_co.paa"
		};
	};

	// Tactical Vest
	class tmtm_v_tacticalvest_mercblack: tmtm_v_tacticalvest_base
	{		
		author="erem2k";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Tactical Vest (Mercernary Black)";
		picture="\tmtm\pack\blufor_vests\Data\ui\icon_tmtm_v_tacticalvest_mercblack.paa";

		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\blufor_vests\Data\tmtm_tacticalvest_mercblack_co.paa"
		};
	};
	class tmtm_v_tacticalvest_mercblue: tmtm_v_tacticalvest_base
	{
		author="erem2k";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Tactical Vest (Mercernary Blue)";
		picture="\tmtm\pack\blufor_vests\Data\ui\icon_tmtm_v_tacticalvest_mercblue.paa";

		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\blufor_vests\Data\tmtm_tacticalvest_mercblue_co.paa"
		};
	};
	class tmtm_v_tacticalvest_mercgreen: tmtm_v_tacticalvest_base
	{		
		author="erem2k";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Tactical Vest (Mercernary Green)";
		picture="\tmtm\pack\blufor_vests\Data\ui\icon_tmtm_v_tacticalvest_mercgreen.paa";

		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\blufor_vests\Data\tmtm_tacticalvest_mercgreen_co.paa"
		};
	};
	class tmtm_v_tacticalvest_mercred: tmtm_v_tacticalvest_base
	{		
		author="erem2k";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Tactical Vest (Mercernary Red)";
		picture="\tmtm\pack\blufor_vests\Data\ui\icon_tmtm_v_tacticalvest_mercred.paa";

		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\blufor_vests\Data\tmtm_tacticalvest_mercred_co.paa"
		};
	};
	class tmtm_v_tacticalvest_mm14: tmtm_v_tacticalvest_base
	{		
		author="erem2k";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Tactical Vest (MM14)";
		picture="\tmtm\pack\blufor_vests\Data\ui\icon_tmtm_v_tacticalvest_mm14.paa";

		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\blufor_vests\Data\tmtm_tacticalvest_mm14_co.paa"
		};
	};

};