class tmtm_v_lbv_type06_base: Vest_Camo_Base
{
    scope=1;
    scopeArsenal=0;

    model="\tmtm\pack\aegis_vests\tmtm_v_lbv_type06.p3d";
    hiddenSelections[]= { "camo", "camo_belt" };

    class ItemInfo: ItemInfo
    {
        uniformModel="\tmtm\pack\aegis_vests\tmtm_v_lbv_type06.p3d";
        hiddenSelections[]= { "camo", "camo_belt" };

        containerClass="Supply150";
        mass=10;
    };
};

class tmtm_v_lbv_type06_black: tmtm_v_lbv_type06_base
{
    author="OokamiJamie";
    scope=2;
    scopeArsenal=2;

    displayName="Type 06 LBV, Black";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    hiddenSelectionsTextures[] = {
        "\tmtm\pack\aegis_vests\data\tmtm_lbv_type06_black_co.paa",
        "\tmtm\pack\aegis_vests\data\tmtm_lbv_type06_black_co.paa"
    };

    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[] = {
            "\tmtm\pack\aegis_vests\data\tmtm_lbv_type06_black_co.paa",
            "\tmtm\pack\aegis_vests\data\tmtm_lbv_type06_black_co.paa"
        };
    };
};

class tmtm_v_lbv_type06_csata: tmtm_v_lbv_type06_base
{
    author="OokamiJamie";
    scope=2;
    scopeArsenal=2;

    displayName="Type 06 LBV, Hex";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    hiddenSelectionsTextures[] = {
        "\tmtm\pack\aegis_vests\data\tmtm_lbv_type06_csata_co.paa",
        "\tmtm\pack\aegis_vests\data\tmtm_lbv_type06_csata_co.paa"
    };

    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[] = {
            "\tmtm\pack\aegis_vests\data\tmtm_lbv_type06_csata_co.paa",
            "\tmtm\pack\aegis_vests\data\tmtm_lbv_type06_csata_co.paa"
        };
    };
};

class tmtm_v_lbv_type06_khaki: tmtm_v_lbv_type06_base
{
    author="OokamiJamie";
    scope=2;
    scopeArsenal=2;

    displayName="Type 06 LBV, Khaki";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    hiddenSelectionsTextures[] = {
        "\tmtm\pack\aegis_vests\data\tmtm_lbv_type06_khaki_co.paa",
        "\tmtm\pack\aegis_vests\data\tmtm_lbv_type06_khaki_co.paa"
    };

    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[] = {
            "\tmtm\pack\aegis_vests\data\tmtm_lbv_type06_khaki_co.paa",
            "\tmtm\pack\aegis_vests\data\tmtm_lbv_type06_khaki_co.paa"
        };
    };
};

class tmtm_v_lbv_type06_olive: tmtm_v_lbv_type06_base
{
    author="OokamiJamie";
    scope=2;
    scopeArsenal=2;

    displayName="Type 06 LBV, Olive";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    hiddenSelectionsTextures[] = {
        "\tmtm\pack\aegis_vests\data\tmtm_lbv_type06_olive_co.paa",
        "\tmtm\pack\aegis_vests\data\tmtm_lbv_type06_olive_co.paa"
    };

    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[] = {
            "\tmtm\pack\aegis_vests\data\tmtm_lbv_type06_olive_co.paa",
            "\tmtm\pack\aegis_vests\data\tmtm_lbv_type06_olive_co.paa"
        };
    };
};
