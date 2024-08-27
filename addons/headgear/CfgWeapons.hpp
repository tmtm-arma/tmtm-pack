class CfgWeapons
{
	class ItemCore;
	class HeadgearItem;
	
	// Altyn
	class tmtm_h_altyn_green: ItemCore
	{
		author="Trenchgun";
		scope=2;
		displayName="Altyn (Green)";
		descriptionShort = "GOST Level 2";
		picture="\tmtm\pack\headgear\Data\UI\tmtm_icon_altyn_green_ca.paa";
		model="\tmtm\pack\headgear\tmtm_altyn.p3d";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_altyn_green_co.paa"};
		class ItemInfo: HeadgearItem
		{
			mass=45;
			uniformModel="\tmtm\pack\headgear\tmtm_altyn.p3d";
			modelSides[]={6};
			hiddenSelections[]={"camo"};
			hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_altyn_green_co.paa"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.1;
				};
			};
		};
	};
	class tmtm_h_altyn_olive: tmtm_h_altyn_green
	{
		scope=2;
		displayName="Altyn (Olive)";
		hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_altyn_olive_co.paa"};
		picture="\tmtm\pack\headgear\Data\UI\tmtm_icon_altyn_green_ca.paa";
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_altyn_olive_co.paa"};
		};
	};
	class tmtm_h_altyn_black: tmtm_h_altyn_green
	{
		scope=2;
		displayName="Altyn (Black)";
		hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_altyn_black_co.paa"};
		picture="\tmtm\pack\headgear\Data\UI\tmtm_icon_altyn_green_ca.paa";
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_altyn_black_co.paa"};
		};
	};
	
	// Altyn (Visor Up)
	class tmtm_h_altyn_green_visorUp: ItemCore
	{
		author="Trenchgun";
		scope=2;
		displayName="Altyn (Green/Visor Up)";
		descriptionShort = "GOST Level 2";
		picture="\tmtm\pack\headgear\Data\UI\tmtm_icon_altyn_green_visorUp_ca.paa";
		model="\tmtm\pack\headgear\tmtm_altyn_visorUp.p3d";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_altyn_green_co.paa"};
		class ItemInfo: HeadgearItem
		{
			mass=45;
			uniformModel="\tmtm\pack\headgear\tmtm_altyn_visorUp.p3d";
			modelSides[]={6};
			hiddenSelections[]={"camo"};
			hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_altyn_green_co.paa"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.1;
				};
			};
		};
	};
	class tmtm_h_altyn_olive_visorUp: tmtm_h_altyn_green_visorUp
	{
		scope=2;
		displayName="Altyn (Olive/Visor Up)";
		hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_altyn_olive_co.paa"};
		picture="\tmtm\pack\headgear\Data\UI\tmtm_icon_altyn_green_visorUp_ca.paa";
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_altyn_olive_co.paa"};
		};
	};
	class tmtm_h_altyn_black_visorUp: tmtm_h_altyn_green_visorUp
	{
		scope=2;
		displayName="Altyn (Black/Visor Up)";
		hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_altyn_black_co.paa"};
		picture="\tmtm\pack\headgear\Data\UI\tmtm_icon_altyn_green_visorUp_ca.paa";
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_altyn_black_co.paa"};
		};
	};
	
	// Altyn (Visor Down)
	class tmtm_h_altyn_green_visorDown: ItemCore
	{
		author="Trenchgun";
		scope=2;
		displayName="Altyn (Green/Visor Down)";
		descriptionShort = "GOST Level 2";
		picture="\tmtm\pack\headgear\Data\UI\tmtm_icon_altyn_green_visorDown_ca.paa";
		model="\tmtm\pack\headgear\tmtm_altyn_visorDown.p3d";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_altyn_green_co.paa"};
		class ItemInfo: HeadgearItem
		{
			mass=45;
			uniformModel="\tmtm\pack\headgear\tmtm_altyn_visorDown.p3d";
			modelSides[]={6};
			hiddenSelections[]={"camo"};
			hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_altyn_green_co.paa"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.1;
				};
				class Face
				{
					hitpointName="HitFace";
					armor=10;
					passThrough=0.1;
				};
			};
		};
	};
	class tmtm_h_altyn_olive_visorDown: tmtm_h_altyn_green_visorDown
	{
		scope=2;
		displayName="Altyn (Olive/Visor Down)";
		hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_altyn_olive_co.paa"};
		picture="\tmtm\pack\headgear\Data\UI\tmtm_icon_altyn_green_visorDown_ca.paa";
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_altyn_olive_co.paa"};
		};
	};
	class tmtm_h_altyn_black_visorDown: tmtm_h_altyn_green_visorDown
	{
		scope=2;
		displayName="Altyn (Black/Visor Down)";
		hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_altyn_black_co.paa"};
		picture="\tmtm\pack\headgear\Data\UI\tmtm_icon_altyn_green_visorDown_ca.paa";
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_altyn_black_co.paa"};
		};
	};
	
	// Zenturion C1300 (Visor Up)
	class tmtm_h_c1300_grey_visorUp: ItemCore
	{
		author="Trenchgun";
		scope=2;
		displayName="C1300 (Grey/Visor Up)";
		descriptionShort = "VPAM APR Level 3";
		picture="\tmtm\pack\headgear\Data\UI\tmtm_icon_c1300_grey_visorUp_ca.paa";
		model="\tmtm\pack\headgear\tmtm_c1300_visorUp.p3d";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_c1300_grey_co.paa"};
		class ItemInfo: HeadgearItem
		{
			mass=45;
			uniformModel="\tmtm\pack\headgear\tmtm_c1300_visorUp.p3d";
			modelSides[]={6};
			hiddenSelections[]={"camo"};
			hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_c1300_grey_co.paa"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.1;
				};
			};
		};
	};
	class tmtm_h_c1300_black_visorUp: tmtm_h_c1300_grey_visorUp
	{
		scope=2;
		displayName="C1300 (Black/Visor Up)";
		picture="\tmtm\pack\headgear\Data\UI\tmtm_icon_c1300_grey_visorUp_ca.paa";
		hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_c1300_black_co.paa"};
	};
	class tmtm_h_c1300_blue_visorUp: tmtm_h_c1300_grey_visorUp
	{
		scope=2;
		displayName="C1300 (Blue/Visor Up)";
		picture="\tmtm\pack\headgear\Data\UI\tmtm_icon_c1300_grey_visorUp_ca.paa";
		hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_c1300_blue_co.paa"};
	};
	class tmtm_h_c1300_csat_visorUp: tmtm_h_c1300_grey_visorUp
	{
		scope=2;
		displayName="C1300 (CSAT/Visor Up)";
		picture="\tmtm\pack\headgear\Data\UI\tmtm_icon_c1300_grey_visorUp_ca.paa";
		hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_c1300_csat_co.paa"};
	};
	class tmtm_h_c1300_csatArid_visorUp: tmtm_h_c1300_grey_visorUp
	{
		scope=2;
		displayName="C1300 (CSAT Arid/Visor Up)";
		picture="\tmtm\pack\headgear\Data\UI\tmtm_icon_c1300_grey_visorUp_ca.paa";
		hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_c1300_csatArid_co.paa"};
	};
	class tmtm_h_c1300_ldf_visorUp: tmtm_h_c1300_grey_visorUp
	{
		scope=2;
		displayName="C1300 (LDF/Visor Up)";
		picture="\tmtm\pack\headgear\Data\UI\tmtm_icon_c1300_grey_visorUp_ca.paa";
		hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_c1300_ldf_co.paa"};
	};
	class tmtm_h_c1300_mtp_visorUp: tmtm_h_c1300_grey_visorUp
	{
		scope=2;
		displayName="C1300 (MTP/Visor Up)";
		picture="\tmtm\pack\headgear\Data\UI\tmtm_icon_c1300_grey_visorUp_ca.paa";
		hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_c1300_mtp_co.paa"};
	};
	class tmtm_h_c1300_multicamBlack_visorUp: tmtm_h_c1300_grey_visorUp
	{
		scope=2;
		displayName="C1300 (Multicam Black/Visor Up)";
		picture="\tmtm\pack\headgear\Data\UI\tmtm_icon_c1300_grey_visorUp_ca.paa";
		hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_c1300_multicamBlack_co.paa"};
	};
	class tmtm_h_c1300_olive_visorUp: tmtm_h_c1300_grey_visorUp
	{
		scope=2;
		displayName="C1300 (Olive/Visor Up)";
		picture="\tmtm\pack\headgear\Data\UI\tmtm_icon_c1300_grey_visorUp_ca.paa";
		hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_c1300_olive_co.paa"};
	};

	// Zenturion C1300 (Visor Down)
	class tmtm_h_c1300_grey_visorDown: ItemCore
	{
		author="Trenchgun";
		scope=2;
		displayName="C1300 (Grey/Visor Down)";
		descriptionShort = "VPAM APR Level 3";
		picture="\tmtm\pack\headgear\Data\UI\tmtm_icon_c1300_grey_visorDown_ca.paa";
		model="\tmtm\pack\headgear\tmtm_c1300_visorDown.p3d";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_c1300_grey_co.paa"};
		class ItemInfo: HeadgearItem
		{
			mass=45;
			uniformModel="\tmtm\pack\headgear\tmtm_c1300_visorDown.p3d";
			modelSides[]={6};
			hiddenSelections[]={"camo"};
			hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_c1300_grey_co.paa"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.1;
				};
				class Face
				{
					hitpointName="HitFace";
					armor=10;
					passThrough=0.1;
				};
			};
		};
	};
	class tmtm_h_c1300_black_visorDown: tmtm_h_c1300_grey_visorDown
	{
		scope=2;
		displayName="C1300 (Black/Visor Down)";
		picture="\tmtm\pack\headgear\Data\UI\tmtm_icon_c1300_grey_visorDown_ca.paa";
		hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_c1300_black_co.paa"};
	};
	class tmtm_h_c1300_blue_visorDown: tmtm_h_c1300_grey_visorDown
	{
		scope=2;
		displayName="C1300 (Blue/Visor Down)";
		picture="\tmtm\pack\headgear\Data\UI\tmtm_icon_c1300_grey_visorDown_ca.paa";
		hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_c1300_blue_co.paa"};
	};
	class tmtm_h_c1300_csat_visorDown: tmtm_h_c1300_grey_visorDown
	{
		scope=2;
		displayName="C1300 (CSAT/Visor Down)";
		picture="\tmtm\pack\headgear\Data\UI\tmtm_icon_c1300_grey_visorDown_ca.paa";
		hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_c1300_csat_co.paa"};
	};
	class tmtm_h_c1300_csatArid_visorDown: tmtm_h_c1300_grey_visorDown
	{
		scope=2;
		displayName="C1300 (CSAT Arid/Visor Down)";
		picture="\tmtm\pack\headgear\Data\UI\tmtm_icon_c1300_grey_visorDown_ca.paa";
		hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_c1300_csatArid_co.paa"};
	};
	class tmtm_h_c1300_ldf_visorDown: tmtm_h_c1300_grey_visorDown
	{
		scope=2;
		displayName="C1300 (LDF/Visor Down)";
		picture="\tmtm\pack\headgear\Data\UI\tmtm_icon_c1300_grey_visorDown_ca.paa";
		hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_c1300_ldf_co.paa"};
	};
	class tmtm_h_c1300_mtp_visorDown: tmtm_h_c1300_grey_visorDown
	{
		scope=2;
		displayName="C1300 (MTP/Visor Down)";
		picture="\tmtm\pack\headgear\Data\UI\tmtm_icon_c1300_grey_visorDown_ca.paa";
		hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_c1300_mtp_co.paa"};
	};
	class tmtm_h_c1300_multicamBlack_visorDown: tmtm_h_c1300_grey_visorDown
	{
		scope=2;
		displayName="C1300 (Multicam Black/Visor Down)";
		picture="\tmtm\pack\headgear\Data\UI\tmtm_icon_c1300_grey_visorDown_ca.paa";
		hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_c1300_multicamBlack_co.paa"};
	};
	class tmtm_h_c1300_olive_visorDown: tmtm_h_c1300_grey_visorDown
	{
		scope=2;
		displayName="C1300 (Olive/Visor Down)";
		picture="\tmtm\pack\headgear\Data\UI\tmtm_icon_c1300_grey_visorDown_ca.paa";
		hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_c1300_olive_co.paa"};
	};
	
	
	// K6-3 Helmet
	class tmtm_h_k6_teal: ItemCore
	{
		author="Trenchgun";
		scope=2;
		displayName="K6-3 (Teal)";
		descriptionShort = "GOST Level 2";
		picture="\tmtm\pack\headgear\Data\UI\tmtm_icon_k6_teal_ca.paa";
		model="\tmtm\pack\headgear\tmtm_k6.p3d";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_teal_co.paa"};
		class ItemInfo: HeadgearItem
		{
			mass=45;
			uniformModel="\tmtm\pack\headgear\tmtm_k6.p3d";
			modelSides[]={6};
			hiddenSelections[]={"camo"};
			hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_teal_co.paa"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.1;
				};
			};
		};
	};
	class tmtm_h_k6_black: tmtm_h_k6_teal
	{
		scope=2;
		displayName="K6-3 (Black)";
		hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_black_co.paa"};
		picture="\tmtm\pack\headgear\Data\UI\tmtm_icon_k6_teal_ca.paa";
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_black_co.paa"};
		};
	};
	class tmtm_h_k6_emr: tmtm_h_k6_teal
	{
		scope=2;
		displayName="K6-3 (EMR)";
		hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_emr_co.paa"};
		picture="\tmtm\pack\headgear\Data\UI\tmtm_icon_k6_teal_ca.paa";
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_emr_co.paa"};
		};
	};
	class tmtm_h_k6_izlom: tmtm_h_k6_teal
	{
		scope=2;
		displayName="K6-3 (Izlom)";
		hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_izlom_co.paa"};
		picture="\tmtm\pack\headgear\Data\UI\tmtm_icon_k6_teal_ca.paa";
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_izlom_co.paa"};
		};
	};
	class tmtm_h_k6_csat: tmtm_h_k6_teal
	{
		scope=2;
		displayName="K6-3 (CSAT)";
		hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_csat_co.paa"};
		picture="\tmtm\pack\headgear\Data\UI\tmtm_icon_k6_teal_ca.paa";
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_csat_co.paa"};
		};
	};
	class tmtm_h_k6_csatArid: tmtm_h_k6_teal
	{
		scope=2;
		displayName="K6-3 (CSAT Arid)";
		hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_csatArid_co.paa"};
		picture="\tmtm\pack\headgear\Data\UI\tmtm_icon_k6_teal_ca.paa";
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_csatArid_co.paa"};
		};
	};
	class tmtm_h_k6_ldf: tmtm_h_k6_teal
	{
		scope=2;
		displayName="K6-3 (LDF)";
		hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_ldf_co.paa"};
		picture="\tmtm\pack\headgear\Data\UI\tmtm_icon_k6_teal_ca.paa";
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_ldf_co.paa"};
		};
	};
	class tmtm_h_k6_mtp: tmtm_h_k6_teal
	{
		scope=2;
		displayName="K6-3 (MTP)";
		hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_mtp_co.paa"};
		picture="\tmtm\pack\headgear\Data\UI\tmtm_icon_k6_teal_ca.paa";
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_mtp_co.paa"};
		};
	};
	class tmtm_h_k6_mm14: tmtm_h_k6_teal
	{
		scope=2;
		displayName="K6-3 (MM14)";
		hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_mm14_co.paa"};
		picture="\tmtm\pack\headgear\Data\UI\tmtm_icon_k6_teal_ca.paa";
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_mm14_co.paa"};
		};
	};
	class tmtm_h_k6_multicamBlack: tmtm_h_k6_teal
	{
		scope=2;
		displayName="K6-3 (Multicam Black)";
		hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_multicamBlack_co.paa"};
		picture="\tmtm\pack\headgear\Data\UI\tmtm_icon_k6_teal_ca.paa";
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_multicamBlack_co.paa"};
		};
	};
	class tmtm_h_k6_olive: tmtm_h_k6_teal
	{
		scope=2;
		displayName="K6-3 (Olive)";
		hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_olive_co.paa"};
		picture="\tmtm\pack\headgear\Data\UI\tmtm_icon_k6_teal_ca.paa";
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_olive_co.paa"};
		};
	};
	class tmtm_h_k6_partizan: tmtm_h_k6_teal
	{
		scope=2;
		displayName="K6-3 (Partizan)";
		hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_partizan_co.paa"};
		picture="\tmtm\pack\headgear\Data\UI\tmtm_icon_k6_teal_ca.paa";
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_partizan_co.paa"};
		};
	};
	class tmtm_h_k6_ranger: tmtm_h_k6_teal
	{
		scope=2;
		displayName="K6-3 (Ranger)";
		hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_ranger_co.paa"};
		picture="\tmtm\pack\headgear\Data\UI\tmtm_icon_k6_teal_ca.paa";
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_ranger_co.paa"};
		};
	};
	class tmtm_h_k6_skol: tmtm_h_k6_teal
	{
		scope=2;
		displayName="K6-3 (Skol)";
		hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_skol_co.paa"};
		picture="\tmtm\pack\headgear\Data\UI\tmtm_icon_k6_teal_ca.paa";
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_skol_co.paa"};
		};
	};
	class tmtm_h_k6_surpat: tmtm_h_k6_teal
	{
		scope=2;
		displayName="K6-3 (SURPAT)";
		hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_surpat_co.paa"};
		picture="\tmtm\pack\headgear\Data\UI\tmtm_icon_k6_teal_ca.paa";
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_surpat_co.paa"};
		};
	};
	class tmtm_h_k6_cpd_ameba: tmtm_h_k6_teal
	{
		scope=2;
		displayName="CPD K6-3 (Ameba)";
		hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_cpd_ameba_co.paa"};
		picture="\tmtm\pack\headgear\Data\UI\icon_tmtm_h_k6_cpd_ameba_ca.paa";
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_cpd_ameba_co.paa"};
		};
	};
	class tmtm_h_k6_cpd_black: tmtm_h_k6_teal
	{
		scope=2;
		displayName="CPD K6-3 (Black)";
		hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_cpd_black_co.paa"};
		picture="\tmtm\pack\headgear\Data\UI\icon_tmtm_h_k6_cpd_black_ca.paa";
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_cpd_black_co.paa"};
		};
	};
	class tmtm_h_k6_cpd_dubokb: tmtm_h_k6_teal
	{
		scope=2;
		displayName="CPD K6-3 (Dubok Blue)";
		hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_cpd_dubokb_co.paa"};
		picture="\tmtm\pack\headgear\Data\UI\icon_tmtm_h_k6_cpd_dubokb_ca.paa";
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_cpd_dubokb_co.paa"};
		};
	};
	class tmtm_h_k6_cpd_dubokgb: tmtm_h_k6_teal
	{
		scope=2;
		displayName="CPD K6-3 (Dubok Gray)";
		hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_cpd_dubokgb_co.paa"};
		picture="\tmtm\pack\headgear\Data\UI\icon_tmtm_h_k6_cpd_dubokgb_ca.paa";
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_cpd_dubokgb_co.paa"};
		};
	};
	class tmtm_h_k6_cpd_olive: tmtm_h_k6_teal
	{
		scope=2;
		displayName="CPD K6-3 (Olive)";
		hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_cpd_olive_co.paa"};
		picture="\tmtm\pack\headgear\Data\UI\icon_tmtm_h_k6_cpd_olive_ca.paa";
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_cpd_olive_co.paa"};
		};
	};

	// K6-3 (Visor Up)
	class tmtm_h_k6_teal_visorUp: ItemCore
	{
		author="Trenchgun";
		scope=2;
		displayName="K6-3 (Teal/Visor Up)";
		descriptionShort = "GOST Level 2";
		picture="\tmtm\pack\headgear\Data\UI\tmtm_icon_k6_teal_visorUp_ca.paa";
		model="\tmtm\pack\headgear\tmtm_k6_visorUp.p3d";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_teal_co.paa"};
		class ItemInfo: HeadgearItem
		{
			mass=45;
			uniformModel="\tmtm\pack\headgear\tmtm_k6_visorUp.p3d";
			modelSides[]={6};
			hiddenSelections[]={"camo"};
			hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_teal_co.paa"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.1;
				};
			};
		};
	};
	class tmtm_h_k6_black_visorUp: tmtm_h_k6_teal_visorUp
	{
		scope=2;
		displayName="K6-3 (Black/Visor Up)";
		hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_black_co.paa"};
		picture="\tmtm\pack\headgear\Data\UI\tmtm_icon_k6_teal_visorUp_ca.paa";
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_black_co.paa"};
		};
	};
	class tmtm_h_k6_emr_visorUp: tmtm_h_k6_teal_visorUp
	{
		scope=2;
		displayName="K6-3 (EMR/Visor Up)";
		hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_emr_co.paa"};
		picture="\tmtm\pack\headgear\Data\UI\tmtm_icon_k6_teal_visorUp_ca.paa";
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_emr_co.paa"};
		};
	};
	class tmtm_h_k6_izlom_visorUp: tmtm_h_k6_teal_visorUp
	{
		scope=2;
		displayName="K6-3 (Izlom/Visor Up)";
		hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_izlom_co.paa"};
		picture="\tmtm\pack\headgear\Data\UI\tmtm_icon_k6_teal_visorUp_ca.paa";
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_izlom_co.paa"};
		};
	};
	class tmtm_h_k6_csat_visorUp: tmtm_h_k6_teal_visorUp
	{
		scope=2;
		displayName="K6-3 (CSAT/Visor Up)";
		hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_csat_co.paa"};
		picture="\tmtm\pack\headgear\Data\UI\tmtm_icon_k6_teal_visorUp_ca.paa";
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_csat_co.paa"};
		};
	};
	class tmtm_h_k6_csatArid_visorUp: tmtm_h_k6_teal_visorUp
	{
		scope=2;
		displayName="K6-3 (CSAT Arid/Visor Up)";
		hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_csatArid_co.paa"};
		picture="\tmtm\pack\headgear\Data\UI\tmtm_icon_k6_teal_visorUp_ca.paa";
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_csatArid_co.paa"};
		};
	};
	class tmtm_h_k6_ldf_visorUp: tmtm_h_k6_teal_visorUp
	{
		scope=2;
		displayName="K6-3 (LDF/Visor Up)";
		hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_ldf_co.paa"};
		picture="\tmtm\pack\headgear\Data\UI\tmtm_icon_k6_teal_visorUp_ca.paa";
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_ldf_co.paa"};
		};
	};
	class tmtm_h_k6_mtp_visorUp: tmtm_h_k6_teal_visorUp
	{
		scope=2;
		displayName="K6-3 (MTP/Visor Up)";
		hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_mtp_co.paa"};
		picture="\tmtm\pack\headgear\Data\UI\tmtm_icon_k6_teal_visorUp_ca.paa";
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_mtp_co.paa"};
		};
	};
	class tmtm_h_k6_mm14_visorUp: tmtm_h_k6_teal_visorUp
	{
		scope=2;
		displayName="K6-3 (MM14/Visor Up)";
		hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_mm14_co.paa"};
		picture="\tmtm\pack\headgear\Data\UI\tmtm_icon_k6_teal_visorUp_ca.paa";
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_mm14_co.paa"};
		};
	};
	class tmtm_h_k6_multicamBlack_visorUp: tmtm_h_k6_teal_visorUp
	{
		scope=2;
		displayName="K6-3 (Multicam Black/Visor Up)";
		hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_multicamBlack_co.paa"};
		picture="\tmtm\pack\headgear\Data\UI\tmtm_icon_k6_teal_visorUp_ca.paa";
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_multicamBlack_co.paa"};
		};
	};
	class tmtm_h_k6_olive_visorUp: tmtm_h_k6_teal_visorUp
	{
		scope=2;
		displayName="K6-3 (Olive/Visor Up)";
		hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_olive_co.paa"};
		picture="\tmtm\pack\headgear\Data\UI\tmtm_icon_k6_teal_visorUp_ca.paa";
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_olive_co.paa"};
		};
	};
	class tmtm_h_k6_partizan_visorUp: tmtm_h_k6_teal_visorUp
	{
		scope=2;
		displayName="K6-3 (Partizan/Visor Up)";
		hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_partizan_co.paa"};
		picture="\tmtm\pack\headgear\Data\UI\tmtm_icon_k6_teal_visorUp_ca.paa";
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_partizan_co.paa"};
		};
	};
	class tmtm_h_k6_ranger_visorUp: tmtm_h_k6_teal_visorUp
	{
		scope=2;
		displayName="K6-3 (Ranger/Visor Up)";
		hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_ranger_co.paa"};
		picture="\tmtm\pack\headgear\Data\UI\tmtm_icon_k6_teal_visorUp_ca.paa";
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_ranger_co.paa"};
		};
	};
	class tmtm_h_k6_skol_visorUp: tmtm_h_k6_teal_visorUp
	{
		scope=2;
		displayName="K6-3 (Skol/Visor Up)";
		hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_skol_co.paa"};
		picture="\tmtm\pack\headgear\Data\UI\tmtm_icon_k6_teal_visorUp_ca.paa";
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_skol_co.paa"};
		};
	};
	class tmtm_h_k6_surpat_visorUp: tmtm_h_k6_teal_visorUp
	{
		scope=2;
		displayName="K6-3 (SURPAT/Visor Up)";
		hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_surpat_co.paa"};
		picture="\tmtm\pack\headgear\Data\UI\tmtm_icon_k6_teal_visorUp_ca.paa";
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_surpat_co.paa"};
		};
	};
	class tmtm_h_k6_cpd_ameba_visorUp: tmtm_h_k6_teal_visorUp
	{
		scope=2;
		displayName="CPD K6-3 (Ameba/Visor Up)";
		hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_cpd_ameba_visor_co.paa"};
		picture="\tmtm\pack\headgear\Data\UI\icon_tmtm_h_k6_cpd_ameba_visorUp_ca.paa";
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_cpd_ameba_visor_co.paa"};
		};
	};
	class tmtm_h_k6_cpd_black_visorUp: tmtm_h_k6_teal_visorUp
	{
		scope=2;
		displayName="CPD K6-3 (Black/Visor Up)";
		hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_cpd_black_visor_co.paa"};
		picture="\tmtm\pack\headgear\Data\UI\icon_tmtm_h_k6_cpd_black_visorUp_ca.paa";
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_cpd_black_visor_co.paa"};
		};
	};
	class tmtm_h_k6_cpd_dubokb_visorUp: tmtm_h_k6_teal_visorUp
	{
		scope=2;
		displayName="CPD K6-3 (Dubok Blue/Visor Up)";
		hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_cpd_dubokb_visor_co.paa"};
		picture="\tmtm\pack\headgear\Data\UI\icon_tmtm_h_k6_cpd_dubokb_visorUp_ca.paa";
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_cpd_dubokb_visor_co.paa"};
		};
	};
	class tmtm_h_k6_cpd_dubokgb_visorUp: tmtm_h_k6_teal_visorUp
	{
		scope=2;
		displayName="CPD K6-3 (Dubok Gray/Visor Up)";
		hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_cpd_dubokgb_visor_co.paa"};
		picture="\tmtm\pack\headgear\Data\UI\icon_tmtm_h_k6_cpd_dubokgb_visorUp_ca.paa";
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_cpd_dubokgb_visor_co.paa"};
		};
	};
	class tmtm_h_k6_cpd_olive_visorUp: tmtm_h_k6_teal_visorUp
	{
		scope=2;
		displayName="CPD K6-3 (Olive/Visor Up)";
		hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_cpd_olive_visor_co.paa"};
		picture="\tmtm\pack\headgear\Data\UI\icon_tmtm_h_k6_cpd_olive_visorUp_ca.paa";
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_cpd_olive_visor_co.paa"};
		};
	};

	// K6-3 (Visor Down)
	class tmtm_h_k6_teal_visorDown: ItemCore
	{
		author="Trenchgun";
		scope=2;
		displayName="K6-3 (Teal/Visor Down)";
		descriptionShort = "GOST Level 2";
		picture="\tmtm\pack\headgear\Data\UI\tmtm_icon_k6_teal_visorDown_ca.paa";
		model="\tmtm\pack\headgear\tmtm_k6_visorDown.p3d";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_teal_co.paa"};
		class ItemInfo: HeadgearItem
		{
			mass=45;
			uniformModel="\tmtm\pack\headgear\tmtm_k6_visorDown.p3d";
			modelSides[]={6};
			hiddenSelections[]={"camo"};
			hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_teal_co.paa"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.1;
				};
				class Face
				{
					hitpointName="HitFace";
					armor=10;
					passThrough=0.1;
				};
			};
		};
	};
	class tmtm_h_k6_black_visorDown: tmtm_h_k6_teal_visorDown
	{
		scope=2;
		displayName="K6-3 (Black/Visor Down)";
		hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_black_co.paa"};
		picture="\tmtm\pack\headgear\Data\UI\tmtm_icon_k6_teal_visorDown_ca.paa";
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_black_co.paa"};
		};
	};
	class tmtm_h_k6_emr_visorDown: tmtm_h_k6_teal_visorDown
	{
		scope=2;
		displayName="K6-3 (EMR/Visor Down)";
		hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_emr_co.paa"};
		picture="\tmtm\pack\headgear\Data\UI\tmtm_icon_k6_teal_visorDown_ca.paa";
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_emr_co.paa"};
		};
	};
	class tmtm_h_k6_izlom_visorDown: tmtm_h_k6_teal_visorDown
	{
		scope=2;
		displayName="K6-3 (Izlom/Visor Down)";
		hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_izlom_co.paa"};
		picture="\tmtm\pack\headgear\Data\UI\tmtm_icon_k6_teal_visorDown_ca.paa";
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_izlom_co.paa"};
		};
	};
	class tmtm_h_k6_csat_visorDown: tmtm_h_k6_teal_visorDown
	{
		scope=2;
		displayName="K6-3 (CSAT/Visor Down)";
		hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_csat_co.paa"};
		picture="\tmtm\pack\headgear\Data\UI\tmtm_icon_k6_teal_visorDown_ca.paa";
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_csat_co.paa"};
		};
	};
	class tmtm_h_k6_csatArid_visorDown: tmtm_h_k6_teal_visorDown
	{
		scope=2;
		displayName="K6-3 (CSAT Arid/Visor Down)";
		hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_csatArid_co.paa"};
		picture="\tmtm\pack\headgear\Data\UI\tmtm_icon_k6_teal_visorDown_ca.paa";
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_csatArid_co.paa"};
		};
	};
	class tmtm_h_k6_ldf_visorDown: tmtm_h_k6_teal_visorDown
	{
		scope=2;
		displayName="K6-3 (LDF/Visor Down)";
		hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_ldf_co.paa"};
		picture="\tmtm\pack\headgear\Data\UI\tmtm_icon_k6_teal_visorDown_ca.paa";
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_ldf_co.paa"};
		};
	};
	class tmtm_h_k6_mtp_visorDown: tmtm_h_k6_teal_visorDown
	{
		scope=2;
		displayName="K6-3 (MTP/Visor Down)";
		hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_mtp_co.paa"};
		picture="\tmtm\pack\headgear\Data\UI\tmtm_icon_k6_teal_visorDown_ca.paa";
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_mtp_co.paa"};
		};
	};
	class tmtm_h_k6_mm14_visorDown: tmtm_h_k6_teal_visorDown
	{
		scope=2;
		displayName="K6-3 (MM14/Visor Down)";
		hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_mm14_co.paa"};
		picture="\tmtm\pack\headgear\Data\UI\tmtm_icon_k6_teal_visorDown_ca.paa";
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_mm14_co.paa"};
		};
	};
	class tmtm_h_k6_multicamBlack_visorDown: tmtm_h_k6_teal_visorDown
	{
		scope=2;
		displayName="K6-3 (Multicam Black/Visor Down)";
		hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_multicamBlack_co.paa"};
		picture="\tmtm\pack\headgear\Data\UI\tmtm_icon_k6_teal_visorDown_ca.paa";
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_multicamBlack_co.paa"};
		};
	};
	class tmtm_h_k6_olive_visorDown: tmtm_h_k6_teal_visorDown
	{
		scope=2;
		displayName="K6-3 (Olive/Visor Down)";
		hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_olive_co.paa"};
		picture="\tmtm\pack\headgear\Data\UI\tmtm_icon_k6_teal_visorDown_ca.paa";
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_olive_co.paa"};
		};
	};
	class tmtm_h_k6_partizan_visorDown: tmtm_h_k6_teal_visorDown
	{
		scope=2;
		displayName="K6-3 (Partizan/Visor Down)";
		hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_partizan_co.paa"};
		picture="\tmtm\pack\headgear\Data\UI\tmtm_icon_k6_teal_visorDown_ca.paa";
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_partizan_co.paa"};
		};
	};
	class tmtm_h_k6_ranger_visorDown: tmtm_h_k6_teal_visorDown
	{
		scope=2;
		displayName="K6-3 (Ranger/Visor Down)";
		hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_ranger_co.paa"};
		picture="\tmtm\pack\headgear\Data\UI\tmtm_icon_k6_teal_visorDown_ca.paa";
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_ranger_co.paa"};
		};
	};
	class tmtm_h_k6_skol_visorDown: tmtm_h_k6_teal_visorDown
	{
		scope=2;
		displayName="K6-3 (Skol/Visor Down)";
		hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_skol_co.paa"};
		picture="\tmtm\pack\headgear\Data\UI\tmtm_icon_k6_teal_visorDown_ca.paa";
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_skol_co.paa"};
		};
	};
	class tmtm_h_k6_surpat_visorDown: tmtm_h_k6_teal_visorDown
	{
		scope=2;
		displayName="K6-3 (SURPAT/Visor Down)";
		hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_surpat_co.paa"};
		picture="\tmtm\pack\headgear\Data\UI\tmtm_icon_k6_teal_visorDown_ca.paa";
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_surpat_co.paa"};
		};
	};
	class tmtm_h_k6_cpd_ameba_visorDown: tmtm_h_k6_teal_visorDown
	{
		scope=2;
		displayName="CPD K6-3 (Ameba/Visor Down)";
		hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_cpd_ameba_visor_co.paa"};
		picture="\tmtm\pack\headgear\Data\UI\icon_tmtm_h_k6_cpd_ameba_visorDown_ca.paa";
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_cpd_ameba_visor_co.paa"};
		};
	};
	class tmtm_h_k6_cpd_black_visorDown: tmtm_h_k6_teal_visorDown
	{
		scope=2;
		displayName="CPD K6-3 (Black/Visor Down)";
		hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_cpd_black_visor_co.paa"};
		picture="\tmtm\pack\headgear\Data\UI\icon_tmtm_h_k6_cpd_black_visorDown_ca.paa";
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_cpd_black_visor_co.paa"};
		};
	};
	class tmtm_h_k6_cpd_dubokb_visorDown: tmtm_h_k6_teal_visorDown
	{
		scope=2;
		displayName="CPD K6-3 (Dubok Blue/Visor Down)";
		hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_cpd_dubokb_visor_co.paa"};
		picture="\tmtm\pack\headgear\Data\UI\icon_tmtm_h_k6_cpd_dubokb_visorDown_ca.paa";
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_cpd_dubokb_visor_co.paa"};
		};
	};
	class tmtm_h_k6_cpd_dubokgb_visorDown: tmtm_h_k6_teal_visorDown
	{
		scope=2;
		displayName="CPD K6-3 (Dubok Gray/Visor Down)";
		hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_cpd_dubokgb_visor_co.paa"};
		picture="\tmtm\pack\headgear\Data\UI\icon_tmtm_h_k6_cpd_dubokgb_visorDown_ca.paa";
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_cpd_dubokgb_visor_co.paa"};
		};
	};
	class tmtm_h_k6_cpd_olive_visorDown: tmtm_h_k6_teal_visorDown
	{
		scope=2;
		displayName="CPD K6-3 (Olive/Visor Down)";
		hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_cpd_olive_visor_co.paa"};
		picture="\tmtm\pack\headgear\Data\UI\icon_tmtm_h_k6_cpd_olive_visorDown_ca.paa";
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_cpd_olive_visor_co.paa"};
		};
	};

	// Maritime Fast Helmet
	class tmtm_h_fast_mt_base: ItemCore
	{
		author="Trenchgun";
		scope=0;
		displayName="Maritime FAST Base";
		descriptionShort = "NIJ Level III";
		picture="";
		model="\tmtm\pack\headgear\tmtm_fast_mt.p3d";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={
			"\tmtm\pack\headgear\Data\tmtm_fast_mt_helmet_olive_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=45;
			uniformModel="\tmtm\pack\headgear\tmtm_fast_mt.p3d";
			modelSides[]={6};
			hiddenSelections[]={"camo"};
			hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_fast_mt_helmet_olive_co.paa"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.1;
				};
			};
		};
	};
	class tmtm_h_fast_mt_cover_base: tmtm_h_fast_mt_base
	{
		author="Trenchgun";
		scope=0;
		displayName="Maritime FAST Cover Base";
		descriptionShort = "NIJ Level III";
		picture="";
		model="\tmtm\pack\headgear\tmtm_fast_mt_cover.p3d";
		hiddenSelections[]={"camo", "camoCover"};
		hiddenSelectionsTextures[]={
			"\tmtm\pack\headgear\Data\tmtm_fast_mt_helmet_olive_co.paa", 
			"\tmtm\pack\headgear\Data\tmtm_fast_mt_cover_olive_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=45;
			uniformModel="\tmtm\pack\headgear\tmtm_fast_mt_cover.p3d";
			modelSides[]={6};
			hiddenSelections[]={"camo", "camoCover"};
			hiddenSelectionsTextures[]={
				"\tmtm\pack\headgear\Data\tmtm_fast_mt_helmet_olive_co.paa", 
				"\tmtm\pack\headgear\Data\tmtm_fast_mt_cover_olive_co.paa"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.1;
				};
			};
		};
	};
	class tmtm_h_fast_mt_headset_base: tmtm_h_fast_mt_base
	{
		author="Trenchgun";
		scope=0;
		displayName="Maritime FAST Headset Base";
		descriptionShort = "NIJ Level III";
		picture="";
		model="\tmtm\pack\headgear\tmtm_fast_mt_headset.p3d";
		hiddenSelections[]={"camo", "camoHeadset"};
		hiddenSelectionsTextures[]={
			"\tmtm\pack\headgear\Data\tmtm_fast_mt_helmet_olive_co.paa", 
			"\tmtm\pack\headgear\Data\tmtm_fast_mt_headset_olive_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=45;
			uniformModel="\tmtm\pack\headgear\tmtm_fast_mt_headset.p3d";
			modelSides[]={6};
			hiddenSelections[]={"camo", "camoHeadset"};
			hiddenSelectionsTextures[]={
				"\tmtm\pack\headgear\Data\tmtm_fast_mt_helmet_olive_co.paa", 
				"\tmtm\pack\headgear\Data\tmtm_fast_mt_headset_olive_co.paa"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.1;
				};
			};
		};
	};
	class tmtm_h_fast_mt_cover_headset_base: tmtm_h_fast_mt_base
	{
		author="Trenchgun";
		scope=0;
		displayName="Maritime FAST Cover/Headset Base";
		descriptionShort = "NIJ Level III";
		picture="";
		model="\tmtm\pack\headgear\tmtm_fast_mt_cover_headset.p3d";
		hiddenSelections[]={"camo", "camoHeadset", "camoCover", "camoPatchRight"};
		hiddenSelectionsTextures[]={
			"\tmtm\pack\headgear\Data\tmtm_fast_mt_helmet_olive_co.paa", 
			"\tmtm\pack\headgear\Data\tmtm_fast_mt_headset_olive_co.paa", 
			"\tmtm\pack\headgear\Data\tmtm_fast_mt_cover_olive_co.paa",
			"\tmtm\pack\headgear\Data\tmtm_fast_mt_patch_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=45;
			uniformModel="\tmtm\pack\headgear\tmtm_fast_mt_cover_headset.p3d";
			modelSides[]={6};
			hiddenSelections[]={"camo", "camoHeadset", "camoCover"};
			hiddenSelectionsTextures[]={
				"\tmtm\pack\headgear\Data\tmtm_fast_mt_helmet_olive_co.paa", 
				"\tmtm\pack\headgear\Data\tmtm_fast_mt_headset_olive_co.paa", 
				"\tmtm\pack\headgear\Data\tmtm_fast_mt_patch_co.paa"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.1;
				};
			};
		};
	};
	class tmtm_h_fast_mt_olive: tmtm_h_fast_mt_base
	{
		scope=2;
		displayName="FAST MT (Olive)";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\headgear\Data\tmtm_fast_mt_helmet_olive_co.paa"
		};
		picture="";
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]={
				"\tmtm\pack\headgear\Data\tmtm_fast_mt_helmet_olive_co.paa"
			};
		};
	};
	class tmtm_h_fast_mt_cover_olive: tmtm_h_fast_mt_cover_base
	{
		scope=2;
		displayName="FAST MT Cover (Olive)";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\headgear\Data\tmtm_fast_mt_helmet_olive_co.paa", 
			"\tmtm\pack\headgear\Data\tmtm_fast_mt_cover_olive_co.paa"
		};
		picture="";
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]={
				"\tmtm\pack\headgear\Data\tmtm_fast_mt_helmet_olive_co.paa", 
				"\tmtm\pack\headgear\Data\tmtm_fast_mt_cover_olive_co.paa"
			};
		};
	};
	class tmtm_h_fast_mt_headset_olive: tmtm_h_fast_mt_headset_base
	{
		scope=2;
		displayName="FAST MT Headset (Olive)";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\headgear\Data\tmtm_fast_mt_helmet_olive_co.paa", 
			"\tmtm\pack\headgear\Data\tmtm_fast_mt_headset_olive_co.paa"
		};
		picture="";
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]={
				"\tmtm\pack\headgear\Data\tmtm_fast_mt_helmet_olive_co.paa", 
				"\tmtm\pack\headgear\Data\tmtm_fast_mt_headset_olive_co.paa"
			};
		};
	};
	class tmtm_h_fast_mt_cover_headset_olive: tmtm_h_fast_mt_cover_headset_base
	{
		scope=2;
		displayName="FAST MT Cover/Headset (Olive)";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\headgear\Data\tmtm_fast_mt_helmet_olive_co.paa", 
			"\tmtm\pack\headgear\Data\tmtm_fast_mt_headset_olive_co.paa",
			"\tmtm\pack\headgear\Data\tmtm_fast_mt_cover_olive_co.paa",
			"\tmtm\pack\headgear\Data\tmtm_fast_mt_patch_co.paa"
		};
		picture="";
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]={
			"\tmtm\pack\headgear\Data\tmtm_fast_mt_helmet_olive_co.paa", 
			"\tmtm\pack\headgear\Data\tmtm_fast_mt_headset_olive_co.paa",
			"\tmtm\pack\headgear\Data\tmtm_fast_mt_cover_olive_co.paa",
			"\tmtm\pack\headgear\Data\tmtm_fast_mt_patch_co.paa"
		};
		};
	};
};