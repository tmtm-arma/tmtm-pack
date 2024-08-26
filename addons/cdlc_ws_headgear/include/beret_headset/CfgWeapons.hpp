class tmtm_h_beret_base: HelmetBase
{
    class ItemInfo;
};

// Base classes for subaddons
class tmtm_h_beret_headset_base: tmtm_h_beret_base
{
    scope=1;
    scopeArsenal=0;

    model="\lxws\characters_1_f_lxws\headgear\H_Beret_mic_lxWS";
    hiddenSelections[] = {"camo1", "camo2"};

    class ItemInfo: ItemInfo
    {
        mass=6;

        uniformModel="\lxws\characters_1_f_lxws\headgear\H_Beret_mic_lxWS";
        modelSides[]={6};

        hiddenSelections[] = {"camo1", "camo2"};
    };
};
