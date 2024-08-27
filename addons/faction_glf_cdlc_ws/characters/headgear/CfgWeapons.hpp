class tmtm_h_beret_base;
class tmtm_h_beret_headset_base: tmtm_h_beret_base
{
    class ItemInfo;
};

// Content
class tmtm_h_beret_headset_glf_army: tmtm_h_beret_headset_base
{
    author="erem2k";

    scope=2;
    scopeCurator=2;
    scopeArsenal=2;

    displayName="GLF Beret, Headset (Army)";
    picture="\tmtm\pack\faction_glf_cdlc_ws\characters\headgear\data\ui\icon_tmtm_h_beret_headset_glf_army_ca.paa";

    hiddenSelectionsTextures[]= {
        "\tmtm\pack\faction_glf\characters\headgear\Data\tmtm_beret_glf_army_co.paa",
        "lxws\characters_f_lxws\headgear\pmc\data\HeadMic_CO.paa"
    };

    hiddenSelectionsMaterials[] = {
        "\tmtm\pack\faction_glf\characters\headgear\Data\tmtm_beret_glf_army.rvmat"
    };

    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[]= {
            "\tmtm\pack\faction_glf\characters\headgear\Data\tmtm_beret_glf_army_co.paa",
            "lxws\characters_f_lxws\headgear\pmc\data\HeadMic_CO.paa"
        };
        hiddenSelectionsMaterials[] = {
            "\tmtm\pack\faction_glf\characters\headgear\Data\tmtm_beret_glf_army.rvmat"
        };
    };
};

class tmtm_h_beret_headset_glf_camo_brushw: tmtm_h_beret_headset_base
{
    author="erem2k";

    scope=2;
    scopeCurator=2;
    scopeArsenal=2;

    displayName="GLF Beret, Headset (Brush Woodland)";
    picture="\tmtm\pack\faction_glf_cdlc_ws\characters\headgear\data\ui\icon_tmtm_h_beret_headset_glf_camo_brushw_ca.paa";

    hiddenSelectionsTextures[]= {
        "\tmtm\pack\faction_glf\characters\headgear\Data\tmtm_beret_glf_camo_brushw_co.paa",
        "lxws\characters_f_lxws\headgear\pmc\data\HeadMic_CO.paa"
    };
    hiddenSelectionsMaterials[] = {
        "\tmtm\pack\faction_glf\characters\headgear\Data\tmtm_beret_glf_army.rvmat"
    };

    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[]= {
            "\tmtm\pack\faction_glf\characters\headgear\Data\tmtm_beret_glf_camo_brushw_co.paa",
            "lxws\characters_f_lxws\headgear\pmc\data\HeadMic_CO.paa"
        };
        hiddenSelectionsMaterials[] = {
            "\tmtm\pack\faction_glf\characters\headgear\Data\tmtm_beret_glf_army.rvmat"
        };
    };
};
