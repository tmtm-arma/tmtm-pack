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