#include "script_component.hpp"

class CfgPatches {
	class ADDON {
		name = COMPONENT_NAME;
		units[] = {
			"TMTM_B_RadioBag_01_darkgreen_b",
			"TMTM_B_RadioBag_01_winter_b",
			"TMTM_B_natowinter_base"
		};
		weapons[] = {
			"tmtm_h_booniehat_winter",
			"tmtm_h_helmetb_white",
			"tmtm_h_helmetspecb_white",
			"tmtm_h_helmetb_light_white",
			"tmtm_u_combatuniform_winter",
			"tmtm_v_platecarrier1_darkgreen",
			"tmtm_v_platecarrier2_darkgreen"
		};
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {
			"tmtmpack_main",
			"A3_Characters_F",
			"A3_Supplies_F_Enoch_Bags"
		};
		author = MOD_AUTHOR;
		url = MOD_URL;
		version = VERSION; 
		versionStr = QUOTE(VERSION_STR);
		versionAr[] = {QUOTE(VERSION_AR)};
	};
};

#include "CfgFactionClasses.hpp"
#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"