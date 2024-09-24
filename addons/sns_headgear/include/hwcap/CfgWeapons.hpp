class tmtm_h_hwcap_base: HelmetBase
{
    scope=1;
    scopeArsenal=0;

    model="\simc_uaf_68\hat_trop_1.p3d";
    hiddenSelections[]= { "camo", "air", "cib", "med"};

    hiddenSelectionsMaterials[] = {
        "\tmtm\pack\sns_headgear\data\tmtm_hwcap.rvmat"
    };

    class ItemInfo: ItemInfo
    {
        mass=5;
        allowedSlots[]={UNIFORM_SLOT, BACKPACK_SLOT, VEST_SLOT, HEADGEAR_SLOT};
        modelSides[]={6};

        uniformModel="\simc_uaf_68\hat_trop_1.p3d";
        hiddenSelections[]= { "camo", "air", "cib", "med"};

        hiddenSelectionsMaterials[] = {
            "\tmtm\pack\sns_headgear\data\tmtm_hwcap.rvmat"
        };
    };

};

class tmtm_h_hwcap_alt_base: tmtm_h_hwcap_base
{
    scope=1;
    scopeArsenal=0;

    model="\simc_uaf_68\hat_trop_2.p3d";

    class ItemInfo: ItemInfo
    {
        uniformModel="\simc_uaf_68\hat_trop_2.p3d";
    };
};
