class CfgVehicles
{
	class Bag_Base;
	
	// Motherlode
	class tmtm_b_motherlode_MTPnoflag: Bag_Base {
		author="Trenchgun";
		scope=2;
		model="CUP\Weapons\CUP_Weapons_Backpacks\motherlode.p3d";
		displayName="Motherlode (MTP, No Flag)";
		picture="CUP\Weapons\CUP_Weapons_Backpacks\data\ui\Pack_Mlode_ca.paa";
		hiddenSelections[]={
			"camo"
		};
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_backpacks\Data\tmtm_motherlode_noflag_co.paa"
		};
		hiddenSelectionsMaterials[] =
		{
			"\tmtm\pack\cup_backpacks\Data\tmtm_motherlode.rvmat"
		};
		maximumLoad = 300;
		mass = 50;
	};
	class tmtm_b_motherlodeRadio_MTPnoflag: Bag_Base {
		author="Trenchgun";
		scope=2;
		model="CUP\Weapons\CUP_Weapons_Backpacks\motherlode_radio.p3d";
		displayName="Motherlode Radio (MTP, No Flag)";
		picture="CUP\Weapons\CUP_Weapons_Backpacks\data\ui\Pack_Mlode_ca.paa";
		hiddenSelections[]={
			"camo"
		};
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_backpacks\Data\tmtm_motherlode_noflag_co.paa"
		};
		hiddenSelectionsMaterials[] =
		{
			"\tmtm\pack\cup_backpacks\Data\tmtm_motherlode.rvmat"
		};
		maximumLoad = 300;
		mass = 50;
		tf_dialog = "rt1523g_radio_dialog";
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel";
		tf_encryptionCode = "tf_west_radio_code";
		tf_hasLRradio = 1;
		tf_range = 20000;
		tf_subtype = "digital_lr";
	};
	class tmtm_b_motherlode_black: Bag_Base {
		author="Trenchgun";
		scope=2;
		model="CUP\Weapons\CUP_Weapons_Backpacks\motherlode.p3d";
		displayName="Motherlode (Black)";
		picture="CUP\Weapons\CUP_Weapons_Backpacks\data\ui\Pack_Mlode_ca.paa";
		hiddenSelections[]={
			"camo"
		};
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_backpacks\Data\tmtm_motherlode_black_co.paa"
		};
		hiddenSelectionsMaterials[] =
		{
			"\tmtm\pack\cup_backpacks\Data\tmtm_motherlode.rvmat"
		};
		maximumLoad = 300;
		mass = 50;
	};
	class tmtm_b_motherlodeRadio_black: Bag_Base {
		author="Trenchgun";
		scope=2;
		model="CUP\Weapons\CUP_Weapons_Backpacks\motherlode_radio.p3d";
		displayName="Motherlode Radio (Black)";
		picture="CUP\Weapons\CUP_Weapons_Backpacks\data\ui\Pack_Mlode_ca.paa";
		hiddenSelections[]={
			"camo"
		};
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_backpacks\Data\tmtm_motherlode_black_co.paa"
		};
		hiddenSelectionsMaterials[] =
		{
			"\tmtm\pack\cup_backpacks\Data\tmtm_motherlode.rvmat"
		};
		maximumLoad = 300;
		mass = 50;
	};
	
	// Predator
	class tmtm_b_predator_MTPnoflag: Bag_Base {
		author="Trenchgun";
		scope=2;
		model="CUP\Weapons\CUP_Weapons_Backpacks\predator.p3d";
		displayName="Predator (MTP, No Flag)";
		picture="CUP\Weapons\CUP_Weapons_Backpacks\data\ui\Pack_PredBow_ca.paa";
		hiddenSelections[]={
			"camo"
		};
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_backpacks\Data\tmtm_predator_noflag_co.paa"
		};
		hiddenSelectionsMaterials[] =
		{
			"\tmtm\pack\cup_backpacks\Data\tmtm_predator.rvmat"
		};
		maximumLoad = 300;
		mass = 50;
	};
	class tmtm_b_predatorRadio_MTPnoflag: Bag_Base {
		author="Trenchgun";
		scope=2;
		model="CUP\Weapons\CUP_Weapons_Backpacks\predator_radio.p3d";
		displayName="Predator Radio (MTP, No Flag)";
		picture="CUP\Weapons\CUP_Weapons_Backpacks\data\ui\Pack_PredBow_ca.paa";
		hiddenSelections[]={
			"camo"
		};
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_backpacks\Data\tmtm_predator_noflag_co.paa"
		};
		hiddenSelectionsMaterials[] =
		{
			"\tmtm\pack\cup_backpacks\Data\tmtm_predator.rvmat"
		};
		maximumLoad = 300;
		mass = 50;
		tf_dialog = "rt1523g_radio_dialog";
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel";
		tf_encryptionCode = "tf_west_radio_code";
		tf_hasLRradio = 1;
		tf_range = 20000;
		tf_subtype = "digital_lr";
	};
	class tmtm_b_predator_black: Bag_Base {
		author="Trenchgun";
		scope=2;
		model="CUP\Weapons\CUP_Weapons_Backpacks\predator.p3d";
		displayName="Predator (Black)";
		picture="CUP\Weapons\CUP_Weapons_Backpacks\data\ui\Pack_PredBow_ca.paa";
		hiddenSelections[]={
			"camo"
		};
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_backpacks\Data\tmtm_predator_black_co.paa"
		};
		hiddenSelectionsMaterials[] =
		{
			"\tmtm\pack\cup_backpacks\Data\tmtm_predator.rvmat"
		};
		maximumLoad = 300;
		mass = 50;
	};
	class tmtm_b_predatorRadio_black: Bag_Base {
		author="Trenchgun";
		scope=2;
		model="CUP\Weapons\CUP_Weapons_Backpacks\predator_radio.p3d";
		displayName="Predator Radio (Black)";
		picture="CUP\Weapons\CUP_Weapons_Backpacks\data\ui\Pack_PredBow_ca.paa";
		hiddenSelections[]={
			"camo"
		};
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_backpacks\Data\tmtm_predator_black_co.paa"
		};
		hiddenSelectionsMaterials[] =
		{
			"\tmtm\pack\cup_backpacks\Data\tmtm_predator.rvmat"
		};
		maximumLoad = 300;
		mass = 50;
	};
	
	// Osprey Webbing as Backpacks
	class tmtm_b_ospreyBelt: Bag_Base
	{
		author="Trenchgun";
		scope=2;
		displayName = "Osprey Mk4 Belt";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_vests\webbing\data\UI\osprey_mk4_belt_ca.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_vests\webbing\osprey_mk4_belt.p3d";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {
			"CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_vests\osprey_mk4\data\equip_co.paa",
			"CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_vests\osprey_mk4\data\gear_co.paa"
		};
		maximumLoad=190;
		mass=25;
	};
	
	class tmtm_b_ospreyWebbing: Bag_Base
	{
		author="Trenchgun";
		scope=2;
		displayName = "Osprey Mk4 Webbing";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_vests\webbing\data\UI\osprey_mk4_webbing_ca.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_vests\webbing\osprey_mk4_webbing.p3d";
		hiddenSelections[] = {"camo", "camo1", "camo2"};
		hiddenSelectionsTextures[] = {
			"CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_vests\webbing\data\US_PASGT_vest_CO.paa",
			"CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_vests\osprey_mk4\data\equip_co.paa",
			"CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_vests\osprey_mk4\data\gear_co.paa"
		};
		maximumLoad=190;
		mass=25;
	};
	
	// Smersh Webbing as Backpacks
	class tmtm_b_smershButtpack: Bag_Base
	{
		author="Trenchgun";
		scope=2;
		displayName="Smersh Vest (Buttpack)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\data\ui\icon_v_smerch_1_ca.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\smersh\CUP_Smersh_Buttpack.p3d";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[] = {"CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\smersh\data\smersh_1_co.paa"};
		maximumLoad=140;
		mass=20;
	};
	class tmtm_b_smershButtpackSpectre: Bag_Base
	{
		author="Trenchgun";
		scope=2;
		displayName="Smersh Vest (Buttpack/Spectre)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\data\ui\icon_v_smerch_1_ca.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\smersh\CUP_Smersh_Buttpack.p3d";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[] = {"CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\smersh\data\smersh_1_spectre_co.paa"};
		maximumLoad=140;
		mass=20;
	};
	class tmtm_b_smershFull: Bag_Base
	{
		author="Trenchgun";
		scope=2;
		displayName="Smersh Vest (Spectre)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\data\ui\icon_v_smerch_1_ca.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\smersh\CUP_Smersh_Full.p3d";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[] = {"CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\smersh\data\smersh_1_spectre_co.paa"};
		maximumLoad=140;
		mass=20;
	};
	class tmtm_b_smershLight: Bag_Base
	{
		author="Trenchgun";
		scope=2;
		displayName="Smersh Vest (Light)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\data\ui\icon_v_smerch_1_ca.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\smersh\CUP_Smersh_Light.p3d";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[] = {"CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\smersh\data\smersh_1_co.paa"};
		maximumLoad=140;
		mass=20;
	};
	class tmtm_b_smershLightSpectre: Bag_Base
	{
		author="Trenchgun";
		scope=2;
		displayName="Smersh Vest (Light/Spectre)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\data\ui\icon_v_smerch_1_ca.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\smersh\CUP_Smersh_Light.p3d";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[] = {"CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\smersh\data\smersh_1_spectre_co.paa"};
		maximumLoad=140;
		mass=20;
	};
	class tmtm_b_smershRadio: Bag_Base
	{
		author="Trenchgun";
		scope=2;
		displayName="Smersh Vest (Radio)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\data\ui\icon_v_smerch_1_ca.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\smersh\CUP_Smersh_Radio.p3d";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[] = {"CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\smersh\data\smersh_1_co.paa"};
		maximumLoad=140;
		mass=20;
	};
	class tmtm_b_smershRadioSpectre: Bag_Base
	{
		author="Trenchgun";
		scope=2;
		displayName="Smersh Vest (Radio/Spectre)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\data\ui\icon_v_smerch_1_ca.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\smersh\CUP_Smersh_Radio.p3d";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[] = {"CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\smersh\data\smersh_1_spectre_co.paa"};
		maximumLoad=140;
		mass=20;
	};

	// RD-54 (Civilian Assault Pack)
	class tmtm_b_rd54_green: Bag_Base
	{
		author="erem2k";
		scope=2;

		displayName="RD-54 (Green)";
		picture = "\tmtm\pack\cup_backpacks\Data\UI\icon_tmtm_rd54_green.paa";

		model = "\CUP\Weapons\CUP_Weapons_Backpacks\CUP_AssaultPack_Civ.p3d";
		hiddenSelectionsTextures[] = {"\tmtm\pack\cup_backpacks\Data\tmtm_rd54_green_co.paa"};
		maximumLoad = 280;
		mass = 50;
	};
	class tmtm_b_rd54_khaki: Bag_Base
	{
		author="erem2k";
		scope=2;

		displayName="RD-54 (Khaki)";
		picture = "\tmtm\pack\cup_backpacks\Data\UI\icon_tmtm_rd54_khaki.paa";

		model = "\CUP\Weapons\CUP_Weapons_Backpacks\CUP_AssaultPack_Civ.p3d";
		hiddenSelectionsTextures[] = {"\tmtm\pack\cup_backpacks\Data\tmtm_rd54_khaki_co.paa"};
		maximumLoad = 280;
		mass = 50;
	};

	// Kolobok (ALICE)
	class tmtm_b_kolobok: Bag_Base
	{
		author="erem2k";
		scope=2;

		displayName="Kolobok Pack";
		picture = "\tmtm\pack\cup_backpacks\Data\UI\icon_tmtm_rd54_green.paa";

		model = "\CUP\Weapons\CUP_Weapons_Backpacks\CUP_AlicePack_TK.p3d";
		hiddenSelectionsTextures[] = {"\tmtm\pack\cup_backpacks\Data\tmtm_kolobok_khaki_co.paa"};
		maximumLoad = 300;
		mass = 50;
	};

};