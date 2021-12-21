#include "script_component.hpp"

class CfgPatches {
	class ADDON {
		name = COMPONENT_NAME;
		units[] = {};
		weapons[] = {};
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {
			"tmtmpack_main",
			"A3_Characters_F",
			"A3_Characters_F_Bootcamp"
		};
		author = MOD_AUTHOR;
		url = MOD_URL;
		version = VERSION; 
		versionStr = QUOTE(VERSION_STR);
		versionAr[] = {VERSION_AR};
	};
};

class UniformSlotInfo
{
	slotType=0;
	linkProxy="-";
};

#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"