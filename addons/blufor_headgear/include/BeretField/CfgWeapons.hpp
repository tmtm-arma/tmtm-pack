class tmtm_h_beretField_base: HelmetBase
{
    scope=1;
    scopeArsenal=0;

    hiddenSelections[]= {"camo"};

    model="\A3\Characters_F\Common\headgear_beret01.p3d";

    class ItemInfo: ItemInfo
    {
        uniformModel="\A3\Characters_F\Common\headgear_beret01.p3d";
        hiddenSelections[]= {"camo"};

        modelSides[]={6};
        allowedSlots[]={UNIFORM_SLOT, BACKPACK_SLOT, VEST_SLOT, HEADGEAR_SLOT};

        mass=6;
    };
};
