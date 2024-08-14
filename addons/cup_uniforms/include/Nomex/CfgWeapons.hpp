// Nomex Flightsuit, Grey
class tmtm_u_nomex_grey: tmtm_u_acu_base
{
	author="trenchgun";

	scope=1;
	scopeArsenal=2;
	scopeCurator=0;

	displayName="Nomex Flightsuit (Grey)";
	picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USMC\data\ui\icon_u_b_usmc_pilotoverall_ca.paa";

	hiddenSelectionsTextures[] = {
		"\tmtm\pack\cup_uniforms\Data\tmtm_nomex_grey_co.paa",
		"\cup\creatures\people\military\cup_creatures_people_military_usmc\data\gloves_co.paa"
	};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = "tmtm_nomex_grey";
		containerClass = "Supply40";
		mass = 20;
	};
};