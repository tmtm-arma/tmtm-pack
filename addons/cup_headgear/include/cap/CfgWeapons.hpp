// Cap
class tmtm_h_cap_base: ItemCore
{
    scope=0;
    scopeCurator=0;
    scopeArsenal=0;

    displayName  = "Cap";

    model   = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_PMC\CUP_Cap.p3d";
    hiddenSelections[] = {"camo3"};
    hiddenSelectionsTextures[] = {""};
    class ItemInfo: HeadgearItem
    {
        mass = 10;
        uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_PMC\CUP_Cap.p3d";
        allowedSlots[] = {UNIFORM_SLOT, BACKPACK_SLOT, VEST_SLOT, HEADGEAR_SLOT};
        modelSides[] = {6};
        armor = 0;
        passThrough = 1;
        hiddenSelections[] = {"camo3"};
        hiddenSelectionsTextures[] = {""};
        class HitpointsProtectionInfo
        {
            class Head
            {
                hitpointName="HitHead";
                armor=0;
                passThrough=1;
            };
        };
    };
};

// Cap (Backwards)
class tmtm_h_cap_back_base: ItemCore
{
    scope=0;
    scopeCurator=0;
    scopeArsenal=0;

    displayName  = "Cap (Back)";

    model   = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_PMC\CUP_Cap_Back.p3d";
    hiddenSelections[] = {"camo3"};
    hiddenSelectionsTextures[] = {""};
    class ItemInfo: HeadgearItem
    {
        mass = 10;
        uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_PMC\CUP_Cap_Back.p3d";
        allowedSlots[] = {UNIFORM_SLOT, BACKPACK_SLOT, VEST_SLOT, HEADGEAR_SLOT};
        modelSides[] = {6};
        armor = 0;
        passThrough = 1;
        hiddenSelections[] = {"camo3"};
        hiddenSelectionsTextures[] = {""};
        class HitpointsProtectionInfo
        {
            class Head
            {
                hitpointName="HitHead";
                armor=0;
                passThrough=1;
            };
        };
    };
};

// Cap (MM14)
class tmtm_h_cap_mm14: tmtm_h_cap_base
{
    author="erem2k";
    
    scope=2;
    scopeCurator=2;
    scopeArsenal=2;

    displayName  = "Cap (MM14)";
    picture="\tmtm\pack\cup_headgear\Data\ui\icon_tmtm_h_cap_mm14.paa";

    hiddenSelectionsTextures[] = {"\tmtm\pack\cup_headgear\Data\tmtm_cap_mm14_co.paa"};
    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[] = {"\tmtm\pack\cup_headgear\Data\tmtm_cap_mm14_co.paa"};
    };
};
// Cap (MM14/Backwards)
class tmtm_h_cap_back_mm14: tmtm_h_cap_back_base
{
    author="erem2k";
    
    scope=2;
    scopeCurator=2;
    scopeArsenal=2;

    displayName  = "Cap (MM14/Backwards)";
    picture="\tmtm\pack\cup_headgear\Data\ui\icon_tmtm_h_cap_mm14.paa";

    hiddenSelectionsTextures[] = {"\tmtm\pack\cup_headgear\Data\tmtm_cap_mm14_co.paa"};
    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[] = {"\tmtm\pack\cup_headgear\Data\tmtm_cap_mm14_co.paa"};
    };
};