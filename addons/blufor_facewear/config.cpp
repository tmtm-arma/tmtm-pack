#include "script_component.hpp"

class CfgPatches {
	class ADDON {
		name = COMPONENT_NAME;
		units[] = {};
		weapons[] = {};
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {
			"tmtmpack_main",
			"A3_Characters_F"
		};
		author = MOD_AUTHOR;
		url = MOD_URL;
		version = VERSION; 
		versionStr = QUOTE(VERSION_STR);
		versionAr[] = {QUOTE(VERSION_AR)};
	};
};

#include "CfgGlasses.hpp"
#include "CfgWeapons.hpp"