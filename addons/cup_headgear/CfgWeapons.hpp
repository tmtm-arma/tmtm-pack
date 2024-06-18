class CfgWeapons
{
	class ItemCore;
	class HeadgearItem;
	class HelmetBase: ItemCore
	{
		class ItemInfo;
	};
	
	//////////////////////////////////////////////////////////////////////////
	// M92
	class tmtm_h_m92_covered_base: ItemCore
	{
		scope=0;
		scopeCurator=0;
		scopeArsenal=0;
		
		displayName="M92 Helmet (Covered)";

		model="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\CUP_Ger_M92_helmet.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\m92_helmet_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\m92_helmet_cover_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\CUP_Ger_M92_helmet.p3d";
			hiddenSelections[]=
			{
				"Camo",
				"Camo1"
			};
			modelSides[]={3,1};
			mass=30;
			armor=22;
			passThrough=0.30000001;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};

	// M92 + Goggles 
	class tmtm_h_m92_goggles_covered_base: ItemCore
	{
		scope=0;
		scopeCurator=0;
		scopeArsenal=0;

		displayName="M92 Helmet (Covered/Goggles)";

		model="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\CUP_Ger_M92_gog_helmet.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Camo1",
			"_Cover_Back",
			"_Cover_Front"
		};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\m92_helmet_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\m92_helmet_cover_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\CUP_Ger_M92_gog_helmet.p3d";
			hiddenSelections[]=
			{
				"Camo",
				"Camo1",
				"_Cover_Back",
				"_Cover_Front"
			};
			modelSides[]={3,1};
			mass=30;
			armor=22;
			passThrough=0.30000001;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};

	// M92 + Goggles + Front Cover
	class tmtm_h_m92_goggles_covered_cf_base: tmtm_h_m92_goggles_covered_base
	{
		scope=0;
		scopeCurator=0;
		scopeArsenal=0;

		displayName="M92 Helmet (Covered/Cover/Goggles)";

		hiddenSelections[]=
		{
			"Camo",
			"Camo1",
			"_Cover_Back"
		};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\m92_helmet_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\m92_helmet_cover_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\CUP_Ger_M92_gog_helmet.p3d";
			hiddenSelections[]=
			{
				"Camo",
				"Camo1",
				"_Cover_Back"
			};
			modelSides[]={3,1};
			mass=30;
			armor=22;
			passThrough=0.30000001;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};

	// M92 + Goggles + Back Cover
	class tmtm_h_m92_goggles_covered_cb_base: tmtm_h_m92_goggles_covered_base
	{
		scope=0;
		scopeCurator=0;
		scopeArsenal=0;

		displayName="M92 Helmet (Covered/Back Cover/Goggles)";

		hiddenSelections[]=
		{
			"Camo",
			"Camo1",
			"_Cover_Front"
		};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\m92_helmet_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\m92_helmet_cover_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\CUP_Ger_M92_gog_helmet.p3d";
			hiddenSelections[]=
			{
				"Camo",
				"Camo1",
				"_Cover_Front"
			};
			modelSides[]={3,1};
			mass=30;
			armor=22;
			passThrough=0.30000001;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};

	// SSh-68
	class tmtm_h_ssh68_base : ItemCore
	{
		scope=0;
		scopeCurator=0;
		scopeArsenal=0;

		displayName  = "SSh-68";

		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\CUP_H_SSH68.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\CUP_H_SSH68.p3d";
			allowedSlots[] = {UNIFORM_SLOT, BACKPACK_SLOT, VEST_SLOT, HEADGEAR_SLOT};
			modelSides[] = {6};
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {""};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=4;
					passThrough=0.5;
				};
			};
		};
	};

	// SSh-68 (Covered)
	class tmtm_h_ssh68_covered_base : tmtm_h_ssh68_base
	{
		scope=0;
		scopeCurator=0;
		scopeArsenal=0;

		displayName  = "SSh-68 (Covered)";

		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\CUP_H_SSH68_cover.p3d";
		class ItemInfo: ItemInfo
		{
			mass = 20;
			uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\CUP_H_SSH68_cover.p3d";
		};
	};

	// Patrol Cap
	class tmtm_h_patrol_cap_base: ItemCore
	{
		scope=0;
		scopeCurator=0;
		scopeArsenal=0;

		displayName  = "Patrol Cap";

		uniformModel = "\cup\creatures\people\military\cup_creatures_people_military_usarmy\CUP_US_patrol_cap.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {""};
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "\cup\creatures\people\military\cup_creatures_people_military_usarmy\CUP_US_patrol_cap.p3d";
			allowedSlots[] = {UNIFORM_SLOT, BACKPACK_SLOT, VEST_SLOT, HEADGEAR_SLOT};
			modelSides[] = {6};
			armor = 0;
			passThrough = 1;
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {""};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=0;
					passThrough=1;
				};
			};
		};
	};

	// Cap
	class tmtm_h_cap_base: ItemCore
	{
		scope=0;
		scopeCurator=0;
		scopeArsenal=0;

		displayName  = "Cap";

		model   = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_PMC\CUP_Cap.p3d";
		hiddenSelections[] = {"camo3"};
		hiddenSelectionsTextures[] = {""};
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_PMC\CUP_Cap.p3d";
			allowedSlots[] = {UNIFORM_SLOT, BACKPACK_SLOT, VEST_SLOT, HEADGEAR_SLOT};
			modelSides[] = {6};
			armor = 0;
			passThrough = 1;
			hiddenSelections[] = {"camo3"};
			hiddenSelectionsTextures[] = {""};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=0;
					passThrough=1;
				};
			};
		};
	};

	// Cap (Backwards)
	class tmtm_h_cap_back_base: ItemCore
	{
		scope=0;
		scopeCurator=0;
		scopeArsenal=0;

		displayName  = "Cap (Back)";

		model   = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_PMC\CUP_Cap_Back.p3d";
		hiddenSelections[] = {"camo3"};
		hiddenSelectionsTextures[] = {""};
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_PMC\CUP_Cap_Back.p3d";
			allowedSlots[] = {UNIFORM_SLOT, BACKPACK_SLOT, VEST_SLOT, HEADGEAR_SLOT};
			modelSides[] = {6};
			armor = 0;
			passThrough = 1;
			hiddenSelections[] = {"camo3"};
			hiddenSelectionsTextures[] = {""};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=0;
					passThrough=1;
				};
			};
		};
	};

	// Field Cap (M-88)
	class tmtm_h_m88_fieldcap_base: ItemCore
	{
		scope=0;
		scopeCurator=0;
		scopeArsenal=0;

		displayName="Field Cap (M88)";

		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Chedaki\CUP_Ins_OfficerCap.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {""};
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Chedaki\CUP_Ins_OfficerCap.p3d";
			allowedSlots[] = {UNIFORM_SLOT, BACKPACK_SLOT, VEST_SLOT, HEADGEAR_SLOT};
			modelSides[] = {6};
			armor = 0;
			passThrough = 1;
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {""};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=0;
					passThrough=1;
				};
			};
		};
	};

	// Basic ACH helmet
	class CUP_H_USArmy_HelmetACH_UCP: ItemCore {};

	// ACH helmet + headset
	class CUP_H_USArmy_HelmetACH_Headset_UCP: ItemCore {};

	// ACH Helmet + Goggles
	class CUP_H_USArmy_HelmetACH_ESS_UCP: ItemCore {};

	// ACH Helmet + Headset + Goggles
	class CUP_H_USArmy_HelmetACH_ESS_Headset_UCP: ItemCore {};

	// ACH Helmet + Covered Goggles
	class CUP_H_USArmy_HelmetACH_GCOVERED_UCP: ItemCore {};

	// ACH Helmet + Covered Goggles + Helmet
	class CUP_H_USArmy_HelmetACH_GCOVERED_Headset_UCP: ItemCore {};

	// Ratnik Headgear
	class CUP_H_RUS_6B47_v2_Summer: ItemCore
	{
		class ItemInfo;
		/*
		hiddenSelectionsTextures[] = {
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Helmet\Data\Ra_H_D_co.paa", 
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Helmet\Data\Ra_H_D_Str_co.paa"
		};
		*/
	};
	class CUP_H_RUS_6B47_v2_GogglesDown_Summer: CUP_H_RUS_6B47_v2_Summer 
	{
		class ItemInfo;
		/*
		hiddenSelectionsTextures[] = {
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Helmet\Data\Ra_H_S_gd_co.paa", 
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Helmet\Data\Ra_H_S_gd_Str_co.paa", 
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Helmet\Data\Glass_ca.paa"
		};
		*/
		
	};
	class CUP_H_RUS_6B47_v2_GogglesUp_Summer: CUP_H_RUS_6B47_v2_Summer 
	{
		class ItemInfo;
	};
	class CUP_H_RUS_6B47_v2_GogglesClosed_Summer: CUP_H_RUS_6B47_v2_Summer 
	{
		class ItemInfo;
	};

	//////////////////////////////////////////////////////////////////////////
	// M92 (MM14)
	class tmtm_h_m92_covered_mm14: tmtm_h_m92_covered_base
	{
		author="erem2k";

		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		
		displayName="M92 Helmet (MM14/Covered)";
		picture="\tmtm\pack\cup_headgear\Data\ui\icon_tmtm_h_m92_covered_mm14.paa";

		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\m92_helmet_co.paa",
			"\tmtm\pack\cup_headgear\Data\tmtm_m92_helmet_covered_mm14_co.paa"
		};
	};
	// M92 + Goggles (MM14)
	class tmtm_h_m92_goggles_covered_mm14: tmtm_h_m92_goggles_covered_base
	{
		author="erem2k";

		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		
		displayName="M92 Helmet (MM14/Covered/Goggles)";
		picture="\tmtm\pack\cup_headgear\Data\ui\icon_tmtm_h_m92_goggles_covered_mm14.paa";

		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\m92_helmet_co.paa",
			"\tmtm\pack\cup_headgear\Data\tmtm_m92_helmet_covered_mm14_co.paa"
		};
	};
	// M92 + Goggles + Front Cover (MM14)
	class tmtm_h_m92_goggles_covered_cf_mm14: tmtm_h_m92_goggles_covered_cf_base
	{
		author="erem2k";

		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		
		displayName="M92 Helmet (MM14/Covered/Cover/Goggles)";
		picture="\tmtm\pack\cup_headgear\Data\ui\icon_tmtm_h_m92_goggles_covered_cf_mm14.paa";

		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\m92_helmet_co.paa",
			"\tmtm\pack\cup_headgear\Data\tmtm_m92_helmet_covered_mm14_co.paa"
		};
	};
	// M92 + Goggles + Back Cover (MM14)
	class tmtm_h_m92_goggles_covered_cb_mm14: tmtm_h_m92_goggles_covered_cb_base
	{
		author="erem2k";

		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		
		displayName="M92 Helmet (MM14/Covered/Cover/Goggles)";
		picture="\tmtm\pack\cup_headgear\Data\ui\icon_tmtm_h_m92_goggles_covered_cb_mm14.paa";

		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\m92_helmet_co.paa",
			"\tmtm\pack\cup_headgear\Data\tmtm_m92_helmet_covered_mm14_co.paa"
		};
	};

	// SSh-68 (Berezka White/Covered)
	class tmtm_h_ssh68_covered_berezkawhite: tmtm_h_ssh68_covered_base
	{
		author="erem2k";
		
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;

		displayName  = "SSh-68 (Berezka White/Covered)";
		picture="\tmtm\pack\cup_headgear\Data\ui\icon_tmtm_h_ssh68_covered_berezkawhite.paa";

		hiddenSelectionsTextures[] = {"\tmtm\pack\cup_headgear\Data\tmtm_ssh68_covered_berezkawhite_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"\tmtm\pack\cup_headgear\Data\tmtm_ssh68_covered_berezkawhite_co.paa"};
		};
	};
	// SSh-68 (MM14/Covered)
	class tmtm_h_ssh68_covered_mm14: tmtm_h_ssh68_covered_base
	{
		author="erem2k";
		
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;

		displayName  = "SSh-68 (MM14/Covered)";
		picture="\tmtm\pack\cup_headgear\Data\ui\icon_tmtm_h_ssh68_covered_mm14.paa";

		hiddenSelectionsTextures[] = {"\tmtm\pack\cup_headgear\Data\tmtm_ssh68_covered_mm14_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"\tmtm\pack\cup_headgear\Data\tmtm_ssh68_covered_mm14_co.paa"};
		};
	};
	// SSh-68 (Dark Olive/Covered)
	class tmtm_h_ssh68_covered_darkolive: tmtm_h_ssh68_covered_base
	{
		author="erem2k";
		
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;

		displayName  = "SSh-68 (Dark Olive/Covered)";
		picture="\tmtm\pack\cup_headgear\Data\ui\icon_tmtm_h_ssh68_covered_darkolive.paa";

		hiddenSelectionsTextures[] = {"\tmtm\pack\cup_headgear\Data\tmtm_ssh68_covered_darkolive_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"\tmtm\pack\cup_headgear\Data\tmtm_ssh68_covered_darkolive_co.paa"};
		};
	};

	// Patrol Cap (MM14)
	class tmtm_h_patrol_cap_mm14: tmtm_h_patrol_cap_base
	{
		author="erem2k";
		
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;

		displayName  = "Patrol Cap (MM14)";
		picture="\tmtm\pack\cup_headgear\Data\ui\icon_tmtm_h_patrol_cap_mm14.paa";

		hiddenSelectionsTextures[] = {"\tmtm\pack\cup_headgear\Data\tmtm_patrol_cap_mm14_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"\tmtm\pack\cup_headgear\Data\tmtm_patrol_cap_mm14_co.paa"};
		};
	};
	// Patrol Cap (Dark Olive)
	class tmtm_h_patrol_cap_darkolive: tmtm_h_patrol_cap_base
	{
		author="erem2k";
		
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;

		displayName  = "Patrol Cap (Dark Olive)";
		picture="\tmtm\pack\cup_headgear\Data\ui\icon_tmtm_h_patrol_cap_darkolive.paa";

		hiddenSelectionsTextures[] = {"\tmtm\pack\cup_headgear\Data\tmtm_patrol_cap_darkolive_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"\tmtm\pack\cup_headgear\Data\tmtm_patrol_cap_darkolive_co.paa"};
		};
	};

	// Cap (MM14)
	class tmtm_h_cap_mm14: tmtm_h_cap_base
	{
		author="erem2k";
		
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;

		displayName  = "Cap (MM14)";
		picture="\tmtm\pack\cup_headgear\Data\ui\icon_tmtm_h_cap_mm14.paa";

		hiddenSelectionsTextures[] = {"\tmtm\pack\cup_headgear\Data\tmtm_cap_mm14_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"\tmtm\pack\cup_headgear\Data\tmtm_cap_mm14_co.paa"};
		};
	};
	// Cap (MM14/Backwards)
	class tmtm_h_cap_back_mm14: tmtm_h_cap_back_base
	{
		author="erem2k";
		
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;

		displayName  = "Cap (MM14/Backwards)";
		picture="\tmtm\pack\cup_headgear\Data\ui\icon_tmtm_h_cap_mm14.paa";

		hiddenSelectionsTextures[] = {"\tmtm\pack\cup_headgear\Data\tmtm_cap_mm14_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"\tmtm\pack\cup_headgear\Data\tmtm_cap_mm14_co.paa"};
		};
	};

	// Field Cap (M-88/Khaki)
	class tmtm_h_m88_fieldcap_khaki: tmtm_h_m88_fieldcap_base
	{
		author="erem2k";
		
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;

		displayName  = "Field Cap (M-88/Khaki)";
		picture="\tmtm\pack\cup_headgear\Data\ui\icon_tmtm_h_m88_fieldcap_khaki.paa";

		hiddenSelectionsTextures[] = {"\tmtm\pack\cup_headgear\Data\tmtm_m88_fieldcap_khaki_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"\tmtm\pack\cup_headgear\Data\tmtm_m88_fieldcap_khaki_co.paa"};
		};
	};
	
	// MICH 2000 (Black)
	class tmtm_h_ACH_black: CUP_H_USArmy_HelmetACH_UCP
	{
		author="Trenchgun";
		scope=2;
		displayName="MICH 2000 (Black)";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_headgear\Data\tmtm_mich2000_black_co.paa"
		};
	};
	// MICH 2000 (ATACS AU)
	class tmtm_h_ACH_atacsAu: CUP_H_USArmy_HelmetACH_UCP
	{
		author="Trenchgun";
		scope=2;
		displayName="MICH 2000 (ATACS AU)";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_headgear\Data\tmtm_mich2000_atacsAu_co.paa"
		};
	};
	// MICH 2000 (ATACS FG)
	class tmtm_h_ACH_atacsFg: CUP_H_USArmy_HelmetACH_UCP
	{
		author="Trenchgun";
		scope=2;
		displayName="MICH 2000 (ATACS FG)";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_headgear\Data\tmtm_mich2000_atacsFg_co.paa"
		};
	};
	// MICH 2000 (EMR)
	class tmtm_h_ACH_emr: CUP_H_USArmy_HelmetACH_UCP
	{
		author="Trenchgun";
		scope=2;
		displayName="MICH 2000 (EMR)";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_headgear\Data\tmtm_mich2000_emr_co.paa"
		};
	};
	// MICH 2000 (EMR Winter)
	class tmtm_h_ACH_emrWinter: CUP_H_USArmy_HelmetACH_UCP
	{
		author="Trenchgun";
		scope=2;
		displayName="MICH 2000 (EMR Winter)";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_headgear\Data\tmtm_mich2000_emrWinter_co.paa"
		};
	};
	// MICH 2000 (SURPAT)
	class tmtm_h_ACH_surpat: CUP_H_USArmy_HelmetACH_UCP
	{
		author="Trenchgun";
		scope=2;
		displayName="MICH 2000 (SURPAT)";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_headgear\Data\tmtm_mich2000_surpat_co.paa"
		};
	};
	// MICH 2000 (White)
	class tmtm_h_ACH_white: CUP_H_USArmy_HelmetACH_UCP
	{
		author="Trenchgun";
		scope=2;
		displayName="MICH 2000 (White)";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_headgear\Data\tmtm_mich2000_whiteGrey_co.paa"
		};
	};
	
	// MICH 2000 + Headset (Black)
	class tmtm_h_ACHHeadset_black: CUP_H_USArmy_HelmetACH_Headset_UCP
	{
		author="Trenchgun";
		scope=2;
		displayName="MICH 2000 (Black/Headset)";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_headgear\Data\tmtm_mich2000_black_co.paa"
		};
	};
	// MICH 2000 + Headset (ATACS AU)
	class tmtm_h_ACHHeadset_atacsAu: CUP_H_USArmy_HelmetACH_Headset_UCP
	{
		author="Trenchgun";
		scope=2;
		displayName="MICH 2000 (ATACS AU/Headset)";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_headgear\Data\tmtm_mich2000_atacsAu_co.paa"
		};
	};
	// MICH 2000 + Headset (ATACS AU)
	class tmtm_h_ACHHeadset_atacsFg: CUP_H_USArmy_HelmetACH_Headset_UCP
	{
		author="Trenchgun";
		scope=2;
		displayName="MICH 2000 (ATACS FG/Headset)";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_headgear\Data\tmtm_mich2000_atacsFg_co.paa"
		};
	};
	// MICH 2000 + Headset (EMR)
	class tmtm_h_ACHHeadset_emr: CUP_H_USArmy_HelmetACH_Headset_UCP
	{
		author="Trenchgun";
		scope=2;
		displayName="MICH 2000 (EMR/Headset)";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_headgear\Data\tmtm_mich2000_emr_co.paa"
		};
	};
	// MICH 2000 + Headset (EMR Winter)
	class tmtm_h_ACHHeadset_emrWinter: CUP_H_USArmy_HelmetACH_Headset_UCP
	{
		author="Trenchgun";
		scope=2;
		displayName="MICH 2000 (EMR Winter/Headset)";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_headgear\Data\tmtm_mich2000_emrWinter_co.paa"
		};
	};
	// MICH 2000 + Headset (SURPAT)
	class tmtm_h_ACHHeadset_surpat: CUP_H_USArmy_HelmetACH_Headset_UCP
	{
		author="Trenchgun";
		scope=2;
		displayName="MICH 2000 (SURPAT/Headset)";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_headgear\Data\tmtm_mich2000_surpat_co.paa"
		};
	};
	// MICH 2000 + Headset (White)
	class tmtm_h_ACHHeadset_white: CUP_H_USArmy_HelmetACH_Headset_UCP
	{
		author="Trenchgun";
		scope=2;
		displayName="MICH 2000 (White/Headset)";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_headgear\Data\tmtm_mich2000_whiteGrey_co.paa"
		};
	};
	
	// MICH 2000 + Goggles (Black)
	class tmtm_h_ACHGoggles_black: CUP_H_USArmy_HelmetACH_ESS_UCP
	{
		author="Trenchgun";
		scope=2;
		displayName="MICH 2000 (Black/Goggles)";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_headgear\Data\tmtm_mich2000_black_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\h_gear_01_rgr_co.paa"
		};
	};
	// MICH 2000 + Goggles (ATACS AU)
	class tmtm_h_ACHGoggles_atacsAu: CUP_H_USArmy_HelmetACH_ESS_UCP
	{
		author="Trenchgun";
		scope=2;
		displayName="MICH 2000 (ATACS AU/Goggles)";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_headgear\Data\tmtm_mich2000_atacsAu_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\h_gear_01_rgr_co.paa"
		};
	};
	// MICH 2000 + Goggles (ATACS FG)
	class tmtm_h_ACHGoggles_atacsFg: CUP_H_USArmy_HelmetACH_ESS_UCP
	{
		author="Trenchgun";
		scope=2;
		displayName="MICH 2000 (ATACS FG/Goggles)";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_headgear\Data\tmtm_mich2000_atacsFg_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\h_gear_01_rgr_co.paa"
		};
	};
	// MICH 2000 + Goggles (EMR)
	class tmtm_h_ACHGoggles_emr: CUP_H_USArmy_HelmetACH_ESS_UCP
	{
		author="Trenchgun";
		scope=2;
		displayName="MICH 2000 (EMR/Goggles)";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_headgear\Data\tmtm_mich2000_emr_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\h_gear_01_rgr_co.paa"
		};
	};
	// MICH 2000 + Goggles (EMR Winter)
	class tmtm_h_ACHGoggles_emrWinter: CUP_H_USArmy_HelmetACH_ESS_UCP
	{
		author="Trenchgun";
		scope=2;
		displayName="MICH 2000 (EMR Winter/Goggles)";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_headgear\Data\tmtm_mich2000_emrWinter_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\h_gear_01_rgr_co.paa"
		};
	};
	// MICH 2000 + Goggles (SURPAT)
	class tmtm_h_ACHGoggles_surpat: CUP_H_USArmy_HelmetACH_ESS_UCP
	{
		author="Trenchgun";
		scope=2;
		displayName="MICH 2000 (SURPAT/Goggles)";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_headgear\Data\tmtm_mich2000_surpat_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\h_gear_01_rgr_co.paa"
		};
	};
	// MICH 2000 + Goggles (White)
	class tmtm_h_ACHGoggles_white: CUP_H_USArmy_HelmetACH_ESS_UCP
	{
		author="Trenchgun";
		scope=2;
		displayName="MICH 2000 (White/Goggles)";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_headgear\Data\tmtm_mich2000_whiteGrey_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\h_gear_01_rgr_co.paa"
		};
	};
	
	// MICH 2000 + Goggles + Headset (Black)
	class tmtm_h_ACHGogglesHeadset_black: CUP_H_USArmy_HelmetACH_ESS_Headset_UCP
	{
		author="Trenchgun";
		scope=2;
		displayName="MICH 2000 (Black/Goggles/Headset)";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_headgear\Data\tmtm_mich2000_black_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\h_gear_01_rgr_co.paa"
		};
	};
	// MICH 2000 + Goggles + Headset (Black)
	class tmtm_h_ACHGogglesHeadset_atacsAu: CUP_H_USArmy_HelmetACH_ESS_Headset_UCP
	{
		author="Trenchgun";
		scope=2;
		displayName="MICH 2000 (ATACS AU/Goggles/Headset)";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_headgear\Data\tmtm_mich2000_atacsAu_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\h_gear_01_rgr_co.paa"
		};
	};
	// MICH 2000 + Goggles + Headset (ATACS FG)
	class tmtm_h_ACHGogglesHeadset_atacsFg: CUP_H_USArmy_HelmetACH_ESS_Headset_UCP
	{
		author="Trenchgun";
		scope=2;
		displayName="MICH 2000 (ATACS FG/Goggles/Headset)";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_headgear\Data\tmtm_mich2000_atacsFg_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\h_gear_01_rgr_co.paa"
		};
	};
	// MICH 2000 + Goggles + Headset (EMR)
	class tmtm_h_ACHGogglesHeadset_emr: CUP_H_USArmy_HelmetACH_ESS_Headset_UCP
	{
		author="Trenchgun";
		scope=2;
		displayName="MICH 2000 (EMR/Goggles/Headset)";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_headgear\Data\tmtm_mich2000_emr_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\h_gear_01_rgr_co.paa"
		};
	};
	// MICH 2000 + Goggles + Headset (EMR)
	class tmtm_h_ACHGogglesHeadset_emrWinter: CUP_H_USArmy_HelmetACH_ESS_Headset_UCP
	{
		author="Trenchgun";
		scope=2;
		displayName="MICH 2000 (EMR Winter/Goggles/Headset)";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_headgear\Data\tmtm_mich2000_emrWinter_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\h_gear_01_rgr_co.paa"
		};
	};
	// MICH 2000 + Goggles + Headset (SURPAT)
	class tmtm_h_ACHGogglesHeadset_surpat: CUP_H_USArmy_HelmetACH_ESS_Headset_UCP
	{
		author="Trenchgun";
		scope=2;
		displayName="MICH 2000 (SURPAT/Goggles/Headset)";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_headgear\Data\tmtm_mich2000_surpat_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\h_gear_01_rgr_co.paa"
		};
	};
	// MICH 2000 + Goggles + Headset (White) 
	class tmtm_h_ACHGogglesHeadset_white: CUP_H_USArmy_HelmetACH_ESS_Headset_UCP
	{
		author="Trenchgun";
		scope=2;
		displayName="MICH 2000 (White/Goggles/Headset)";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_headgear\Data\tmtm_mich2000_whiteGrey_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\h_gear_01_rgr_co.paa"
		};
	};
	
	// MICH 2000 + Goggle Cover (Black) 
	class tmtm_h_ACHCoveredGoggles_black: CUP_H_USArmy_HelmetACH_GCOVERED_UCP
	{
		author="Trenchgun";
		scope=2;
		displayName="MICH 2000 (Black/Covered Goggles)";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_headgear\Data\tmtm_mich2000_black_co.paa"
		};
	};
	// MICH 2000 + Goggle Cover (ATACS AU) 
	class tmtm_h_ACHCoveredGoggles_atacsAu: CUP_H_USArmy_HelmetACH_GCOVERED_UCP
	{
		author="Trenchgun";
		scope=2;
		displayName="MICH 2000 (ATACS AU/Covered Goggles)";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_headgear\Data\tmtm_mich2000_atacsAu_co.paa"
		};
	};
	// MICH 2000 + Goggle Cover (ATACS FG) 
	class tmtm_h_ACHCoveredGoggles_atacsFg: CUP_H_USArmy_HelmetACH_GCOVERED_UCP
	{
		author="Trenchgun";
		scope=2;
		displayName="MICH 2000 (ATACS FG/Covered Goggles)";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_headgear\Data\tmtm_mich2000_atacsFg_co.paa"
		};
	};
	// MICH 2000 + Goggle Cover (EMR) 
	class tmtm_h_ACHCoveredGoggles_emr: CUP_H_USArmy_HelmetACH_GCOVERED_UCP
	{
		author="Trenchgun";
		scope=2;
		displayName="MICH 2000 (EMR/Covered Goggles)";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_headgear\Data\tmtm_mich2000_emr_co.paa"
		};
	};
	// MICH 2000 + Goggle Cover (EMR Winter)
	class tmtm_h_ACHCoveredGoggles_emrWinter: CUP_H_USArmy_HelmetACH_GCOVERED_UCP
	{
		author="Trenchgun";
		scope=2;
		displayName="MICH 2000 (EMR Winter/Covered Goggles)";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_headgear\Data\tmtm_mich2000_emrWinter_co.paa"
		};
	};
	// MICH 2000 + Goggle Cover (SURPAT)
	class tmtm_h_ACHCoveredGoggles_surpat: CUP_H_USArmy_HelmetACH_GCOVERED_UCP
	{
		author="Trenchgun";
		scope=2;
		displayName="MICH 2000 (SURPAT/Covered Goggles)";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_headgear\Data\tmtm_mich2000_surpat_co.paa"
		};
	};
	// MICH 2000 + Goggle Cover (White)
	class tmtm_h_ACHCoveredGoggles_white: CUP_H_USArmy_HelmetACH_GCOVERED_UCP
	{
		author="Trenchgun";
		scope=2;
		displayName="MICH 2000 (White/Covered Goggles)";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_headgear\Data\tmtm_mich2000_whiteGrey_co.paa"
		};
	};
	
	// MICH 2000 + Goggle Cover + Headset (Black)
	class tmtm_h_ACHCoveredGogglesHeadset_black: CUP_H_USArmy_HelmetACH_GCOVERED_Headset_UCP
	{
		author="Trenchgun";
		scope=2;
		displayName="MICH 2000 (Black/Covered Goggles/Headset)";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_headgear\Data\tmtm_mich2000_black_co.paa"
		};
	};
	// MICH 2000 + Goggle Cover + Headset (ATACS AU)
	class tmtm_h_ACHCoveredGogglesHeadset_atacsAu: CUP_H_USArmy_HelmetACH_GCOVERED_Headset_UCP
	{
		author="Trenchgun";
		scope=2;
		displayName="MICH 2000 (ATACS AU/Covered Goggles/Headset)";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_headgear\Data\tmtm_mich2000_atacsAu_co.paa"
		};
	};
	// MICH 2000 + Goggle Cover + Headset (ATACS FG)
	class tmtm_h_ACHCoveredGogglesHeadset_atacsFg: CUP_H_USArmy_HelmetACH_GCOVERED_Headset_UCP
	{
		author="Trenchgun";
		scope=2;
		displayName="MICH 2000 (ATACS FG/Covered Goggles/Headset)";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_headgear\Data\tmtm_mich2000_atacsFg_co.paa"
		};
	};
	// MICH 2000 + Goggle Cover + Headset (EMR)
	class tmtm_h_ACHCoveredGogglesHeadset_emr: CUP_H_USArmy_HelmetACH_GCOVERED_Headset_UCP
	{
		author="Trenchgun";
		scope=2;
		displayName="MICH 2000 (EMR/Covered Goggles/Headset)";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_headgear\Data\tmtm_mich2000_emr_co.paa"
		};
	};
	// MICH 2000 + Goggle Cover + Headset (EMR Winter)
	class tmtm_h_ACHCoveredGogglesHeadset_emrWinter: CUP_H_USArmy_HelmetACH_GCOVERED_Headset_UCP
	{
		author="Trenchgun";
		scope=2;
		displayName="MICH 2000 (EMR Winter/Covered Goggles/Headset)";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_headgear\Data\tmtm_mich2000_emrWinter_co.paa"
		};
	};
	// MICH 2000 + Goggle Cover + Headset (SURPAT)
	class tmtm_h_ACHCoveredGogglesHeadset_surpat: CUP_H_USArmy_HelmetACH_GCOVERED_Headset_UCP
	{
		author="Trenchgun";
		scope=2;
		displayName="MICH 2000 (SURPAT/Covered Goggles/Headset)";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_headgear\Data\tmtm_mich2000_surpat_co.paa"
		};
	};
	// MICH 2000 + Goggle Cover + Headset (White)
	class tmtm_h_ACHCoveredGogglesHeadset_white: CUP_H_USArmy_HelmetACH_GCOVERED_Headset_UCP
	{
		author="Trenchgun";
		scope=2;
		displayName="MICH 2000 (White/Covered Goggles/Headset)";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_headgear\Data\tmtm_mich2000_whiteGrey_co.paa"
		};
	};

	// ECH (MTP)
	class tmtm_h_ECH_mtp: CUP_H_USArmy_HelmetACH_UCP
	{
		author="Trenchgun";
		scope=2;
		displayName="ECH (MTP)";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_headgear\Data\tmtm_mich2000_mtp_co.paa"
		};
	};
	// ECH + Headset (MTP)
	class tmtm_h_ECHHeadset_mtp: CUP_H_USArmy_HelmetACH_Headset_UCP
	{
		author="Trenchgun";
		scope=2;
		displayName="ECH (MTP/Headset)";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_headgear\Data\tmtm_mich2000_mtp_co.paa"
		};
	};
	// ECH + Goggles (MTP)
	class tmtm_h_ECHGoggles_mtp: CUP_H_USArmy_HelmetACH_ESS_UCP
	{
		author="Trenchgun";
		scope=2;
		displayName="ECH (MTP/Goggles)";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_headgear\Data\tmtm_mich2000_mtp_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\h_gear_01_rgr_co.paa"
		};
	};
	// ECH + Goggles + Headset (MTP)
	class tmtm_h_ECHGogglesHeadset_mtp: CUP_H_USArmy_HelmetACH_ESS_Headset_UCP
	{
		author="Trenchgun";
		scope=2;
		displayName="ECH (MTP/Goggles/Headset)";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_headgear\Data\tmtm_mich2000_mtp_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\h_gear_01_rgr_co.paa"
		};
	};
	// ECH + Goggle Cover (MTP) 
	class tmtm_h_ECHCoveredGoggles_mtp: CUP_H_USArmy_HelmetACH_GCOVERED_UCP
	{
		author="Trenchgun";
		scope=2;
		displayName="ECH (MTP/Covered Goggles)";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_headgear\Data\tmtm_mich2000_mtp_co.paa"
		};
	};
	// ECH + Goggle Cover + Headset (MTP)
	class tmtm_h_ECHCoveredGogglesHeadset_mtp: CUP_H_USArmy_HelmetACH_GCOVERED_Headset_UCP
	{
		author="Trenchgun";
		scope=2;
		displayName="ECH (MTP/Covered Goggles/Headset)";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_headgear\Data\tmtm_mich2000_mtp_co.paa"
		};
	};
	// ECH (CDF Forest)
	class tmtm_h_ECH_cdfForest: CUP_H_USArmy_HelmetACH_UCP
	{
		author="Trenchgun";
		scope=2;
		displayName="ECH (CDF Forest)";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_headgear\Data\tmtm_mich2000_cdfForest_co.paa"
		};
	};
	// ECH + Headset (CDF Forest)
	class tmtm_h_ECHHeadset_cdfForest: CUP_H_USArmy_HelmetACH_Headset_UCP
	{
		author="Trenchgun";
		scope=2;
		displayName="ECH (CDF Forest/Headset)";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_headgear\Data\tmtm_mich2000_cdfForest_co.paa"
		};
	};
	// ECH + Goggles (CDF Forest)
	class tmtm_h_ECHGoggles_cdfForest: CUP_H_USArmy_HelmetACH_ESS_UCP
	{
		author="Trenchgun";
		scope=2;
		displayName="ECH (CDF Forest/Goggles)";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_headgear\Data\tmtm_mich2000_cdfForest_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\h_gear_01_rgr_co.paa"
		};
	};
	// ECH + Goggles + Headset (CDF Forest)
	class tmtm_h_ECHGogglesHeadset_cdfForest: CUP_H_USArmy_HelmetACH_ESS_Headset_UCP
	{
		author="Trenchgun";
		scope=2;
		displayName="ECH (CDF Forest/Goggles/Headset)";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_headgear\Data\tmtm_mich2000_cdfForest_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\h_gear_01_rgr_co.paa"
		};
	};
	// ECH + Goggle Cover (CDF Forest) 
	class tmtm_h_ECHCoveredGoggles_cdfForest: CUP_H_USArmy_HelmetACH_GCOVERED_UCP
	{
		author="Trenchgun";
		scope=2;
		displayName="ECH (CDF Forest/Covered Goggles)";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_headgear\Data\tmtm_mich2000_cdfForest_co.paa"
		};
	};
	// ECH + Goggle Cover + Headset (CDF Forest)
	class tmtm_h_ECHCoveredGogglesHeadset_cdfForest: CUP_H_USArmy_HelmetACH_GCOVERED_Headset_UCP
	{
		author="Trenchgun";
		scope=2;
		displayName="ECH (CDF Forest/Covered Goggles/Headset)";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_headgear\Data\tmtm_mich2000_cdfForest_co.paa"
		};
	};
	// ECH (CDF Mountain)
	class tmtm_h_ECH_cdfMountain: CUP_H_USArmy_HelmetACH_UCP
	{
		author="Trenchgun";
		scope=2;
		displayName="ECH (CDF Mountain)";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_headgear\Data\tmtm_mich2000_cdfMountain_co.paa"
		};
	};
	// ECH + Headset (CDF Mountain)
	class tmtm_h_ECHHeadset_cdfMountain: CUP_H_USArmy_HelmetACH_Headset_UCP
	{
		author="Trenchgun";
		scope=2;
		displayName="ECH (CDF Mountain/Headset)";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_headgear\Data\tmtm_mich2000_cdfMountain_co.paa"
		};
	};
	// ECH + Goggles (CDF Mountain)
	class tmtm_h_ECHGoggles_cdfMountain: CUP_H_USArmy_HelmetACH_ESS_UCP
	{
		author="Trenchgun";
		scope=2;
		displayName="ECH (CDF Mountain/Goggles)";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_headgear\Data\tmtm_mich2000_cdfMountain_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\h_gear_01_rgr_co.paa"
		};
	};
	// ECH + Goggles + Headset (CDF Mountain)
	class tmtm_h_ECHGogglesHeadset_cdfMountain: CUP_H_USArmy_HelmetACH_ESS_Headset_UCP
	{
		author="Trenchgun";
		scope=2;
		displayName="ECH (CDF Mountain/Goggles/Headset)";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_headgear\Data\tmtm_mich2000_cdfMountain_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\h_gear_01_rgr_co.paa"
		};
	};
	// ECH + Goggle Cover (CDF Mountain) 
	class tmtm_h_ECHCoveredGoggles_cdfMountain: CUP_H_USArmy_HelmetACH_GCOVERED_UCP
	{
		author="Trenchgun";
		scope=2;
		displayName="ECH (CDF Mountain/Covered Goggles)";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_headgear\Data\tmtm_mich2000_cdfMountain_co.paa"
		};
	};
	// ECH + Goggle Cover + Headset (CDF Mountain)
	class tmtm_h_ECHCoveredGogglesHeadset_cdfMountain: CUP_H_USArmy_HelmetACH_GCOVERED_Headset_UCP
	{
		author="Trenchgun";
		scope=2;
		displayName="ECH (CDF Mountain/Covered Goggles/Headset)";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_headgear\Data\tmtm_mich2000_cdfMountain_co.paa"
		};
	};
	// ECH (CDF Oxblood)
	class tmtm_h_ECH_cdfOxblood: CUP_H_USArmy_HelmetACH_UCP
	{
		author="Trenchgun";
		scope=2;
		displayName="ECH (CDF Oxblood)";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_headgear\Data\tmtm_mich2000_cdfOxblood_co.paa"
		};
	};
	// ECH + Headset (CDF Oxblood)
	class tmtm_h_ECHHeadset_cdfOxblood: CUP_H_USArmy_HelmetACH_Headset_UCP
	{
		author="Trenchgun";
		scope=2;
		displayName="ECH (CDF Oxblood/Headset)";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_headgear\Data\tmtm_mich2000_cdfOxblood_co.paa"
		};
	};
	// ECH + Goggles (CDF Oxblood)
	class tmtm_h_ECHGoggles_cdfOxblood: CUP_H_USArmy_HelmetACH_ESS_UCP
	{
		author="Trenchgun";
		scope=2;
		displayName="ECH (CDF Oxblood/Goggles)";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_headgear\Data\tmtm_mich2000_cdfOxblood_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\h_gear_01_rgr_co.paa"
		};
	};
	// ECH + Goggles + Headset (CDF Oxblood)
	class tmtm_h_ECHGogglesHeadset_cdfOxblood: CUP_H_USArmy_HelmetACH_ESS_Headset_UCP
	{
		author="Trenchgun";
		scope=2;
		displayName="ECH (CDF Oxblood/Goggles/Headset)";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_headgear\Data\tmtm_mich2000_cdfOxblood_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\h_gear_01_rgr_co.paa"
		};
	};
	// ECH + Goggle Cover (CDF Oxblood) 
	class tmtm_h_ECHCoveredGoggles_cdfOxblood: CUP_H_USArmy_HelmetACH_GCOVERED_UCP
	{
		author="Trenchgun";
		scope=2;
		displayName="ECH (CDF Oxblood/Covered Goggles)";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_headgear\Data\tmtm_mich2000_cdfOxblood_co.paa"
		};
	};
	// ECH + Goggle Cover + Headset (CDF Oxblood)
	class tmtm_h_ECHCoveredGogglesHeadset_cdfOxblood: CUP_H_USArmy_HelmetACH_GCOVERED_Headset_UCP
	{
		author="Trenchgun";
		scope=2;
		displayName="ECH (CDF Oxblood/Covered Goggles/Headset)";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_headgear\Data\tmtm_mich2000_cdfOxblood_co.paa"
		};
	};



	// 6B47 (Black)
	class tmtm_h_6B47_black: CUP_H_RUS_6B47_v2_Summer
	{
		author="Trenchgun";
		displayName="6B47 (Black)";
		hiddenSelectionsTextures[] = {
			"\tmtm\pack\cup_headgear\Data\tmtm_ratnik_helmet_black_co.paa", 
			"\tmtm\pack\cup_headgear\Data\tmtm_ratnik_helmetStrap_black_co.paa"
		};
	};
	class tmtm_h_6B47GogglesDown_black: CUP_H_RUS_6B47_v2_GogglesDown_Summer
	{
		author="Trenchgun";
		displayName="6B47 (Black/Goggles down)";
		hiddenSelectionsTextures[] = {
			"\tmtm\pack\cup_headgear\Data\tmtm_ratnik_helmet_black_co.paa", 
			"\tmtm\pack\cup_headgear\Data\tmtm_ratnik_helmetStrap_black_co.paa", 
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Helmet\Data\Glass_ca.paa"
		};
	};
	class tmtm_h_6B47GogglesUp_black: CUP_H_RUS_6B47_v2_GogglesUp_Summer
	{
		author="Trenchgun";
		displayName="6B47 (Black/Goggles up)";
		hiddenSelectionsTextures[] = {
			"\tmtm\pack\cup_headgear\Data\tmtm_ratnik_helmet_black_co.paa", 
			"\tmtm\pack\cup_headgear\Data\tmtm_ratnik_helmetStrap_black_co.paa", 
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Helmet\Data\Glass_ca.paa"
		};
	};
	class tmtm_h_6B47GogglesClosed_black: CUP_H_RUS_6B47_v2_GogglesClosed_Summer
	{
		author="Trenchgun";
		displayName="6B47 (Black/Goggles closed)";
		hiddenSelectionsTextures[] = {
			"\tmtm\pack\cup_headgear\Data\tmtm_ratnik_helmet_black_co.paa", 
			"\tmtm\pack\cup_headgear\Data\tmtm_ratnik_helmetStrap_black_co.paa"
		};
	};
	// 6B47 (ATACS AU)
	class tmtm_h_6B47_atacsAu: CUP_H_RUS_6B47_v2_Summer
	{
		author="Trenchgun";
		displayName="6B47 (ATACS AU)";
		hiddenSelectionsTextures[] = {
			"\tmtm\pack\cup_headgear\Data\tmtm_ratnik_helmet_atacsAu_co.paa", 
			"\tmtm\pack\cup_headgear\Data\tmtm_ratnik_helmetStrap_black_co.paa"
		};
	};
	class tmtm_h_6B47GogglesDown_atacsAu: CUP_H_RUS_6B47_v2_GogglesDown_Summer
	{
		author="Trenchgun";
		displayName="6B47 (ATACS AU/Goggles down)";
		hiddenSelectionsTextures[] = {
			"\tmtm\pack\cup_headgear\Data\tmtm_ratnik_helmet_atacsAu_co.paa", 
			"\tmtm\pack\cup_headgear\Data\tmtm_ratnik_helmetStrap_black_co.paa", 
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Helmet\Data\Glass_ca.paa"
		};
	};
	class tmtm_h_6B47GogglesUp_atacsAu: CUP_H_RUS_6B47_v2_GogglesUp_Summer
	{
		author="Trenchgun";
		displayName="6B47 (ATACS AU/Goggles up)";
		hiddenSelectionsTextures[] = {
			"\tmtm\pack\cup_headgear\Data\tmtm_ratnik_helmet_atacsAu_co.paa", 
			"\tmtm\pack\cup_headgear\Data\tmtm_ratnik_helmetStrap_black_co.paa", 
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Helmet\Data\Glass_ca.paa"
		};
	};
	class tmtm_h_6B47GogglesClosed_atacsAu: CUP_H_RUS_6B47_v2_GogglesClosed_Summer
	{
		author="Trenchgun";
		displayName="6B47 (ATACS AU/Goggles closed)";
		hiddenSelectionsTextures[] = {
			"\tmtm\pack\cup_headgear\Data\tmtm_ratnik_helmet_atacsAu_co.paa", 
			"\tmtm\pack\cup_headgear\Data\tmtm_ratnik_helmetStrap_black_co.paa"
		};
	};
	// 6B47 (ATACS FG)
	class tmtm_h_6B47_atacsFg: CUP_H_RUS_6B47_v2_Summer
	{
		author="Trenchgun";
		displayName="6B47 (ATACS FG)";
		hiddenSelectionsTextures[] = {
			"\tmtm\pack\cup_headgear\Data\tmtm_ratnik_helmet_atacsFg_co.paa", 
			"\tmtm\pack\cup_headgear\Data\tmtm_ratnik_helmetStrap_black_co.paa"
		};
	};
	class tmtm_h_6B47GogglesDown_atacsFg: CUP_H_RUS_6B47_v2_GogglesDown_Summer
	{
		author="Trenchgun";
		displayName="6B47 (ATACS FG/Goggles down)";
		hiddenSelectionsTextures[] = {
			"\tmtm\pack\cup_headgear\Data\tmtm_ratnik_helmet_atacsFg_co.paa", 
			"\tmtm\pack\cup_headgear\Data\tmtm_ratnik_helmetStrap_black_co.paa", 
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Helmet\Data\Glass_ca.paa"
		};
	};
	class tmtm_h_6B47GogglesUp_atacsFg: CUP_H_RUS_6B47_v2_GogglesUp_Summer
	{
		author="Trenchgun";
		displayName="6B47 (ATACS FG/Goggles up)";
		hiddenSelectionsTextures[] = {
			"\tmtm\pack\cup_headgear\Data\tmtm_ratnik_helmet_atacsFg_co.paa", 
			"\tmtm\pack\cup_headgear\Data\tmtm_ratnik_helmetStrap_black_co.paa", 
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Helmet\Data\Glass_ca.paa"
		};
	};
	class tmtm_h_6B47GogglesClosed_atacsFg: CUP_H_RUS_6B47_v2_GogglesClosed_Summer
	{
		author="Trenchgun";
		displayName="6B47 (ATACS FG/Goggles closed)";
		hiddenSelectionsTextures[] = {
			"\tmtm\pack\cup_headgear\Data\tmtm_ratnik_helmet_atacsFg_co.paa", 
			"\tmtm\pack\cup_headgear\Data\tmtm_ratnik_helmetStrap_black_co.paa"
		};
	};
	// 6B47 (SURPAT)
	class tmtm_h_6B47_surpat: CUP_H_RUS_6B47_v2_Summer
	{
		author="Trenchgun";
		displayName="6B47 (SURPAT)";
		hiddenSelectionsTextures[] = {
			"\tmtm\pack\cup_headgear\Data\tmtm_ratnik_helmet_surpat_co.paa", 
			"\tmtm\pack\cup_headgear\Data\tmtm_ratnik_helmetStrap_black_co.paa"
		};
	};
	class tmtm_h_6B47GogglesDown_surpat: CUP_H_RUS_6B47_v2_GogglesDown_Summer
	{
		author="Trenchgun";
		displayName="6B47 (SURPAT/Goggles down)";
		hiddenSelectionsTextures[] = {
			"\tmtm\pack\cup_headgear\Data\tmtm_ratnik_helmet_surpat_co.paa", 
			"\tmtm\pack\cup_headgear\Data\tmtm_ratnik_helmetStrap_black_co.paa", 
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Helmet\Data\Glass_ca.paa"
		};
	};
	class tmtm_h_6B47GogglesUp_surpat: CUP_H_RUS_6B47_v2_GogglesUp_Summer
	{
		author="Trenchgun";
		displayName="6B47 (SURPAT/Goggles up)";
		hiddenSelectionsTextures[] = {
			"\tmtm\pack\cup_headgear\Data\tmtm_ratnik_helmet_surpat_co.paa", 
			"\tmtm\pack\cup_headgear\Data\tmtm_ratnik_helmetStrap_black_co.paa", 
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Helmet\Data\Glass_ca.paa"
		};
	};
	class tmtm_h_6B47GogglesClosed_surpat: CUP_H_RUS_6B47_v2_GogglesClosed_Summer
	{
		author="Trenchgun";
		displayName="6B47 (SURPAT/Goggles closed)";
		hiddenSelectionsTextures[] = {
			"\tmtm\pack\cup_headgear\Data\tmtm_ratnik_helmet_surpat_co.paa", 
			"\tmtm\pack\cup_headgear\Data\tmtm_ratnik_helmetStrap_black_co.paa"
		};
	};
	// 6B47 (EMR Winter)
	class tmtm_h_6B47_emrWinter: CUP_H_RUS_6B47_v2_Summer
	{
		author="Trenchgun";
		displayName="6B47 (EMR Winter)";
		hiddenSelectionsTextures[] = {
			"\tmtm\pack\cup_headgear\Data\tmtm_ratnik_helmet_emrWinter_co.paa", 
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Helmet\Data\Ra_H_S_Str_co.paa"
		};
	};
	class tmtm_h_6B47GogglesDown_emrWinter: CUP_H_RUS_6B47_v2_GogglesDown_Summer
	{
		author="Trenchgun";
		displayName="6B47 (EMR Winter/Goggles down)";
		hiddenSelectionsTextures[] = {
			"\tmtm\pack\cup_headgear\Data\tmtm_ratnik_helmet_emrWinter_co.paa", 
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Helmet\Data\Ra_H_S_Str_co.paa", 
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Helmet\Data\Glass_ca.paa"
		};
	};
	class tmtm_h_6B47GogglesUp_emrWinter: CUP_H_RUS_6B47_v2_GogglesUp_Summer
	{
		author="Trenchgun";
		displayName="6B47 (EMR Winter/Goggles up)";
		hiddenSelectionsTextures[] = {
			"\tmtm\pack\cup_headgear\Data\tmtm_ratnik_helmet_emrWinter_co.paa", 
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Helmet\Data\Ra_H_S_Str_co.paa", 
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Helmet\Data\Glass_ca.paa"
		};
	};
	class tmtm_h_6B47GogglesClosed_emrWinter: CUP_H_RUS_6B47_v2_GogglesClosed_Summer
	{
		author="Trenchgun";
		displayName="6B47 (EMR Winter/Goggles closed)";
		hiddenSelectionsTextures[] = {
			"\tmtm\pack\cup_headgear\Data\tmtm_ratnik_helmet_emrWinter_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Helmet\Data\Ra_H_S_Str_co.paa"
		};
	};
};