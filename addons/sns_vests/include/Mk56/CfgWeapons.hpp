// Renames
class V_Simc_chicom_basic;
class V_Simc_mk56: V_Simc_chicom_basic
{
    displayName="Chicom 56 Rig, Green (AK, Canteen)";
};

class V_Simc_mk56_alt: V_Simc_mk56
{
    displayName="Chicom 56 Rig, Green (AK)";
};

class V_Simc_mk56_sks: V_Simc_mk56
{
    displayName="Chicom 56 Rig, Green (SKS, Canteen)";
};

class V_Simc_mk56_sks_alt: V_Simc_mk56_sks
{
    displayName="Chicom 56 Rig, Green (SKS)";
};

/////////////////////////////////////////////
// Base
class tmtm_v_mk56_ak_rig_base: Vest_Camo_Base
{
    scope=1;
    scopeArsenal=0;

    model="\simc_nv_67\rig_mk56_drop.p3d";
    hiddenSelections[]= { "camo" };

    class ItemInfo: VestItem
    {
        uniformModel="\simc_nv_67\rig_mk56_hoch.p3d";
        hiddenSelections[]= { "camo" };

        containerClass="Supply120";
        mass=15;
    };
};

class tmtm_v_mk56_ak_rig_canteen_base: tmtm_v_mk56_ak_rig_base
{
    scope=1;
    scopeArsenal=0;

    hiddenSelections[]= { "camo", "botol" };

    class ItemInfo: ItemInfo
    {
        uniformModel="\simc_nv_67\rig_mk56.p3d";
        hiddenSelections[]= { "camo", "botol" };
    };
};

class tmtm_v_mk56_ak_rig_low_base: tmtm_v_mk56_ak_rig_base
{
    scope=1;
    scopeArsenal=0;

    hiddenSelections[]= { "camo", "botol" };
    hiddenSelectionsMaterials[] = {
        "\simc_nv_67\data\sns_chatrig.rvmat",
        ""
    };

    class ItemInfo: ItemInfo
    {
        uniformModel="\simc_nv_67\rig_mk56.p3d";
        hiddenSelections[]= { "camo", "botol" };

        hiddenSelectionsMaterials[] = {
            "\simc_nv_67\data\sns_chatrig.rvmat",
            ""
        };
    };
};

class tmtm_v_mk56_sks_rig_base: Vest_Camo_Base
{
    scope=1;
    scopeArsenal=0;

    model="\simc_nv_67\rig_mk56_sks_drop.p3d";
    hiddenSelections[]= { "camo" };

    class ItemInfo: VestItem
    {
        uniformModel="\simc_nv_67\rig_mk56_sks_hoch.p3d";
        hiddenSelections[]= { "camo" };

        containerClass="Supply90";
        mass=10;
    };
};

class tmtm_v_mk56_sks_rig_canteen_base: tmtm_v_mk56_sks_rig_base
{
    scope=1;
    scopeArsenal=0;

    hiddenSelections[]= { "camo", "botol" };

    class ItemInfo: ItemInfo
    {
        uniformModel="\simc_nv_67\rig_mk56_sks.p3d";
        hiddenSelections[]= { "camo", "botol" };
    };
};

class tmtm_v_mk56_sks_rig_low_base: tmtm_v_mk56_sks_rig_base
{
    scope=1;
    scopeArsenal=0;

    hiddenSelections[]= { "camo", "botol" };
    hiddenSelectionsMaterials[] = {
        "\simc_nv_67\data\sns_chatrig.rvmat",
        ""
    };

    class ItemInfo: ItemInfo
    {
        uniformModel="\simc_nv_67\rig_mk56_sks.p3d";
        hiddenSelections[]= { "camo", "botol" };

        hiddenSelectionsMaterials[] = {
            "\simc_nv_67\data\sns_chatrig.rvmat",
            ""
        };
    };
};

/////////////////////////////////////////////
// Content
class tmtm_v_mk56_ak_rig_low: tmtm_v_mk56_ak_rig_low_base
{
    author="Justin + 089";
    scope=2;
    scopeArsenal=2;

    displayName = "Chicom 56 Rig, Green (AK, Low)";
    picture="\simc_uaf_67_preview\icons\sns_mk56_ca.paa";

    hiddenSelectionsTextures[] = {
        "\simc_nv_67\data\sns_chatrig_co.paa"
    };

    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[] = {
            "\simc_nv_67\data\sns_chatrig_co.paa"
        };
    };
};

class tmtm_v_mk56_sks_rig_low: tmtm_v_mk56_sks_rig_low_base
{
    author="Justin + 089";
    scope=2;
    scopeArsenal=2;

    displayName = "Chicom 56 Rig, Green (SKS, Low)";
    picture="\simc_uaf_67_preview\icons\sns_mk56_sks_ca.paa";

    hiddenSelectionsTextures[] = {
        "\simc_nv_67\data\sns_chatrig_co.paa"
    };

    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[] = {
            "\simc_nv_67\data\sns_chatrig_co.paa"
        };
    };
};

class tmtm_v_mk56_ak_rig_black: tmtm_v_mk56_ak_rig_base
{
    author="Justin + 089, erem2k";
    scope=2;
    scopeArsenal=2;

    displayName = "Chicom 56 Rig, Black (AK)";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    hiddenSelectionsTextures[] = {
        "\tmtm\pack\sns_vests\data\tmtm_v_chicom_black_co.paa"
    };

    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[] = {
			"\tmtm\pack\sns_vests\data\tmtm_v_chicom_black_co.paa"
        };
    };
};

class tmtm_v_mk56_ak_rig_low_black: tmtm_v_mk56_ak_rig_low_base
{
    author="Justin + 089, erem2k";
    scope=2;
    scopeArsenal=2;

    displayName = "Chicom 56 Rig, Black (AK, Low)";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    hiddenSelectionsTextures[] = {
        "\tmtm\pack\sns_vests\data\tmtm_v_chicom_black_co.paa"
    };

    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[] = {
			"\tmtm\pack\sns_vests\data\tmtm_v_chicom_black_co.paa"
        };
    };
};

class tmtm_v_mk56_sks_rig_black: tmtm_v_mk56_sks_rig_base
{
    author="Justin + 089, erem2k";
    scope=2;
    scopeArsenal=2;

    displayName = "Chicom 56 Rig, Black (SKS)";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    hiddenSelectionsTextures[] = {
        "\tmtm\pack\sns_vests\data\tmtm_v_chicom_black_co.paa"
    };

    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[] = {
			"\tmtm\pack\sns_vests\data\tmtm_v_chicom_black_co.paa"
        };
    };
};

class tmtm_v_mk56_sks_rig_low_black: tmtm_v_mk56_sks_rig_low_base
{
    author="Justin + 089, erem2k";
    scope=2;
    scopeArsenal=2;

    displayName = "Chicom 56 Rig, Black (SKS, Low)";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    hiddenSelectionsTextures[] = {
        "\tmtm\pack\sns_vests\data\tmtm_v_chicom_black_co.paa"
    };

    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[] = {
			"\tmtm\pack\sns_vests\data\tmtm_v_chicom_black_co.paa"
        };
    };
};

class tmtm_v_mk56_ak_rig_khaki: tmtm_v_mk56_ak_rig_base
{
    author="Justin + 089, erem2k";
    scope=2;
    scopeArsenal=2;

    displayName = "Chicom 56 Rig, Khaki (AK)";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    hiddenSelectionsTextures[] = {
        "\tmtm\pack\sns_vests\data\tmtm_v_chicom_khaki_co.paa"
    };

    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[] = {
			"\tmtm\pack\sns_vests\data\tmtm_v_chicom_khaki_co.paa"
        };
    };
};

class tmtm_v_mk56_ak_rig_low_khaki: tmtm_v_mk56_ak_rig_low_base
{
    author="Justin + 089, erem2k";
    scope=2;
    scopeArsenal=2;

    displayName = "Chicom 56 Rig, Khaki (AK, Low)";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    hiddenSelectionsTextures[] = {
        "\tmtm\pack\sns_vests\data\tmtm_v_chicom_khaki_co.paa"
    };

    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[] = {
			"\tmtm\pack\sns_vests\data\tmtm_v_chicom_khaki_co.paa"
        };
    };
};

class tmtm_v_mk56_sks_rig_khaki: tmtm_v_mk56_sks_rig_base
{
    author="Justin + 089, erem2k";
    scope=2;
    scopeArsenal=2;

    displayName = "Chicom 56 Rig, Khaki (SKS)";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    hiddenSelectionsTextures[] = {
        "\tmtm\pack\sns_vests\data\tmtm_v_chicom_khaki_co.paa"
    };

    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[] = {
			"\tmtm\pack\sns_vests\data\tmtm_v_chicom_khaki_co.paa"
        };
    };
};

class tmtm_v_mk56_sks_rig_low_khaki: tmtm_v_mk56_sks_rig_low_base
{
    author="Justin + 089, erem2k";
    scope=2;
    scopeArsenal=2;

    displayName = "Chicom 56 Rig, Khaki (SKS, Low)";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    hiddenSelectionsTextures[] = {
        "\tmtm\pack\sns_vests\data\tmtm_v_chicom_khaki_co.paa"
    };

    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[] = {
			"\tmtm\pack\sns_vests\data\tmtm_v_chicom_khaki_co.paa"
        };
    };
};

class tmtm_v_mk56_ak_rig_khaki_camo: tmtm_v_mk56_ak_rig_base
{
    author="Justin + 089, erem2k";
    scope=2;
    scopeArsenal=2;

    displayName = "Chicom 56 Rig, Khaki Camo (AK)";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    hiddenSelectionsTextures[] = {
        "\tmtm\pack\sns_vests\data\tmtm_v_chicom_khaki_camo_co.paa"
    };

    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[] = {
			"\tmtm\pack\sns_vests\data\tmtm_v_chicom_khaki_camo_co.paa"
        };
    };
};

class tmtm_v_mk56_ak_rig_low_khaki_camo: tmtm_v_mk56_ak_rig_low_base
{
    author="Justin + 089, erem2k";
    scope=2;
    scopeArsenal=2;

    displayName = "Chicom 56 Rig, Khaki Camo (AK, Low)";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    hiddenSelectionsTextures[] = {
        "\tmtm\pack\sns_vests\data\tmtm_v_chicom_khaki_camo_co.paa"
    };

    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[] = {
			"\tmtm\pack\sns_vests\data\tmtm_v_chicom_khaki_camo_co.paa"
        };
    };
};

class tmtm_v_mk56_sks_rig_khaki_camo: tmtm_v_mk56_sks_rig_base
{
    author="Justin + 089, erem2k";
    scope=2;
    scopeArsenal=2;

    displayName = "Chicom 56 Rig, Khaki Camo (SKS)";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    hiddenSelectionsTextures[] = {
        "\tmtm\pack\sns_vests\data\tmtm_v_chicom_khaki_camo_co.paa"
    };

    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[] = {
			"\tmtm\pack\sns_vests\data\tmtm_v_chicom_khaki_camo_co.paa"
        };
    };
};

class tmtm_v_mk56_sks_rig_low_khaki_camo: tmtm_v_mk56_sks_rig_low_base
{
    author="Justin + 089, erem2k";
    scope=2;
    scopeArsenal=2;

    displayName = "Chicom 56 Rig, Khaki Camo (SKS, Low)";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    hiddenSelectionsTextures[] = {
        "\tmtm\pack\sns_vests\data\tmtm_v_chicom_khaki_camo_co.paa"
    };

    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[] = {
			"\tmtm\pack\sns_vests\data\tmtm_v_chicom_khaki_camo_co.paa"
        };
    };
};

class tmtm_v_mk56_ak_rig_khaki_reinforced: tmtm_v_mk56_ak_rig_base
{
    author="Justin + 089, erem2k";
    scope=2;
    scopeArsenal=2;

    displayName = "Chicom 56 Rig, Khaki Alt (AK)";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    hiddenSelectionsTextures[] = {
        "\tmtm\pack\sns_vests\data\tmtm_v_chicom_khaki_reinforced_co.paa"
    };

    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[] = {
			"\tmtm\pack\sns_vests\data\tmtm_v_chicom_khaki_reinforced_co.paa"
        };
    };
};

class tmtm_v_mk56_ak_rig_low_khaki_reinforced: tmtm_v_mk56_ak_rig_low_base
{
    author="Justin + 089, erem2k";
    scope=2;
    scopeArsenal=2;

    displayName = "Chicom 56 Rig, Khaki Alt (AK, Low)";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    hiddenSelectionsTextures[] = {
        "\tmtm\pack\sns_vests\data\tmtm_v_chicom_khaki_reinforced_co.paa"
    };

    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[] = {
			"\tmtm\pack\sns_vests\data\tmtm_v_chicom_khaki_reinforced_co.paa"
        };
    };
};

class tmtm_v_mk56_sks_rig_khaki_reinforced: tmtm_v_mk56_sks_rig_base
{
    author="Justin + 089, erem2k";
    scope=2;
    scopeArsenal=2;

    displayName = "Chicom 56 Rig, Khaki Alt (SKS)";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    hiddenSelectionsTextures[] = {
        "\tmtm\pack\sns_vests\data\tmtm_v_chicom_khaki_reinforced_co.paa"
    };

    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[] = {
			"\tmtm\pack\sns_vests\data\tmtm_v_chicom_khaki_reinforced_co.paa"
        };
    };
};

class tmtm_v_mk56_sks_rig_low_khaki_reinforced: tmtm_v_mk56_sks_rig_low_base
{
    author="Justin + 089, erem2k";
    scope=2;
    scopeArsenal=2;

    displayName = "Chicom 56 Rig, Khaki Alt (SKS, Low)";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    hiddenSelectionsTextures[] = {
        "\tmtm\pack\sns_vests\data\tmtm_v_chicom_khaki_reinforced_co.paa"
    };

    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[] = {
			"\tmtm\pack\sns_vests\data\tmtm_v_chicom_khaki_reinforced_co.paa"
        };
    };
};

class tmtm_v_mk56_ak_rig_olive: tmtm_v_mk56_ak_rig_base
{
    author="Justin + 089, erem2k";
    scope=2;
    scopeArsenal=2;

    displayName = "Chicom 56 Rig, Olive (AK)";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    hiddenSelectionsTextures[] = {
        "\tmtm\pack\sns_vests\data\tmtm_v_chicom_olive_co.paa"
    };

    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[] = {
			"\tmtm\pack\sns_vests\data\tmtm_v_chicom_olive_co.paa"
        };
    };
};

class tmtm_v_mk56_ak_rig_low_olive: tmtm_v_mk56_ak_rig_low_base
{
    author="Justin + 089, erem2k";
    scope=2;
    scopeArsenal=2;

    displayName = "Chicom 56 Rig, Olive (AK, Low)";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    hiddenSelectionsTextures[] = {
        "\tmtm\pack\sns_vests\data\tmtm_v_chicom_olive_co.paa"
    };

    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[] = {
			"\tmtm\pack\sns_vests\data\tmtm_v_chicom_olive_co.paa"
        };
    };
};

class tmtm_v_mk56_sks_rig_olive: tmtm_v_mk56_sks_rig_base
{
    author="Justin + 089, erem2k";
    scope=2;
    scopeArsenal=2;

    displayName = "Chicom 56 Rig, Olive (SKS)";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    hiddenSelectionsTextures[] = {
        "\tmtm\pack\sns_vests\data\tmtm_v_chicom_olive_co.paa"
    };

    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[] = {
			"\tmtm\pack\sns_vests\data\tmtm_v_chicom_olive_co.paa"
        };
    };
};

class tmtm_v_mk56_sks_rig_low_olive: tmtm_v_mk56_sks_rig_low_base
{
    author="Justin + 089, erem2k";
    scope=2;
    scopeArsenal=2;

    displayName = "Chicom 56 Rig, Olive (SKS, Low)";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    hiddenSelectionsTextures[] = {
        "\tmtm\pack\sns_vests\data\tmtm_v_chicom_olive_co.paa"
    };

    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[] = {
			"\tmtm\pack\sns_vests\data\tmtm_v_chicom_olive_co.paa"
        };
    };
};

class tmtm_v_mk56_ak_rig_olive_camo: tmtm_v_mk56_ak_rig_base
{
    author="Justin + 089, erem2k";
    scope=2;
    scopeArsenal=2;

    displayName = "Chicom 56 Rig, Olive Camo (AK)";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    hiddenSelectionsTextures[] = {
        "\tmtm\pack\sns_vests\data\tmtm_v_chicom_olive_camo_co.paa"
    };

    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[] = {
			"\tmtm\pack\sns_vests\data\tmtm_v_chicom_olive_camo_co.paa"
        };
    };
};

class tmtm_v_mk56_ak_rig_low_olive_camo: tmtm_v_mk56_ak_rig_low_base
{
    author="Justin + 089, erem2k";
    scope=2;
    scopeArsenal=2;

    displayName = "Chicom 56 Rig, Olive Camo (AK, Low)";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    hiddenSelectionsTextures[] = {
        "\tmtm\pack\sns_vests\data\tmtm_v_chicom_olive_camo_co.paa"
    };

    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[] = {
			"\tmtm\pack\sns_vests\data\tmtm_v_chicom_olive_camo_co.paa"
        };
    };
};

class tmtm_v_mk56_sks_rig_olive_camo: tmtm_v_mk56_sks_rig_base
{
    author="Justin + 089, erem2k";
    scope=2;
    scopeArsenal=2;

    displayName = "Chicom 56 Rig, Olive Camo (SKS)";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    hiddenSelectionsTextures[] = {
        "\tmtm\pack\sns_vests\data\tmtm_v_chicom_olive_camo_co.paa"
    };

    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[] = {
			"\tmtm\pack\sns_vests\data\tmtm_v_chicom_olive_camo_co.paa"
        };
    };
};

class tmtm_v_mk56_sks_rig_low_olive_camo: tmtm_v_mk56_sks_rig_low_base
{
    author="Justin + 089, erem2k";
    scope=2;
    scopeArsenal=2;

    displayName = "Chicom 56 Rig, Olive Camo (SKS, Low)";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    hiddenSelectionsTextures[] = {
        "\tmtm\pack\sns_vests\data\tmtm_v_chicom_olive_camo_co.paa"
    };

    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[] = {
			"\tmtm\pack\sns_vests\data\tmtm_v_chicom_olive_camo_co.paa"
        };
    };
};

class tmtm_v_mk56_ak_rig_olive_reinforced: tmtm_v_mk56_ak_rig_base
{
    author="Justin + 089, erem2k";
    scope=2;
    scopeArsenal=2;

    displayName = "Chicom 56 Rig, Olive Alt (AK)";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    hiddenSelectionsTextures[] = {
        "\tmtm\pack\sns_vests\data\tmtm_v_chicom_olive_reinforced_co.paa"
    };

    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[] = {
			"\tmtm\pack\sns_vests\data\tmtm_v_chicom_olive_reinforced_co.paa"
        };
    };
};

class tmtm_v_mk56_ak_rig_low_olive_reinforced: tmtm_v_mk56_ak_rig_low_base
{
    author="Justin + 089, erem2k";
    scope=2;
    scopeArsenal=2;

    displayName = "Chicom 56 Rig, Olive Alt (AK, Low)";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    hiddenSelectionsTextures[] = {
        "\tmtm\pack\sns_vests\data\tmtm_v_chicom_olive_reinforced_co.paa"
    };

    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[] = {
			"\tmtm\pack\sns_vests\data\tmtm_v_chicom_olive_reinforced_co.paa"
        };
    };
};

class tmtm_v_mk56_sks_rig_olive_reinforced: tmtm_v_mk56_sks_rig_base
{
    author="Justin + 089, erem2k";
    scope=2;
    scopeArsenal=2;

    displayName = "Chicom 56 Rig, Olive Alt (SKS)";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    hiddenSelectionsTextures[] = {
        "\tmtm\pack\sns_vests\data\tmtm_v_chicom_olive_reinforced_co.paa"
    };

    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[] = {
			"\tmtm\pack\sns_vests\data\tmtm_v_chicom_olive_reinforced_co.paa"
        };
    };
};

class tmtm_v_mk56_sks_rig_low_olive_reinforced: tmtm_v_mk56_sks_rig_low_base
{
    author="Justin + 089, erem2k";
    scope=2;
    scopeArsenal=2;

    displayName = "Chicom 56 Rig, Olive Alt (SKS, Low)";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    hiddenSelectionsTextures[] = {
        "\tmtm\pack\sns_vests\data\tmtm_v_chicom_olive_reinforced_co.paa"
    };

    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[] = {
			"\tmtm\pack\sns_vests\data\tmtm_v_chicom_olive_reinforced_co.paa"
        };
    };
};
