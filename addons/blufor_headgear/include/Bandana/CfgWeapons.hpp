class tmtm_h_bandana_base: HelmetBase
{
    scope=1;
    scopeArsenal=0;

    model="\A3\Characters_F\Civil\headgear_c_bandana1.p3d";

    class ItemInfo: ItemInfo
    {
        mass=8;
        allowedSlots[]={BACKPACK_SLOT, VEST_SLOT, HEADGEAR_SLOT};

        uniformModel="\A3\Characters_F\Civil\headgear_c_bandana1.p3d";
        modelSides[]={6};
    };
};

class tmtm_h_bandana_darkolive: tmtm_h_bandana_base
{
    author="erem2k";

    scope=2;
    scopeCurator=2;
    scopeArsenal=2;

    displayName="Bandana (Dark Olive)";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    hiddenSelectionsTextures[]= {
        "\tmtm\pack\blufor_headgear\Data\tmtm_bandana_darkolive_co.paa"
    };

    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[]= {
            "\tmtm\pack\faction_glf\characters\headgear\Data\tmtm_bandana_darkolive_co.paa"
        };
    };
};
