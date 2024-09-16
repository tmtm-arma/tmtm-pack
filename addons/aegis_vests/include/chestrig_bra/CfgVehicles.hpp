class tmtm_b_chestrig_bra_base: Bag_Base
{
    scope=1;
    scopeArsenal=0;

    model="\tmtm\pack\aegis_vests\tmtm_v_chestrig_bra.p3d";
    hiddenSelections[]= {"camo"};

    maximumLoad=140;
    mass=10;
};

/////////////////////////////////////////////
// Content
class tmtm_b_chestrig_bra_khaki: tmtm_b_chestrig_bra_base
{
    author="OokamiJamie, erem2k";
    scope=2;
    scopeArsenal=2;

    displayName="Bra Chestrig, Khaki";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    hiddenSelectionsTextures[]= {
        "\tmtm\pack\aegis_vests\data\tmtm_chestrig_bra_khaki_co.paa"
    };
};

class tmtm_b_chestrig_bra_green: tmtm_b_chestrig_bra_base
{
    author="OokamiJamie, erem2k";
    scope=2;
    scopeArsenal=2;

    displayName="Bra Chestrig, Green";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    hiddenSelectionsTextures[]= {
        "\tmtm\pack\aegis_vests\data\tmtm_chestrig_bra_green_co.paa"
    };
};
