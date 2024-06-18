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
			"A3_Characters_F_Beta",
			"A3_Characters_F_Bootcamp",
			"A3_Characters_F_Exp",
			"A3_Characters_F_Enoch",
			"A3_characters_f_gamma",
			"A3_Characters_F_Orange"
		};
		author = MOD_AUTHOR;
		url = MOD_URL;
		version = VERSION; 
		versionStr = QUOTE(VERSION_STR);
		versionAr[] = {QUOTE(VERSION_AR)};
	};
};

class UniformSlotInfo
{
	slotType=0;
	linkProxy="-";
};

#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"