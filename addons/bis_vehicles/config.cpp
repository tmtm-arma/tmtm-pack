#include "script_component.hpp"

class CfgPatches {
	class ADDON {
		name = COMPONENT_NAME;
		units[] = {
			"TMTM_B_APC_Wheeled_03_F",
			"TMTM_B_MRAP_03_F",
			"TMTM_B_MRAP_03_hmg_F",
			"TMTM_B_MRAP_03_gmg_F"
		};
		weapons[] = {};
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {
			"tmtmpack_main",
			"A3_Air_F_Heli_Light_01",
			"A3_Air_F_Heli_Light_02",
			"A3_Air_F_Beta_Heli_Attack_01"
		};
		author = MOD_AUTHOR;
		url = MOD_URL;
		version = VERSION;
		versionStr = QUOTE(VERSION_STR);
		versionAr[] = {VERSION_AR};
	};
};

#include "CfgVehicles.hpp"
