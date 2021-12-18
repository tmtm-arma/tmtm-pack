class CfgWeapons
{
	class ItemCore;
	class HeadgearItem;
	class HelmetBase: ItemCore
	{
		class ItemInfo;
	};
	class H_HelmetB;
	
	class tmtm_h_altyn_green: ItemCore
	{
		author="Trenchgun";
		scope=2;
		displayName="Altyn (Green)";
		descriptionShort = "Armor Level IV";
		picture="\A3\characters_f\Data\UI\icon_H_helmet_plain_ca.paa";
		model="\tmtm\pack\altyn\tmtm_altyn.p3d";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\tmtm\pack\altyn\Data\tmtm_altyn_green_ca.paa"};
		class ItemInfo: HeadgearItem
		{
			mass=45;
			uniformModel="\tmtm\pack\altyn\tmtm_altyn.p3d";
			modelSides[]={6};
			hiddenSelections[]={"camo"};
			hiddenSelectionsTextures[]={"\tmtm\pack\altyn\Data\tmtm_altyn_green_ca.paa"};
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
	
	class tmtm_h_altyn_olive: tmtm_h_altyn_green
	{
		scope=2;
		displayName="Altyn (Olive)";
		hiddenSelectionsTextures[]={"\tmtm\pack\altyn\Data\tmtm_altyn_olive_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]={"\tmtm\pack\altyn\Data\tmtm_altyn_olive_co.paa"};
		};
	};
	class tmtm_h_altyn_black: tmtm_h_altyn_green
	{
		scope=2;
		displayName="Altyn (Black)";
		hiddenSelectionsTextures[]={"\tmtm\pack\altyn\Data\tmtm_altyn_black_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]={"\tmtm\pack\altyn\Data\tmtm_altyn_black_co.paa"};
		};
	};
	
};