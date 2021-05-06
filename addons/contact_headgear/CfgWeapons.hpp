class CfgWeapons
{
	class ItemCore;
	class HeadgearItem;
	class HelmetBase: ItemCore
	{
		class ItemInfo;
	};
	
	class tmtm_h_fast_base: HelmetBase
	{
		scope = 0;
		model = "\A3\Characters_F_Enoch\Headgear\H_HelmetHBK_01_F.p3d";
		DLC = "Enoch";
		hiddenSelections[] = {"Camo"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"Camo"};
			uniformModel = "\A3\Characters_F_Enoch\Headgear\H_HelmetHBK_01_F.p3d";
			modelSides[] = {2};
			mass = 30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	
	class tmtm_h_fastHeadset_base: tmtm_h_fast_base
	{
		model = "\A3\Characters_F_Enoch\Headgear\H_HelmetHBK_01_headset_F.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F_Enoch\Headgear\H_HelmetHBK_01_headset_F.p3d";
			mass = 35;
		};
	};
	
	class tmtm_h_fastEars_base: tmtm_h_fast_base
	{
		model = "\A3\Characters_F_Enoch\Headgear\H_HelmetHBK_01_ear_F.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F_Enoch\Headgear\H_HelmetHBK_01_ear_F.p3d";
			mass = 40;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 7;
					passThrough = 0.5;
				};
			};
		};
	};
	
	class tmtm_h_fastChops_base: tmtm_h_fast_base
	{
		model = "\A3\Characters_F_Enoch\Headgear\H_HelmetHBK_01_chops_F.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F_Enoch\Headgear\H_HelmetHBK_01_chops_F.p3d";
			mass = 50;
			class HitpointsProtectionInfo: HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 7;
					passThrough = 0.5;
				};
				class Face
				{
					hitpointName = "HitFace";
					armor = 3;
					passThrough = 0.1;
				};
			};
		};
	};
	
	class tmtm_h_fastHeadset_olive: tmtm_h_fastHeadset_base
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="AMH (Olive) (Headset)";
		picture="\tmtm\pack\contact_headgear\Data\UI\icon_fast_olive_ca.paa";
		hiddenSelectionsTextures[]= 
		{
			"\tmtm\pack\contact_headgear\Data\tmtm_fast_olive_co.paa"
		};
	};
	class tmtm_h_fastEars_olive: tmtm_h_fastEars_base
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="AMH (Olive) (Ears)";
		picture="\tmtm\pack\contact_headgear\Data\UI\icon_fastEars_olive_ca.paa";
		hiddenSelectionsTextures[]= 
		{
			"\tmtm\pack\contact_headgear\Data\tmtm_fast_olive_co.paa"
		};
	};
	class tmtm_h_fastChops_olive: tmtm_h_fastChops_base
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="AMH (Olive) (Chops)";
		picture="\tmtm\pack\contact_headgear\Data\UI\icon_fastChops_olive_ca.paa";
		hiddenSelectionsTextures[]= 
		{
			"\tmtm\pack\contact_headgear\Data\tmtm_fast_olive_co.paa"
		};
	};
	class tmtm_h_fast_black: tmtm_h_fast_base
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="AMH (Black)";
		picture="\tmtm\pack\contact_headgear\Data\UI\icon_fast_black_ca.paa";
		hiddenSelectionsTextures[]= 
		{
			"\tmtm\pack\contact_headgear\Data\tmtm_fast_black_co.paa"
		};
	};
	class tmtm_h_fastHeadset_black: tmtm_h_fastHeadset_base
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="AMH (Black) (Headset)";
		picture="\tmtm\pack\contact_headgear\Data\UI\icon_fast_black_ca.paa";
		hiddenSelectionsTextures[]= 
		{
			"\tmtm\pack\contact_headgear\Data\tmtm_fast_black_co.paa"
		};
	};
	class tmtm_h_fastEars_black: tmtm_h_fastEars_base
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="AMH (Black) (Ears)";
		picture="\tmtm\pack\contact_headgear\Data\UI\icon_fastEars_black_ca.paa";
		hiddenSelectionsTextures[]= 
		{
			"\tmtm\pack\contact_headgear\Data\tmtm_fast_black_co.paa"
		};
	};
	class tmtm_h_fastChops_black: tmtm_h_fastChops_base
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="AMH (Black) (Chops)";
		picture="\tmtm\pack\contact_headgear\Data\UI\icon_fastChops_black_ca.paa";
		hiddenSelectionsTextures[]= 
		{
			"\tmtm\pack\contact_headgear\Data\tmtm_fast_black_co.paa"
		};
	};
	class tmtm_h_fast_grey: tmtm_h_fast_base
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="AMH (Grey)";
		picture="\tmtm\pack\contact_headgear\Data\UI\icon_fast_grey_ca.paa";
		hiddenSelectionsTextures[]= 
		{
			"\tmtm\pack\contact_headgear\Data\tmtm_fast_grey_co.paa"
		};
	};
	class tmtm_h_fastHeadset_grey: tmtm_h_fastHeadset_base
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="AMH (Grey) (Headset)";
		picture="\tmtm\pack\contact_headgear\Data\UI\icon_fast_grey_ca.paa";
		hiddenSelectionsTextures[]= 
		{
			"\tmtm\pack\contact_headgear\Data\tmtm_fast_grey_co.paa"
		};
	};
	class tmtm_h_fastEars_grey: tmtm_h_fastEars_base
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="AMH (Grey) (Ears)";
		picture="\tmtm\pack\contact_headgear\Data\UI\icon_fastEars_grey_ca.paa";
		hiddenSelectionsTextures[]= 
		{
			"\tmtm\pack\contact_headgear\Data\tmtm_fast_grey_co.paa"
		};
	};
	class tmtm_h_fastChops_grey: tmtm_h_fastChops_base
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="AMH (Grey) (Chops)";
		picture="\tmtm\pack\contact_headgear\Data\UI\icon_fastChops_grey_ca.paa";
		hiddenSelectionsTextures[]= 
		{
			"\tmtm\pack\contact_headgear\Data\tmtm_fast_grey_co.paa"
		};
	};
	class tmtm_h_fast_coyote: tmtm_h_fast_base
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="AMH (Coyote)";
		picture="\tmtm\pack\contact_headgear\Data\UI\icon_fast_coyote_ca.paa";
		hiddenSelectionsTextures[]= 
		{
			"\tmtm\pack\contact_headgear\Data\tmtm_fast_coyote_co.paa"
		};
	};
	class tmtm_h_fastHeadset_coyote: tmtm_h_fastHeadset_base
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="AMH (Coyote) (Headset)";
		picture="\tmtm\pack\contact_headgear\Data\UI\icon_fast_coyote_ca.paa";
		hiddenSelectionsTextures[]= 
		{
			"\tmtm\pack\contact_headgear\Data\tmtm_fast_coyote_co.paa"
		};
	};
	class tmtm_h_fastEars_coyote: tmtm_h_fastEars_base
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="AMH (Coyote) (Ears)";
		picture="\tmtm\pack\contact_headgear\Data\UI\icon_fastEars_coyote_ca.paa";
		hiddenSelectionsTextures[]= 
		{
			"\tmtm\pack\contact_headgear\Data\tmtm_fast_coyote_co.paa"
		};
	};
	class tmtm_h_fastChops_coyote: tmtm_h_fastChops_base
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="AMH (Coyote) (Chops)";
		picture="\tmtm\pack\contact_headgear\Data\UI\icon_fastChops_coyote_ca.paa";
		hiddenSelectionsTextures[]= 
		{
			"\tmtm\pack\contact_headgear\Data\tmtm_fast_coyote_co.paa"
		};
	};
	class tmtm_h_fast_tan: tmtm_h_fast_base
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="AMH (Tan)";
		picture="\tmtm\pack\contact_headgear\Data\UI\icon_fast_tan_ca.paa";
		hiddenSelectionsTextures[]= 
		{
			"\tmtm\pack\contact_headgear\Data\tmtm_fast_tan_co.paa"
		};
	};
	class tmtm_h_fastHeadset_tan: tmtm_h_fastHeadset_base
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="AMH (Tan) (Headset)";
		picture="\tmtm\pack\contact_headgear\Data\UI\icon_fast_tan_ca.paa";
		hiddenSelectionsTextures[]= 
		{
			"\tmtm\pack\contact_headgear\Data\tmtm_fast_tan_co.paa"
		};
	};
	class tmtm_h_fastEars_tan: tmtm_h_fastEars_base
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="AMH (Tan) (Ears)";
		picture="\tmtm\pack\contact_headgear\Data\UI\icon_fastEars_tan_ca.paa";
		hiddenSelectionsTextures[]= 
		{
			"\tmtm\pack\contact_headgear\Data\tmtm_fast_tan_co.paa"
		};
	};
	class tmtm_h_fastChops_tan: tmtm_h_fastChops_base
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="AMH (Tan) (Chops)";
		picture="\tmtm\pack\contact_headgear\Data\UI\icon_fastChops_tan_ca.paa";
		hiddenSelectionsTextures[]= 
		{
			"\tmtm\pack\contact_headgear\Data\tmtm_fast_tan_co.paa"
		};
	};
	class tmtm_h_fast_blue: tmtm_h_fast_base
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="AMH (Blue)";
		picture="\tmtm\pack\contact_headgear\Data\UI\icon_fast_blue_ca.paa";
		hiddenSelectionsTextures[]= 
		{
			"\tmtm\pack\contact_headgear\Data\tmtm_fast_blue_co.paa"
		};
	};
	class tmtm_h_fastHeadset_blue: tmtm_h_fastHeadset_base
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="AMH (Blue) (Headset)";
		picture="\tmtm\pack\contact_headgear\Data\UI\icon_fast_blue_ca.paa";
		hiddenSelectionsTextures[]= 
		{
			"\tmtm\pack\contact_headgear\Data\tmtm_fast_blue_co.paa"
		};
	};
	class tmtm_h_fastEars_blue: tmtm_h_fastEars_base
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="AMH (Blue) (Ears)";
		picture="\tmtm\pack\contact_headgear\Data\UI\icon_fastEars_blue_ca.paa";
		hiddenSelectionsTextures[]= 
		{
			"\tmtm\pack\contact_headgear\Data\tmtm_fast_blue_co.paa"
		};
	};
	class tmtm_h_fastChops_blue: tmtm_h_fastChops_base
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="AMH (Blue) (Chops)";
		picture="\tmtm\pack\contact_headgear\Data\UI\icon_fastChops_blue_ca.paa";
		hiddenSelectionsTextures[]= 
		{
			"\tmtm\pack\contact_headgear\Data\tmtm_fast_blue_co.paa"
		};
	};
	class tmtm_h_fast_red: tmtm_h_fast_base
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="AMH (Red)";
		picture="\tmtm\pack\contact_headgear\Data\UI\icon_fast_red_ca.paa";
		hiddenSelectionsTextures[]= 
		{
			"\tmtm\pack\contact_headgear\Data\tmtm_fast_red_co.paa"
		};
	};
	class tmtm_h_fastHeadset_red: tmtm_h_fastHeadset_base
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="AMH (Red) (Headset)";
		picture="\tmtm\pack\contact_headgear\Data\UI\icon_fast_red_ca.paa";
		hiddenSelectionsTextures[]= 
		{
			"\tmtm\pack\contact_headgear\Data\tmtm_fast_red_co.paa"
		};
	};
	class tmtm_h_fastEars_red: tmtm_h_fastEars_base
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="AMH (Red) (Ears)";
		picture="\tmtm\pack\contact_headgear\Data\UI\icon_fastEars_red_ca.paa";
		hiddenSelectionsTextures[]= 
		{
			"\tmtm\pack\contact_headgear\Data\tmtm_fast_red_co.paa"
		};
	};
	class tmtm_h_fastChops_red: tmtm_h_fastChops_base
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="AMH (Red) (Chops)";
		picture="\tmtm\pack\contact_headgear\Data\UI\icon_fastChops_red_ca.paa";
		hiddenSelectionsTextures[]= 
		{
			"\tmtm\pack\contact_headgear\Data\tmtm_fast_red_co.paa"
		};
	};
	class tmtm_h_fast_atacsAuOlive: tmtm_h_fast_base
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="AMH (ATACS AU/Olive)";
		picture="\tmtm\pack\contact_headgear\Data\UI\icon_fast_atacsAu_ca.paa";
		hiddenSelectionsTextures[]= 
		{
			"\tmtm\pack\contact_headgear\Data\tmtm_fast_atacsAuOlive_co.paa"
		};
	};
	class tmtm_h_fastHeadset_atacsAuOlive: tmtm_h_fastHeadset_base
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="AMH (ATACS AU/Olive) (Headset)";
		picture="\tmtm\pack\contact_headgear\Data\UI\icon_fast_atacsAu_ca.paa";
		hiddenSelectionsTextures[]= 
		{
			"\tmtm\pack\contact_headgear\Data\tmtm_fast_atacsAuOlive_co.paa"
		};
	};
	class tmtm_h_fastEars_atacsAuOlive: tmtm_h_fastEars_base
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="AMH (ATACS AU/Olive) (Ears)";
		picture="\tmtm\pack\contact_headgear\Data\UI\icon_fast_atacsAu_ca.paa";
		hiddenSelectionsTextures[]= 
		{
			"\tmtm\pack\contact_headgear\Data\tmtm_fast_atacsAuOlive_co.paa"
		};
	};
	class tmtm_h_fastChops_atacsAuOlive: tmtm_h_fastChops_base
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="AMH (ATACS AU/Olive) (Chops)";
		picture="\tmtm\pack\contact_headgear\Data\UI\icon_fast_atacsAu_ca.paa";
		hiddenSelectionsTextures[]= 
		{
			"\tmtm\pack\contact_headgear\Data\tmtm_fast_atacsAuOlive_co.paa"
		};
	};
	class tmtm_h_fast_atacsAuGrey: tmtm_h_fast_base
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="AMH (ATACS AU/Grey)";
		picture="\tmtm\pack\contact_headgear\Data\UI\icon_fast_atacsAu_ca.paa";
		hiddenSelectionsTextures[]= 
		{
			"\tmtm\pack\contact_headgear\Data\tmtm_fast_atacsAuGrey_co.paa"
		};
	};
	class tmtm_h_fastHeadset_atacsAuGrey: tmtm_h_fastHeadset_base
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="AMH (ATACS AU/Grey) (Headset)";
		picture="\tmtm\pack\contact_headgear\Data\UI\icon_fast_atacsAu_ca.paa";
		hiddenSelectionsTextures[]= 
		{
			"\tmtm\pack\contact_headgear\Data\tmtm_fast_atacsAuGrey_co.paa"
		};
	};
	class tmtm_h_fastEars_atacsAuGrey: tmtm_h_fastEars_base
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="AMH (ATACS AU/Grey) (Ears)";
		picture="\tmtm\pack\contact_headgear\Data\UI\icon_fast_atacsAu_ca.paa";
		hiddenSelectionsTextures[]= 
		{
			"\tmtm\pack\contact_headgear\Data\tmtm_fast_atacsAuGrey_co.paa"
		};
	};
	class tmtm_h_fastChops_atacsAuGrey: tmtm_h_fastChops_base
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="AMH (ATACS AU/Grey) (Chops)";
		picture="\tmtm\pack\contact_headgear\Data\UI\icon_fast_atacsAu_ca.paa";
		hiddenSelectionsTextures[]= 
		{
			"\tmtm\pack\contact_headgear\Data\tmtm_fast_atacsAuGrey_co.paa"
		};
	};
	class tmtm_h_fast_atacsFgOlive: tmtm_h_fast_base
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="AMH (ATACS FG/Olive)";
		picture="\tmtm\pack\contact_headgear\Data\UI\icon_fast_atacsFg_ca.paa";
		hiddenSelectionsTextures[]= 
		{
			"\tmtm\pack\contact_headgear\Data\tmtm_fast_atacsFgOlive_co.paa"
		};
	};
	class tmtm_h_fastHeadset_atacsFgOlive: tmtm_h_fastHeadset_base
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="AMH (ATACS FG/Olive) (Headset)";
		picture="\tmtm\pack\contact_headgear\Data\UI\icon_fast_atacsFg_ca.paa";
		hiddenSelectionsTextures[]= 
		{
			"\tmtm\pack\contact_headgear\Data\tmtm_fast_atacsFgOlive_co.paa"
		};
	};
	class tmtm_h_fastEars_atacsFgOlive: tmtm_h_fastEars_base
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="AMH (ATACS FG/Olive) (Ears)";
		picture="\tmtm\pack\contact_headgear\Data\UI\icon_fast_atacsFg_ca.paa";
		hiddenSelectionsTextures[]= 
		{
			"\tmtm\pack\contact_headgear\Data\tmtm_fast_atacsFgOlive_co.paa"
		};
	};
	class tmtm_h_fastChops_atacsFgOlive: tmtm_h_fastChops_base
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="AMH (ATACS FG/Olive) (Chops)";
		picture="\tmtm\pack\contact_headgear\Data\UI\icon_fast_atacsFg_ca.paa";
		hiddenSelectionsTextures[]= 
		{
			"\tmtm\pack\contact_headgear\Data\tmtm_fast_atacsFgOlive_co.paa"
		};
	};
	class tmtm_h_fast_atacsFgGrey: tmtm_h_fast_base
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="AMH (ATACS FG/Grey)";
		picture="\tmtm\pack\contact_headgear\Data\UI\icon_fast_atacsFg_ca.paa";
		hiddenSelectionsTextures[]= 
		{
			"\tmtm\pack\contact_headgear\Data\tmtm_fast_atacsFgGrey_co.paa"
		};
	};
	class tmtm_h_fastHeadset_atacsFgGrey: tmtm_h_fastHeadset_base
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="AMH (ATACS FG/Grey) (Headset)";
		picture="\tmtm\pack\contact_headgear\Data\UI\icon_fast_atacsFg_ca.paa";
		hiddenSelectionsTextures[]= 
		{
			"\tmtm\pack\contact_headgear\Data\tmtm_fast_atacsFgGrey_co.paa"
		};
	};
	class tmtm_h_fastEars_atacsFgGrey: tmtm_h_fastEars_base
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="AMH (ATACS FG/Grey) (Ears)";
		picture="\tmtm\pack\contact_headgear\Data\UI\icon_fast_atacsFg_ca.paa";
		hiddenSelectionsTextures[]= 
		{
			"\tmtm\pack\contact_headgear\Data\tmtm_fast_atacsFgGrey_co.paa"
		};
	};
	class tmtm_h_fastChops_atacsFgGrey: tmtm_h_fastChops_base
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="AMH (ATACS FG/Grey) (Chops)";
		picture="\tmtm\pack\contact_headgear\Data\UI\icon_fast_atacsFg_ca.paa";
		hiddenSelectionsTextures[]= 
		{
			"\tmtm\pack\contact_headgear\Data\tmtm_fast_atacsFgGrey_co.paa"
		};
	};
	class tmtm_h_fast_multicamBlack: tmtm_h_fast_base
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="AMH (Multicam/Black)";
		picture="\tmtm\pack\contact_headgear\Data\UI\icon_fast_multicamBlack_ca.paa";
		hiddenSelectionsTextures[]= 
		{
			"\tmtm\pack\contact_headgear\Data\tmtm_fast_multicamBlack_co.paa"
		};
	};
	class tmtm_h_fastHeadset_multicamBlack: tmtm_h_fastHeadset_base
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="AMH (Multicam/Black) (Headset)";
		picture="\tmtm\pack\contact_headgear\Data\UI\icon_fast_multicamBlack_ca.paa";
		hiddenSelectionsTextures[]= 
		{
			"\tmtm\pack\contact_headgear\Data\tmtm_fast_multicamBlack_co.paa"
		};
	};
	class tmtm_h_fastEars_multicamBlack: tmtm_h_fastEars_base
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="AMH (Multicam/Black) (Ears)";
		picture="\tmtm\pack\contact_headgear\Data\UI\icon_fast_multicamBlack_ca.paa";
		hiddenSelectionsTextures[]= 
		{
			"\tmtm\pack\contact_headgear\Data\tmtm_fast_multicamBlack_co.paa"
		};
	};
	class tmtm_h_fastChops_multicamBlack: tmtm_h_fastChops_base
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="AMH (Multicam/Black) (Chops)";
		picture="\tmtm\pack\contact_headgear\Data\UI\icon_fast_multicamBlack_ca.paa";
		hiddenSelectionsTextures[]= 
		{
			"\tmtm\pack\contact_headgear\Data\tmtm_fast_multicamBlack_co.paa"
		};
	};
	class tmtm_h_fast_multicamOlive: tmtm_h_fast_base
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="AMH (Multicam/Olive)";
		picture="\tmtm\pack\contact_headgear\Data\UI\icon_fast_multicamOlive_ca.paa";
		hiddenSelectionsTextures[]= 
		{
			"\tmtm\pack\contact_headgear\Data\tmtm_fast_multicamOlive_co.paa"
		};
	};
	class tmtm_h_fastHeadset_multicamOlive: tmtm_h_fastHeadset_base
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="AMH (Multicam/Olive) (Headset)";
		picture="\tmtm\pack\contact_headgear\Data\UI\icon_fast_multicamOlive_ca.paa";
		hiddenSelectionsTextures[]= 
		{
			"\tmtm\pack\contact_headgear\Data\tmtm_fast_multicamOlive_co.paa"
		};
	};
	class tmtm_h_fastEars_multicamOlive: tmtm_h_fastEars_base
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="AMH (Multicam/Olive) (Ears)";
		picture="\tmtm\pack\contact_headgear\Data\UI\icon_fast_multicamOlive_ca.paa";
		hiddenSelectionsTextures[]= 
		{
			"\tmtm\pack\contact_headgear\Data\tmtm_fast_multicamOlive_co.paa"
		};
	};
	class tmtm_h_fastChops_multicamOlive: tmtm_h_fastChops_base
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="AMH (Multicam/Olive) (Chops)";
		picture="\tmtm\pack\contact_headgear\Data\UI\icon_fast_multicamOlive_ca.paa";
		hiddenSelectionsTextures[]= 
		{
			"\tmtm\pack\contact_headgear\Data\tmtm_fast_multicamOlive_co.paa"
		};
	};
	class tmtm_h_fast_multicamTan: tmtm_h_fast_base
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="AMH (Multicam/Tan)";
		picture="\tmtm\pack\contact_headgear\Data\UI\icon_fast_multicamTan_ca.paa";
		hiddenSelectionsTextures[]= 
		{
			"\tmtm\pack\contact_headgear\Data\tmtm_fast_multicamTan_co.paa"
		};
	};
	class tmtm_h_fastHeadset_multicamTan: tmtm_h_fastHeadset_base
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="AMH (Multicam/Tan) (Headset)";
		picture="\tmtm\pack\contact_headgear\Data\UI\icon_fast_multicamTan_ca.paa";
		hiddenSelectionsTextures[]= 
		{
			"\tmtm\pack\contact_headgear\Data\tmtm_fast_multicamTan_co.paa"
		};
	};
	class tmtm_h_fastEars_multicamTan: tmtm_h_fastEars_base
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="AMH (Multicam/Tan) (Ears)";
		picture="\tmtm\pack\contact_headgear\Data\UI\icon_fast_multicamTan_ca.paa";
		hiddenSelectionsTextures[]= 
		{
			"\tmtm\pack\contact_headgear\Data\tmtm_fast_multicamTan_co.paa"
		};
	};
	class tmtm_h_fastChops_multicamTan: tmtm_h_fastChops_base
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="AMH (Multicam/Tan) (Chops)";
		picture="\tmtm\pack\contact_headgear\Data\UI\icon_fast_multicamTan_ca.paa";
		hiddenSelectionsTextures[]= 
		{
			"\tmtm\pack\contact_headgear\Data\tmtm_fast_multicamTan_co.paa"
		};
	};
	class tmtm_h_fast_night: tmtm_h_fast_base
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="AMH (Night)";
		picture="\tmtm\pack\contact_headgear\Data\UI\icon_fast_night_ca.paa";
		hiddenSelectionsTextures[]= 
		{
			"\tmtm\pack\contact_headgear\Data\tmtm_fast_night_co.paa"
		};
	};
	class tmtm_h_fastHeadset_night: tmtm_h_fastHeadset_base
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="AMH (Night) (Headset)";
		picture="\tmtm\pack\contact_headgear\Data\UI\icon_fast_night_ca.paa";
		hiddenSelectionsTextures[]= 
		{
			"\tmtm\pack\contact_headgear\Data\tmtm_fast_night_co.paa"
		};
	};
	class tmtm_h_fastEars_night: tmtm_h_fastEars_base
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="AMH (Night) (Ears)";
		picture="\tmtm\pack\contact_headgear\Data\UI\icon_fast_night_ca.paa";
		hiddenSelectionsTextures[]= 
		{
			"\tmtm\pack\contact_headgear\Data\tmtm_fast_night_co.paa"
		};
	};
	class tmtm_h_fastChops_night: tmtm_h_fastChops_base
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="AMH (Night) (Chops)";
		picture="\tmtm\pack\contact_headgear\Data\UI\icon_fast_night_ca.paa";
		hiddenSelectionsTextures[]= 
		{
			"\tmtm\pack\contact_headgear\Data\tmtm_fast_night_co.paa"
		};
	};
	class tmtm_h_fast_mcamB: tmtm_h_fast_base
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="AMH (Multicam Black)";
		picture="\tmtm\pack\contact_headgear\Data\UI\icon_fast_mcamB_ca.paa";
		hiddenSelectionsTextures[]= 
		{
			"\tmtm\pack\contact_headgear\Data\tmtm_fast_mcamB_co.paa"
		};
	};
	class tmtm_h_fastHeadset_mcamB: tmtm_h_fastHeadset_base
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="AMH (Multicam Black) (Headset)";
		picture="\tmtm\pack\contact_headgear\Data\UI\icon_fast_mcamB_ca.paa";
		hiddenSelectionsTextures[]= 
		{
			"\tmtm\pack\contact_headgear\Data\tmtm_fast_mcamB_co.paa"
		};
	};
	class tmtm_h_fastEars_mcamB: tmtm_h_fastEars_base
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="AMH (Multicam Black) (Ears)";
		picture="\tmtm\pack\contact_headgear\Data\UI\icon_fast_mcamB_ca.paa";
		hiddenSelectionsTextures[]= 
		{
			"\tmtm\pack\contact_headgear\Data\tmtm_fast_mcamB_co.paa"
		};
	};
	class tmtm_h_fastChops_mcamB: tmtm_h_fastChops_base
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="AMH (Multicam Black) (Chops)";
		picture="\tmtm\pack\contact_headgear\Data\UI\icon_fast_mcamB_ca.paa";
		hiddenSelectionsTextures[]= 
		{
			"\tmtm\pack\contact_headgear\Data\tmtm_fast_mcamB_co.paa"
		};
	};
};