class tmtm_h_beret_base: HelmetBase
{
    scope=1;
    scopeArsenal=0;

    model="\A3\Characters_F_Enoch\Headgear\H_Beret_EAF_01_F";

    class ItemInfo: ItemInfo
    {
        mass=6;

        uniformModel="\A3\Characters_F_Enoch\Headgear\H_Beret_EAF_01_F";
        modelSides[]={3};

        allowedSlots[] = {UNIFORM_SLOT, BACKPACK_SLOT, VEST_SLOT, HEADGEAR_SLOT};
    };
};

class tmtm_h_beret_camo_base: tmtm_h_beret_base
{
    scope=1;
    scopeArsenal=0;

    hiddenSelectionsMaterials[] = {
        "\tmtm\pack\blufor_headgear\data\tmtm_beret_camo.rvmat"
    };

    class ItemInfo: ItemInfo
    {
        hiddenSelectionsMaterials[] = {
            "\tmtm\pack\blufor_headgear\data\tmtm_beret_camo.rvmat"
        };
    };
};
