class tmtm_g_ess_goggles_high_base: None
{
    scope=1;
    scopeArsenal=0;

    model="\tmtm\pack\aegis_facewear\tmtm_g_goggles_high.p3d";
    hiddenSelections[]= { "camo", "camo_glass" };

    identityTypes[]= {};
    mass=2;
};

/////////////////////////////////////////////
// Content
class tmtm_g_ess_goggles_high_brown: tmtm_g_ess_goggles_high_base
{
    author="AveryTheKitty";
    scope=2;
    scopeArsenal=2;

    displayName="ESS Goggles, High (Brown)";
    picture="\tmtm\pack\aegis_facewear\data\ui\icon_tmtm_g_ess_goggles_high_brown_ca.paa";

    hiddenSelectionsTextures[]= {
        "\tmtm\pack\aegis_facewear\data\tmtm_goggles_high_brown_co.paa",
        "\tmtm\pack\aegis_facewear\data\tmtm_glass_tactical_ca.paa"
    };
};

class tmtm_g_ess_goggles_high_green: tmtm_g_ess_goggles_high_base
{
    author="AveryTheKitty";
    scope=2;
    scopeArsenal=2;

    displayName="ESS Goggles, High (Green)";
    picture="\tmtm\pack\aegis_facewear\data\ui\icon_tmtm_g_ess_goggles_high_green_ca.paa";

    hiddenSelectionsTextures[]= {
        "\tmtm\pack\aegis_facewear\data\tmtm_goggles_high_green_co.paa",
        "\tmtm\pack\aegis_facewear\data\tmtm_glass_tactical_ca.paa"
    };
};
