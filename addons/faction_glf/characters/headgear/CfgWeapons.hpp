class tmtm_h_beret_base: HelmetBase
{
    class ItemInfo;
};

class tmtm_h_beret_camo_base: tmtm_h_beret_base
{
    class ItemInfo;
};

class tmtm_h_bandana_base: HelmetBase
{
    class ItemInfo;
};

///////////////////////////////////////////////
class tmtm_h_beret_glf_army: tmtm_h_beret_base
{
    author="erem2k";

    scope=2;
    scopeCurator=2;
    scopeArsenal=2;

    displayName="GLF Beret (Army)";
    picture="\tmtm\pack\faction_glf\characters\headgear\data\ui\icon_tmtm_h_beret_glf_army_ca.paa";

    hiddenSelectionsTextures[]= {
        "\tmtm\pack\faction_glf\characters\headgear\Data\tmtm_beret_glf_army_co.paa"
    };

    hiddenSelectionsMaterials[] = {
        "\tmtm\pack\faction_glf\characters\headgear\Data\tmtm_beret_glf_army.rvmat"
    };

    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[]= {
            "\tmtm\pack\faction_glf\characters\headgear\Data\tmtm_beret_glf_army_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "\tmtm\pack\faction_glf\characters\headgear\Data\tmtm_beret_glf_army.rvmat"
        };
    };
};

class tmtm_h_beret_glf_airborne: tmtm_h_beret_base
{
    author="erem2k";

    scope=2;
    scopeCurator=2;
    scopeArsenal=2;

    displayName="GLF Beret (Airborne)";
    picture="\tmtm\pack\faction_glf\characters\headgear\data\ui\icon_tmtm_h_beret_glf_airborne_ca.paa";

    hiddenSelectionsTextures[]= {
        "\tmtm\pack\faction_glf\characters\headgear\Data\tmtm_beret_glf_airborne_co.paa"
    };
    hiddenSelectionsMaterials[] = {
        "\tmtm\pack\faction_glf\characters\headgear\Data\tmtm_beret_glf_airborne.rvmat"
    };

    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[]= {
            "\tmtm\pack\faction_glf\characters\headgear\Data\tmtm_beret_glf_airborne_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "\tmtm\pack\faction_glf\characters\headgear\Data\tmtm_beret_glf_airborne.rvmat"
        };
    };
};

class tmtm_h_beret_glf_camo_brushw: tmtm_h_beret_camo_base
{
    author="erem2k";

    scope=2;
    scopeCurator=2;
    scopeArsenal=2;

    displayName="GLF Beret, Camo (Brush Woodland)";
    picture="\tmtm\pack\faction_glf\characters\headgear\data\ui\icon_tmtm_h_beret_glf_camo_brushw_ca.paa";

    hiddenSelectionsTextures[]= {
        "\tmtm\pack\faction_glf\characters\headgear\Data\tmtm_beret_glf_camo_brushw_co.paa"
    };

    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[]= {
            "\tmtm\pack\faction_glf\characters\headgear\Data\tmtm_beret_glf_camo_brushw_co.paa"
        };
    };
};

class tmtm_h_bandana_glf_oak: tmtm_h_bandana_base
{
    author="erem2k";

    scope=2;
    scopeCurator=2;
    scopeArsenal=2;

    displayName="Bandana (Oak)";
    picture="\tmtm\pack\faction_glf\characters\headgear\data\ui\icon_tmtm_h_bandana_glf_oak_ca.paa";

    hiddenSelectionsTextures[]= {
        "\tmtm\pack\faction_glf\characters\headgear\Data\tmtm_bandana_glf_oak_co.paa"
    };

    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[]= {
            "\tmtm\pack\faction_glf\characters\headgear\Data\tmtm_bandana_glf_oak_co.paa"
        };
    };
};

class tmtm_h_bandana_glf_brushw: tmtm_h_bandana_base
{
    author="erem2k";

    scope=2;
    scopeCurator=2;
    scopeArsenal=2;

    displayName="Bandana (Brush Woodland)";
    picture="\tmtm\pack\faction_glf\characters\headgear\data\ui\icon_tmtm_h_bandana_glf_brushw_ca.paa";

    hiddenSelectionsTextures[]= {
        "\tmtm\pack\faction_glf\characters\headgear\Data\tmtm_bandana_glf_brushw_co.paa"
    };

    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[]= {
            "\tmtm\pack\faction_glf\characters\headgear\Data\tmtm_bandana_glf_brushw_co.paa"
        };
    };
};

class tmtm_h_bandana_glf_brushu: tmtm_h_bandana_base
{
    author="erem2k";

    scope=2;
    scopeCurator=2;
    scopeArsenal=2;

    displayName="Bandana (Brush Urban)";
    picture="\tmtm\pack\faction_glf\characters\headgear\data\ui\icon_tmtm_h_bandana_glf_brushu_ca.paa";

    hiddenSelectionsTextures[]= {
        "\tmtm\pack\faction_glf\characters\headgear\Data\tmtm_bandana_glf_brushu_co.paa"
    };

    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[]= {
            "\tmtm\pack\faction_glf\characters\headgear\Data\tmtm_bandana_glf_brushu_co.paa"
        };
    };
};
