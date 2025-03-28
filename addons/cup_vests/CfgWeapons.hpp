class CfgWeapons 
{
	class ItemCore;
	class Vest_Camo_Base: ItemCore
	{
		class ItemInfo;
	};
	
	// 6b3 + Pioneer
	class CUP_Vest_RUS_Camo_Base;
	class CUP_V_RUS_6B3_1: CUP_Vest_RUS_Camo_Base 	// GP leg strap
	{
		class ItemInfo;
	};
	class CUP_V_RUS_6B3_2: CUP_Vest_RUS_Camo_Base	// AT variant
	{
		class ItemInfo;
	};
	class CUP_V_RUS_6B3_3: CUP_Vest_RUS_Camo_Base	// MG variant
	{
		class ItemInfo;
	};
	class CUP_V_RUS_6B3_4: CUP_Vest_RUS_Camo_Base	// empty
	{
		class ItemInfo;
	};
	
	// 6B3 (Brown)
	class tmtm_v_6b3PioneerGL_brown: CUP_V_RUS_6B3_1
	{
		displayName = "6B3 (Brown)";
		scope=2;
		scopeArsenal=2;
		hiddenSelectionsTextures[]=
		{
			//"\tmtm\pack\cup_vests\Data\tmtm_6b3_equipment_tan_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_sla\data\m23_tan_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b3_vest_tan_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_sla\data\m23_tan_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b3_vest_tan_co.paa"
			};
		};
	};
	class tmtm_v_6b3PioneerAT_brown: CUP_V_RUS_6B3_2
	{
		displayName = "6B3 AT (Brown)";
		scope=2;
		scopeArsenal=2;
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_sla\data\m23_tan_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b3_vest_tan_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_sla\data\m23_tan_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b3_vest_tan_co.paa"
			};
		};
	};
	class tmtm_v_6b3PioneerMG_brown: CUP_V_RUS_6B3_3
	{
		displayName = "6B3 MG (Brown)";
		scope=2;
		scopeArsenal=2;
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_sla\data\m23_tan_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b3_vest_tan_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_sla\data\m23_tan_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b3_vest_tan_co.paa"
			};
		};
	};
	class tmtm_v_6b3Pioneer_brown: CUP_V_RUS_6B3_4
	{
		displayName = "6B3 Empty (Brown)";
		scope=0;
		scopeArsenal=0;
		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\cup_vests\Data\tmtm_6b3_vest_tan_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"\tmtm\pack\cup_vests\Data\tmtm_6b3_vest_tan_co.paa"
			};
		};
	};
	
	// 6B3 (Olive)
	class tmtm_v_6b3PioneerGL_olive: CUP_V_RUS_6B3_1
	{
		displayName = "6B3 (Olive)";
		scope=2;
		scopeArsenal=2;
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_sla\data\m23_green_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b3_vest_olive_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_sla\data\m23_green_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b3_vest_olive_co.paa"
			};
		};
	};
	class tmtm_v_6b3PioneerAT_olive: CUP_V_RUS_6B3_2
	{
		displayName = "6B3 AT (Olive)";
		scope=2;
		scopeArsenal=2;
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_sla\data\m23_green_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b3_vest_olive_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_sla\data\m23_green_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b3_vest_olive_co.paa"
			};
		};
	};
	class tmtm_v_6b3PioneerMG_olive: CUP_V_RUS_6B3_3
	{
		displayName = "6B3 MG (Olive)";
		scope=2;
		scopeArsenal=2;
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_sla\data\m23_green_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b3_vest_olive_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_sla\data\m23_green_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b3_vest_olive_co.paa"
			};
		};
	};
	class tmtm_v_6b3Pioneer_olive: CUP_V_RUS_6B3_4
	{
		displayName = "6B3 Empty (Olive)";
		scope=0;
		scopeArsenal=0;
		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\cup_vests\Data\tmtm_6b3_vest_olive_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"\tmtm\pack\cup_vests\Data\tmtm_6b3_vest_olive_co.paa"
			};
		};
	};
	
	// 6B3 (Olive/Camo)
	class tmtm_v_6b3PioneerGL_oliveCamo: CUP_V_RUS_6B3_1
	{
		displayName = "6B3 (Olive/Camo)";
		scope=2;
		scopeArsenal=2;
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\data\equip_pioneer_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b3_vest_olive_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\data\equip_pioneer_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b3_vest_olive_co.paa"
			};
		};
	};
	class tmtm_v_6b3PioneerAT_oliveCamo: CUP_V_RUS_6B3_2
	{
		displayName = "6B3 AT (Olive/Camo)";
		scope=2;
		scopeArsenal=2;
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\data\equip_pioneer_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b3_vest_olive_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\data\equip_pioneer_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b3_vest_olive_co.paa"
			};
		};
	};
	class tmtm_v_6b3PioneerMG_oliveCamo: CUP_V_RUS_6B3_3
	{
		displayName = "6B3 MG (Olive/Camo)";
		scope=2;
		scopeArsenal=2;
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\data\equip_pioneer_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b3_vest_olive_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\data\equip_pioneer_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b3_vest_olive_co.paa"
			};
		};
	};
	
	// 6B3 (Olive/Takistani)
	class tmtm_v_6b3PioneerGL_oliveTaki: CUP_V_RUS_6B3_1
	{
		displayName = "6B3 (Olive/Takistani)";
		scope=2;
		scopeArsenal=2;
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Taki\data\tak_soldier_equip_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b3_vest_olive_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Taki\data\tak_soldier_equip_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b3_vest_olive_co.paa"
			};
		};
	};
	class tmtm_v_6b3PioneerAT_oliveTaki: CUP_V_RUS_6B3_2
	{
		displayName = "6B3 AT (Olive/Takistani)";
		scope=2;
		scopeArsenal=2;
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Taki\data\tak_soldier_equip_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b3_vest_olive_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Taki\data\tak_soldier_equip_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b3_vest_olive_co.paa"
			};
		};
	};
	class tmtm_v_6b3PioneerMG_oliveTaki: CUP_V_RUS_6B3_3
	{
		displayName = "6B3 MG (Olive/Takistani)";
		scope=2;
		scopeArsenal=2;
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Taki\data\tak_soldier_equip_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b3_vest_olive_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Taki\data\tak_soldier_equip_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b3_vest_olive_co.paa"
			};
		};
	};
	
	// 6B3 (Black/Olive)
	class tmtm_v_6b3PioneerGL_blackOlive: CUP_V_RUS_6B3_1
	{
		displayName = "6B3 (Black/Olive)";
		scope=2;
		scopeArsenal=2;
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_sla\data\m23_green_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b3_vest_black_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_sla\data\m23_green_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b3_vest_black_co.paa"
			};
		};
	};
	class tmtm_v_6b3PioneerAT_blackOlive: CUP_V_RUS_6B3_2
	{
		displayName = "6B3 AT (Black/Olive)";
		scope=2;
		scopeArsenal=2;
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_sla\data\m23_green_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b3_vest_black_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_sla\data\m23_green_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b3_vest_black_co.paa"
			};
		};
	};
	class tmtm_v_6b3PioneerMG_blackOlive: CUP_V_RUS_6B3_3
	{
		displayName = "6B3 MG (Black/Olive)";
		scope=2;
		scopeArsenal=2;
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_sla\data\m23_green_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b3_vest_black_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_sla\data\m23_green_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b3_vest_black_co.paa"
			};
		};
	};
	
	// 6B3 (Black/Tan)
	class tmtm_v_6b3PioneerGL_blackBrown: CUP_V_RUS_6B3_1
	{
		displayName = "6B3 (Black/Brown)";
		scope=2;
		scopeArsenal=2;
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_sla\data\m23_tan_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b3_vest_black_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_sla\data\m23_tan_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b3_vest_black_co.paa"
			};
		};
	};
	class tmtm_v_6b3PioneerAT_blackBrown: CUP_V_RUS_6B3_2
	{
		displayName = "6B3 AT (Black/Brown)";
		scope=2;
		scopeArsenal=2;
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_sla\data\m23_tan_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b3_vest_black_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_sla\data\m23_tan_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b3_vest_black_co.paa"
			};
		};
	};
	class tmtm_v_6b3PioneerMG_blackBrown: CUP_V_RUS_6B3_3
	{
		displayName = "6B3 MG (Black/Brown)";
		scope=2;
		scopeArsenal=2;
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_sla\data\m23_tan_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b3_vest_black_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_sla\data\m23_tan_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b3_vest_black_co.paa"
			};
		};
	};
	
	// 6B3 (Black/Camo)
	class tmtm_v_6b3PioneerGL_blackCamo: CUP_V_RUS_6B3_1
	{
		displayName = "6B3 (Black/Camo)";
		scope=2;
		scopeArsenal=2;
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\data\equip_pioneer_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b3_vest_black_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\data\equip_pioneer_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b3_vest_black_co.paa"
			};
		};
	};
	class tmtm_v_6b3PioneerAT_blackCamo: CUP_V_RUS_6B3_2
	{
		displayName = "6B3 AT (Black/Camo)";
		scope=2;
		scopeArsenal=2;
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\data\equip_pioneer_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b3_vest_black_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\data\equip_pioneer_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b3_vest_black_co.paa"
			};
		};
	};
	class tmtm_v_6b3PioneerMG_blackCamo: CUP_V_RUS_6B3_3
	{
		displayName = "6B3 MG (Black/Camo)";
		scope=2;
		scopeArsenal=2;
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\data\equip_pioneer_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b3_vest_black_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\data\equip_pioneer_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b3_vest_black_co.paa"
			};
		};
	};
	
	// 6B3 (Black/Takistani)
	class tmtm_v_6b3PioneerGL_blackTaki: CUP_V_RUS_6B3_1
	{
		displayName = "6B3 (Black/Takistani)";
		scope=2;
		scopeArsenal=2;
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Taki\data\tak_soldier_equip_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b3_vest_black_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Taki\data\tak_soldier_equip_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b3_vest_black_co.paa"
			};
		};
	};
	class tmtm_v_6b3PioneerAT_blackTaki: CUP_V_RUS_6B3_2
	{
		displayName = "6B3 AT (Black/Takistani)";
		scope=2;
		scopeArsenal=2;
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Taki\data\tak_soldier_equip_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b3_vest_black_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Taki\data\tak_soldier_equip_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b3_vest_black_co.paa"
			};
		};
	};
	class tmtm_v_6b3PioneerMG_blackTaki: CUP_V_RUS_6B3_3
	{
		displayName = "6B3 MG (Black/Takistani)";
		scope=2;
		scopeArsenal=2;
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Taki\data\tak_soldier_equip_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b3_vest_black_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Taki\data\tak_soldier_equip_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b3_vest_black_co.paa"
			};
		};
	};
	
	
	// 6b45 - retextures for this dont look great, abandoned for now
	/*
	class CUP_V_RUS_6B45_1;	// normal
	class CUP_V_RUS_6B45_2;	// deltoids
	class CUP_V_RUS_6B45_3;	// groin
	class CUP_V_RUS_6B45_4;	// deltoids + groin
	*/
	
	// ratnik
	class CUP_Vest_RUS_Camo_RatnikV2_Base;
	class CUP_Vest_RUS_6B45_Sh117: CUP_Vest_RUS_Camo_RatnikV2_Base
	{
		class ItemInfo;
		/*
		hiddenSelections[] = {"camo1","camo2","camo3","camo4","camo5","camo6","camo7"};
		hiddenSelectionsTextures[] = {
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\VEST_Front_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\vest_back_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\suharka_radio_pkp_vog_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\ak_granade_pouch_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\suharka_pkp_straps_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\pouch_straps_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\vest_straps_s_co.paa"
		};
		*/
	};
	class CUP_Vest_RUS_6B45_Sh117_Del: CUP_Vest_RUS_Camo_RatnikV2_Base
	{
		class ItemInfo;
		/*
		hiddenSelections[] = {"camo1","camo2","camo3","camo4","camo5","camo6","camo7","camo8"};
		hiddenSelectionsTextures[] = {
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\VEST_Front_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\vest_back_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\suharka_radio_pkp_vog_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\ak_granade_pouch_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\suharka_pkp_straps_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\pouch_straps_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\vest_straps_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\Full_armor_s_co.paa"
		};
		*/
	};
	class CUP_Vest_RUS_6B45_Sh117_Del_Nut: CUP_Vest_RUS_Camo_RatnikV2_Base
	{
		class ItemInfo;
		/*
		hiddenSelections[] = {"camo1","camo2","camo3","camo4","camo5","camo6","camo7","camo8"};
		hiddenSelectionsTextures[] = {
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\VEST_Front_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\vest_back_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\suharka_radio_pkp_vog_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\ak_granade_pouch_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\suharka_pkp_straps_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\pouch_straps_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\vest_straps_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\Full_armor_s_co.paa"
		};
		*/
	};
	class CUP_Vest_RUS_6B45_Sh117_Full: CUP_Vest_RUS_Camo_RatnikV2_Base
	{
		class ItemInfo;
		/*
		hiddenSelections[] = {"camo1","camo2","camo3","camo4","camo5","camo6","camo7","camo8","camo9"};
		hiddenSelectionsTextures[] = {
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\VEST_Front_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\vest_back_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\suharka_radio_pkp_vog_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\ak_granade_pouch_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\suharka_pkp_straps_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\pouch_straps_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\vest_straps_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\Full_armor_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\VKPO\data\Straps_Kneepads_s_co.paa"
		};
		*/
	};
	class CUP_Vest_RUS_6B45_Sh117_Nut: CUP_Vest_RUS_Camo_RatnikV2_Base
	{
		class ItemInfo;
		/*
		hiddenSelections[] = {"camo1","camo2","camo3","camo4","camo5","camo6","camo7","camo8"};
		hiddenSelectionsTextures[] = {
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\VEST_Front_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\vest_back_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\suharka_radio_pkp_vog_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\ak_granade_pouch_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\suharka_pkp_straps_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\pouch_straps_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\vest_straps_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\Full_armor_s_co.paa"
		};
		*/
	};
	class CUP_Vest_RUS_6B45_Sh117_PKP: CUP_Vest_RUS_Camo_RatnikV2_Base
	{
		class ItemInfo;
		/*
		hiddenSelections[] = {"camo1","camo2","camo3","camo4","camo5","camo6"};
		hiddenSelectionsTextures[] = {
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\VEST_Front_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\vest_back_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\suharka_radio_pkp_vog_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\suharka_pkp_straps_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\pouch_straps_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\vest_straps_s_co.paa"
		};
		*/
	};
	class CUP_Vest_RUS_6B45_Sh117_PKP_Del: CUP_Vest_RUS_Camo_RatnikV2_Base
	{
		class ItemInfo;
		/*
		hiddenSelections[] = {"camo1","camo2","camo3","camo4","camo5","camo6","camo8"};
		hiddenSelectionsTextures[] = {
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\VEST_Front_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\vest_back_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\suharka_radio_pkp_vog_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\suharka_pkp_straps_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\pouch_straps_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\vest_straps_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\Full_armor_s_co.paa"
		};
		*/
	};
	class CUP_Vest_RUS_6B45_Sh117_PKP_Del_Nut: CUP_Vest_RUS_Camo_RatnikV2_Base
	{
		class ItemInfo;
		/*
		hiddenSelections[] = {"camo1","camo2","camo3","camo4","camo5","camo6","camo8"};
		hiddenSelectionsTextures[] = {
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\VEST_Front_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\vest_back_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\suharka_radio_pkp_vog_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\suharka_pkp_straps_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\pouch_straps_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\vest_straps_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\Full_armor_s_co.paa"
		};
		*/
	};
	class CUP_Vest_RUS_6B45_Sh117_PKP_Full: CUP_Vest_RUS_Camo_RatnikV2_Base
	{
		class ItemInfo;
		/*
		hiddenSelections[] = {"camo1","camo2","camo3","camo4","camo5","camo6","camo8","camo9"};
		hiddenSelectionsTextures[] = {
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\VEST_Front_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\vest_back_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\suharka_radio_pkp_vog_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\suharka_pkp_straps_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\pouch_straps_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\vest_straps_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\Full_armor_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\VKPO\data\Straps_Kneepads_s_co.paa"
		};
		*/
	};
	class CUP_Vest_RUS_6B45_Sh117_PKP_Nut: CUP_Vest_RUS_Camo_RatnikV2_Base
	{
		class ItemInfo;
		/*
		hiddenSelections[] = {"camo1","camo2","camo3","camo4","camo5","camo6","camo8"};
		hiddenSelectionsTextures[] = {
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\VEST_Front_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\vest_back_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\suharka_radio_pkp_vog_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\suharka_pkp_straps_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\pouch_straps_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\vest_straps_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\Full_armor_s_co.paa"
		};
		*/
	};
	class CUP_Vest_RUS_6B45_Sh117_VOG: CUP_Vest_RUS_Camo_RatnikV2_Base
	{
		class ItemInfo;
		/*
		hiddenSelections[] = {"camo1","camo2","camo3","camo4","camo5","camo6","camo7"};
		hiddenSelectionsTextures[] = {
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\VEST_Front_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\vest_back_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\suharka_radio_pkp_vog_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\ak_granade_pouch_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\suharka_pkp_straps_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\pouch_straps_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\vest_straps_s_co.paa"
		};
		*/
	};
	class CUP_Vest_RUS_6B45_Sh117_VOG_Del: CUP_Vest_RUS_Camo_RatnikV2_Base
	{
		class ItemInfo;
		/*
		hiddenSelections[] = {"camo1","camo2","camo3","camo4","camo5","camo6","camo7","camo8"};
		hiddenSelectionsTextures[] = {
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\VEST_Front_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\vest_back_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\suharka_radio_pkp_vog_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\ak_granade_pouch_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\suharka_pkp_straps_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\pouch_straps_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\vest_straps_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\Full_armor_s_co.paa"
		};
		*/
	};
	class CUP_Vest_RUS_6B45_Sh117_VOG_Del_Nut: CUP_Vest_RUS_Camo_RatnikV2_Base
	{
		class ItemInfo;
		/*
		hiddenSelections[] = {"camo1","camo2","camo3","camo4","camo5","camo6","camo7","camo8"};
		hiddenSelectionsTextures[] = {
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\VEST_Front_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\vest_back_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\suharka_radio_pkp_vog_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\ak_granade_pouch_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\suharka_pkp_straps_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\pouch_straps_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\vest_straps_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\Full_armor_s_co.paa"
		};
		*/
	};
	class CUP_Vest_RUS_6B45_Sh117_VOG_Full: CUP_Vest_RUS_Camo_RatnikV2_Base
	{
		class ItemInfo;
		/*
		hiddenSelections[] = {"camo1","camo2","camo3","camo4","camo5","camo6","camo7","camo8","camo9"};
		hiddenSelectionsTextures[] = {
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\VEST_Front_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\vest_back_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\suharka_radio_pkp_vog_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\ak_granade_pouch_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\suharka_pkp_straps_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\pouch_straps_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\vest_straps_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\Full_armor_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\VKPO\data\Straps_Kneepads_s_co.paa"
		};
		*/
	};
	class CUP_Vest_RUS_6B45_Sh117_VOG_Nut: CUP_Vest_RUS_Camo_RatnikV2_Base
	{
		class ItemInfo;
		/*
		hiddenSelections[] = {"camo1","camo2","camo3","camo4","camo5","camo6","camo7","camo8"};
		hiddenSelectionsTextures[] = {
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\VEST_Front_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\vest_back_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\suharka_radio_pkp_vog_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\ak_granade_pouch_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\suharka_pkp_straps_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\pouch_straps_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\vest_straps_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\Full_armor_s_co.paa"
		};
		*/
	};
	/*
	// 6B45 (Summer/Empty)
	class tmtm_v_6b45empty_summer: CUP_Vest_RUS_6B45_Sh117
	{
		displayName="6B45 (Summer/Empty)";
		scope=2;
		scopeArsenal=2;
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\VEST_Front_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\vest_back_s_co.paa",
			"",
			"",
			"",
			"",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\vest_straps_s_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\VEST_Front_s_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\vest_back_s_co.paa",
				"",
				"",
				"",
				"",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\vest_straps_s_co.paa"
			};
			containerClass="Supply0";
		};
	};
	// 6B45 (Summer/Empty)
	class tmtm_v_6b45empty_green: CUP_Vest_RUS_6B45_Sh117
	{
		displayName="6B45 (Green/Empty)";
		scope=2;
		scopeArsenal=2;
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\VEST_Front_o_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\vest_back_o_co.paa",
			"",
			"",
			"",
			"",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\vest_straps_o_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\VEST_Front_o_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\vest_back_o_co.paa",
				"",
				"",
				"",
				"",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\vest_straps_o_co.paa"
			};
			containerClass="Supply0";
		};
	};
	// 6B45 (Pink desert/Empty)
	class tmtm_v_6b45empty_desert: CUP_Vest_RUS_6B45_Sh117
	{
		displayName="6B45 (Pink desert/Empty)";
		scope=2;
		scopeArsenal=2;
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\VEST_Front_d_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\vest_back_d_co.paa",
			"",
			"",
			"",
			"",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\vest_straps_d_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\VEST_Front_d_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\vest_back_d_co.paa",
				"",
				"",
				"",
				"",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\vest_straps_d_co.paa"
			};
			containerClass="Supply0";
		};
	};
	// 6B45 (Beige Digital/Empty)
	class tmtm_v_6b45empty_beigeDigital: CUP_Vest_RUS_6B45_Sh117
	{
		displayName="6B45 (Beige Digital/Empty)";
		scope=2;
		scopeArsenal=2;
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\VEST_Front_dn_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\vest_back_dn_co.paa",
			"",
			"",
			"",
			"",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\vest_straps_dn_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\VEST_Front_dn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\vest_back_dn_co.paa",
				"",
				"",
				"",
				"",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Vest\Data\vest_straps_dn_co.paa"
			};
			containerClass="Supply0";
		};
	};
	
	// 6B45 (Black)
	class tmtm_v_6b45empty_black: CUP_Vest_RUS_6B45_Sh117
	{
		displayName="6B45 (Black/Empty)";
		scope=2;
		scopeArsenal=2;
		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_VEST_Front_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_VEST_Back_co.paa",
			"",
			"",
			"",
			"",
			"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_VEST_Straps_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_VEST_Front_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_VEST_Back_co.paa",
				"",
				"",
				"",
				"",
				"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_VEST_Straps_co.paa"
			};
			containerClass="Supply0";
		};
	};
	*/
	class tmtm_v_6b45_black: CUP_Vest_RUS_6B45_Sh117
	{
		displayName="6B45 (Black)";
		scope=2;
		scopeArsenal=2;
		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_VEST_Front_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_VEST_Back_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_radio_pkp_vog_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_AK_Granade_Pouch_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_PKP_straps_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_Pouch_Straps_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_VEST_Straps_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_VEST_Front_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_VEST_Back_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_radio_pkp_vog_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_AK_Granade_Pouch_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_PKP_straps_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_Pouch_Straps_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_VEST_Straps_co.paa"
			};
		};
	};
	class tmtm_v_6b45_black_del: CUP_Vest_RUS_6B45_Sh117_Del
	{
		displayName="6B45 (Black/Variant 2)";
		scope=2;
		scopeArsenal=2;
		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_VEST_Front_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_VEST_Back_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_radio_pkp_vog_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_AK_Granade_Pouch_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_PKP_straps_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_Pouch_Straps_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_VEST_Straps_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_Full_armor_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_VEST_Front_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_VEST_Back_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_radio_pkp_vog_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_AK_Granade_Pouch_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_PKP_straps_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_Pouch_Straps_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_VEST_Straps_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_Full_armor_co.paa"
			};
		};
	};
	class tmtm_v_6b45_black_del_nut: CUP_Vest_RUS_6B45_Sh117_Del_Nut
	{
		displayName="6B45 (Black/Variant 4)";
		scope=2;
		scopeArsenal=2;
		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_VEST_Front_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_VEST_Back_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_radio_pkp_vog_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_AK_Granade_Pouch_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_PKP_straps_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_Pouch_Straps_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_VEST_Straps_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_Full_armor_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_VEST_Front_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_VEST_Back_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_radio_pkp_vog_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_AK_Granade_Pouch_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_PKP_straps_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_Pouch_Straps_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_VEST_Straps_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_Full_armor_co.paa"
			};
		};
	};
	class tmtm_v_6b45_black_full: CUP_Vest_RUS_6B45_Sh117_Full
	{
		displayName="6B45 (Black/Variant 5)";
		scope=2;
		scopeArsenal=2;
		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_VEST_Front_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_VEST_Back_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_radio_pkp_vog_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_AK_Granade_Pouch_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_PKP_straps_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_Pouch_Straps_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_VEST_Straps_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_Full_armor_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\VKPO\data\Straps_Kneepads_s_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_VEST_Front_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_VEST_Back_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_radio_pkp_vog_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_AK_Granade_Pouch_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_PKP_straps_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_Pouch_Straps_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_VEST_Straps_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_Full_armor_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\VKPO\data\Straps_Kneepads_s_co.paa"
			};
		};
	};
	class tmtm_v_6b45_black_nut: CUP_Vest_RUS_6B45_Sh117_Nut
	{
		displayName="6B45 (Black/Variant 3)";
		scope=2;
		scopeArsenal=2;
		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_VEST_Front_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_VEST_Back_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_radio_pkp_vog_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_AK_Granade_Pouch_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_PKP_straps_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_Pouch_Straps_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_VEST_Straps_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_Full_armor_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_VEST_Front_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_VEST_Back_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_radio_pkp_vog_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_AK_Granade_Pouch_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_PKP_straps_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_Pouch_Straps_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_VEST_Straps_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_Full_armor_co.paa"
			};
		};
	};
	class tmtm_v_6b45pkp_black: CUP_Vest_RUS_6B45_Sh117_PKP
	{
		displayName="6B45 (Black/PKP)";
		scope=2;
		scopeArsenal=2;
		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_VEST_Front_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_VEST_Back_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_radio_pkp_vog_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_PKP_straps_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_Pouch_Straps_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_VEST_Straps_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_VEST_Front_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_VEST_Back_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_radio_pkp_vog_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_PKP_straps_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_Pouch_Straps_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_VEST_Straps_co.paa"
			};
		};
	};
	class tmtm_v_6b45pkp_black_del: CUP_Vest_RUS_6B45_Sh117_PKP_Del
	{
		displayName="6B45 (Black/PKP/Variant 2)";
		scope=2;
		scopeArsenal=2;
		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_VEST_Front_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_VEST_Back_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_radio_pkp_vog_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_PKP_straps_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_Pouch_Straps_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_VEST_Straps_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_Full_armor_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_VEST_Front_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_VEST_Back_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_radio_pkp_vog_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_PKP_straps_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_Pouch_Straps_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_VEST_Straps_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_Full_armor_co.paa"
			};
		};
	};
	class tmtm_v_6b45pkp_black_del_nut: CUP_Vest_RUS_6B45_Sh117_PKP_Del_Nut
	{
		displayName="6B45 (Black/PKP/Variant 4)";
		scope=2;
		scopeArsenal=2;
		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_VEST_Front_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_VEST_Back_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_radio_pkp_vog_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_PKP_straps_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_Pouch_Straps_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_VEST_Straps_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_Full_armor_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_VEST_Front_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_VEST_Back_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_radio_pkp_vog_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_PKP_straps_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_Pouch_Straps_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_VEST_Straps_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_Full_armor_co.paa"
			};
		};
	};
	class tmtm_v_6b45pkp_black_full: CUP_Vest_RUS_6B45_Sh117_PKP_Full
	{
		displayName="6B45 (Black/PKP/Variant 5)";
		scope=2;
		scopeArsenal=2;
		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_VEST_Front_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_VEST_Back_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_radio_pkp_vog_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_PKP_straps_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_Pouch_Straps_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_VEST_Straps_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_Full_armor_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\VKPO\data\Straps_Kneepads_s_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_VEST_Front_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_VEST_Back_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_radio_pkp_vog_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_PKP_straps_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_Pouch_Straps_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_VEST_Straps_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_Full_armor_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\VKPO\data\Straps_Kneepads_s_co.paa"
			};
		};
	};
	class tmtm_v_6b45pkp_black_nut: CUP_Vest_RUS_6B45_Sh117_PKP_Nut
	{
		displayName="6B45 (Black/PKP/Variant 3)";
		scope=2;
		scopeArsenal=2;
		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_VEST_Front_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_VEST_Back_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_radio_pkp_vog_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_PKP_straps_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_Pouch_Straps_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_VEST_Straps_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_Full_armor_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_VEST_Front_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_VEST_Back_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_radio_pkp_vog_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_PKP_straps_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_Pouch_Straps_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_VEST_Straps_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_Full_armor_co.paa"
			};
		};
	};
	class tmtm_v_6b45vog_black: CUP_Vest_RUS_6B45_Sh117_VOG
	{
		displayName="6B45 (Black/VOG)";
		scope=2;
		scopeArsenal=2;
		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_VEST_Front_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_VEST_Back_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_radio_pkp_vog_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_AK_Granade_Pouch_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_PKP_straps_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_Pouch_Straps_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_VEST_Straps_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSeletionsTextures[]=
			{
				"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_VEST_Front_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_VEST_Back_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_radio_pkp_vog_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_AK_Granade_Pouch_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_PKP_straps_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_Pouch_Straps_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_VEST_Straps_co.paa"
			};
		};
	};
	class tmtm_v_6b45vog_black_del: CUP_Vest_RUS_6B45_Sh117_VOG_Del
	{
		displayName="6B45 (Black/VOG/Variant 2)";
		scope=2;
		scopeArsenal=2;
		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_VEST_Front_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_VEST_Back_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_radio_pkp_vog_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_AK_Granade_Pouch_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_PKP_straps_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_Pouch_Straps_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_VEST_Straps_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_Full_armor_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSeletionsTextures[]=
			{
				"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_VEST_Front_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_VEST_Back_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_radio_pkp_vog_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_AK_Granade_Pouch_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_PKP_straps_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_Pouch_Straps_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_VEST_Straps_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_Full_armor_co.paa"
			};
		};
	};
	class tmtm_v_6b45vog_black_del_nut: CUP_Vest_RUS_6B45_Sh117_VOG_Del_Nut
	{
		displayName="6B45 (Black/VOG/Variant 4)";
		scope=2;
		scopeArsenal=2;
		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_VEST_Front_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_VEST_Back_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_radio_pkp_vog_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_AK_Granade_Pouch_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_PKP_straps_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_Pouch_Straps_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_VEST_Straps_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_Full_armor_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSeletionsTextures[]=
			{
				"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_VEST_Front_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_VEST_Back_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_radio_pkp_vog_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_AK_Granade_Pouch_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_PKP_straps_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_Pouch_Straps_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_VEST_Straps_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_Full_armor_co.paa"
			};
		};
	};
	class tmtm_v_6b45vog_black_full: CUP_Vest_RUS_6B45_Sh117_VOG_Full
	{
		displayName="6B45 (Black/VOG/Variant 5)";
		scope=2;
		scopeArsenal=2;
		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_VEST_Front_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_VEST_Back_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_radio_pkp_vog_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_AK_Granade_Pouch_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_PKP_straps_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_Pouch_Straps_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_VEST_Straps_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_Full_armor_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\VKPO\data\Straps_Kneepads_s_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSeletionsTextures[]=
			{
				"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_VEST_Front_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_VEST_Back_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_radio_pkp_vog_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_AK_Granade_Pouch_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_PKP_straps_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_Pouch_Straps_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_VEST_Straps_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_Full_armor_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\VKPO\data\Straps_Kneepads_s_co.paa"
			};
		};
	};
	class tmtm_v_6b45vog_black_nut: CUP_Vest_RUS_6B45_Sh117_VOG_Nut
	{
		displayName="6B45 (Black/VOG/Variant 3)";
		scope=2;
		scopeArsenal=2;
		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_VEST_Front_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_VEST_Back_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_radio_pkp_vog_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_AK_Granade_Pouch_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_PKP_straps_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_Pouch_Straps_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_VEST_Straps_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_Full_armor_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSeletionsTextures[]=
			{
				"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_VEST_Front_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_VEST_Back_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_radio_pkp_vog_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_AK_Granade_Pouch_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_PKP_straps_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_Pouch_Straps_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_VEST_Straps_co.paa",
				"\tmtm\pack\cup_vests\Data\tmtm_6b45_black_Full_armor_co.paa"
			};
		};
	};
	
	
	// german protective vest
	class CUP_V_B_GER_PVest_Fleck_Gren: ItemCore {class ItemInfo;};
	class CUP_V_B_GER_PVest_Fleck_Gren_LT: ItemCore {class ItemInfo;};
	class CUP_V_B_GER_PVest_Fleck_MG: ItemCore {class ItemInfo;};
	class CUP_V_B_GER_PVest_Fleck_MG_LT: ItemCore {class ItemInfo;};
	class CUP_V_B_GER_PVest_Fleck_Med: ItemCore {class ItemInfo;};
	class CUP_V_B_GER_PVest_Fleck_Med_LT: ItemCore {class ItemInfo;};
	class CUP_V_B_GER_PVest_Fleck_OFC: ItemCore {class ItemInfo;};
	class CUP_V_B_GER_PVest_Fleck_RFL: ItemCore {class ItemInfo;};
	class CUP_V_B_GER_PVest_Fleck_RFL_LT: ItemCore {class ItemInfo;};
	class CUP_V_B_GER_PVest_Fleck_TL: ItemCore {class ItemInfo;};
	class CUP_V_B_GER_PVest_Fleck_TL_LT: ItemCore {class ItemInfo;};
	
	class tmtm_v_GER_PVest_Gren_black: CUP_V_B_GER_PVest_Fleck_Gren 
	{
		author="Trenchgun";
		scope=2;
		displayName="Protection Vest Grenadier (Black)";
		hiddenSelectionsTextures[] = {
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_first_aid_black_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_bullet_vest_black_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_backpack_black_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_cartridge_pouch_black_co.paa"
		};
	};
	class tmtm_v_GER_PVest_Gren_LT_black: CUP_V_B_GER_PVest_Fleck_Gren_LT
	{
		author="Trenchgun";
		scope=2;
		displayName="Protection Vest Grenadier (Black/Light)";
		hiddenSelectionsTextures[] = {
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_first_aid_black_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_bullet_vest_black_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_cartridge_pouch_black_co.paa"
		};
	};
	/* removed because of unselectable drum mag pouches
	class tmtm_v_GER_PVest_MG_black: CUP_V_B_GER_PVest_Fleck_MG
	{
		author="Trenchgun";
		scope=2;
		displayName="Protection Vest Machine Gunner (Black)";
		hiddenSelectionsTextures[] = {
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_first_aid_black_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_bullet_vest_black_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_backpack_black_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_cartridge_pouch_black_co.paa" // might be an issue
		};
	};
	class tmtm_v_GER_PVest_MG_LT_black: CUP_V_B_GER_PVest_Fleck_MG_LT
	{
		author="Trenchgun";
		scope=2;
		displayName="Protection Vest Machine Gunner (Black/Light)";
		hiddenSelectionsTextures[] = {
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_first_aid_black_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_bullet_vest_black_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_cartridge_pouch_black_co.paa" // might be an issue
		};
	};
	*/
	class tmtm_v_GER_PVest_Med_black: CUP_V_B_GER_PVest_Fleck_Med
	{
		author="Trenchgun";
		scope=2;
		displayName="Protection Vest Medic (Black)";
		hiddenSelectionsTextures[] = {
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_first_aid_black_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_bullet_vest_black_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_backpack_black_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_cartridge_pouch_black_co.paa"
		};
	};
	class tmtm_v_GER_PVest_Med_LT_black: CUP_V_B_GER_PVest_Fleck_Med_LT
	{
		author="Trenchgun";
		scope=2;
		displayName="Protection Vest Medic (Black/Light)";
		hiddenSelectionsTextures[] = {
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_first_aid_black_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_bullet_vest_black_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_cartridge_pouch_black_co.paa"
		};
	};
	class tmtm_v_GER_PVest_OFC_black: CUP_V_B_GER_PVest_Fleck_OFC
	{
		author="Trenchgun";
		scope=2;
		displayName="Protection Vest Officer (Black)";
		hiddenSelectionsTextures[] = {
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_bullet_vest_black_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_cartridge_pouch_black_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_backpack_black_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_first_aid_black_co.paa"
		};
	};
	class tmtm_v_GER_PVest_RFL_black: CUP_V_B_GER_PVest_Fleck_RFL
	{
		author="Trenchgun";
		scope=2;
		displayName="Protection Vest Rifleman (Black)";
		hiddenSelectionsTextures[] = {
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_bullet_vest_black_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_cartridge_pouch_black_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_backpack_black_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_first_aid_black_co.paa"
		};
	};
	class tmtm_V_GER_PVest_RFL_LT_black: CUP_V_B_GER_PVest_Fleck_RFL_LT
	{
		author="Trenchgun";
		scope=2;
		displayName="Protection Vest Rifleman (Black/Light)";
		hiddenSelectionsTextures[] = {
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_bullet_vest_black_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_cartridge_pouch_black_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_backpack_black_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_first_aid_black_co.paa"
		};
	};
	class tmtm_v_GER_PVest_TL_black: CUP_V_B_GER_PVest_Fleck_TL
	{
		author="Trenchgun";
		scope=2;
		displayName="Protection Vest Team Leader (Black)";
		hiddenSelectionsTextures[] = {
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_bullet_vest_black_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_cartridge_pouch_black_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_backpack_black_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_first_aid_black_co.paa"
		};
	};
	class tmtm_v_GER_PVest_TL_LT_black: CUP_V_B_GER_PVest_Fleck_TL_LT
	{
		author="Trenchgun";
		scope=2;
		displayName="Protection Vest Team Leader (Black/Light)";
		hiddenSelectionsTextures[] = {
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_bullet_vest_black_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_cartridge_pouch_black_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_first_aid_black_co.paa"
		};
	};
	
	// Olive Drab
	class tmtm_v_GER_PVest_Gren_olive: CUP_V_B_GER_PVest_Fleck_Gren 
	{
		author="Trenchgun";
		scope=2;
		displayName="Protection Vest Grenadier (Olive)";
		hiddenSelectionsTextures[] = {
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_first_aid_olive_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_bullet_vest_olive_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_backpack_olive_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_cartridge_pouch_olive_co.paa"
		};
	};
	class tmtm_v_GER_PVest_Gren_LT_olive: CUP_V_B_GER_PVest_Fleck_Gren_LT
	{
		author="Trenchgun";
		scope=2;
		displayName="Protection Vest Grenadier (Olive/Light)";
		hiddenSelectionsTextures[] = {
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_first_aid_olive_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_bullet_vest_olive_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_cartridge_pouch_olive_co.paa"
		};
	};
	/* removed because of unselectable drum mag pouches
	class tmtm_v_GER_PVest_MG_olive: CUP_V_B_GER_PVest_Fleck_MG
	{
		author="Trenchgun";
		scope=2;
		displayName="Protection Vest Machine Gunner (Olive)";
		hiddenSelectionsTextures[] = {
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_first_aid_olive_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_bullet_vest_olive_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_backpack_olive_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_cartridge_pouch_olive_co.paa" // might be an issue
		};
	};
	class tmtm_v_GER_PVest_MG_LT_olive: CUP_V_B_GER_PVest_Fleck_MG_LT
	{
		author="Trenchgun";
		scope=2;
		displayName="Protection Vest Machine Gunner (Olive/Light)";
		hiddenSelectionsTextures[] = {
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_first_aid_olive_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_bullet_vest_olive_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_cartridge_pouch_olive_co.paa" // might be an issue
		};
	};
	*/
	class tmtm_v_GER_PVest_Med_olive: CUP_V_B_GER_PVest_Fleck_Med
	{
		author="Trenchgun";
		scope=2;
		displayName="Protection Vest Medic (Olive)";
		hiddenSelectionsTextures[] = {
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_first_aid_olive_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_bullet_vest_olive_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_backpack_olive_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_cartridge_pouch_olive_co.paa"
		};
	};
	class tmtm_v_GER_PVest_Med_LT_olive: CUP_V_B_GER_PVest_Fleck_Med_LT
	{
		author="Trenchgun";
		scope=2;
		displayName="Protection Vest Medic (Olive/Light)";
		hiddenSelectionsTextures[] = {
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_first_aid_olive_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_bullet_vest_olive_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_cartridge_pouch_olive_co.paa"
		};
	};
	class tmtm_v_GER_PVest_OFC_olive: CUP_V_B_GER_PVest_Fleck_OFC
	{
		author="Trenchgun";
		scope=2;
		displayName="Protection Vest Officer (Olive)";
		hiddenSelectionsTextures[] = {
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_bullet_vest_olive_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_cartridge_pouch_olive_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_backpack_olive_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_first_aid_olive_co.paa"
		};
	};
	class tmtm_v_GER_PVest_RFL_olive: CUP_V_B_GER_PVest_Fleck_RFL
	{
		author="Trenchgun";
		scope=2;
		displayName="Protection Vest Rifleman (Olive)";
		hiddenSelectionsTextures[] = {
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_bullet_vest_olive_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_cartridge_pouch_olive_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_backpack_olive_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_first_aid_olive_co.paa"
		};
	};
	class tmtm_V_GER_PVest_RFL_LT_olive: CUP_V_B_GER_PVest_Fleck_RFL_LT
	{
		author="Trenchgun";
		scope=2;
		displayName="Protection Vest Rifleman (Olive/Light)";
		hiddenSelectionsTextures[] = {
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_bullet_vest_olive_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_cartridge_pouch_olive_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_backpack_olive_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_first_aid_olive_co.paa"
		};
	};
	class tmtm_v_GER_PVest_TL_olive: CUP_V_B_GER_PVest_Fleck_TL
	{
		author="Trenchgun";
		scope=2;
		displayName="Protection Vest Team Leader (Olive)";
		hiddenSelectionsTextures[] = {
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_bullet_vest_olive_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_cartridge_pouch_olive_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_backpack_olive_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_first_aid_olive_co.paa"
		};
	};
	class tmtm_v_GER_PVest_TL_LT_olive: CUP_V_B_GER_PVest_Fleck_TL_LT
	{
		author="Trenchgun";
		scope=2;
		displayName="Protection Vest Team Leader (Olive/Light)";
		hiddenSelectionsTextures[] = {
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_bullet_vest_olive_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_cartridge_pouch_olive_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_first_aid_olive_co.paa"
		};
	};
	// Multicam
	class tmtm_v_GER_PVest_Gren_multicam: CUP_V_B_GER_PVest_Fleck_Gren 
	{
		author="Trenchgun";
		scope=2;
		displayName="Protection Vest Grenadier (Multicam)";
		hiddenSelectionsTextures[] = {
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_first_aid_multicam_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_bullet_vest_multicam_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_backpack_multicam_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_cartridge_pouch_multicam_co.paa"
		};
	};
	class tmtm_v_GER_PVest_Gren_LT_multicam: CUP_V_B_GER_PVest_Fleck_Gren_LT
	{
		author="Trenchgun";
		scope=2;
		displayName="Protection Vest Grenadier (Multicam/Light)";
		hiddenSelectionsTextures[] = {
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_first_aid_multicam_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_bullet_vest_multicam_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_cartridge_pouch_multicam_co.paa"
		};
	};
	/* removed because of unselectable drum mag pouches
	class tmtm_v_GER_PVest_MG_multicam: CUP_V_B_GER_PVest_Fleck_MG
	{
		author="Trenchgun";
		scope=2;
		displayName="Protection Vest Machine Gunner (Multicam)";
		hiddenSelectionsTextures[] = {
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_first_aid_multicam_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_bullet_vest_multicam_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_backpack_multicam_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_cartridge_pouch_multicam_co.paa" // might be an issue
		};
	};
	class tmtm_v_GER_PVest_MG_LT_multicam: CUP_V_B_GER_PVest_Fleck_MG_LT
	{
		author="Trenchgun";
		scope=2;
		displayName="Protection Vest Machine Gunner (Multicam/Light)";
		hiddenSelectionsTextures[] = {
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_first_aid_multicam_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_bullet_vest_multicam_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_cartridge_pouch_multicam_co.paa" // might be an issue
		};
	};
	*/
	class tmtm_v_GER_PVest_Med_multicam: CUP_V_B_GER_PVest_Fleck_Med
	{
		author="Trenchgun";
		scope=2;
		displayName="Protection Vest Medic (Multicam)";
		hiddenSelectionsTextures[] = {
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_first_aid_multicam_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_bullet_vest_multicam_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_backpack_multicam_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_cartridge_pouch_multicam_co.paa"
		};
	};
	class tmtm_v_GER_PVest_Med_LT_multicam: CUP_V_B_GER_PVest_Fleck_Med_LT
	{
		author="Trenchgun";
		scope=2;
		displayName="Protection Vest Medic (Multicam/Light)";
		hiddenSelectionsTextures[] = {
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_first_aid_multicam_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_bullet_vest_multicam_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_cartridge_pouch_multicam_co.paa"
		};
	};
	class tmtm_v_GER_PVest_OFC_multicam: CUP_V_B_GER_PVest_Fleck_OFC
	{
		author="Trenchgun";
		scope=2;
		displayName="Protection Vest Officer (Multicam)";
		hiddenSelectionsTextures[] = {
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_bullet_vest_multicam_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_cartridge_pouch_multicam_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_backpack_multicam_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_first_aid_multicam_co.paa"
		};
	};
	class tmtm_v_GER_PVest_RFL_multicam: CUP_V_B_GER_PVest_Fleck_RFL
	{
		author="Trenchgun";
		scope=2;
		displayName="Protection Vest Rifleman (Multicam)";
		hiddenSelectionsTextures[] = {
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_bullet_vest_multicam_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_cartridge_pouch_multicam_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_backpack_multicam_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_first_aid_multicam_co.paa"
		};
	};
	class tmtm_V_GER_PVest_RFL_LT_multicam: CUP_V_B_GER_PVest_Fleck_RFL_LT
	{
		author="Trenchgun";
		scope=2;
		displayName="Protection Vest Rifleman (Multicam/Light)";
		hiddenSelectionsTextures[] = {
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_bullet_vest_multicam_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_cartridge_pouch_multicam_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_backpack_multicam_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_first_aid_multicam_co.paa"
		};
	};
	class tmtm_v_GER_PVest_TL_multicam: CUP_V_B_GER_PVest_Fleck_TL
	{
		author="Trenchgun";
		scope=2;
		displayName="Protection Vest Team Leader (Multicam)";
		hiddenSelectionsTextures[] = {
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_bullet_vest_multicam_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_cartridge_pouch_multicam_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_backpack_multicam_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_first_aid_multicam_co.paa"
		};
	};
	class tmtm_v_GER_PVest_TL_LT_multicam: CUP_V_B_GER_PVest_Fleck_TL_LT
	{
		author="Trenchgun";
		scope=2;
		displayName="Protection Vest Team Leader (Multicam/Light)";
		hiddenSelectionsTextures[] = {
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_bullet_vest_multicam_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_cartridge_pouch_multicam_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_bundes_first_aid_multicam_co.paa"
		};
	};
	
	
	// PACA
	class CUP_V_PMC_CIRAS_Base;
	class CUP_V_MBSS_PACA_Black: CUP_V_PMC_CIRAS_Base
	{
		class ItemInfo;
	};
	
	class tmtm_v_paca_tan: CUP_V_MBSS_PACA_Black
	{
		displayName = "PACA (Tan)";
		scope=2;
		scopeArsenal=2;
		hiddenSelectionsTextures[]=
		{
			"",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_PMC\data\spec_paca_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_PMC\data\spec_paca_co.paa"
			};
			mass=80;
			containerClass="Supply0";
		};
	};
	class tmtm_v_paca_ranger: tmtm_v_paca_tan
	{
		displayName = "PACA (Ranger)";
		scope=2;
		scopeArsenal=2;
		hiddenSelectionsTextures[]=
		{
			"",
			"\tmtm\pack\cup_vests\Data\tmtm_paca_ranger_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"",
				"\tmtm\pack\cup_vests\Data\tmtm_paca_ranger_co.paa"
			};
			mass=80;
			containerClass="Supply0";
		};
	};
	class tmtm_v_paca_grey: tmtm_v_paca_tan
	{
		displayName = "PACA (Grey)";
		scope=2;
		scopeArsenal=2;
		hiddenSelectionsTextures[]=
		{
			"",
			"\tmtm\pack\cup_vests\Data\tmtm_paca_grey_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"",
				"\tmtm\pack\cup_vests\Data\tmtm_paca_grey_co.paa"
			};
			mass=80;
			containerClass="Supply0";
		};
	};
	class tmtm_v_paca_white: tmtm_v_paca_tan
	{
		displayName = "PACA (White)";
		scope=2;
		scopeArsenal=2;
		hiddenSelectionsTextures[]=
		{
			"",
			"\tmtm\pack\cup_vests\Data\tmtm_paca_white_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTexturess[]=
			{
				"",
				"\tmtm\pack\cup_vests\Data\tmtm_paca_white_co.paa"
			};
			mass=80;
			containerClass="Supply0";
		};
	};
	class tmtm_v_paca_black: tmtm_v_paca_tan
	{
		displayName = "PACA (Black)";
		scope=2;
		scopeArsenal=2;
		hiddenSelectionsTextures[]=
		{
			"",
			"\tmtm\pack\cup_vests\Data\tmtm_paca_black_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"",
				"\tmtm\pack\cup_vests\Data\tmtm_paca_black_co.paa"
			};
			mass=80;
			containerClass="Supply0";
		};
	};

	// BAF Osprey Mk3 Vest
	class CUP_V_B_BAF_DPM_Osprey_Mk3_Empty;
	class tmtm_v_ospreyMk3_empty_mtp: CUP_V_B_BAF_DPM_Osprey_Mk3_Empty 
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scoprCurator=0;
		displayName="BAF Osprey Mk3 (MTP/Empty)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\cup_vests\osprey_mk3\data\ui\ddpm\icon_v_baf_ddpm_empty_vest_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\cup_vests\Data\tmtm_ospreyMk3_armor_mtp_co.paa"
		};
	};
	class CUP_V_B_BAF_DPM_Osprey_Mk3_Crewman;
	class tmtm_v_ospreyMk3_crewman_mtp: CUP_V_B_BAF_DPM_Osprey_Mk3_Crewman
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scoprCurator=0;
		displayName="BAF Osprey Mk3 Crewman (MTP)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\cup_vests\osprey_mk3\data\ui\ddpm\icon_v_baf_ddpm_crewman_vest_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_vests\osprey_mk3\data\forcerecon_gear_w_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_ospreyMk3_armor_mtp_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_ospreyMk3_equip_mtp_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_ospreyMk4_gear_mtp_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_ospreyMk4_equip_mtp_co.paa"
		};
	};
	class CUP_V_B_BAF_DPM_Osprey_Mk3_Engineer;
	/*
	hiddenSelectionsTextures[] = {
		"CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_vests\osprey_mk3\data\ddpm\equip_ddpm_co.paa",
		"CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_vests\osprey_mk3\data\ddpm\armour_ddpm_co.paa",
		"CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_headgear\data\equip_d_co.paa"
	};
	*/
	/*
	hiddenSelectionsTextures[] = {
		"CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_vests\osprey_mk3\data\dpm\equip_dpm_co.paa",
		"CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_vests\osprey_mk3\data\dpm\armour_dpm_co.paa",
		"CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_headgear\data\equip_w_co.paa",
		"CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_vests\osprey_mk3\data\dpm\gear_dpm_co.paa"
	};
		
	*/
	class tmtm_v_ospreyMk3_engineer_mtp: CUP_V_B_BAF_DPM_Osprey_Mk3_Engineer
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scoprCurator=0;
		displayName="BAF Osprey Mk3 Engineer (MTP)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\cup_vests\osprey_mk3\data\ui\ddpm\icon_v_baf_ddpm_engineer_vest_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\cup_vests\Data\tmtm_ospreyMk4_equip_mtp_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_ospreyMk3_armor_mtp_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_ospreyMk3_equip_mtp_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_ospreyMk4_gear_mtp_co.paa"
		};
	};
	class CUP_V_B_BAF_DPM_Osprey_Mk3_Grenadier;
	/*
	hiddenSelectionsTextures[] = {
		"CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_vests\osprey_mk3\data\ddpm\camo_ddpm_co.paa",
		"CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_vests\osprey_mk3\data\ddpm\armour_ddpm_co.paa",
		"CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_headgear\data\equip_d_co.paa",
		"CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_vests\osprey_mk3\data\ddpm\gear_ddpm_co.paa",
		"CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_vests\osprey_mk3\data\ddpm\equip_ddpm_co.paa"
	};
	*/
	class tmtm_v_ospreyMk3_grenadier_mtp: CUP_V_B_BAF_DPM_Osprey_Mk3_Grenadier
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scoprCurator=0;
		displayName="BAF Osprey Mk3 Grenadier (MTP)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\cup_vests\osprey_mk3\data\ui\ddpm\icon_v_baf_ddpm_gl_vest_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_vests\osprey_mk3\data\ddpm\camo_ddpm_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_ospreyMk3_armor_mtp_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_ospreyMk3_equip_mtp_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_ospreyMk4_gear_mtp_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_ospreyMk4_equip_mtp_co.paa"
		};
	};
	class CUP_V_B_BAF_DPM_Osprey_Mk3_Medic;
	/*
	hiddenSelectionsTextures[] = {
		"CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_vests\osprey_mk3\data\ddpm\equip_ddpm_co.paa",
		"CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_vests\osprey_mk3\data\forcerecon_gear_co.paa",
		"CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_vests\osprey_mk3\data\ddpm\armour_ddpm_co.paa",
		"CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_headgear\data\equip_d_co.paa",
		"CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_vests\osprey_mk4\data\gear_co.paa"
	};
	*/
	class tmtm_v_ospreyMk3_medic_mtp: CUP_V_B_BAF_DPM_Osprey_Mk3_Medic
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scoprCurator=0;
		displayName="BAF Osprey Mk3 Medic (MTP)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\cup_vests\osprey_mk3\data\ui\ddpm\icon_v_baf_ddpm_medic_vest_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\cup_vests\Data\tmtm_ospreyMk4_equip_mtp_co.paa",
			"CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_vests\osprey_mk3\data\forcerecon_gear_w_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_ospreyMk3_armor_mtp_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_ospreyMk3_equip_mtp_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_ospreyMk4_gear_mtp_co.paa"
		};
	};
	class CUP_V_B_BAF_DPM_Osprey_Mk3_Officer;
	/*
	hiddenSelectionsTextures[] = {
		"CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_vests\osprey_mk3\data\ddpm\camo_ddpm_co.paa",
		"CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_vests\osprey_mk3\data\forcerecon_gear_co.paa",
		"CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_vests\osprey_mk3\data\ddpm\armour_ddpm_co.paa",
		"CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_headgear\data\equip_d_co.paa",
		"CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_vests\osprey_mk4\data\gear_co.paa"
	};
	*/
	class tmtm_v_ospreyMk3_officer_mtp: CUP_V_B_BAF_DPM_Osprey_Mk3_Officer
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scoprCurator=0;
		displayName="BAF Osprey Mk3 Officer (MTP)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\cup_vests\osprey_mk3\data\ui\ddpm\icon_v_baf_ddpm_officer_vest_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_vests\osprey_mk3\data\ddpm\camo_ddpm_co.paa",
			"CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_vests\osprey_mk3\data\forcerecon_gear_w_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_ospreyMk3_armor_mtp_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_ospreyMk3_equip_mtp_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_ospreyMk4_gear_mtp_co.paa"
		};
	};
	class CUP_V_B_BAF_DPM_Osprey_Mk3_Pilot;
	/*
	hiddenSelectionsTextures[] = {
		"CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_vests\osprey_mk3\data\forcerecon_gear_co.paa",
		"CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_vests\osprey_mk3\data\ddpm\armour_ddpm_co.paa",
		"CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_headgear\data\equip_d_co.paa",
		"CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_vests\osprey_mk4\data\gear_co.paa"
	};
	*/
	class tmtm_v_ospreyMk3_pilot_mtp: CUP_V_B_BAF_DPM_Osprey_Mk3_Pilot
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scoprCurator=0;
		displayName="BAF Osprey Mk3 Pilot (MTP)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\cup_vests\osprey_mk3\data\ui\ddpm\icon_v_baf_ddpm_pilot_vest_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_vests\osprey_mk3\data\forcerecon_gear_w_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_ospreyMk3_armor_mtp_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_ospreyMk3_equip_mtp_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_ospreyMk4_gear_mtp_co.paa"
		};
	};
	class CUP_V_B_BAF_DPM_Osprey_Mk3_AutomaticRifleman;
	/*
	hiddenSelectionsTextures[] = {
		"CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_vests\osprey_mk3\data\ddpm\camo_ddpm_co.paa",
		"CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_vests\osprey_mk3\data\ddpm\armour_ddpm_co.paa",
		"CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_headgear\data\equip_d_co.paa",
		"CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_vests\osprey_mk3\data\ddpm\gear_ddpm_co.paa",
		"CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_vests\osprey_mk3\data\ddpm\equip_ddpm_co.paa"
	};
	*/
	class tmtm_v_ospreyMk3_automaticRifleman_mtp: CUP_V_B_BAF_DPM_Osprey_Mk3_AutomaticRifleman
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scoprCurator=0;
		displayName="BAF Osprey Mk3 Automatic Rifleman (MTP)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\cup_vests\osprey_mk3\data\ui\ddpm\icon_v_baf_ddpm_soldier2_vest_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_vests\osprey_mk3\data\ddpm\camo_ddpm_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_ospreyMk3_armor_mtp_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_ospreyMk3_equip_mtp_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_ospreyMk4_gear_mtp_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_ospreyMk4_equip_mtp_co.paa"
		};
	};
	class CUP_V_B_BAF_DPM_Osprey_Mk3_Rifleman;
	/*
	hiddenSelectionsTextures[] = {
		"CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_vests\osprey_mk3\data\ddpm\camo_ddpm_co.paa",
		"CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_vests\osprey_mk3\data\forcerecon_gear_co.paa",
		"CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_vests\osprey_mk3\data\ddpm\armour_ddpm_co.paa",
		"CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_headgear\data\equip_d_co.paa",
		"CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_vests\osprey_mk4\data\gear_co.paa",
		"CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_vests\osprey_mk3\data\ddpm\gear_ddpm_co.paa",
		"CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_vests\osprey_mk3\data\ddpm\equip_ddpm_co.paa"
	};
	*/
	class tmtm_v_ospreyMk3_rifleman_mtp: CUP_V_B_BAF_DPM_Osprey_Mk3_Rifleman
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scoprCurator=0;
		displayName="BAF Osprey Mk3 Rifleman (MTP)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\cup_vests\osprey_mk3\data\ui\ddpm\icon_v_baf_ddpm_soldier1_vest_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_vests\osprey_mk3\data\ddpm\camo_ddpm_co.paa",
			"CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_vests\osprey_mk3\data\forcerecon_gear_w_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_ospreyMk3_armor_mtp_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_ospreyMk3_equip_mtp_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_ospreyMk4_gear_mtp_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_ospreyMk4_gear_mtp_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_ospreyMk4_equip_mtp_co.paa"
		};
	};
	class CUP_V_B_BAF_DPM_Osprey_Mk3_Scout;
	/*
	hiddenSelectionsTextures[] = {
		"CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_vests\osprey_mk3\data\forcerecon_gear_w_co.paa",
		"CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_vests\osprey_mk3\data\dpm\armour_dpm_co.paa",
		"CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_headgear\data\equip_w_co.paa",
		"CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_vests\osprey_mk3\data\dpm\gear_dpm_co.paa"
	};
		
	*/
	class tmtm_v_ospreyMk3_scout_mtp: CUP_V_B_BAF_DPM_Osprey_Mk3_Scout
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scoprCurator=0;
		displayName="BAF Osprey Mk3 Scout (MTP)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\cup_vests\osprey_mk3\data\ui\ddpm\icon_v_baf_ddpm_scout_vest_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_vests\osprey_mk3\data\forcerecon_gear_w_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_ospreyMk3_armor_mtp_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_ospreyMk3_equip_mtp_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_ospreyMk4_gear_mtp_co.paa",
		};
	};
	
	// Osprey Mk4 Vest (no flag)
	class CUP_V_B_BAF_MTP_Osprey_Mk4_Empty;
	class tmtm_v_ospreyMk4_empty_noflag: CUP_V_B_BAF_MTP_Osprey_Mk4_Empty {
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scoprCurator=0;
		displayName="BAF Osprey Mk4 (Empty/No Flag)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_vests\osprey_mk4\data\ui\osprey_mk4_rifleman_ca.paa";
		hiddenSelectionsMaterials[] = {
			"CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_vests\osprey_mk4\data\equip.rvmat",
			"\tmtm\pack\cup_vests\Data\tmtm_ospreyMk4_gear_noflag.rvmat"
		};
		hiddenSelectionsTextures[] = {
			"CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_vests\osprey_mk4\data\equip_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_ospreyMk4_gear_noflag_co.paa"
		};
	};

	class CUP_V_B_BAF_MTP_Osprey_Mk4_Crewman;
	class tmtm_v_ospreyMk4_crewman_noflag: CUP_V_B_BAF_MTP_Osprey_Mk4_Crewman {
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scoprCurator=0;
		displayName="BAF Osprey Mk4 Crewman (No Flag)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_vests\osprey_mk4\data\ui\osprey_mk4_rifleman_ca.paa";
		hiddenSelectionsMaterials[] = {
			"CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_vests\osprey_mk4\data\equip.rvmat",
			"CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_vests\osprey_mk3\data\forcerecon_gear.rvmat",
			"\tmtm\pack\cup_vests\Data\tmtm_ospreyMk4_gear_noflag.rvmat",
			"CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_headgear\data\equip_d.rvmat",
			"\tmtm\pack\cup_vests\Data\tmtm_ospreyMk4_gear_noflag.rvmat"
		};
		hiddenSelectionsTextures[] = {
			"CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_vests\osprey_mk4\data\equip_co.paa",
			"CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_vests\osprey_mk3\data\forcerecon_gear_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_ospreyMk4_gear_noflag_co.paa",
			"CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_headgear\data\equip_d_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_ospreyMk4_gear_noflag_co.paa"
		};
	};
	class CUP_V_B_BAF_MTP_Osprey_Mk4_Engineer;
	class tmtm_v_ospreyMk4_engineer_noflag: CUP_V_B_BAF_MTP_Osprey_Mk4_Engineer {
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scoprCurator=0;
		displayName="BAF Osprey Mk4 Engineer (No Flag)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_vests\osprey_mk4\data\ui\osprey_mk4_rifleman_ca.paa";
		hiddenSelectionsMaterials[] = {
			"CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_vests\osprey_mk4\data\equip.rvmat",
			"\tmtm\pack\cup_vests\Data\tmtm_ospreyMk4_gear_noflag.rvmat",
			"CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_headgear\data\equip_d.rvmat",
			"\tmtm\pack\cup_vests\Data\tmtm_ospreyMk4_gear_noflag.rvmat"
		};
		hiddenSelectionsTextures[] = {
			"CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_vests\osprey_mk4\data\equip_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_ospreyMk4_gear_noflag_co.paa",
			"CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_headgear\data\equip_d_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_ospreyMk4_gear_noflag_co.paa"
		};
	};
	class CUP_V_B_BAF_MTP_Osprey_Mk4_Grenadier;
	class tmtm_v_ospreyMk4_grenadier_noflag: CUP_V_B_BAF_MTP_Osprey_Mk4_Grenadier {
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scoprCurator=0;
		displayName="BAF Osprey Mk4 Grenadier (No Flag)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_vests\osprey_mk4\data\ui\osprey_mk4_grenadier_ca.paa";
		hiddenSelectionsMaterials[] = {
			"CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_vests\osprey_mk4\data\equip.rvmat",
			"\tmtm\pack\cup_vests\Data\tmtm_ospreyMk4_gear_noflag.rvmat",
			"CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_headgear\data\equip_d.rvmat"
		};
		hiddenSelectionsTextures[] = {
			"CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_vests\osprey_mk4\data\equip_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_ospreyMk4_gear_noflag_co.paa",
			"CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_headgear\data\equip_d_co.paa"
		};
	};
	class CUP_V_B_BAF_MTP_Osprey_Mk4_AutomaticRifleman;
	class tmtm_v_ospreyMk4_automaticRifleman_noflag: CUP_V_B_BAF_MTP_Osprey_Mk4_AutomaticRifleman {
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scoprCurator=0;
		displayName="BAF Osprey Mk4 Automatic Rifleman (No Flag)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_vests\osprey_mk4\data\ui\osprey_mk4_gunner_ca.paa";
		hiddenSelectionsMaterials[] = {
			"CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_vests\osprey_mk4\data\equip.rvmat",
			"\tmtm\pack\cup_vests\Data\tmtm_ospreyMk4_gear_noflag.rvmat"
		};
		hiddenSelectionsTextures[] = {
			"CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_vests\osprey_mk4\data\equip_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_ospreyMk4_gear_noflag_co.paa"
		};
	};
	class CUP_V_B_BAF_MTP_Osprey_Mk4_Medic;
	class tmtm_v_ospreyMk4_medic_noflag: CUP_V_B_BAF_MTP_Osprey_Mk4_Medic {
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scoprCurator=0;
		displayName="BAF Osprey Mk4 Medic (No Flag)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_vests\osprey_mk4\data\ui\osprey_mk4_gunner_ca.paa";
		hiddenSelectionsMaterials[] = {
			"CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_vests\osprey_mk4\data\equip.rvmat",
			"CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_vests\osprey_mk3\data\forcerecon_gear.rvmat",
			"\tmtm\pack\cup_vests\Data\tmtm_ospreyMk4_gear_noflag.rvmat",
			"CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_headgear\data\equip_d.rvmat"
		};
		hiddenSelectionsTextures[] = {
			"CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_vests\osprey_mk4\data\equip_co.paa",
			"CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_vests\osprey_mk3\data\forcerecon_gear_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_ospreyMk4_gear_noflag_co.paa",
			"CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_headgear\data\equip_d_co.paa"
		};
	};
	class CUP_V_B_BAF_MTP_Osprey_Mk4_Rifleman;
	class tmtm_v_ospreyMk4_rifleman_noflag: CUP_V_B_BAF_MTP_Osprey_Mk4_Rifleman {
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scoprCurator=0;
		displayName="BAF Osprey Mk4 Rifleman (No Flag)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_vests\osprey_mk4\data\ui\osprey_mk4_rifleman_ca.paa";
		hiddenSelectionsMaterials[] = {
			"CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_vests\osprey_mk4\data\equip.rvmat",
			"\tmtm\pack\cup_vests\Data\tmtm_ospreyMk4_gear_noflag.rvmat"
		};
		hiddenSelectionsTextures[] = {
			"CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_vests\osprey_mk4\data\equip_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_ospreyMk4_gear_noflag_co.paa"
		};
	};
	class CUP_V_B_BAF_MTP_Osprey_Mk4_Scout;
	class tmtm_v_ospreyMk4_scout_noflag: CUP_V_B_BAF_MTP_Osprey_Mk4_Scout {
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scoprCurator=0;
		displayName="BAF Osprey Mk4 Scout (No Flag)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_vests\osprey_mk4\data\ui\osprey_mk4_rifleman_ca.paa";
		hiddenSelectionsMaterials[] = {
			"CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_vests\osprey_mk4\data\equip.rvmat",
			"CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_vests\osprey_mk3\data\forcerecon_gear.rvmat",
			"\tmtm\pack\cup_vests\Data\tmtm_ospreyMk4_gear_noflag.rvmat",
			"CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_headgear\data\equip_d.rvmat",
			"\tmtm\pack\cup_vests\Data\tmtm_ospreyMk4_gear_noflag.rvmat"
		};
		hiddenSelectionsTextures[] = {
			"CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_vests\osprey_mk4\data\equip_co.paa",
			"CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_vests\osprey_mk3\data\forcerecon_gear_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_ospreyMk4_gear_noflag_co.paa",
			"CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_headgear\data\equip_d_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_ospreyMk4_gear_noflag_co.paa"
		};
	};
	class CUP_V_B_BAF_MTP_Osprey_Mk4_Officer;
	class tmtm_v_ospreyMk4_officer_noflag: CUP_V_B_BAF_MTP_Osprey_Mk4_Officer {
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scoprCurator=0;
		displayName="BAF Osprey Mk4 Officer (No Flag)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_vests\osprey_mk4\data\ui\osprey_mk4_squadleader_ca.paa";
		hiddenSelectionsMaterials[] = {
			"CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_vests\osprey_mk4\data\equip.rvmat",
			"\tmtm\pack\cup_vests\Data\tmtm_ospreyMk4_gear_noflag.rvmat"
		};
		hiddenSelectionsTextures[] = {
			"CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_vests\osprey_mk4\data\equip_co.paa",
			"\tmtm\pack\cup_vests\Data\tmtm_ospreyMk4_gear_noflag_co.paa"
		};
	};
};