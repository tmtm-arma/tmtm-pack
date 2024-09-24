class tmtm_nvg_ess_goggles_high_base: NVGoggles
{
    scope=1;
    scopeArsenal=0;

    modelOptics="\A3\Weapons_F\Reticle\optics_empty.p3d";
    model="\tmtm\pack\aegis_facewear\tmtm_g_goggles_high.p3d";

    visionMode[]= { "Normal" };

    hiddenSelections[]= { "camo", "camo_glass" };

    class ItemInfo: ItemInfo
    {
        uniformModel="\tmtm\pack\aegis_facewear\tmtm_g_goggles_high.p3d";
        modelOff="\tmtm\pack\aegis_facewear\tmtm_g_goggles_high.p3d";

        hiddenSelections[]= { "camo", "camo_glass" };

        mass=6;
    };
};

class tmtm_nvg_ess_goggles_high_brown: tmtm_nvg_ess_goggles_high_base
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

    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[]= {
            "\tmtm\pack\aegis_facewear\data\tmtm_goggles_high_brown_co.paa",
            "\tmtm\pack\aegis_facewear\data\tmtm_glass_tactical_ca.paa"
        };
    };
};

class tmtm_nvg_ess_goggles_high_green: tmtm_nvg_ess_goggles_high_base
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

    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[]= {
            "\tmtm\pack\aegis_facewear\data\tmtm_goggles_high_green_co.paa",
            "\tmtm\pack\aegis_facewear\data\tmtm_glass_tactical_ca.paa"
        };
    };
};
