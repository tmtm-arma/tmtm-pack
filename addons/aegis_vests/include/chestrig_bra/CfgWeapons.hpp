class tmtm_v_chestrig_bra_base: Vest_Camo_Base
{
    scope=1;
    scopeArsenal=0;

    model="\tmtm\pack\aegis_vests\tmtm_v_chestrig_bra.p3d";
    hiddenSelections[]= { "camo" };

    class ItemInfo: ItemInfo
    {
        uniformModel="\tmtm\pack\aegis_vests\tmtm_v_chestrig_bra.p3d";
        hiddenSelections[]= { "camo" };

        containerClass="Supply140";
        mass=10;
    };
};

class tmtm_v_chestrig_bra_old_base: tmtm_v_chestrig_bra_base
{
    scope=1;
    scopeArsenal=0;

    hiddenSelectionsMaterials[] = {
        "\tmtm\pack\aegis_vests\data\tmtm_chestrig_bra_old.rvmat"
    };

    class ItemInfo: ItemInfo
    {
        hiddenSelectionsMaterials[] = {
            "\tmtm\pack\aegis_vests\data\tmtm_chestrig_bra_old.rvmat"
        };
    };
};

/////////////////////////////////////////////
// Content
class tmtm_v_chestrig_bra_khaki: tmtm_v_chestrig_bra_base
{
    author="OokamiJamie";
    scope=2;
    scopeArsenal=2;

    displayName="Bra Chestrig, Khaki";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    hiddenSelectionsTextures[] = {
        "\tmtm\pack\aegis_vests\data\tmtm_chestrig_bra_khaki_co.paa"
    };

    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[] = {
            "\tmtm\pack\sns_vests\data\tmtm_chestrig_bra_khaki_co.paa"
        };
    };
};

class tmtm_v_chestrig_bra_green: tmtm_v_chestrig_bra_base
{
    author="OokamiJamie";
    scope=2;
    scopeArsenal=2;

    displayName="Bra Chestrig, Green";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    hiddenSelectionsTextures[] = {
        "\tmtm\pack\aegis_vests\data\tmtm_chestrig_bra_green_co.paa"
    };

    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[] = {
            "\tmtm\pack\sns_vests\data\tmtm_chestrig_bra_green_co.paa"
        };
    };
};
