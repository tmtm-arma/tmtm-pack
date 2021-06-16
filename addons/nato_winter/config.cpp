#include "script_component.hpp"

class CfgPatches {
	class ADDON {
		name = COMPONENT_NAME;
		units[] = {};
		weapons[] = {
			"tmtm_h_helmetb_white",
			"tmtm_h_helmetspecb_white",
			"tmtm_h_helmetb_light_white",
			"tmtm_v_platecarrier1_darkgreen",
			"tmtm_v_platecarrier2_darkgreen"
		};
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {
			"tmtmpack_main",
			"A3_Characters_F"
		};
		author = MOD_AUTHOR;
		url = MOD_URL;
		version = VERSION; 
		versionStr = QUOTE(VERSION_STR);
		versionAr[] = {VERSION_AR};
	};
};

#include "CfgWeapons.hpp"