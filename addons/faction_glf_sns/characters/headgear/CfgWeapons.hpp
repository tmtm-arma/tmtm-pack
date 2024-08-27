class tmtm_h_fieldcap_base: HelmetBase
{
    class ItemInfo;
};

class tmtm_h_fieldcap_goggles_base: tmtm_h_fieldcap_base
{
    class ItemInfo;
};

class tmtm_h_fieldcap_goggles_back_base: tmtm_h_fieldcap_base
{
    class ItemInfo;
};

/*
    Content
*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////

class tmtm_h_fieldcap_glf_oak: tmtm_h_fieldcap_base
{
    author="erem2k";

    scope=2;
    scopeCurator=2;
    scopeArsenal=2;

    displayName="GLF Field Cap (Oak)";
    picture="\tmtm\pack\faction_glf_sns\characters\headgear\data\ui\icon_tmtm_h_fieldcap_glf_oak_ca.paa";

    hiddenSelectionsTextures[]= {
        "\tmtm\pack\faction_glf_sns\characters\headgear\Data\tmtm_fieldcap_glf_oak_co.paa",
        ""
    };

    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[]= {
            "\tmtm\pack\faction_glf_sns\characters\headgear\Data\tmtm_fieldcap_glf_oak_co.paa",
            ""
        };
    };
};

class tmtm_h_fieldcap_goggles_glf_oak: tmtm_h_fieldcap_goggles_base
{
    author="erem2k";

    scope=2;
    scopeCurator=2;
    scopeArsenal=2;

    displayName="GLF Field Cap (Oak, Goggles)";
    picture="\tmtm\pack\faction_glf_sns\characters\headgear\data\ui\icon_tmtm_h_fieldcap_goggles_glf_oak_ca.paa";

    hiddenSelectionsTextures[]= {
        "\tmtm\pack\faction_glf_sns\characters\headgear\Data\tmtm_fieldcap_glf_oak_co.paa",
        ""
    };

    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[]= {
            "\tmtm\pack\faction_glf_sns\characters\headgear\Data\tmtm_fieldcap_glf_oak_co.paa",
            ""
        };
    };
};

class tmtm_h_fieldcap_goggles_back_glf_oak: tmtm_h_fieldcap_goggles_back_base
{
    author="erem2k";

    scope=2;
    scopeCurator=2;
    scopeArsenal=2;

    displayName="GLF Field Cap (Oak, Goggles)";
    picture="\tmtm\pack\faction_glf_sns\characters\headgear\data\ui\icon_tmtm_h_fieldcap_goggles_glf_oak_ca.paa";

    hiddenSelectionsTextures[]= {
        "\tmtm\pack\faction_glf_sns\characters\headgear\Data\tmtm_fieldcap_glf_oak_co.paa",
        ""
    };

    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[]= {
            "\tmtm\pack\faction_glf_sns\characters\headgear\Data\tmtm_fieldcap_glf_oak_co.paa",
            ""
        };
    };
};
