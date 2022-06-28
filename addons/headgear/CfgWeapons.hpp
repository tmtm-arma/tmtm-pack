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
		picture="\tmtm\pack\headgear\Data\UI\tmtm_icon_altynNoVisor_olive_ca.paa";
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
		picture="\tmtm\pack\headgear\Data\UI\tmtm_icon_altynNoVisor_olive_ca.paa";
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
		picture="\tmtm\pack\headgear\Data\UI\tmtm_icon_altynNoVisor_black_ca.paa";
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
		picture="\tmtm\pack\headgear\Data\UI\tmtm_icon_altyn_olive_ca.paa";
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
		picture="\tmtm\pack\headgear\Data\UI\tmtm_icon_altyn_olive_ca.paa";
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
		picture="\tmtm\pack\headgear\Data\UI\tmtm_icon_altyn_black_ca.paa";
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
		picture="\tmtm\pack\headgear\Data\UI\tmtm_icon_altynVisorDown_olive_ca.paa";
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
		picture="\tmtm\pack\headgear\Data\UI\tmtm_icon_altynVisorDown_olive_ca.paa";
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
		picture="\tmtm\pack\headgear\Data\UI\tmtm_icon_altynVisorDown_black_ca.paa";
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_altyn_black_co.paa"};
		};
	};
	
	// Zenturion C1300
	class tmtm_h_c1300_grey_visorDown: ItemCore
	{
		author="Trenchgun";
		scope=2;
		displayName="C1300 (Grey/Visor Down)";
		descriptionShort = "Armor Level IV";
		picture="";
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
	
	
	// K6-3 Helmet
	class tmtm_h_k6_teal: ItemCore
	{
		author="Trenchgun";
		scope=2;
		displayName="K6-3 (Teal)";
		descriptionShort = "Armor Level IV";
		picture="";
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
		picture="";
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_black_co.paa"};
		};
	};
	class tmtm_h_k6_partizan: tmtm_h_k6_teal
	{
		scope=2;
		displayName="K6-3 (Partizan)";
		hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_partizan_co.paa"};
		picture="";
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_partizan_co.paa"};
		};
	};
	
	// K6-3 (Visor Up)
	class tmtm_h_k6_teal_visorUp: ItemCore
	{
		author="Trenchgun";
		scope=2;
		displayName="K6-3 (Teal/Visor Up)";
		descriptionShort = "Armor Level IV";
		picture="";
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
		picture="";
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_black_co.paa"};
		};
	};
	class tmtm_h_k6_partizan_visorUp: tmtm_h_k6_teal_visorUp
	{
		scope=2;
		displayName="K6-3 (Partizan/Visor Up)";
		hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_partizan_co.paa"};
		picture="";
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_partizan_co.paa"};
		};
	};
	
	// K6-3 (Visor Down)
	class tmtm_h_k6_teal_visorDown: ItemCore
	{
		author="Trenchgun";
		scope=2;
		displayName="K6-3 (Teal/Visor Down)";
		descriptionShort = "Armor Level IV";
		picture="";
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
		picture="";
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_black_co.paa"};
		};
	};
	class tmtm_h_k6_partizan_visorDown: tmtm_h_k6_teal_visorDown
	{
		scope=2;
		displayName="K6-3 (Partizan/Visor Down)";
		hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_partizan_co.paa"};
		picture="";
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]={"\tmtm\pack\headgear\Data\tmtm_k6_partizan_co.paa"};
		};
	};
};