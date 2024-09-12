
class tmtm_b_mk56_ak_rig_base: Bag_Base
{
    scope=1;
    scopeArsenal=0;

    model="\simc_nv_67\rig_mk56_hoch.p3d";
    hiddenSelections[]= {"camo"};

    maximumLoad=90;
    mass=15;
};

class tmtm_b_mk56_ak_rig_canteen_base: tmtm_b_mk56_ak_rig_base
{
    scope=1;
    scopeArsenal=0;

    model="\simc_nv_67\rig_mk56.p3d";
    hiddenSelections[]= { "camo", "botol" };
};

class tmtm_b_mk56_sks_rig_base: Bag_Base
{
    scope=1;
    scopeArsenal=0;

    model="\simc_nv_67\rig_mk56_sks_hoch.p3d";
    hiddenSelections[]= { "camo" };

    maximumLoad=90;
    mass=15;
};

class tmtm_b_mk56_sks_rig_canteen_base: tmtm_b_mk56_sks_rig_base
{
    scope=1;
    scopeArsenal=0;
    model="\simc_nv_67\rig_mk56_sks.p3d";
    hiddenSelections[]= { "camo", "botol" };
};

/////////////////////////////////////////////
// Content
class tmtm_b_mk56_ak_rig: tmtm_b_mk56_ak_rig_base
{
    author="Justin + 089, erem2k";
    scope=2;
    scopeArsenal=2;

    displayName="Chicom 56 Rig, Green (AK)";
    picture="\simc_uaf_67_preview\icons\sns_mk56_ca.paa";

    hiddenSelectionsTextures[]= {
        "\simc_nv_67\data\sns_chatrig_co.paa"
    };
};

class tmtm_b_mk56_ak_rig_canteen: tmtm_b_mk56_ak_rig_canteen_base
{
    author="Justin + 089, erem2k";
    scope=2;
    scopeArsenal=2;

    displayName="Chicom 56 Rig, Green (AK, Canteen)";
    picture="\simc_uaf_67_preview\icons\sns_mk56_ca.paa";

    hiddenSelectionsTextures[]= {
        "\simc_nv_67\data\sns_chatrig_co.paa",
        "\simc_nv_67\data\sns_chatrig_co.paa"
    };
};

class tmtm_b_mk56_sks_rig: tmtm_b_mk56_sks_rig_base
{
    author="Justin + 089, erem2k";
    scope=2;
    scopeArsenal=2;

    displayName="Chicom 56 Rig, Green (SKS)";
    picture="\simc_uaf_67_preview\icons\sns_mk56_sks_ca.paa";

    hiddenSelectionsTextures[]= {
        "\simc_nv_67\data\sns_chatrig_co.paa"
    };
};

class tmtm_b_mk56_sks_rig_canteen: tmtm_b_mk56_sks_rig_canteen_base
{
    author="Justin + 089, erem2k";
    scope=2;
    scopeArsenal=2;

    displayName="Chicom 56 Rig, Green (SKS, Canteen)";
    picture="\simc_uaf_67_preview\icons\sns_mk56_ca.paa";

    hiddenSelectionsTextures[]= {
        "\simc_nv_67\data\sns_chatrig_co.paa",
        "\simc_nv_67\data\sns_chatrig_co.paa"
    };
};

class tmtm_b_mk56_ak_rig_black: tmtm_b_mk56_ak_rig_base
{
    author="Justin + 089, erem2k";
    scope=2;
    scopeArsenal=2;

    displayName="Chicom 56 Rig, Black (AK)";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    hiddenSelectionsTextures[]= {
        "\tmtm\pack\sns_vests\data\tmtm_v_chicom_black_co.paa"
    };
};

class tmtm_b_mk56_sks_rig_black: tmtm_b_mk56_sks_rig_base
{
    author="Justin + 089, erem2k";
    scope=2;
    scopeArsenal=2;

    displayName="Chicom 56 Rig, Black (SKS)";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    hiddenSelectionsTextures[]= {
        "\tmtm\pack\sns_vests\data\tmtm_v_chicom_black_co.paa"
    };
};

class tmtm_b_mk56_ak_rig_khaki: tmtm_b_mk56_ak_rig_base
{
    author="Justin + 089, erem2k";
    scope=2;
    scopeArsenal=2;

    displayName="Chicom 56 Rig, Khaki (AK)";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    hiddenSelectionsTextures[]= {
        "\tmtm\pack\sns_vests\data\tmtm_v_chicom_khaki_co.paa"
    };
};

class tmtm_b_mk56_sks_rig_khaki: tmtm_b_mk56_sks_rig_base
{
    author="Justin + 089, erem2k";
    scope=2;
    scopeArsenal=2;

    displayName="Chicom 56 Rig, Khaki (SKS)";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    hiddenSelectionsTextures[]= {
        "\tmtm\pack\sns_vests\data\tmtm_v_chicom_khaki_co.paa"
    };
};

class tmtm_b_mk56_ak_rig_khaki_reinforced: tmtm_b_mk56_ak_rig_base
{
    author="Justin + 089, erem2k";
    scope=2;
    scopeArsenal=2;

    displayName="Chicom 56 Rig, Khaki (AK)";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    hiddenSelectionsTextures[]= {
        "\tmtm\pack\sns_vests\data\tmtm_v_chicom_khaki_reinforced_co.paa"
    };
};

class tmtm_b_mk56_sks_rig_khaki_reinforced: tmtm_b_mk56_sks_rig_base
{
    author="Justin + 089, erem2k";
    scope=2;
    scopeArsenal=2;

    displayName="Chicom 56 Rig, Khaki (SKS)";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    hiddenSelectionsTextures[]= {
        "\tmtm\pack\sns_vests\data\tmtm_v_chicom_khaki_reinforced_co.paa"
    };
};

class tmtm_b_mk56_ak_rig_khaki_camo: tmtm_b_mk56_ak_rig_base
{
    author="Justin + 089, erem2k";
    scope=2;
    scopeArsenal=2;

    displayName="Chicom 56 Rig, Khaki Camo (AK)";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    hiddenSelectionsTextures[]= {
        "\tmtm\pack\sns_vests\data\tmtm_v_chicom_khaki_camo_co.paa"
    };
};

class tmtm_b_mk56_sks_rig_khaki_camo: tmtm_b_mk56_sks_rig_base
{
    author="Justin + 089, erem2k";
    scope=2;
    scopeArsenal=2;

    displayName="Chicom 56 Rig, Khaki Camo (SKS)";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    hiddenSelectionsTextures[]= {
        "\tmtm\pack\sns_vests\data\tmtm_v_chicom_khaki_camo_co.paa"
    };
};

class tmtm_b_mk56_ak_rig_olive: tmtm_b_mk56_ak_rig_base
{
    author="Justin + 089, erem2k";
    scope=2;
    scopeArsenal=2;

    displayName="Chicom 56 Rig, Olive (AK)";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    hiddenSelectionsTextures[]= {
        "\tmtm\pack\sns_vests\data\tmtm_v_chicom_olive_co.paa"
    };
};

class tmtm_b_mk56_sks_rig_olive: tmtm_b_mk56_sks_rig_base
{
    author="Justin + 089, erem2k";
    scope=2;
    scopeArsenal=2;

    displayName="Chicom 56 Rig, Olive (SKS)";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    hiddenSelectionsTextures[]= {
        "\tmtm\pack\sns_vests\data\tmtm_v_chicom_olive_co.paa"
    };
};

class tmtm_b_mk56_ak_rig_olive_reinforced: tmtm_b_mk56_ak_rig_base
{
    author="Justin + 089, erem2k";
    scope=2;
    scopeArsenal=2;

    displayName="Chicom 56 Rig, Olive (AK)";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    hiddenSelectionsTextures[]= {
        "\tmtm\pack\sns_vests\data\tmtm_v_chicom_olive_reinforced_co.paa"
    };
};

class tmtm_b_mk56_sks_rig_olive_reinforced: tmtm_b_mk56_sks_rig_base
{
    author="Justin + 089, erem2k";
    scope=2;
    scopeArsenal=2;

    displayName="Chicom 56 Rig, Olive (SKS)";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    hiddenSelectionsTextures[]= {
        "\tmtm\pack\sns_vests\data\tmtm_v_chicom_olive_reinforced_co.paa"
    };
};

class tmtm_b_mk56_ak_rig_olive_camo: tmtm_b_mk56_ak_rig_base
{
    author="Justin + 089, erem2k";
    scope=2;
    scopeArsenal=2;

    displayName="Chicom 56 Rig, Olive Camo (AK)";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    hiddenSelectionsTextures[]= {
        "\tmtm\pack\sns_vests\data\tmtm_v_chicom_olive_camo_co.paa"
    };
};

class tmtm_b_mk56_sks_rig_olive_camo: tmtm_b_mk56_sks_rig_base
{
    author="Justin + 089, erem2k";
    scope=2;
    scopeArsenal=2;

    displayName="Chicom 56 Rig, Olive Camo (SKS)";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    hiddenSelectionsTextures[]= {
        "\tmtm\pack\sns_vests\data\tmtm_v_chicom_olive_camo_co.paa"
    };
};
