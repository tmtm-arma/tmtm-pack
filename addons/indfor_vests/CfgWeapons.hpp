class CfgWeapons
{
	class ItemCore;
	class Vest_Camo_Base: ItemCore
	{
		class ItemInfo;
	};
	
	// Flak Vest -----------------------------------------------------------------------------
	
	class tmtm_v_flakVest_base: Vest_Camo_Base
	{
		author="Trenchgun";
		scope=0;
		displayName="Flak Vest (Black)";
		model="\A3\Characters_F_epc\Civil\equip_press_vest_01";
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3\Characters_F_epc\Civil\equip_press_vest_01";
			containerClass="Supply80";
			mass=15;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitPointName="HitChest";
					armor=16;
					passThrough=0.30000001;
				};
			};
		};
	};
	class tmtm_v_flakVest_black: tmtm_v_flakVest_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Flak Vest (Black)";
		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\indfor_vests\Data\tmtm_flakVest_black_co.paa"
		};
	};
	class tmtm_v_flakVest_coyote: tmtm_v_flakVest_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Flak Vest (Coyote)";
		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\indfor_vests\Data\tmtm_flakVest_coyote_co.paa"
		};
	};
	class tmtm_v_flakVest_olive: tmtm_v_flakVest_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Flak Vest (Olive)";
		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\indfor_vests\Data\tmtm_flakVest_olive_co.paa"
		};
	};
	class tmtm_v_flakVest_khaki: tmtm_v_flakVest_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Flak Vest (Khaki)";
		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\indfor_vests\Data\tmtm_flakVest_khaki_co.paa"
		};
	};
	
	// Carrier Vest Lite -------------------------------------------------------------------
	
	class tmtm_v_carrierVestLite_base: Vest_Camo_Base
	{
		author="Trenchgun";
		scope=0;
		model="A3\Characters_F_Beta\INDEP\equip_ia_vest01";
		hiddenSelections[] =
		{
			"camo"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="A3\Characters_F_Beta\INDEP\equip_ia_vest01";
			containerClass="Supply120";
			mass=60;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=16;
					passThrough=0.30000001;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=16;
					passThrough=0.30000001;
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
	class tmtm_v_carrierVestLite_black: tmtm_v_carrierVestLite_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		author = "Trenchgun";
		displayName = "GA Carrier Lite (Black)";
		picture = "\tmtm\pack\indfor_vests\Data\UI\icon_carrierVestLite_black_ca.paa";
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\indfor_vests\Data\tmtm_carrierVest_black_co.paa"
		};
	};
	class tmtm_v_carrierVestLite_blue: tmtm_v_carrierVestLite_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		author = "Trenchgun";
		displayName = "GA Carrier Lite (Blue)";
		picture = "\tmtm\pack\indfor_vests\Data\UI\icon_carrierVestLite_blue_ca.paa";
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\indfor_vests\Data\tmtm_carrierVest_blue_co.paa"
		};
	};
	class tmtm_v_carrierVestLite_coyote: tmtm_v_carrierVestLite_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		author = "Trenchgun";
		displayName = "GA Carrier Lite (Coyote)";
		picture = "\tmtm\pack\indfor_vests\Data\UI\icon_carrierVestLite_coyote_ca.paa";
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\indfor_vests\Data\tmtm_carrierVest_coyote_co.paa"
		};
	};
	class tmtm_v_carrierVestLite_khaki: tmtm_v_carrierVestLite_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		author = "Trenchgun";
		displayName = "GA Carrier Lite (Khaki)";
		picture = "\tmtm\pack\indfor_vests\Data\UI\icon_carrierVestLite_khaki_ca.paa";
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\indfor_vests\Data\tmtm_carrierVest_khaki_co.paa"
		};
	};
	class tmtm_carrierVestLite_olive: tmtm_v_carrierVestLite_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		author = "Trenchgun";
		displayName = "GA Carrier Lite (Olive)";
		picture = "\tmtm\pack\indfor_vests\Data\UI\icon_carrierVestLite_olive_ca.paa";
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\indfor_vests\Data\tmtm_carrierVest_olive_co.paa"
		};
	};
	class tmtm_v_carrierVestLite_red: tmtm_v_carrierVestLite_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		author = "Trenchgun";
		displayName = "GA Carrier Lite (Red)";
		picture = "\tmtm\pack\indfor_vests\Data\UI\icon_carrierVestLite_red_ca.paa";
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\indfor_vests\Data\tmtm_carrierVest_red_co.paa"
		};
	};
	
	// Carrier Vest -----------------------------------------------------------------------
	
	class tmtm_v_carrierVest_base: Vest_Camo_Base
	{
		author="Trenchgun";
		scope=0;
		model="A3\Characters_F_Beta\INDEP\equip_ia_vest02";
		class ItemInfo: ItemInfo
		{
			uniformModel="A3\Characters_F_Beta\INDEP\equip_ia_vest02";
			containerClass="Supply120";
			mass=80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=16;
					passThrough=0.30000001;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=16;
					passThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
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
	class tmtm_v_carrierVest_black: tmtm_v_carrierVest_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		author = "Trenchgun";
		displayName = "GA Carrier Rig (Black)";
		picture = "\tmtm\pack\indfor_vests\Data\UI\icon_carrierVest_black_ca.paa";
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\indfor_vests\Data\tmtm_carrierVest_black_co.paa"
		};
	};
	class tmtm_v_carrierVest_blue: tmtm_v_carrierVest_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		author = "Trenchgun";
		displayName = "GA Carrier Rig (Blue)";
		picture = "\tmtm\pack\indfor_vests\Data\UI\icon_carrierVest_blue_ca.paa";
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\indfor_vests\Data\tmtm_carrierVest_blue_co.paa"
		};
	};
	class tmtm_v_carrierVest_coyote: tmtm_v_carrierVest_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		author = "Trenchgun";
		displayName = "GA Carrier Rig (Coyote)";
		picture = "\tmtm\pack\indfor_vests\Data\UI\icon_carrierVest_coyote_ca.paa";
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\indfor_vests\Data\tmtm_carrierVest_coyote_co.paa"
		};
	};
	class tmtm_v_carrierVest_khaki: tmtm_v_carrierVest_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		author = "Trenchgun";
		displayName = "GA Carrier Rig (Khaki)";
		picture = "\tmtm\pack\indfor_vests\Data\UI\icon_carrierVest_khaki_ca.paa";
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\indfor_vests\Data\tmtm_carrierVest_khaki_co.paa"
		};
	};
	class tmtm_v_carrierVest_olive: tmtm_v_carrierVest_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		author = "Trenchgun";
		displayName = "GA Carrier Rig (Olive)";
		picture = "\tmtm\pack\indfor_vests\Data\UI\icon_carrierVest_olive_ca.paa";
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\indfor_vests\Data\tmtm_carrierVest_olive_co.paa"
		};
	};
	class tmtm_v_carrierVest_red: tmtm_v_carrierVest_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		author = "Trenchgun";
		displayName = "GA Carrier Rig (Red)";
		picture = "\tmtm\pack\indfor_vests\Data\UI\icon_carrierVest_red_ca.paa";
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\indfor_vests\Data\tmtm_carrierVest_red_co.paa"
		};
	};
	class tmtm_v_carrierVestGL_base: Vest_Camo_Base
	{
		author = "Trenchgun";
		scope = 0;
		model = "\A3\Characters_F_Beta\INDEP\equip_ia_ga_carrier_gl_rig.p3d";
		hiddenSelections[] = 
		{ 
			"camo1", 
			"camo2"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F_Beta\INDEP\equip_ia_ga_carrier_gl_rig.p3d";
			containerClass = "Supply120";
			mass = 80;
			hiddenSelections[] =
			{
				"camo1",
				"camo2"
			};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=8;
					passThrough=0.5;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=8;
					passThrough=0.5;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=78;
					passThrough=0.60000002;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=78;
					passThrough=0.60000002;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.60000002;
				};
			};
		};
	};
	class tmtm_v_carrierVestGL_black: tmtm_v_carrierVestGL_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		author = "Trenchgun";
		displayName = "GA Carrier GL Rig (Black)";
		picture = "\tmtm\pack\indfor_vests\Data\UI\icon_carrierVestGL_black_ca.paa";
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\indfor_vests\Data\tmtm_carrierVest_black_co.paa",
			"\tmtm\pack\indfor_vests\Data\tmtm_carrierVestShoulder_black_co.paa"
		};
	};
	class tmtm_v_carrierVestGL_blue: tmtm_v_carrierVestGL_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		author = "Trenchgun";
		displayName = "GA Carrier GL Rig (Blue)";
		picture = "\tmtm\pack\indfor_vests\Data\UI\icon_carrierVestGL_blue_ca.paa";
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\indfor_vests\Data\tmtm_carrierVest_blue_co.paa",
			"\tmtm\pack\indfor_vests\Data\tmtm_carrierVestShoulder_blue_co.paa"
		};
	};
	class tmtm_v_carrierVestGL_coyote: tmtm_v_carrierVestGL_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		author = "Trenchgun";
		displayName = "GA Carrier GL Rig (Coyote)";
		picture = "\tmtm\pack\indfor_vests\Data\UI\icon_carrierVestGL_black_ca.paa";
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\indfor_vests\Data\tmtm_carrierVest_coyote_co.paa",
			"\tmtm\pack\indfor_vests\Data\tmtm_carrierVestShoulder_coyote_co.paa"
		};
	};
	class tmtm_v_carrierVestGL_khaki: tmtm_v_carrierVestGL_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		author = "Trenchgun";
		displayName = "GA Carrier GL Rig (Khaki)";
		picture = "\tmtm\pack\indfor_vests\Data\UI\icon_carrierVestGL_khaki_ca.paa";
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\indfor_vests\Data\tmtm_carrierVest_khaki_co.paa",
			"\tmtm\pack\indfor_vests\Data\tmtm_carrierVestShoulder_khaki_co.paa"
		};
	};
	class tmtm_v_carrierVestGL_olive: tmtm_v_carrierVestGL_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		author = "Trenchgun";
		displayName = "GA Carrier GL Rig (Olive)";
		picture = "\tmtm\pack\indfor_vests\Data\UI\icon_carrierVestGL_olive_ca.paa";
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\indfor_vests\Data\tmtm_carrierVest_olive_co.paa",
			"\tmtm\pack\indfor_vests\Data\tmtm_carrierVestShoulder_olive_co.paa"
		};
	};
	class tmtm_v_carrierVestGL_red: tmtm_v_carrierVestGL_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		author = "Trenchgun";
		displayName = "GA Carrier GL Rig (Red)";
		picture = "\tmtm\pack\indfor_vests\Data\UI\icon_carrierVestGL_red_ca.paa";
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\indfor_vests\Data\tmtm_carrierVest_red_co.paa",
			"\tmtm\pack\indfor_vests\Data\tmtm_carrierVestShoulder_red_co.paa"
		};
	};
};