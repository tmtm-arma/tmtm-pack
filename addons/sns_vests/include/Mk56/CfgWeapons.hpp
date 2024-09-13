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

/////////////////////////////////////////////
// Content
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

class tmtm_v_mk56_ak_rig_khaki_reinforced: tmtm_v_mk56_ak_rig_base
{
    author="Justin + 089, erem2k";
    scope=2;
    scopeArsenal=2;

    displayName = "Chicom 56 Rig, Khaki (AK)";
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

    displayName = "Chicom 56 Rig, Khaki (SKS)";
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

class tmtm_v_mk56_ak_rig_olive_reinforced: tmtm_v_mk56_ak_rig_base
{
    author="Justin + 089, erem2k";
    scope=2;
    scopeArsenal=2;

    displayName = "Chicom 56 Rig, Olive (AK)";
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

    displayName = "Chicom 56 Rig, Olive (SKS)";
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
