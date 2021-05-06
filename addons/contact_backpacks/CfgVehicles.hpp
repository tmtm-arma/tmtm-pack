class CfgVehicles
{
	class Bag_Base;
	
	class tmtm_b_kipchak_base: Bag_Base
	{
		author = "Trenchgun";
		scope = 0;
		model = "\A3\Characters_F_Enoch\Vests\V_SmershVest_01_F.p3d";
		hiddenSelections[] = 
		{
			"Camo",
			"Camo2",
			"Radio1_hide"
		};
	};
	class tmtm_b_kipchakRadio_base: Bag_Base
	{
		author = "Trenchgun";
		scope = 0;
		model = "\A3\Characters_F_Enoch\Vests\V_SmershVest_01_F.p3d";
		hiddenSelections[] = 
		{
			"Camo",
			"Camo2",
			"Radio2_hide"
		};
	};
	class tmtm_b_kipchak_olive: tmtm_b_kipchak_base
	{
		author="Trenchgun";
		displayName="Kipchak Vest";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		picture="\A3\Characters_F_Enoch\Vests\Data\UI\icon_V_SmershVest_01_F_ca.paa";
		maximumLoad=160;
		mass=30;
		hiddenSelectionsTextures[]= 
		{
			"a3\Characters_F_Enoch\Vests\Data\smersh_co.paa",
			"a3\Characters_F_Enoch\Vests\Data\Smersh_miscellaneous_CO.paa"
		};
	};
	class tmtm_b_kipchakRadio_olive: tmtm_b_kipchakRadio_base
	{
		author = "Trenchgun";
		displayName = "Kipchak Vest (Radio)";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		picture = "\A3\Characters_F_Enoch\Vests\Data\UI\icon_V_SmershVest_01_radio_F_ca.paa";
		maximumLoad = 160;
		mass = 30;
		hiddenSelectionsTextures[] = 
		{
			"a3\Characters_F_Enoch\Vests\Data\smersh_co.paa",
			"a3\Characters_F_Enoch\Vests\Data\Smersh_miscellaneous_CO.paa"
		};
		tf_dialog = "bussole_radio_dialog";
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_east_radio_code";
		tf_hasLRradio = 1;
		tf_range = 20000;
		tf_subtype = "digital_lr";
	};
	class tmtm_b_kipchak_black: tmtm_b_kipchak_base
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
	class tmtm_b_kipchakRadio_black: tmtm_b_kipchakRadio_base
	{
		author = "Trenchgun";
		displayName = "Kipchak Vest Black (Radio)";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		picture = "\tmtm\pack\contact_vests\Data\UI\icon_kipchakRadio_black_ca.paa";
		maximumLoad = 160;
		mass = 30;
		hiddenSelectionsTextures[] = 
		{
			"\tmtm\pack\contact_vests\Data\tmtm_kipchak_black_co.paa",
			"\tmtm\pack\contact_vests\Data\tmtm_kipchakEquip_black_co.paa"
		};
		tf_dialog = "bussole_radio_dialog";
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_east_radio_code";
		tf_hasLRradio = 1;
		tf_range = 20000;
		tf_subtype = "digital_lr";
	};
};