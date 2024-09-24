// Reconfiguration of Apex chest rigs as backpacks
class tmtm_b_tacChestRig_base: Bag_Base
{
    scope=1;
    scopeArsenal=0;

    model="\A3\Characters_F_Exp\Common\equip_TacChestrig.p3d";
    hiddenSelections[]= {"camo"};

    maximumLoad=140;
    mass=20;
};

class tmtm_b_tacChestRig_green: tmtm_b_tacChestRig_base
{
    author="$STR_A3_Bohemia_Interactive";
    scope=2;
    scopeArsenal=2;

    displayName="$STR_A3_V_TacChestrig_grn0";
    picture="\A3\Characters_F_Exp\Data\UI\icon_V_TacChestrig_grn_ca.paa";

    hiddenSelectionsTextures[]= {
        "\A3\Characters_F_Exp\Common\Data\equip_TacChestrig_grn_co.paa"
    };
};

class tmtm_b_tacChestRig_coyote: tmtm_b_tacChestRig_base
{
    author="$STR_A3_Bohemia_Interactive";
    scope=2;
    scopeArsenal=2;

    displayName="$STR_A3_V_TacChestrig_cbr0";
    picture="\A3\Characters_F_Exp\Data\UI\icon_V_TacChestrig_cbr_ca.paa";

    hiddenSelectionsTextures[]= {
        "\A3\Characters_F_Exp\Common\Data\equip_TacChestrig_cbr_co.paa"
    };
};

class tmtm_b_tacChestRig_olive: tmtm_b_tacChestRig_base
{
    author="$STR_A3_Bohemia_Interactive";
    scope=2;
    scopeArsenal=2;

    displayName="$STR_A3_V_TacChestrig_oli0";
    picture="\A3\Characters_F_Exp\Data\UI\icon_V_TacChestrig_oli_ca.paa";

    hiddenSelectionsTextures[]= {
        "\A3\Characters_F_Exp\Common\Data\equip_TacChestrig_oli_co.paa"
    };
};
