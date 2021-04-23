class CfgVehicles
{
	class HeadgearItem;
	class HelmetBase: ItemCore
	{
		class ItemInfo;
	};
	
	// Combat Helmet ------------------------------------------------------------------------------
	
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
	
	class tmtm_h_helmet_grey: tmtm_h_helmet_black
	{
		displayName="Combat Helmet (Grey)";
		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\blufor_headgear\Data\tmtm_helmet_grey_co.paa"
		};
	};
	
	class tmtm_h_helmet_olive: tmtm_h_helmet_black
	{
		displayName="Combat Helmet (Olive)";
		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\blufor_headgear\Data\tmtm_helmet_olive_co.paa"
		};
	};
	
	class tmtm_h_helmet_coyote: tmtm_h_helmet_black
	{
		displayName="Combat Helmet (Coyote)";
		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\blufor_headgear\Data\tmtm_helmet_coyote_co.paa"
		};
	};
	
	
	// Enhanced Combat Helmet ---------------------------------------------------
	
	class tmtm_h_helmet_enhanced_black: tmtm_h_helmet_black
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
	
	class tmtm_h_helmet_enhanced_grey: tmtm_h_helmet_enhanced_black
	{
		displayName="ECH (Grey)";
		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\blufor_headgear\Data\tmtm_helmet_grey_co.paa"
		};
	};
	
	class tmtm_h_helmet_enhanced_olive: tmtm_h_helmet_enhanced_black
	{
		displayName="ECH (Olive)";
		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\blufor_headgear\Data\tmtm_helmet_olive_co.paa"
		};
	};
	
	class tmtm_h_helmet_enhanced_coyote: tmtm_h_helmet_enhanced_black
	{
		displayName="ECH (Coyote)";
		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\blufor_headgear\Data\tmtm_helmet_coyote_co.paa"
		};
	};
	
	
	// Light Combat Helmet -----------------------------------------------------------
	
	class tmtm_h_helmet_light_black: tmtm_h_helmet_black
	{
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
	
	class tmtm_h_helmet_light_grey: tmtm_h_helmet_light_black
	{
		displayName="LCH (Grey)";
		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\blufor_headgear\Data\tmtm_helmet_grey_co.paa"
		};
	};
	
	class tmtm_h_helmet_light_olive: tmtm_h_helmet_light_black
	{
		displayName="LCH (Olive)";
		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\blufor_headgear\Data\tmtm_helmet_olive_co.paa"
		};
	};
	
	class tmtm_h_helmet_light_coyote: tmtm_h_helmet_light_black
	{
		displayName="LCH (Coyote)";
		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\blufor_headgear\Data\tmtm_helmet_coyote_co.paa"
		};
	};
	
};