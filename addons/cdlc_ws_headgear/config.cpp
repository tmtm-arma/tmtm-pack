#include "script_component.hpp"

class CfgPatches {
	class ADDON {
		name = COMPONENT_NAME;
		units[] = {};
		weapons[] = {};
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {
			"tmtmpack_main",
			"Characters_1_f_lxWS_headgear",
			"tmtmpack_blufor_headgear"
		};
		author = MOD_AUTHOR;
		url = MOD_URL;
		version = VERSION;
		versionStr = QUOTE(VERSION_STR);
		versionAr[] = {QUOTE(VERSION_AR)};

		skipWhenMissingDependencies = 1;
	};
};

#include "CfgWeapons.hpp"
