class CfgWeapons
{
	class ItemCore;
	class Vest_Camo_Base: ItemCore
	{
		class ItemInfo;
	};
	
	class tmtm_v_modularVest_base: Vest_Camo_Base
	{
		DLC="Enoch";
		author="Trenchgun";
		scope=0;
		model="\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_F.p3d";
		hiddenSelections[] = {"Camo"};
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_F.p3d";
			hiddenSelections[]={"Camo"};
			containerClass="Supply60";
			mass=60;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=16;
					passThrough=0.3;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=16;
					passThrough=0.3;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.3;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.3;
				};
			};
		};
	};
	class tmtm_v_modularVest_black: tmtm_v_modularVest_base
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Modular Carrier Vest (Black)";
		picture="\tmtm\pack\contact_vests\Data\UI\icon_modularVest_black_ca.paa";

		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\contact_vests\Data\tmtm_modularVest_black_co.paa"
		};
	};
	class tmtm_v_modularVest_coyote: tmtm_v_modularVest_base
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Modular Carrier Vest (Coyote)";
		picture="\tmtm\pack\contact_vests\Data\UI\icon_modularVest_coyote_ca.paa";

		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\contact_vests\Data\tmtm_modularVest_coyote_co.paa"
		};
	};
	class tmtm_v_modularVest_tan: tmtm_v_modularVest_base
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Modular Carrier Vest (Tan)";
		picture="\tmtm\pack\contact_vests\Data\UI\icon_modularVest_tan_ca.paa";

		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\contact_vests\Data\tmtm_modularVest_tan_co.paa"
		};
	};
	class tmtm_v_modularVest_ranger: tmtm_v_modularVest_base
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Modular Carrier Vest (Ranger)";
		picture="\tmtm\pack\contact_vests\Data\UI\icon_modularVest_ranger_ca.paa";

		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\contact_vests\Data\tmtm_modularVest_ranger_co.paa"
		};
	};
	class tmtm_v_modularVest_multicam: tmtm_v_modularVest_base
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Modular Carrier Vest (Multicam)";
		picture="\tmtm\pack\contact_vests\Data\UI\icon_modularVest_tan_ca.paa";

		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\contact_vests\Data\tmtm_modularVest_multicam_co.paa"
		};
	};
	class tmtm_v_modularVest_blue: tmtm_v_modularVest_base
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Modular Carrier Vest (Blue)";
		picture="\tmtm\pack\contact_vests\Data\UI\icon_modularVest_blue_ca.paa";

		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\contact_vests\Data\tmtm_modularVest_blue_co.paa"
		};
	};
	class tmtm_v_modularVest_red: tmtm_v_modularVest_base
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Modular Carrier Vest (Red)";
		picture="\tmtm\pack\contact_vests\Data\UI\icon_modularVest_red_ca.paa";

		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\contact_vests\Data\tmtm_modularVest_red_co.paa"
		};
	};
	class tmtm_v_modularVestLite_base: tmtm_v_modularVest_base
	{
		model="\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_light_F.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_light_F.p3d";
			containerClass="Supply130";
			mass=70;
		};
	};
	class tmtm_v_modularVestLite_black: tmtm_v_modularVestLite_base
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Modular Carrier Lite (Black)";
		picture="\tmtm\pack\contact_vests\Data\UI\icon_modularVestLite_black_ca.paa";

		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\contact_vests\Data\tmtm_modularVest_black_co.paa"
		};
	};
	class tmtm_v_modularVestLite_coyote: tmtm_v_modularVestLite_base
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Modular Carrier Lite (Coyote)";
		picture="\tmtm\pack\contact_vests\Data\UI\icon_modularVestLite_coyote_ca.paa";

		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\contact_vests\Data\tmtm_modularVest_coyote_co.paa"
		};
	};
	class tmtm_v_modularVestLite_tan: tmtm_v_modularVestLite_base
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Modular Carrier Lite (Tan)";
		picture="\tmtm\pack\contact_vests\Data\UI\icon_modularVestLite_tan_ca.paa";

		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\contact_vests\Data\tmtm_modularVest_tan_co.paa"
		};
	};
	class tmtm_v_modularVestLite_ranger: tmtm_v_modularVestLite_base
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Modular Carrier Lite (Ranger)";
		picture="\tmtm\pack\contact_vests\Data\UI\icon_modularVestLite_ranger_ca.paa";

		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\contact_vests\Data\tmtm_modularVest_ranger_co.paa"
		};
	};
	class tmtm_v_modularVestLite_multicam: tmtm_v_modularVestLite_base
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Modular Carrier Lite (Multicam)";
		picture="\tmtm\pack\contact_vests\Data\UI\icon_modularVestLite_tan_ca.paa";

		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\contact_vests\Data\tmtm_modularVest_multicam_co.paa"
		};
	};
	class tmtm_v_modularVestLite_blue: tmtm_v_modularVestLite_base
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Modular Carrier Lite (Blue)";
		picture="\tmtm\pack\contact_vests\Data\UI\icon_modularVestLite_blue_ca.paa";

		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\contact_vests\Data\tmtm_modularVest_blue_co.paa"
		};
	};
	class tmtm_v_modularVestLite_red: tmtm_v_modularVestLite_base
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Modular Carrier Lite (Red)";
		picture="\tmtm\pack\contact_vests\Data\UI\icon_modularVestLite_red_ca.paa";

		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\contact_vests\Data\tmtm_modularVest_red_co.paa"
		};
	};
	class tmtm_v_modularVestGL_base: tmtm_v_modularVest_base
	{
		model="\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_heavy_F.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_heavy_F.p3d";
			containerClass="Supply130";
			mass=80;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=0.5;
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
					armor=16;
					passThrough=0.6;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=16;
					passThrough=0.6;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.3;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=16;
					passThrough=0.3;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.6;
				};
			};
		};
	};
	class tmtm_v_modularVestGL_black: tmtm_v_modularVestGL_base
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Modular Carrier GL Rig (Black)";
		picture="\tmtm\pack\contact_vests\Data\UI\icon_modularVestGL_black_ca.paa";

		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\contact_vests\Data\tmtm_modularVest_black_co.paa"
		};
	};
	class tmtm_v_modularVestGL_coyote: tmtm_v_modularVestGL_base
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Modular Carrier GL Rig (Coyote)";
		picture="\tmtm\pack\contact_vests\Data\UI\icon_modularVestGL_coyote_ca.paa";

		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\contact_vests\Data\tmtm_modularVest_coyote_co.paa"
		};
	};
	class tmtm_v_modularVestGL_tan: tmtm_v_modularVestGL_base
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Modular Carrier GL Rig (Tan)";
		picture="\tmtm\pack\contact_vests\Data\UI\icon_modularVestGL_tan_ca.paa";

		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\contact_vests\Data\tmtm_modularVest_tan_co.paa"
		};
	};
	class tmtm_v_modularVestGL_ranger: tmtm_v_modularVestGL_base
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Modular Carrier GL Rig (Ranger)";
		picture="\tmtm\pack\contact_vests\Data\UI\icon_modularVestGL_ranger_ca.paa";

		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\contact_vests\Data\tmtm_modularVest_ranger_co.paa"
		};
	};
	class tmtm_v_modularVestGL_multicam: tmtm_v_modularVestGL_base
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Modular Carrier GL Rig (Multicam)";
		picture="\tmtm\pack\contact_vests\Data\UI\icon_modularVestGL_tan_ca.paa";

		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\contact_vests\Data\tmtm_modularVest_multicam_co.paa"
		};
	};
	class tmtm_v_modularVestGL_blue: tmtm_v_modularVestGL_base
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Modular Carrier GL Rig (Blue)";
		picture="\tmtm\pack\contact_vests\Data\UI\icon_modularVestGL_blue_ca.paa";

		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\contact_vests\Data\tmtm_modularVest_blue_co.paa"
		};
	};
	class tmtm_v_modularVestGL_red: tmtm_v_modularVestGL_base
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Modular Carrier GL Rig (Red)";
		picture="\tmtm\pack\contact_vests\Data\UI\icon_modularVestGL_red_ca.paa";

		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\contact_vests\Data\tmtm_modularVest_red_co.paa"
		};
	};
	class tmtm_v_modularVestGL_blackBlue: tmtm_v_modularVestGL_base
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Modular Carrier GL Rig (Black/Blue)";
		picture="\tmtm\pack\contact_vests\Data\UI\icon_modularVestGL_black_ca.paa";

		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\contact_vests\Data\tmtm_modularVest_blackBlue_co.paa"
		};
	};
	class tmtm_v_modularVestGL_blackGreen: tmtm_v_modularVestGL_base
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Modular Carrier GL Rig (Black/Green)";
		picture="\tmtm\pack\contact_vests\Data\UI\icon_modularVestGL_black_ca.paa";

		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\contact_vests\Data\tmtm_modularVest_blackGreen_co.paa"
		};
	};
	class tmtm_v_modularVestGL_blackYellow: tmtm_v_modularVestGL_base
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Modular Carrier GL Rig (Black/Yellow)";
		picture="\tmtm\pack\contact_vests\Data\UI\icon_modularVestGL_black_ca.paa";

		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\contact_vests\Data\tmtm_modularVest_blackYellow_co.paa"
		};
	};
	class tmtm_v_modularVestGL_blackOrange: tmtm_v_modularVestGL_base
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Modular Carrier GL Rig (Black/Orange)";
		picture="\tmtm\pack\contact_vests\Data\UI\icon_modularVestGL_black_ca.paa";

		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\contact_vests\Data\tmtm_modularVest_blackOrange_co.paa"
		};
	};
	class tmtm_v_modularVestGL_blackPurple: tmtm_v_modularVestGL_base
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Modular Carrier GL Rig (Black/Purple)";
		picture="\tmtm\pack\contact_vests\Data\UI\icon_modularVestGL_black_ca.paa";

		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\contact_vests\Data\tmtm_modularVest_blackPurple_co.paa"
		};
	};
	class tmtm_v_modularVestGL_blackRed: tmtm_v_modularVestGL_base
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Modular Carrier GL Rig (Black/Red)";
		picture="\tmtm\pack\contact_vests\Data\UI\icon_modularVestGL_black_ca.paa";

		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\contact_vests\Data\tmtm_modularVest_blackRed_co.paa"
		};
	};
	
	// Hi-Vis vest
	class tmtm_v_modularVestHiVis_yellow: Vest_Camo_Base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Modular Carrier GL Rig (Hi-Vis Yellow)";
		picture="\tmtm\pack\contact_vests\Data\UI\icon_modularVestGL_black_ca.paa";
		model = "\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_F.p3d";
		hiddenSelections[]={"Camo"};
		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\contact_vests\Data\tmtm_modularVest_blackHiVisYellow_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\tmtm\pack\contact_vests\Data\tmtm_modularVest_hivis.rvmat"
		};
		descriptionShort="Armor Level III";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_heavy_F.p3d";
				containerClass = "Supply130";
				mass = 80;
				class HitpointsProtectionInfo
				{
					class Neck
					{
						hitpointName = "HitNeck";
						armor = 0.5;
						passThrough = 0.5;
					};
					class Arms
					{
						hitpointName = "HitArms";
						armor = 8;
						passThrough = 0.5;
					};
					class Chest
					{
						hitpointName = "HitChest";
						armor = 16;
						passThrough = 0.6;
					};
					class Diaphragm
					{
						hitpointName = "HitDiaphragm";
						armor = 16;
						passThrough = 0.6;
					};
					class Abdomen
					{
						hitpointName = "HitAbdomen";
						armor = 16;
						passThrough = 0.3;
					};
					class Pelvis
					{
						hitpointName = "HitPelvis";
						armor = 16;
						passThrough = 0.3;
					};
					class Body
					{
						hitpointName = "HitBody";
						passThrough = 0.6;
					};
				};
		};
	};
	class tmtm_v_modularVestHiVis_orange: tmtm_v_modularVestHiVis_yellow
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Modular Carrier GL Rig (Hi-Vis Orange)";
		picture="\tmtm\pack\contact_vests\Data\UI\icon_modularVestGL_black_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\contact_vests\Data\tmtm_modularVest_blackHiVisOrange_co.paa"
		};
	};
	
	class tmtm_v_modularVestHiVis_multicamOrange: tmtm_v_modularVestHiVis_yellow
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Modular Carrier GL Rig (Multicam/Hi-Vis Orange)";
		picture="\tmtm\pack\contact_vests\Data\UI\icon_modularVestGL_tan_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\contact_vests\Data\tmtm_modularVest_multicamHiVisOrange_co.paa"
		};
	};
	class tmtm_v_modularVestHiVis_multicamYellow: tmtm_v_modularVestHiVis_yellow
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Modular Carrier GL Rig (Multicam/Hi-Vis Yellow)";
		picture="\tmtm\pack\contact_vests\Data\UI\icon_modularVestGL_tan_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\contact_vests\Data\tmtm_modularVest_multicamHiVisYellow_co.paa"
		};
	};
	class tmtm_v_modularVestHiVis_rangerOrange: tmtm_v_modularVestHiVis_yellow
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Modular Carrier GL Rig (Ranger/Hi-Vis Orange)";
		picture="\tmtm\pack\contact_vests\Data\UI\icon_modularVestGL_ranger_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\contact_vests\Data\tmtm_modularVest_rangerHiVisOrange_co.paa"
		};
	};
	class tmtm_v_modularVestHiVis_rangerYellow: tmtm_v_modularVestHiVis_yellow
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Modular Carrier GL Rig (Ranger/Hi-Vis Yellow)";
		picture="\tmtm\pack\contact_vests\Data\UI\icon_modularVestGL_ranger_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\contact_vests\Data\tmtm_modularVest_rangerHiVisYellow_co.paa"
		};
	};
	// SOBR Vest
	class tmtm_v_modularVestSOBR_blackYellow: Vest_Camo_Base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="SOBR Modular Carrier GL Rig (Hi-Vis Yellow)";
		picture="\tmtm\pack\contact_vests\Data\UI\icon_modularVestGL_black_ca.paa";
		model = "\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_F.p3d";
		hiddenSelections[]={"Camo"};
		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\contact_vests\Data\tmtm_modularVest_SOBRyellow_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\tmtm\pack\contact_vests\Data\tmtm_modularVest_SOBR.rvmat"
		};
		descriptionShort="Armor Level III";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_heavy_F.p3d";
				containerClass = "Supply130";
				mass = 80;
				class HitpointsProtectionInfo
				{
					class Neck
					{
						hitpointName = "HitNeck";
						armor = 0.5;
						passThrough = 0.5;
					};
					class Arms
					{
						hitpointName = "HitArms";
						armor = 8;
						passThrough = 0.5;
					};
					class Chest
					{
						hitpointName = "HitChest";
						armor = 16;
						passThrough = 0.6;
					};
					class Diaphragm
					{
						hitpointName = "HitDiaphragm";
						armor = 16;
						passThrough = 0.6;
					};
					class Abdomen
					{
						hitpointName = "HitAbdomen";
						armor = 16;
						passThrough = 0.3;
					};
					class Pelvis
					{
						hitpointName = "HitPelvis";
						armor = 16;
						passThrough = 0.3;
					};
					class Body
					{
						hitpointName = "HitBody";
						passThrough = 0.6;
					};
				};
		};
	};
	class tmtm_v_modularVestSOBR_blackOrange: tmtm_v_modularVestSOBR_blackYellow
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="SOBR Modular Carrier GL Rig (Hi-Vis Orange)";
		picture="\tmtm\pack\contact_vests\Data\UI\icon_modularVestGL_black_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\contact_vests\Data\tmtm_modularVest_SOBRorange_co.paa"
		};
	};
	class tmtm_v_modularVestSOBR_multicamYellow: tmtm_v_modularVestSOBR_blackYellow
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="SOBR Modular Carrier GL Rig (Multicam/Hi-Vis Yellow)";
		picture="\tmtm\pack\contact_vests\Data\UI\icon_modularVestGL_tan_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\contact_vests\Data\tmtm_modularVest_SOBRyellow_multicam_co.paa"
		};
	};
	class tmtm_v_modularVestSOBR_multicamOrange: tmtm_v_modularVestSOBR_blackYellow
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="SOBR Modular Carrier GL Rig (Multicam/Hi-Vis Orange)";
		picture="\tmtm\pack\contact_vests\Data\UI\icon_modularVestGL_tan_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\contact_vests\Data\tmtm_modularVest_SOBRorange_multicam_co.paa"
		};
	};
	class tmtm_v_modularVestSOBR_rangerOrange: tmtm_v_modularVestSOBR_blackYellow
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="SOBR Modular Carrier GL Rig (Ranger/Hi-Vis Orange)";
		picture="\tmtm\pack\contact_vests\Data\UI\icon_modularVestGL_ranger_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\contact_vests\Data\tmtm_modularVest_SOBRorange_ranger_co.paa"
		};
	};
	class tmtm_v_modularVestSOBR_rangerYellow: tmtm_v_modularVestSOBR_blackYellow
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="SOBR Modular Carrier GL Rig (Ranger/Hi-Vis Yellow)";
		picture="\tmtm\pack\contact_vests\Data\UI\icon_modularVestGL_ranger_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\contact_vests\Data\tmtm_modularVest_SOBRyellow_ranger_co.paa"
		};
	};
	class tmtm_v_modularVestSOBRempty_black: vest_camo_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="SOBR Modular Carrier Vest (Black)";
		model="\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_F.p3d";
		picture="\tmtm\pack\contact_vests\Data\UI\icon_modularVest_black_ca.paa";
		descriptionShort="Armor Level III";
		hiddenSelections[]={"Camo"};
		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\contact_vests\Data\tmtm_modularVest_SOBRyellow_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\tmtm\pack\contact_vests\Data\tmtm_modularVest_SOBR.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_F.p3d";
			hiddenSelections[]={"Camo"};
			containerClass="Supply60";
			mass=60;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=16;
					passThrough=0.3;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=16;
					passThrough=0.3;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.3;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.3;
				};
			};
		};
	};
	class tmtm_v_modularVestSOBRempty_multicam: tmtm_v_modularVestSOBRempty_black
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="SOBR Modular Carrier Vest (Multicam)";
		picture="\tmtm\pack\contact_vests\Data\UI\icon_modularVest_tan_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\contact_vests\Data\tmtm_modularVest_SOBRyellow_multicam_co.paa"
		};
	};
	class tmtm_v_modularVestSOBRempty_ranger: tmtm_v_modularVestSOBRempty_black
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="SOBR Modular Carrier Vest (Ranger)";
		picture="\tmtm\pack\contact_vests\Data\UI\icon_modularVest_ranger_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\contact_vests\Data\tmtm_modularVest_SOBRyellow_ranger_co.paa"
		};
	};
	class tmtm_v_modularVestSOBRlite_black: tmtm_v_modularVestSOBRempty_black
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="SOBR Modular Carrier Lite (Black)";
		picture="\tmtm\pack\contact_vests\Data\UI\icon_modularVestLite_black_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\contact_vests\Data\tmtm_modularVest_SOBRyellow_co.paa"
		};
		model="\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_light_F.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_light_F.p3d";
			containerClass="Supply130";
			mass=70;
		};
	};
	class tmtm_v_modularVestSOBRlite_multicam: tmtm_v_modularVestSOBRlite_black
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="SOBR Modular Carrier Lite (Multicam)";
		picture="\tmtm\pack\contact_vests\Data\UI\icon_modularVestLite_tan_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\contact_vests\Data\tmtm_modularVest_SOBRyellow_multicam_co.paa"
		};
	};
	class tmtm_v_modularVestSOBRlite_ranger: tmtm_v_modularVestSOBRLite_black
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="SOBR Modular Carrier Lite (Ranger)";
		picture="\tmtm\pack\contact_vests\Data\UI\icon_modularVestLite_ranger_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\contact_vests\Data\tmtm_modularVest_SOBRyellow_ranger_co.paa"
		};
	};
	
	// FSB vest
	class tmtm_v_modularVestFSB_yellow: Vest_Camo_Base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="FSB Modular Carrier GL Rig (Hi-Vis Yellow)";
		picture="\tmtm\pack\contact_vests\Data\UI\icon_modularVestGL_black_ca.paa";
		model = "\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_F.p3d";
		hiddenSelections[]={"Camo"};
		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\contact_vests\Data\tmtm_modularVest_FSByellow_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\tmtm\pack\contact_vests\Data\tmtm_modularVest_FSB.rvmat"
		};
		descriptionShort="Armor Level III";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_heavy_F.p3d";
				containerClass = "Supply130";
				mass = 80;
				class HitpointsProtectionInfo
				{
					class Neck
					{
						hitpointName = "HitNeck";
						armor = 0.5;
						passThrough = 0.5;
					};
					class Arms
					{
						hitpointName = "HitArms";
						armor = 8;
						passThrough = 0.5;
					};
					class Chest
					{
						hitpointName = "HitChest";
						armor = 16;
						passThrough = 0.6;
					};
					class Diaphragm
					{
						hitpointName = "HitDiaphragm";
						armor = 16;
						passThrough = 0.6;
					};
					class Abdomen
					{
						hitpointName = "HitAbdomen";
						armor = 16;
						passThrough = 0.3;
					};
					class Pelvis
					{
						hitpointName = "HitPelvis";
						armor = 16;
						passThrough = 0.3;
					};
					class Body
					{
						hitpointName = "HitBody";
						passThrough = 0.6;
					};
				};
		};
	};
	class tmtm_v_modularVestFSB_orange: tmtm_v_modularVestFSB_yellow
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="FSB Modular Carrier GL Rig (Hi-Vis Orange)";
		picture="\tmtm\pack\contact_vests\Data\UI\icon_modularVestGL_black_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\contact_vests\Data\tmtm_modularVest_FSBorange_co.paa"
		};
	};
	class tmtm_v_modularVestFSB_multicamYellow: tmtm_v_modularVestFSB_yellow
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="FSB Modular Carrier GL Rig (Multicam/Hi-Vis Yellow)";
		picture="\tmtm\pack\contact_vests\Data\UI\icon_modularVestGL_tan_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\contact_vests\Data\tmtm_modularVest_FSByellow_multicam_co.paa"
		};
	};
	class tmtm_v_modularVestFSB_multicamOrange: tmtm_v_modularVestFSB_yellow
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="FSB Modular Carrier GL Rig (Multicam/Hi-Vis Orange)";
		picture="\tmtm\pack\contact_vests\Data\UI\icon_modularVestGL_tan_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\contact_vests\Data\tmtm_modularVest_FSBorange_multicam_co.paa"
		};
	};
	class tmtm_v_modularVestFSB_rangerYellow: tmtm_v_modularVestFSB_yellow
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="FSB Modular Carrier GL Rig (Ranger/Hi-Vis Yellow)";
		picture="\tmtm\pack\contact_vests\Data\UI\icon_modularVestGL_ranger_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\contact_vests\Data\tmtm_modularVest_FSByellow_ranger_co.paa"
		};
	};
	class tmtm_v_modularVestFSB_rangerOrange: tmtm_v_modularVestFSB_yellow
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="FSB Modular Carrier GL Rig (Ranger/Hi-Vis Orange)";
		picture="\tmtm\pack\contact_vests\Data\UI\icon_modularVestGL_ranger_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\contact_vests\Data\tmtm_modularVest_FSBorange_ranger_co.paa"
		};
	};
	class tmtm_v_modularVestFSBempty_black: vest_camo_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="FSB Modular Carrier Vest (Black)";
		model="\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_F.p3d";
		picture="\tmtm\pack\contact_vests\Data\UI\icon_modularVest_black_ca.paa";
		descriptionShort="Armor Level III";
		hiddenSelections[]={"Camo"};
		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\contact_vests\Data\tmtm_modularVest_FSByellow_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\tmtm\pack\contact_vests\Data\tmtm_modularVest_FSB.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_F.p3d";
			hiddenSelections[]={"Camo"};
			containerClass="Supply60";
			mass=60;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=16;
					passThrough=0.3;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=16;
					passThrough=0.3;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.3;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.3;
				};
			};
		};
	};
	class tmtm_v_modularVestFSBempty_multicam: tmtm_v_modularVestFSB_black
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="FSB Modular Carrier Vest (Multicam)";
		picture="\tmtm\pack\contact_vests\Data\UI\icon_modularVest_tan_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\contact_vests\Data\tmtm_modularVest_FSByellow_multicam_co.paa"
		};
	};
	class tmtm_v_modularVestFSBempty_ranger: tmtm_v_modularVestFSB_black
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="FSB Modular Carrier Vest (Ranger)";
		picture="\tmtm\pack\contact_vests\Data\UI\icon_modularVest_ranger_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\contact_vests\Data\tmtm_modularVest_FSByellow_ranger_co.paa"
		};
	};
	class tmtm_v_modularVestFSBlite_black: tmtm_v_modularVestFSBempty_black
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="FSB Modular Carrier Lite (Black)";
		picture="\tmtm\pack\contact_vests\Data\UI\icon_modularVestLite_black_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\contact_vests\Data\tmtm_modularVest_FSByellow_co.paa"
		};
		model="\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_light_F.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_light_F.p3d";
			containerClass="Supply130";
			mass=70;
		};
	};
	class tmtm_v_modularVestFSBlite_multicam: tmtm_v_modularVestFSBlite_black
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="FSB Modular Carrier Lite (Multicam)";
		picture="\tmtm\pack\contact_vests\Data\UI\icon_modularVestLite_tan_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\contact_vests\Data\tmtm_modularVest_FSByellow_multicam_co.paa"
		};
	};
	class tmtm_v_modularVestFSBlite_ranger: tmtm_v_modularVestFSBLite_black
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="FSB Modular Carrier Lite (Ranger)";
		picture="\tmtm\pack\contact_vests\Data\UI\icon_modularVestLite_ranger_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\contact_vests\Data\tmtm_modularVest_FSByellow_ranger_co.paa"
		};
	};
	
	class V_SmershVest_01_base_F;
	class tmtm_v_kipchak_black: V_SmershVest_01_base_F
	{
		author="Trenchgun";
		displayName="Kipchak Vest Black";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		picture="\tmtm\pack\contact_vests\Data\UI\icon_kipchak_black_ca.paa";
		maximumLoad=160;
		mass=30;
		hiddenSelectionsTextures[]= 
		{
			"\tmtm\pack\contact_vests\Data\tmtm_kipchak_black_co.paa",
			"\tmtm\pack\contact_vests\Data\tmtm_kipchakEquip_black_co.paa"
		};
	};
	class V_SmershVest_01_radio_base_F;
	class tmtm_v_kipchakRadio_black: V_SmershVest_01_radio_base_F
	{
		author="Trenchgun";
		displayName="Kipchak Vest Black (Radio)";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		picture="\tmtm\pack\contact_vests\Data\UI\icon_kipchakRadio_black_ca.paa";
		maximumLoad=160;
		mass=30;
		hiddenSelectionsTextures[]= 
		{
			"\tmtm\pack\contact_vests\Data\tmtm_kipchak_black_co.paa",
			"\tmtm\pack\contact_vests\Data\tmtm_kipchakEquip_black_co.paa"
		};
	};
};