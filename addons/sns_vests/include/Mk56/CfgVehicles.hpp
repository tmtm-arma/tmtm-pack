// Reconfigs of chest rigs as backpacks
class tmtm_b_mk56_ak_rig: Bag_Base
{
    author="Justin + 089, erem2k";
    scope=2;
    scopeArsenal=2;

    displayName="Chicom Rig, AK (Green)";
    picture="\simc_uaf_67_preview\icons\sns_mk56_ca.paa";

    model="\simc_nv_67\rig_mk56_hoch.p3d";

    hiddenSelections[]= {"camo"};
    hiddenSelectionsTextures[]= {
        "\simc_nv_67\data\sns_chatrig_co.paa"
    };

    maximumLoad=90;
    mass=15;
};

class tmtm_b_mk56_ak_rig_canteen: tmtm_b_mk56_ak_rig
{
    author="Justin + 089, erem2k";
    scope=2;
    scopeArsenal=2;

    displayName="Chicom Rig, AK (Green, Canteen)";
    picture="\simc_uaf_67_preview\icons\sns_mk56_ca.paa";

    model="\simc_nv_67\rig_mk56.p3d";

    hiddenSelections[]= { "camo", "botol" };
    hiddenSelectionsTextures[]= {
        "\simc_nv_67\data\sns_chatrig_co.paa",
        "\simc_nv_67\data\sns_chatrig_co.paa"
    };

    maximumLoad=90;
    mass=15;
};

class tmtm_b_mk56_sks_rig: Bag_Base
{
    author="Justin + 089, erem2k";
    scope=2;
    scopeArsenal=2;

    displayName="Chicom Rig, SKS (Green)";
    picture="\simc_uaf_67_preview\icons\sns_mk56_sks_ca.paa";

    model="\simc_nv_67\rig_mk56_sks_hoch.p3d";

    hiddenSelections[]= { "camo" };
    hiddenSelectionsTextures[]= {
        "\simc_nv_67\data\sns_chatrig_co.paa"
    };

    maximumLoad=90;
    mass=15;
};

class tmtm_b_mk56_sks_rig_canteen: tmtm_b_mk56_sks_rig
{
    author="Justin + 089, erem2k";
    scope=2;
    scopeArsenal=2;

    displayName="Chicom Rig, SKS (Green, Canteen)";

    model="\simc_nv_67\rig_mk56_sks.p3d";

    hiddenSelections[]= { "camo", "botol" };
    hiddenSelectionsTextures[]= {
        "\simc_nv_67\data\sns_chatrig_co.paa",
        "\simc_nv_67\data\sns_chatrig_co.paa"
    };
};
