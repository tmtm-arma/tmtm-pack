// Patrol Cap
class tmtm_h_patrol_cap_base: ItemCore
{
    scope=0;
    scopeCurator=0;
    scopeArsenal=0;

    displayName  = "Patrol Cap";

    uniformModel = "\cup\creatures\people\military\cup_creatures_people_military_usarmy\CUP_US_patrol_cap.p3d";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {""};
    class ItemInfo: HeadgearItem
    {
        mass = 10;
        uniformModel = "\cup\creatures\people\military\cup_creatures_people_military_usarmy\CUP_US_patrol_cap.p3d";
        allowedSlots[] = {UNIFORM_SLOT, BACKPACK_SLOT, VEST_SLOT, HEADGEAR_SLOT};
        modelSides[] = {6};
        armor = 0;
        passThrough = 1;
        hiddenSelections[] = {"camo"};
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

// Patrol Cap (MM14)
class tmtm_h_patrol_cap_mm14: tmtm_h_patrol_cap_base
{
    author="erem2k";
    
    scope=2;
    scopeCurator=2;
    scopeArsenal=2;

    displayName  = "Patrol Cap (MM14)";
    picture="\tmtm\pack\cup_headgear\Data\ui\icon_tmtm_h_patrol_cap_mm14.paa";

    hiddenSelectionsTextures[] = {"\tmtm\pack\cup_headgear\Data\tmtm_patrol_cap_mm14_co.paa"};
    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[] = {"\tmtm\pack\cup_headgear\Data\tmtm_patrol_cap_mm14_co.paa"};
    };
};
// Patrol Cap (Dark Olive)
class tmtm_h_patrol_cap_darkolive: tmtm_h_patrol_cap_base
{
    author="erem2k";
    
    scope=2;
    scopeCurator=2;
    scopeArsenal=2;

    displayName  = "Patrol Cap (Dark Olive)";
    picture="\tmtm\pack\cup_headgear\Data\ui\icon_tmtm_h_patrol_cap_darkolive.paa";

    hiddenSelectionsTextures[] = {"\tmtm\pack\cup_headgear\Data\tmtm_patrol_cap_darkolive_co.paa"};
    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[] = {"\tmtm\pack\cup_headgear\Data\tmtm_patrol_cap_darkolive_co.paa"};
    };
};