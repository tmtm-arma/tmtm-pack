#include "script_component.hpp"

class CfgPatches {
	class ADDON {
		name = COMPONENT_NAME;
		units[] = {};
		weapons[] = {};
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {
			"tmtmpack_main",
			"sns_uniform",
			"sns_french_uniform",
			"simc_nv_67_core",
			"simc_uaf_81_core"
		};
		author = MOD_AUTHOR;
		url = MOD_URL;
		version = VERSION; 
		versionStr = QUOTE(VERSION_STR);
		versionAr[] = {QUOTE(VERSION_AR)};

		skipWhenMissingDependencies = 1;
	};
};

#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
