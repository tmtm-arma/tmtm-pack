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

	// RPS Smersh (NEW) Webbing as Backpacks
	// Olive
	class tmtm_b_rpsSmersh_ak_olive: Bag_Base
	{
		author="Trenchgun";
		scope=2;
		displayName="RPS Smersh (Olive/AK)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\data\UI\icon_V_O_RUS_RPS_Smersh_AK_ModernOlive_ca.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\CUP_rps_smersh_ak.p3d";
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4"};
		hiddenSelectionsTextures[] = {"CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\RPS_m_CO.paa","CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\RPS_Straps_m_CO.paa","CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\Suharka_MED_VOG_m_CO.paa","CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\AK_m_CO.paa"};
		maximumLoad=140;
		mass=25;
	};
	class tmtm_b_rpsSmersh_vog_olive: Bag_Base
	{
		author="Trenchgun";
		scope=2;
		displayName="RPS Smersh (Olive/VOG)";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\CUP_rps_smersh_vog.p3d";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\data\UI\icon_V_O_RUS_RPS_Smersh_VOG_ModernOlive_ca.paa";
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4"};
		hiddenSelectionsTextures[] = {"CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\RPS_m_CO.paa","CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\RPS_Straps_m_CO.paa","CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\Suharka_MED_VOG_m_CO.paa","CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\AK_m_CO.paa"};
		maximumLoad=150;
		mass=27;
	};
	class tmtm_b_rpsSmersh_vogSPP_olive: Bag_Base
	{
		author="Trenchgun";
		scope=2;
		displayName="RPS Smersh (Olive/SPP/VOG)";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\CUP_rps_smersh_vog_spp.p3d";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\data\UI\icon_V_O_RUS_RPS_Smersh_VOG_SPP_ModernOlive_ca.paa";
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4"};
		hiddenSelectionsTextures[] = {"CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\RPS_m_CO.paa","CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\RPS_Straps_m_CO.paa","CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\Suharka_MED_VOG_m_CO.paa","CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\AK_m_CO.paa"};
		maximumLoad=160;
		mass=30;
	};
	class tmtm_b_rpsSmersh_pkp_olive: Bag_Base
	{
		author="Trenchgun";
		scope=2;
		displayName="RPS Smersh (Olive/PKP)";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\CUP_rps_smersh_pkp.p3d";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\data\UI\icon_V_O_RUS_RPS_Smersh_PKP_ModernOlive_ca.paa";
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4"};
		hiddenSelectionsTextures[] = {"CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\RPS_m_CO.paa","CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\RPS_Straps_m_CO.paa","CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\Suharka_MED_VOG_m_CO.paa","CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\PKP_m_CO.paa"};
		maximumLoad=150;
		mass=27;
	};
	class tmtm_b_rpsSmersh_pkpLight_olive: Bag_Base
	{
		author="Trenchgun";
		scope=2;
		displayName="RPS Smersh (Olive/PKP Light)";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\CUP_rps_smersh_pkp_light.p3d";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\data\UI\icon_V_O_RUS_RPS_Smersh_PKP_Light_ModernOlive_ca.paa";
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4"};
		hiddenSelectionsTextures[] = {"CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\RPS_m_CO.paa","CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\RPS_Straps_m_CO.paa","CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\Suharka_MED_VOG_m_CO.paa","CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\PKP_m_CO.paa"};
		maximumLoad=140;
		mass=25;
	};
	class tmtm_b_rpsSmersh_pkpSPP_olive: Bag_Base
	{
		author="Trenchgun";
		scope=2;
		displayName="RPS Smersh (Olive/SPP/PKP)";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\CUP_rps_smersh_pkp_spp.p3d";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\data\UI\icon_V_O_RUS_RPS_Smersh_PKP_SPP_ModernOlive_ca.paa";
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4"};
		hiddenSelectionsTextures[] = {"CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\RPS_m_CO.paa","CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\RPS_Straps_m_CO.paa","CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\Suharka_MED_VOG_m_CO.paa","CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\PKP_m_CO.paa"};
		maximumLoad=170;
		mass=30;
	};
	class tmtm_b_rpsSmersh_svd_olive: Bag_Base
	{
		author="Trenchgun";
		scope=2;
		displayName="RPS Smersh (Olive/SVD)";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\CUP_rps_smersh_svd.p3d";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\data\UI\icon_V_O_RUS_RPS_Smersh_SVD_ModernOlive_ca.paa";
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4"};
		hiddenSelectionsTextures[] = {"CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\RPS_m_CO.paa","CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\RPS_Straps_m_CO.paa","CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\Suharka_MED_VOG_m_CO.paa","CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\SVD_m_CO.paa"};
		maximumLoad=120;
		mass=21;
	};

	// Green
	class tmtm_b_rpsSmersh_ak_green: tmtm_b_rpsSmersh_ak_olive
	{
		author="Trenchgun";
		scope=2;
		displayName="RPS Smersh (Green/AK)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\data\UI\icon_V_O_RUS_RPS_Smersh_AK_Green_ca.paa";
		hiddenSelectionsTextures[] = {"CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\RPS_g_CO.paa","CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\RPS_Straps_g_CO.paa","CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\Suharka_MED_VOG_g_CO.paa","CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\AK_g_CO.paa"};
		maximumLoad=140;
		mass=25;
	};
	class tmtm_b_rpsSmersh_vog_green: tmtm_b_rpsSmersh_vog_olive
	{
		author="Trenchgun";
		scope=2;
		displayName="RPS Smersh (Green/VOG)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\data\UI\icon_V_O_RUS_RPS_Smersh_VOG_Green_ca.paa";
		hiddenSelectionsTextures[] = {"CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\RPS_g_CO.paa","CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\RPS_Straps_g_CO.paa","CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\Suharka_MED_VOG_g_CO.paa","CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\AK_g_CO.paa"};
		maximumLoad=150;
		mass=27;
	};
	class tmtm_b_rpsSmersh_vogSPP_green: tmtm_b_rpsSmersh_vogSPP_olive
	{
		author="Trenchgun";
		scope=2;
		displayName="RPS Smersh (Green/SPP/VOG)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\data\UI\icon_V_O_RUS_RPS_Smersh_VOG_SPP_Green_ca.paa";
		hiddenSelectionsTextures[] = {"CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\RPS_g_CO.paa","CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\RPS_Straps_g_CO.paa","CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\Suharka_MED_VOG_g_CO.paa","CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\AK_g_CO.paa"};
		maximumLoad=160;
		mass=30;
	};
	class tmtm_b_rpsSmersh_pkp_green: tmtm_b_rpsSmersh_pkp_olive
	{
		author="Trenchgun";
		scope=2;
		displayName="RPS Smersh (Green/PKP)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\data\UI\icon_V_O_RUS_RPS_Smersh_PKP_Green_ca.paa";
		hiddenSelectionsTextures[] = {"CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\RPS_g_CO.paa","CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\RPS_Straps_g_CO.paa","CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\Suharka_MED_VOG_g_CO.paa","CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\PKP_g_CO.paa"};
		maximumLoad=150;
		mass=27;
	};
	class tmtm_b_rpsSmersh_pkpLight_green: tmtm_b_rpsSmersh_pkpLight_olive
	{
		author="Trenchgun";
		scope=2;
		displayName="RPS Smersh (Green/PKP Light)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\data\UI\icon_V_O_RUS_RPS_Smersh_PKP_Light_Green_ca.paa";
		hiddenSelectionsTextures[] = {"CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\RPS_g_CO.paa","CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\RPS_Straps_g_CO.paa","CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\Suharka_MED_VOG_g_CO.paa","CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\PKP_g_CO.paa"};
		maximumLoad=140;
		mass=25;
	};
	class tmtm_b_rpsSmersh_pkpSPP_green: tmtm_b_rpsSmersh_pkpSPP_olive
	{
		author="Trenchgun";
		scope=2;
		displayName="RPS Smersh (Green/SPP/PKP)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\data\UI\icon_V_O_RUS_RPS_Smersh_PKP_SPP_Green_ca.paa";
		hiddenSelectionsTextures[] = {"CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\RPS_g_CO.paa","CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\RPS_Straps_g_CO.paa","CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\Suharka_MED_VOG_g_CO.paa","CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\PKP_g_CO.paa"};
		maximumLoad=170;
		mass=30;
	};
	class tmtm_b_rpsSmersh_svd_green: tmtm_b_rpsSmersh_svd_olive
	{
		author="Trenchgun";
		scope=2;
		displayName="RPS Smersh (Green/SVD)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\data\UI\icon_V_O_RUS_RPS_Smersh_SVD_Green_ca.paa";
		hiddenSelectionsTextures[] = {"CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\RPS_g_CO.paa","CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\RPS_Straps_g_CO.paa","CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\Suharka_MED_VOG_g_CO.paa","CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\SVD_g_CO.paa"};
		maximumLoad=120;
		mass=21;
	};

	// Coyote
	class tmtm_b_rpsSmersh_ak_coyote: tmtm_b_rpsSmersh_ak_olive
	{
		author="Trenchgun";
		scope=2;
		displayName="RPS Smersh (Coyote/AK)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\data\UI\icon_V_O_RUS_RPS_Smersh_AK_Coyote_ca.paa";
		hiddenSelectionsTextures[] = {"CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\RPS_c_CO.paa","CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\RPS_Straps_c_CO.paa","CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\Suharka_MED_VOG_c_CO.paa","CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\AK_c_CO.paa"};
		maximumLoad=140;
		mass=25;
	};
	class tmtm_b_rpsSmersh_vog_coyote: tmtm_b_rpsSmersh_vog_olive
	{
		author="Trenchgun";
		scope=2;
		displayName="RPS Smersh (Coyote/VOG)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\data\UI\icon_V_O_RUS_RPS_Smersh_VOG_Coyote_ca.paa";
		hiddenSelectionsTextures[] = {"CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\RPS_c_CO.paa","CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\RPS_Straps_c_CO.paa","CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\Suharka_MED_VOG_c_CO.paa","CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\AK_c_CO.paa"};
		maximumLoad=150;
		mass=27;
	};
	class tmtm_b_rpsSmersh_vogSPP_coyote: tmtm_b_rpsSmersh_vogSPP_olive
	{
		author="Trenchgun";
		scope=2;
		displayName="RPS Smersh (Coyote/SPP/VOG)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\data\UI\icon_V_O_RUS_RPS_Smersh_VOG_SPP_Coyote_ca.paa";
		hiddenSelectionsTextures[] = {"CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\RPS_c_CO.paa","CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\RPS_Straps_c_CO.paa","CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\Suharka_MED_VOG_c_CO.paa","CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\AK_c_CO.paa"};
		maximumLoad=160;
		mass=30;
	};
	class tmtm_b_rpsSmersh_pkp_coyote: tmtm_b_rpsSmersh_pkp_olive
	{
		author="Trenchgun";
		scope=2;
		displayName="RPS Smersh (Coyote/PKP)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\data\UI\icon_V_O_RUS_RPS_Smersh_PKP_Coyote_ca.paa";
		hiddenSelectionsTextures[] = {"CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\RPS_c_CO.paa","CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\RPS_Straps_c_CO.paa","CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\Suharka_MED_VOG_c_CO.paa","CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\PKP_c_CO.paa"};
		maximumLoad=150;
		mass=27;
	};
	class tmtm_b_rpsSmersh_pkpLight_coyote: tmtm_b_rpsSmersh_pkpLight_olive
	{
		author="Trenchgun";
		scope=2;
		displayName="RPS Smersh (Coyote/PKP Light)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\data\UI\icon_V_O_RUS_RPS_Smersh_PKP_Light_Coyote_ca.paa";
		hiddenSelectionsTextures[] = {"CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\RPS_c_CO.paa","CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\RPS_Straps_c_CO.paa","CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\Suharka_MED_VOG_c_CO.paa","CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\PKP_c_CO.paa"};
		maximumLoad=140;
		mass=25;
	};
	class tmtm_b_rpsSmersh_pkpSPP_coyote: tmtm_b_rpsSmersh_pkpSPP_olive
	{
		author="Trenchgun";
		scope=2;
		displayName="RPS Smersh (Coyote/SPP/PKP)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\data\UI\icon_V_O_RUS_RPS_Smersh_PKP_SPP_Coyote_ca.paa";
		hiddenSelectionsTextures[] = {"CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\RPS_c_CO.paa","CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\RPS_Straps_c_CO.paa","CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\Suharka_MED_VOG_c_CO.paa","CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\PKP_c_CO.paa"};
		maximumLoad=170;
		mass=30;
	};
	class tmtm_b_rpsSmersh_svd_coyote: tmtm_b_rpsSmersh_svd_olive
	{
		author="Trenchgun";
		scope=2;
		displayName="RPS Smersh (Coyote/SVD)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\data\UI\icon_V_O_RUS_RPS_Smersh_SVD_Coyote_ca.paa";
		hiddenSelectionsTextures[] = {"CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\RPS_c_CO.paa","CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\RPS_Straps_c_CO.paa","CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\Suharka_MED_VOG_c_CO.paa","CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\SVD_c_CO.paa"};
		maximumLoad=120;
		mass=21;
	};
	
	// Brown
	class tmtm_b_rpsSmersh_ak_brown: tmtm_b_rpsSmersh_ak_olive
	{
		author="Trenchgun";
		scope=2;
		displayName="RPS Smersh (Brown/AK)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\data\UI\icon_V_O_RUS_RPS_Smersh_AK_Brown_ca.paa";
		hiddenSelectionsTextures[] = {"CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\RPS_k_CO.paa","CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\RPS_Straps_k_CO.paa","CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\Suharka_MED_VOG_k_CO.paa","CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\AK_k_CO.paa"};
		maximumLoad=140;
		mass=25;
	};
	class tmtm_b_rpsSmersh_vog_brown: tmtm_b_rpsSmersh_vog_olive
	{
		author="Trenchgun";
		scope=2;
		displayName="RPS Smersh (Brown/VOG)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\data\UI\icon_V_O_RUS_RPS_Smersh_VOG_Brown_ca.paa";
		hiddenSelectionsTextures[] = {"CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\RPS_k_CO.paa","CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\RPS_Straps_k_CO.paa","CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\Suharka_MED_VOG_k_CO.paa","CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\AK_k_CO.paa"};
		maximumLoad=150;
		mass=27;
	};
	class tmtm_b_rpsSmersh_vogSPP_brown: tmtm_b_rpsSmersh_vogSPP_olive
	{
		author="Trenchgun";
		scope=2;
		displayName="RPS Smersh (Brown/SPP/VOG)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\data\UI\icon_V_O_RUS_RPS_Smersh_VOG_SPP_Brown_ca.paa";
		hiddenSelectionsTextures[] = {"CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\RPS_k_CO.paa","CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\RPS_Straps_k_CO.paa","CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\Suharka_MED_VOG_k_CO.paa","CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\AK_k_CO.paa"};
		maximumLoad=160;
		mass=30;
	};
	class tmtm_b_rpsSmersh_pkp_brown: tmtm_b_rpsSmersh_pkp_olive
	{
		author="Trenchgun";
		scope=2;
		displayName="RPS Smersh (Brown/PKP)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\data\UI\icon_V_O_RUS_RPS_Smersh_PKP_Brown_ca.paa";
		hiddenSelectionsTextures[] = {"CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\RPS_k_CO.paa","CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\RPS_Straps_k_CO.paa","CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\Suharka_MED_VOG_k_CO.paa","CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\PKP_k_CO.paa"};
		maximumLoad=150;
		mass=27;
	};
	class tmtm_b_rpsSmersh_pkpLight_brown: tmtm_b_rpsSmersh_pkpLight_olive
	{
		author="Trenchgun";
		scope=2;
		displayName="RPS Smersh (Brown/PKP Light)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\data\UI\icon_V_O_RUS_RPS_Smersh_PKP_Light_Brown_ca.paa";
		hiddenSelectionsTextures[] = {"CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\RPS_k_CO.paa","CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\RPS_Straps_k_CO.paa","CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\Suharka_MED_VOG_k_CO.paa","CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\PKP_k_CO.paa"};
		maximumLoad=140;
		mass=25;
	};
	class tmtm_b_rpsSmersh_pkpSPP_brown: tmtm_b_rpsSmersh_pkpSPP_olive
	{
		author="Trenchgun";
		scope=2;
		displayName="RPS Smersh (Brown/SPP/PKP)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\data\UI\icon_V_O_RUS_RPS_Smersh_PKP_SPP_Brown_ca.paa";
		hiddenSelectionsTextures[] = {"CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\RPS_k_CO.paa","CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\RPS_Straps_k_CO.paa","CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\Suharka_MED_VOG_k_CO.paa","CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\PKP_k_CO.paa"};
		maximumLoad=170;
		mass=30;
	};
	class tmtm_b_rpsSmersh_svd_brown: tmtm_b_rpsSmersh_svd_olive
	{
		author="Trenchgun";
		scope=2;
		displayName="RPS Smersh (Brown/SVD)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\data\UI\icon_V_O_RUS_RPS_Smersh_SVD_Brown_ca.paa";
		hiddenSelectionsTextures[] = {"CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\RPS_k_CO.paa","CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\RPS_Straps_k_CO.paa","CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\Suharka_MED_VOG_k_CO.paa","CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\SVD_k_CO.paa"};
		maximumLoad=120;
		mass=21;
	};

	// RPS Smersh (NEW) Belt as Backpacks
	// 		Olive
	class tmtm_b_rpsSmersh_ak_olive_belt: Bag_Base
	{
		author="erem2k";
		scope=2;
		arsenalScope=2;

		displayName="RS Smersh (Olive/AK)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\data\UI\icon_V_O_RUS_RPS_Smersh_AK_ModernOlive_ca.paa";
		
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\CUP_rps_smersh_ak.p3d";
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4"};
		hiddenSelectionsTextures[] = {
			"",
			"",
			"CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\Suharka_MED_VOG_m_CO.paa",
			"CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\AK_m_CO.paa"
		};
		
		maximumLoad=140;
		mass=25;
	};
	class tmtm_b_rpsSmersh_vog_olive_belt: Bag_Base
	{
		author="erem2k";
		scope=2;
		arsenalScope=2;

		displayName="RS Smersh (Olive/VOG)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\data\UI\icon_V_O_RUS_RPS_Smersh_VOG_ModernOlive_ca.paa";
		
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\CUP_rps_smersh_vog.p3d";
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4"};
		hiddenSelectionsTextures[] = {
			"",
			"",
			"CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\Suharka_MED_VOG_m_CO.paa",
			"CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\AK_m_CO.paa"
		};
		maximumLoad=150;
		mass=27;
	};
	class tmtm_b_rpsSmersh_vogSPP_olive_belt: Bag_Base
	{
		author="erem2k";
		scope=2;
		arsenalScope=2;
		
		displayName="RS Smersh (Olive/SPP/VOG)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\data\UI\icon_V_O_RUS_RPS_Smersh_VOG_SPP_ModernOlive_ca.paa";

		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\CUP_rps_smersh_vog_spp.p3d";
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4"};
		hiddenSelectionsTextures[] = {
			"",
			"",
			"CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\Suharka_MED_VOG_m_CO.paa","CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\AK_m_CO.paa"};
		
		maximumLoad=160;
		mass=30;
	};
	class tmtm_b_rpsSmersh_pkp_olive_belt: Bag_Base
	{
		author="erem2k";
		scope=2;
		arsenalScope=2;

		displayName="RS Smersh (Olive/PKP)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\data\UI\icon_V_O_RUS_RPS_Smersh_PKP_ModernOlive_ca.paa";

		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\CUP_rps_smersh_pkp.p3d";
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4"};
		hiddenSelectionsTextures[] = {
			"",
			"",
			"CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\Suharka_MED_VOG_m_CO.paa",
			"CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\PKP_m_CO.paa"
		};
		
		maximumLoad=150;
		mass=27;
	};
	class tmtm_b_rpsSmersh_pkpLight_olive_belt: Bag_Base
	{
		author="erem2k";
		scope=2;
		arsenalScope=2;
		
		displayName="RS Smersh (Olive/PKP Light)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\data\UI\icon_V_O_RUS_RPS_Smersh_PKP_Light_ModernOlive_ca.paa";

		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\CUP_rps_smersh_pkp_light.p3d";
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4"};
		hiddenSelectionsTextures[] = {
			"",
			"",
			"CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\Suharka_MED_VOG_m_CO.paa",
			"CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\PKP_m_CO.paa"
		};
		
		maximumLoad=140;
		mass=25;
	};
	class tmtm_b_rpsSmersh_pkpSPP_olive_belt: Bag_Base
	{
		author="erem2k";
		scope=2;
		arsenalScope=2;

		displayName="RS Smersh (Olive/SPP/PKP)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\data\UI\icon_V_O_RUS_RPS_Smersh_PKP_SPP_ModernOlive_ca.paa";

		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\CUP_rps_smersh_pkp_spp.p3d";
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4"};
		hiddenSelectionsTextures[] = {
			"",
			"",
			"CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\Suharka_MED_VOG_m_CO.paa",
			"CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\PKP_m_CO.paa"
		};
		
		maximumLoad=170;
		mass=30;
	};
	class tmtm_b_rpsSmersh_svd_olive_belt: Bag_Base
	{
		author="erem2k";
		scope=2;
		arsenalScope=2;

		displayName="RS Smersh (Olive/SVD)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\data\UI\icon_V_O_RUS_RPS_Smersh_SVD_ModernOlive_ca.paa";

		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\CUP_rps_smersh_svd.p3d";
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4"};
		hiddenSelectionsTextures[] = {
			"",
			"",
			"CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\Suharka_MED_VOG_m_CO.paa",
			"CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\SVD_m_CO.paa"
		};
		
		maximumLoad=120;
		mass=21;
	};

	// 		Brown
	class tmtm_b_rpsSmersh_ak_brown_belt: tmtm_b_rpsSmersh_ak_olive_belt
	{
		author="erem2k";
		scope=2;
		arsenalScope=2;

		displayName="RS Smersh (Brown/AK)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\data\UI\icon_V_O_RUS_RPS_Smersh_AK_Brown_ca.paa";

		hiddenSelectionsTextures[] = {
			"",
			"",
			"CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\Suharka_MED_VOG_k_CO.paa",
			"CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\AK_k_CO.paa"
		};

		maximumLoad=140;
		mass=25;
	};
	class tmtm_b_rpsSmersh_vog_brown_belt: tmtm_b_rpsSmersh_vog_olive_belt
	{
		author="erem2k";
		scope=2;
		arsenalScope=2;

		displayName="RS Smersh (Brown/VOG)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\data\UI\icon_V_O_RUS_RPS_Smersh_VOG_Brown_ca.paa";

		hiddenSelectionsTextures[] = {
			"",
			"",
			"CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\Suharka_MED_VOG_k_CO.paa",
			"CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\AK_k_CO.paa"
		};
		
		maximumLoad=150;
		mass=27;
	};
	class tmtm_b_rpsSmersh_vogSPP_brown_belt: tmtm_b_rpsSmersh_vogSPP_olive_belt
	{
		author="erem2k";
		scope=2;
		arsenalScope=2;

		displayName="RS Smersh (Brown/SPP/VOG)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\data\UI\icon_V_O_RUS_RPS_Smersh_VOG_SPP_Brown_ca.paa";

		hiddenSelectionsTextures[] = {
			"",
			"",
			"CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\Suharka_MED_VOG_k_CO.paa",
			"CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\AK_k_CO.paa"
		};
		maximumLoad=160;
		mass=30;
	};
	class tmtm_b_rpsSmersh_pkp_brown_belt: tmtm_b_rpsSmersh_pkp_olive_belt
	{
		author="erem2k";
		scope=2;
		arsenalScope=2;

		displayName="RS Smersh (Brown/PKP)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\data\UI\icon_V_O_RUS_RPS_Smersh_PKP_Brown_ca.paa";

		hiddenSelectionsTextures[] = {
			"",
			"",
			"CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\Suharka_MED_VOG_k_CO.paa",
			"CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\PKP_k_CO.paa"
		};
		maximumLoad=150;
		mass=27;
	};
	class tmtm_b_rpsSmersh_pkpLight_brown_belt: tmtm_b_rpsSmersh_pkpLight_olive_belt
	{
		author="erem2k";
		scope=2;
		arsenalScope=2;

		displayName="RS Smersh (Brown/PKP Light)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\data\UI\icon_V_O_RUS_RPS_Smersh_PKP_Light_Brown_ca.paa";

		hiddenSelectionsTextures[] = {
			"",
			"",
			"CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\Suharka_MED_VOG_k_CO.paa",
			"CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\PKP_k_CO.paa"
		};
		
		maximumLoad=140;
		mass=25;
	};
	class tmtm_b_rpsSmersh_pkpSPP_brown_belt: tmtm_b_rpsSmersh_pkpSPP_olive_belt
	{
		author="erem2k";
		scope=2;
		arsenalScope=2;

		displayName="RS Smersh (Brown/SPP/PKP)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\data\UI\icon_V_O_RUS_RPS_Smersh_PKP_SPP_Brown_ca.paa";

		hiddenSelectionsTextures[] = {
			"",
			"",
			"CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\Suharka_MED_VOG_k_CO.paa",
			"CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\PKP_k_CO.paa"
		};
		
		maximumLoad=170;
		mass=30;
	};
	class tmtm_b_rpsSmersh_svd_brown_belt: tmtm_b_rpsSmersh_svd_olive_belt
	{
		author="erem2k";
		scope=2;
		arsenalScope=2;

		displayName="RS Smersh (Brown/SVD)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\data\UI\icon_V_O_RUS_RPS_Smersh_SVD_Brown_ca.paa";

		hiddenSelectionsTextures[] = {
			"",
			"",
			"CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\Suharka_MED_VOG_k_CO.paa",
			"CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Vest\RPS_Smersh\Data\SVD_k_CO.paa"
		};
		
		maximumLoad=120;
		mass=21;
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

};