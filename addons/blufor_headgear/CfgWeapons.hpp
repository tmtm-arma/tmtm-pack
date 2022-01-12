class CfgWeapons
{
	class ItemCore;
	class HeadgearItem;
	class HelmetBase: ItemCore
	{
		class ItemInfo;
	};
	
	class tmtm_h_helmet_black: ItemCore
	{
		author="Trenchgun";
		scope=2;
		displayName="Combat Helmet (Black)";
		picture="\A3\characters_f\Data\UI\icon_H_helmet_plain_ca.paa";
		model="\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\blufor_headgear\Data\tmtm_helmet_black_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=30;
			uniformModel="\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
			modelSides[]={3,1};
			hiddenSelections[]=
			{
				"camo"
			};
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
	
	class tmtm_h_helmetEnhanced_black: tmtm_h_helmet_black
	{
		scope=2;
		picture="\A3\characters_f\Data\UI\icon_H_HelmetB_CA.paa";
		displayName="ECH (Black)";
		model="\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
		class ItemInfo: ItemInfo
		{
			mass=50;
			uniformModel="\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
			modelSides[]={3,1};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
	};
	
	class tmtm_h_helmetLight_black: tmtm_h_helmet_black
	{
		scope=2;
		author="Trenchgun";
		picture="\A3\Characters_F\data\ui\icon_H_HelmetB_light_ca.paa";
		displayName="LCH (Black)";
		model="\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		descriptionShort="$STR_A3_SP_AL_I";
		class ItemInfo: ItemInfo
		{
			mass=20;
			uniformModel="\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
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
	
	class tmtm_h_helmet_grey: tmtm_h_helmet_black
	{
		scope=2;
		displayName="Combat Helmet (Grey)";
		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\blufor_headgear\Data\tmtm_helmet_grey_co.paa"
		};
	};
	
	class tmtm_h_helmetEnhanced_grey: tmtm_h_helmetEnhanced_black
	{
		scope=2;
		displayName="ECH (Grey)";
		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\blufor_headgear\Data\tmtm_helmet_grey_co.paa"
		};
	};
	
	class tmtm_h_helmetLight_grey: tmtm_h_helmetLight_black
	{
		scope=2;
		displayName="LCH (Grey)";
		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\blufor_headgear\Data\tmtm_helmet_grey_co.paa"
		};
	};
	
	class tmtm_h_helmet_olive: tmtm_h_helmet_black
	{
		scope=2;
		displayName="Combat Helmet (Olive)";
		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\blufor_headgear\Data\tmtm_helmet_olive_co.paa"
		};
	};
	
	class tmtm_h_helmetEnhanced_olive: tmtm_h_helmetEnhanced_black
	{
		scope=2;
		displayName="ECH (Olive)";
		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\blufor_headgear\Data\tmtm_helmet_olive_co.paa"
		};
	};
	
	class tmtm_h_helmetLight_olive: tmtm_h_helmetLight_black
	{
		scope=2;
		displayName="LCH (Olive)";
		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\blufor_headgear\Data\tmtm_helmet_olive_co.paa"
		};
	};
	
	class tmtm_h_helmet_coyote: tmtm_h_helmet_black
	{
		scope=2;
		displayName="Combat Helmet (Coyote)";
		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\blufor_headgear\Data\tmtm_helmet_coyote_co.paa"
		};
	};
	
	class tmtm_h_helmetEnhanced_coyote: tmtm_h_helmetEnhanced_black
	{
		scope=2;
		displayName="ECH (Coyote)";
		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\blufor_headgear\Data\tmtm_helmet_coyote_co.paa"
		};
	};
	
	class tmtm_h_helmetLight_coyote: tmtm_h_helmetLight_black
	{
		scope=2;
		displayName="LCH (Coyote)";
		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\blufor_headgear\Data\tmtm_helmet_coyote_co.paa"
		};
	};
};