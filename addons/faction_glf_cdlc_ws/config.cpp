#include "script_component.hpp"

class CfgPatches {
	class ADDON {
		name = COMPONENT_NAME;
		units[] = {};
		weapons[] = {};
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {
			"tmtmpack_main",
			"tmtmpack_cdlc_ws_headgear",
			"tmtmpack_faction_glf"
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
