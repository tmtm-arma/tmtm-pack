#include "script_component.hpp"

class CfgPatches {
	class ADDON {
		name = COMPONENT_NAME;
		units[] = {};
		weapons[] = {
			"tmtm_h_altyn_green",
			"tmtm_h_altyn_olive",
			"tmtm_h_altyn_black",
			"tmtm_h_altyn_green_visorUp",
			"tmtm_h_altyn_olive_visorUp",
			"tmtm_h_altyn_black_visorUp",
			"tmtm_h_altyn_green_visorDown",
			"tmtm_h_altyn_olive_visorDown",
			"tmtm_h_altyn_black_visorDown",
			"tmtm_h_c1300_grey_visorDown",
			"tmtm_h_c1300_grey_visorUp",
			"tmtm_h_k6_teal",
			"tmtm_h_k6_black",
			"tmtm_h_k6_partizan",
			"tmtm_h_k6_teal_visorUp",
			"tmtm_h_k6_black_visorUp",
			"tmtm_h_k6_partian_visorUp",
			"tmtm_h_k6_teal_visorDown",
			"tmtm_h_k6_black_visorDown",
			"tmtm_h_k6_partizan_visorDown"
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
#include "CfgGlasses.hpp"