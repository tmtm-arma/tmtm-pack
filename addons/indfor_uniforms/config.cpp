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
		versionAr[] = {QUOTE(VERSION_AR)};
	};
};

class UniformSlotInfo
{
	slotType=0;
	linkProxy="-";
};

class cfgFactionClasses
{
	class tmtm_indfor_uniforms
	{
		displayName="TMTM Uniforms";
		priority=1;
		side=INDFOR;
		icon="";
	};
};

#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"