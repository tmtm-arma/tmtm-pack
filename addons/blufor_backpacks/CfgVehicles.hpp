class CfgVehicles
{
	class Bag_Base;
	
	// Rangemaster Belt (Backpack)
	
	class tmtm_bp_rangemaster_belt_rgr: Bag_Base
	{
		author = "Trenchgun";
		displayName = "Rangemaster Belt (Green)";
		scope = 2;
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		picture = "\A3\Characters_F\data\ui\icon_V_Belt_CA.paa";
		maximumLoad = 60;
		mass = 5;
		hiddenSelections[] = 
		{
			"Camo"
		};
		hiddenSelectionsTextures[] = 
		{
			"\A3\Characters_F\BLUFOR\Data\vests_rgr_co.paa"
		};
	};
	class tmtm_bp_rangemaster_belt_blk: tmtm_bp_rangemaster_belt_rgr
	{
		author = "Trenchgun";
		displayName = "Rangemaster Belt (Black)";
		scope = 2;
		hiddenSelections[] = 
		{
			"Camo"
		};
		hiddenSelectionsTextures[] = 
		{
			"\A3\Characters_F\BLUFOR\Data\vests_blk_co.paa"
		};
	};
	class tmtm_bp_rangemaster_belt_cbr: tmtm_bp_rangemaster_belt_rgr
	{
		author = "Trenchgun";
		displayName = "Rangemaster Belt (Coyote)";
		scope = 2;
		hiddenSelections[] = 
		{
			"Camo"
		};
		hiddenSelectionsTextures[] = 
		{
			"\A3\Characters_F\BLUFOR\Data\vests_cbr_co.paa"
		};
	};
	class tmtm_bp_rangemaster_belt_khk: tmtm_bp_rangemaster_belt_rgr
	{
		author = "Trenchgun";
		displayName = "Rangemaster Belt (Khaki)";
		scope = 2;
		hiddenSelections[] = 
		{
			"Camo"
		};
		hiddenSelectionsTextures[] = 
		{
			"\A3\Characters_F\BLUFOR\Data\vests_khk_co.paa"
		};
	};
};