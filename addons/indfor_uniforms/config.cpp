#include "script_component.hpp"

class CfgPatches {
	class ADDON {
		name = COMPONENT_NAME;
		units[] = {};
		weapons[] = {};
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {"tmtmpack_main"};
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