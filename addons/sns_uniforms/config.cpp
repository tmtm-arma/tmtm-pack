#pragma hemtt flag pe23_ignore_has_include
#if __has_include("\simc_uaf_88\config.bin")

#include "script_component.hpp"

class CfgPatches {
	class ADDON {
		name = COMPONENT_NAME;
		units[] = {};
		weapons[] = {};
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {
			"tmtmpack_main",
			"simc_uaf_88_core",
			"simc_mc_67_core"
		};
		author = MOD_AUTHOR;
		url = MOD_URL;
		version = VERSION; 
		versionStr = QUOTE(VERSION_STR);
		versionAr[] = {QUOTE(VERSION_AR)};
	};
};

#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"

#endif