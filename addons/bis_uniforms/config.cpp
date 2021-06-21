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
		versionAr[] = {VERSION_AR};
	};
};

class UniformSlotInfo
{
	slotType=0;
	linkProxy="-";
};

class CfgFactionClasses
{
	class tmtm_bis_uniforms
	{
		displayName="TMTM Uniforms";
		priority=1;
		side=BLUFOR;
		icon="";
	};
};

#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"