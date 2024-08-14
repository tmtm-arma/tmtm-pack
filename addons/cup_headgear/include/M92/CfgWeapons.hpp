//////////////////////////////////////////////////////////////////////////
// M92
class tmtm_h_m92_covered_base: ItemCore
{
    scope=0;
    scopeCurator=0;
    scopeArsenal=0;
    
    displayName="M92 Helmet (Covered)";

    model="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\CUP_Ger_M92_helmet.p3d";
    hiddenSelections[]=
    {
        "Camo",
        "Camo1"
    };
    hiddenSelectionsTextures[]=
    {
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\m92_helmet_co.paa",
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\m92_helmet_cover_co.paa"
    };
    class ItemInfo: HeadgearItem
    {
        uniformModel="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\CUP_Ger_M92_helmet.p3d";
        hiddenSelections[]=
        {
            "Camo",
            "Camo1"
        };
        modelSides[]={3,1};
        mass=30;
        armor=22;
        passThrough=0.30000001;
        class HitpointsProtectionInfo
        {
            class Head
            {
                hitpointName="HitHead";
                armor=6;
                passThrough=0.5;
            };
        };
    };
};

// M92 + Goggles 
class tmtm_h_m92_goggles_covered_base: ItemCore
{
    scope=0;
    scopeCurator=0;
    scopeArsenal=0;

    displayName="M92 Helmet (Covered/Goggles)";

    model="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\CUP_Ger_M92_gog_helmet.p3d";
    hiddenSelections[]=
    {
        "Camo",
        "Camo1",
        "_Cover_Back",
        "_Cover_Front"
    };
    hiddenSelectionsTextures[]=
    {
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\m92_helmet_co.paa",
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\m92_helmet_cover_co.paa"
    };
    class ItemInfo: HeadgearItem
    {
        uniformModel="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\CUP_Ger_M92_gog_helmet.p3d";
        hiddenSelections[]=
        {
            "Camo",
            "Camo1",
            "_Cover_Back",
            "_Cover_Front"
        };
        modelSides[]={3,1};
        mass=30;
        armor=22;
        passThrough=0.30000001;
        class HitpointsProtectionInfo
        {
            class Head
            {
                hitpointName="HitHead";
                armor=6;
                passThrough=0.5;
            };
        };
    };
};

// M92 + Goggles + Front Cover
class tmtm_h_m92_goggles_covered_cf_base: tmtm_h_m92_goggles_covered_base
{
    scope=0;
    scopeCurator=0;
    scopeArsenal=0;

    displayName="M92 Helmet (Covered/Cover/Goggles)";

    hiddenSelections[]=
    {
        "Camo",
        "Camo1",
        "_Cover_Back"
    };
    hiddenSelectionsTextures[]=
    {
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\m92_helmet_co.paa",
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\m92_helmet_cover_co.paa"
    };
    class ItemInfo: HeadgearItem
    {
        uniformModel="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\CUP_Ger_M92_gog_helmet.p3d";
        hiddenSelections[]=
        {
            "Camo",
            "Camo1",
            "_Cover_Back"
        };
        modelSides[]={3,1};
        mass=30;
        armor=22;
        passThrough=0.30000001;
        class HitpointsProtectionInfo
        {
            class Head
            {
                hitpointName="HitHead";
                armor=6;
                passThrough=0.5;
            };
        };
    };
};

// M92 + Goggles + Back Cover
class tmtm_h_m92_goggles_covered_cb_base: tmtm_h_m92_goggles_covered_base
{
    scope=0;
    scopeCurator=0;
    scopeArsenal=0;

    displayName="M92 Helmet (Covered/Back Cover/Goggles)";

    hiddenSelections[]=
    {
        "Camo",
        "Camo1",
        "_Cover_Front"
    };
    hiddenSelectionsTextures[]=
    {
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\m92_helmet_co.paa",
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\m92_helmet_cover_co.paa"
    };
    class ItemInfo: HeadgearItem
    {
        uniformModel="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\CUP_Ger_M92_gog_helmet.p3d";
        hiddenSelections[]=
        {
            "Camo",
            "Camo1",
            "_Cover_Front"
        };
        modelSides[]={3,1};
        mass=30;
        armor=22;
        passThrough=0.30000001;
        class HitpointsProtectionInfo
        {
            class Head
            {
                hitpointName="HitHead";
                armor=6;
                passThrough=0.5;
            };
        };
    };
};

//////////////////////////////////////////////////////////////////////////
// M92 (MM14)
class tmtm_h_m92_covered_mm14: tmtm_h_m92_covered_base
{
    author="erem2k";

    scope=2;
    scopeCurator=2;
    scopeArsenal=2;
    
    displayName="M92 Helmet (MM14/Covered)";
    picture="\tmtm\pack\cup_headgear\Data\ui\icon_tmtm_h_m92_covered_mm14.paa";

    hiddenSelectionsTextures[]=
    {
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\m92_helmet_co.paa",
        "\tmtm\pack\cup_headgear\Data\tmtm_m92_helmet_covered_mm14_co.paa"
    };
};
// M92 + Goggles (MM14)
class tmtm_h_m92_goggles_covered_mm14: tmtm_h_m92_goggles_covered_base
{
    author="erem2k";

    scope=2;
    scopeCurator=2;
    scopeArsenal=2;
    
    displayName="M92 Helmet (MM14/Covered/Goggles)";
    picture="\tmtm\pack\cup_headgear\Data\ui\icon_tmtm_h_m92_goggles_covered_mm14.paa";

    hiddenSelectionsTextures[]=
    {
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\m92_helmet_co.paa",
        "\tmtm\pack\cup_headgear\Data\tmtm_m92_helmet_covered_mm14_co.paa"
    };
};
// M92 + Goggles + Front Cover (MM14)
class tmtm_h_m92_goggles_covered_cf_mm14: tmtm_h_m92_goggles_covered_cf_base
{
    author="erem2k";

    scope=2;
    scopeCurator=2;
    scopeArsenal=2;
    
    displayName="M92 Helmet (MM14/Covered/Cover/Goggles)";
    picture="\tmtm\pack\cup_headgear\Data\ui\icon_tmtm_h_m92_goggles_covered_cf_mm14.paa";

    hiddenSelectionsTextures[]=
    {
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\m92_helmet_co.paa",
        "\tmtm\pack\cup_headgear\Data\tmtm_m92_helmet_covered_mm14_co.paa"
    };
};
// M92 + Goggles + Back Cover (MM14)
class tmtm_h_m92_goggles_covered_cb_mm14: tmtm_h_m92_goggles_covered_cb_base
{
    author="erem2k";

    scope=2;
    scopeCurator=2;
    scopeArsenal=2;
    
    displayName="M92 Helmet (MM14/Covered/Cover/Goggles)";
    picture="\tmtm\pack\cup_headgear\Data\ui\icon_tmtm_h_m92_goggles_covered_cb_mm14.paa";

    hiddenSelectionsTextures[]=
    {
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\m92_helmet_co.paa",
        "\tmtm\pack\cup_headgear\Data\tmtm_m92_helmet_covered_mm14_co.paa"
    };
};