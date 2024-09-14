class tmtm_nvg_armband_base: NVGoggles
{
    scope=1;
    scopeArsenal=0;

    model="\tmtm\pack\aegis_facewear\tmtm_g_armband.p3d";
    modelOptics="\A3\Weapons_F\Reticle\optics_empty.p3d";

    hiddenSelections[]= { "camo" };

    visionMode[]= { "Normal" };

    class ItemInfo: ItemInfo
    {
        uniformModel="\tmtm\pack\aegis_facewear\tmtm_g_armband.p3d";
        modelOff="\tmtm\pack\aegis_facewear\tmtm_g_armband.p3d";

        hiddenSelections[]= { "camo" };

        mass=2;
    };
};

class tmtm_nvg_armband_wide_base: tmtm_nvg_armband_base
{
    scope=1;
    scopeArsenal=0;

    model="\tmtm\pack\aegis_facewear\tmtm_g_armband_wide.p3d";

    class ItemInfo: ItemInfo
    {
        uniformModel="\tmtm\pack\aegis_facewear\tmtm_g_armband_wide.p3d";
        modelOff="\tmtm\pack\aegis_facewear\tmtm_g_armband_wide.p3d";
    };
};

/////////////////////////////////////////////
// Content
class tmtm_nvg_armband_blue: tmtm_nvg_armband_base
{
    author="OokamiJamie, erem2k";
    scope=2;
    scopeArsenal=2;

    displayName="Armband (Blue)";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    hiddenSelectionsTextures[]= {
        "\tmtm\pack\aegis_facewear\data\tmtm_armband_blue_co.paa"
    };

    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[]= {
            "\tmtm\pack\aegis_facewear\data\tmtm_armband_blue_co.paa"
        };
    };
};

class tmtm_nvg_armband_blue_wide: tmtm_nvg_armband_wide_base
{
    author="OokamiJamie, erem2k";
    scope=2;
    scopeArsenal=2;

    displayName="Armband (Blue, Wide)";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    hiddenSelectionsTextures[]= {
        "\tmtm\pack\aegis_facewear\data\tmtm_armband_blue_co.paa"
    };

    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[]= {
            "\tmtm\pack\aegis_facewear\data\tmtm_armband_blue_co.paa"
        };
    };
};

class tmtm_nvg_armband_green: tmtm_nvg_armband_base
{
    author="OokamiJamie, erem2k";
    scope=2;
    scopeArsenal=2;

    displayName="Armband (Green)";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    hiddenSelectionsTextures[]= {
        "\tmtm\pack\aegis_facewear\data\tmtm_armband_green_co.paa"
    };

    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[]= {
            "\tmtm\pack\aegis_facewear\data\tmtm_armband_green_co.paa"
        };
    };
};

class tmtm_nvg_armband_green_wide: tmtm_nvg_armband_wide_base
{
    author="OokamiJamie, erem2k";
    scope=2;
    scopeArsenal=2;

    displayName="Armband (Green, Wide)";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    hiddenSelectionsTextures[]= {
        "\tmtm\pack\aegis_facewear\data\tmtm_armband_green_co.paa"
    };

    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[]= {
            "\tmtm\pack\aegis_facewear\data\tmtm_armband_green_co.paa"
        };
    };
};

class tmtm_nvg_armband_red: tmtm_nvg_armband_base
{
    author="OokamiJamie, erem2k";
    scope=2;
    scopeArsenal=2;

    displayName="Armband (Red)";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    hiddenSelectionsTextures[]= {
        "\tmtm\pack\aegis_facewear\data\tmtm_armband_red_co.paa"
    };

    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[]= {
            "\tmtm\pack\aegis_facewear\data\tmtm_armband_red_co.paa"
        };
    };
};

class tmtm_nvg_armband_red_wide: tmtm_nvg_armband_wide_base
{
    author="OokamiJamie, erem2k";
    scope=2;
    scopeArsenal=2;

    displayName="Armband (Red, Wide)";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    hiddenSelectionsTextures[]= {
        "\tmtm\pack\aegis_facewear\data\tmtm_armband_red_co.paa"
    };

    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[]= {
            "\tmtm\pack\aegis_facewear\data\tmtm_armband_red_co.paa"
        };
    };
};

class tmtm_nvg_armband_yellow: tmtm_nvg_armband_base
{
    author="OokamiJamie, erem2k";
    scope=2;
    scopeArsenal=2;

    displayName="Armband (Yellow)";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    hiddenSelectionsTextures[]= {
        "\tmtm\pack\aegis_facewear\data\tmtm_armband_yellow_co.paa"
    };

    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[]= {
            "\tmtm\pack\aegis_facewear\data\tmtm_armband_yellow_co.paa"
        };
    };
};

class tmtm_nvg_armband_yellow_wide: tmtm_nvg_armband_wide_base
{
    author="OokamiJamie, erem2k";
    scope=2;
    scopeArsenal=2;

    displayName="Armband (Yellow, Wide)";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    hiddenSelectionsTextures[]= {
        "\tmtm\pack\aegis_facewear\data\tmtm_armband_yellow_co.paa"
    };

    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[]= {
            "\tmtm\pack\aegis_facewear\data\tmtm_armband_yellow_co.paa"
        };
    };
};
