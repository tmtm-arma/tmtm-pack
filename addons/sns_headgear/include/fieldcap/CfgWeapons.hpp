class tmtm_h_fieldcap_base: HelmetBase
{
    scope=1;
    scopeArsenal=0;

    model="\simc_uaf_69\hat_patrol.p3d";
    hiddenSelections[]= { "camo", "rank"};

    class ItemInfo: ItemInfo
    {
        mass=5;
        allowedSlots[]={UNIFORM_SLOT, BACKPACK_SLOT, VEST_SLOT, HEADGEAR_SLOT};
        modelSides[]={6};

        uniformModel="\simc_uaf_69\hat_patrol.p3d";
        hiddenSelections[]= { "camo", "rank" };
    };

};

class tmtm_h_fieldcap_goggles_base: tmtm_h_fieldcap_base
{
    scope=1;
    scopeArsenal=0;

    model="\simc_uaf_69\hat_patrol_swdg.p3d";

    class ItemInfo: ItemInfo
    {
        uniformModel="\simc_uaf_69\hat_patrol_swdg.p3d";
    };
};

class tmtm_h_fieldcap_goggles_back_base: tmtm_h_fieldcap_base
{
    scope=1;
    scopeArsenal=0;

    model="\simc_uaf_69\hat_patrol_swdg.p3d";

    class ItemInfo: ItemInfo
    {
        uniformModel="\simc_uaf_69\hat_patrol_swdg_rear.p3d";
    };
};
