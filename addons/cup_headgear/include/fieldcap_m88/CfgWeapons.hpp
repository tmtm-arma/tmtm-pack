// Field Cap (M-88)
class tmtm_h_m88_fieldcap_base: ItemCore
{
    scope=0;
    scopeCurator=0;
    scopeArsenal=0;

    displayName="Field Cap (M88)";

    model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Chedaki\CUP_Ins_OfficerCap.p3d";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {""};
    class ItemInfo: HeadgearItem
    {
        mass = 10;
        uniformModel="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Chedaki\CUP_Ins_OfficerCap.p3d";
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


// Field Cap (M-88/Khaki)
class tmtm_h_m88_fieldcap_khaki: tmtm_h_m88_fieldcap_base
{
    author="erem2k";
    
    scope=2;
    scopeCurator=2;
    scopeArsenal=2;

    displayName  = "Field Cap (M-88/Khaki)";
    picture="\tmtm\pack\cup_headgear\Data\ui\icon_tmtm_h_m88_fieldcap_khaki.paa";

    hiddenSelectionsTextures[] = {"\tmtm\pack\cup_headgear\Data\tmtm_m88_fieldcap_khaki_co.paa"};
    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[] = {"\tmtm\pack\cup_headgear\Data\tmtm_m88_fieldcap_khaki_co.paa"};
    };
};
