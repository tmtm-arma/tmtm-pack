class tmtm_h_safariHat_base: HelmetBase
{
    scope=1;
    scopeArsenal=0;

    model="\A3\Characters_F_Orange\Headgear\H_Hat_Safari_F.p3d";
    hiddenSelections[]= { "Camo" };

    class ItemInfo: ItemInfo
    {
        uniformModel="\A3\Characters_F_Orange\Headgear\H_Hat_Safari_F.p3d";
        hiddenSelections[]= { "Camo" };

        modelSides[]={3};
        mass=5;
    };
};

class tmtm_h_safariHat_field_base: tmtm_h_safariHat_base
{
    scope=1;
    scopeArsenal=0;

    hiddenSelectionsMaterials[] = {
        "\tmtm\pack\blufor_headgear\data\tmtm_safariHat_field.rvmat"
    };

    class ItemInfo: ItemInfo
    {
        hiddenSelectionsMaterials[] = {
            "\tmtm\pack\blufor_headgear\data\tmtm_safariHat_field.rvmat"
        };
    };
};
