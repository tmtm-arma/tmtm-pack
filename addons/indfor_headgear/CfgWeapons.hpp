class CfgWeapons
{
	class ItemCore;
	class HeadgearItem;
	class HelmetBase: ItemCore
	{
		class ItemInfo;
	};
	
	/*
	class H_HelmetCrew_I: H_HelmetCrew_B
	{
		author = "Bohemia Interactive";
		_generalMacro = "H_HelmetCrew_I";
		displayName = "Crew Helmet [AAF]";
		picture = "\A3\characters_F_Beta\Data\UI\icon_H_I_Helmet_crew_ca.paa";
		model = "\A3\Characters_F_Beta\INDEP\headgear_ia_helmet_crew";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Beta\Indep\Data\headgear_ia_helmet_crew_co.paa"};
		class ItemInfo: ItemInfo
		{
			modelSides[] = {2, 3};
			uniformModel = "\A3\Characters_F_Beta\INDEP\headgear_ia_helmet_crew";
		};
	};
	*/
	class H_HelmetCrew_B;
	class H_HelmetCrew_I: H_HelmetCrew_B 
	{
		class ItemInfo;
	};

	class tmtm_h_cvc_whiteBlue: H_HelmetCrew_I
	{
		author="trenchgun";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="CVC Helmet (White/Blue)";
		picture="\tmtm\pack\indfor_headgear\Data\UI\tmtm_icon_cvc_white_ca.paa";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\indfor_headgear\Data\tmtm_cvc_whiteBlue_co.paa"
		};
		hiddenSelectionsMaterials[]={
			"\tmtm\pack\indfor_headgear\Data\tmtm_cvc_tape.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			modelSides[]={0,1,2,3};
			uniformModel = "\A3\Characters_F_Beta\INDEP\headgear_ia_helmet_crew";
		};
	};
	class tmtm_h_cvc_whiteGreen: tmtm_h_cvc_whiteBlue
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="CVC Helmet (White/Green)";
		picture="\tmtm\pack\indfor_headgear\Data\UI\tmtm_icon_cvc_white_ca.paa";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\indfor_headgear\Data\tmtm_cvc_whiteGreen_co.paa"
		};
	};
	class tmtm_h_cvc_whiteOrange: tmtm_h_cvc_whiteBlue
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="CVC Helmet (White/Orange)";
		picture="\tmtm\pack\indfor_headgear\Data\UI\tmtm_icon_cvc_white_ca.paa";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\indfor_headgear\Data\tmtm_cvc_whiteOrange_co.paa"
		};
	};
	class tmtm_h_cvc_whitePurple: tmtm_h_cvc_whiteBlue
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="CVC Helmet (White/Purple)";
		picture="\tmtm\pack\indfor_headgear\Data\UI\tmtm_icon_cvc_white_ca.paa";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\indfor_headgear\Data\tmtm_cvc_whitePurple_co.paa"
		};
	};
	class tmtm_h_cvc_whiteRed: tmtm_h_cvc_whiteBlue
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="CVC Helmet (White/Red)";
		picture="\tmtm\pack\indfor_headgear\Data\UI\tmtm_icon_cvc_white_ca.paa";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\indfor_headgear\Data\tmtm_cvc_whiteRed_co.paa"
		};
	};
	class tmtm_h_cvc_whiteYellow: tmtm_h_cvc_whiteBlue
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="CVC Helmet (White/Yellow)";
		picture="\tmtm\pack\indfor_headgear\Data\UI\tmtm_icon_cvc_white_ca.paa";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\indfor_headgear\Data\tmtm_cvc_whiteYellow_co.paa"
		};
	};

	// black helmet
	class tmtm_h_cvc_blackBlue: tmtm_h_cvc_whiteBlue
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="CVC Helmet (Black/Blue)";
		picture="\tmtm\pack\indfor_headgear\Data\UI\tmtm_icon_cvc_black_ca.paa";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\indfor_headgear\Data\tmtm_cvc_blackBlue_co.paa"
		};
	};
	class tmtm_h_cvc_blackGreen: tmtm_h_cvc_whiteBlue
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="CVC Helmet (Black/Green)";
		picture="\tmtm\pack\indfor_headgear\Data\UI\tmtm_icon_cvc_black_ca.paa";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\indfor_headgear\Data\tmtm_cvc_blackGreen_co.paa"
		};
	};
	class tmtm_h_cvc_blackOrange: tmtm_h_cvc_whiteBlue
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="CVC Helmet (Black/Orange)";
		picture="\tmtm\pack\indfor_headgear\Data\UI\tmtm_icon_cvc_black_ca.paa";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\indfor_headgear\Data\tmtm_cvc_blackOrange_co.paa"
		};
	};
	class tmtm_h_cvc_blackPurple: tmtm_h_cvc_whiteBlue
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="CVC Helmet (Black/Purple)";
		picture="\tmtm\pack\indfor_headgear\Data\UI\tmtm_icon_cvc_black_ca.paa";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\indfor_headgear\Data\tmtm_cvc_blackPurple_co.paa"
		};
	};
	class tmtm_h_cvc_blackRed: tmtm_h_cvc_whiteBlue
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="CVC Helmet (Black/Red)";
		picture="\tmtm\pack\indfor_headgear\Data\UI\tmtm_icon_cvc_black_ca.paa";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\indfor_headgear\Data\tmtm_cvc_blackRed_co.paa"
		};
	};
	class tmtm_h_cvc_blackYellow: tmtm_h_cvc_whiteBlue
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="CVC Helmet (Black/Yellow)";
		picture="\tmtm\pack\indfor_headgear\Data\UI\tmtm_icon_cvc_black_ca.paa";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\indfor_headgear\Data\tmtm_cvc_blackYellow_co.paa"
		};
	};
	/*
	class tmtm_h_cvc_vbss_whiteOrange: H_HelmetCrew_I
	{
		author="trenchgun";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="CVC/VBSS Helmet (White/Orange)";
		picture="";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\indfor_headgear\Data\tmtm_cvc_vbss_whiteOrange_co.paa"
		};
		hiddenSelectionsMaterials[]={
			"\tmtm\pack\indfor_headgear\Data\tmtm_cvc_vbss.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			modelSides[]={0,1,2,3};
			uniformModel = "\A3\Characters_F_Beta\INDEP\headgear_ia_helmet_crew";
		};
	};
	*/
};