class tmtm_h_m92_base: ItemCore
{
    scope=0;
    scopeCurator=0;
    scopeArsenal=0;

    model="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\CUP_Ger_M92_helmet.p3d";

    hiddenSelections[]= { "Camo", "_HelmetCover" }; // huh??

    class ItemInfo: HeadgearItem
    {
        uniformModel="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\CUP_Ger_M92_helmet.p3d";
        modelSides[]={3,1};

        hiddenSelections[]= { "Camo", "_HelmetCover" };

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

class tmtm_h_m92_net_base: tmtm_h_m92_base
{
    scope=0;
    scopeCurator=0;
    scopeArsenal=0;

    hiddenSelectionsMaterials[] = {
        "\tmtm\pack\cup_headgear\Data\tmtm_m92_net.rvmat"
    };

    class ItemInfo: ItemInfo
    {
        hiddenSelectionsMaterials[] = {
            "\tmtm\pack\cup_headgear\Data\tmtm_m92_net.rvmat"
        };
    };
};

class tmtm_h_m92_goggles_base: tmtm_h_m92_base
{
    scope=0;
    scopeCurator=0;
    scopeArsenal=0;

    model="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\CUP_Ger_M92_gog_helmet.p3d";

    hiddenSelections[]= { "Camo", "_HelmetCover", "_Cover_Back", "_Cover_Front" };

    class ItemInfo: ItemInfo
    {
        uniformModel="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\CUP_Ger_M92_gog_helmet.p3d";
        hiddenSelections[]= { "Camo", "_HelmetCover", "_Cover_Back", "_Cover_Front" };
    };
};

class tmtm_h_m92_goggles_f_base: tmtm_h_m92_goggles_base
{
    scope=0;
    scopeCurator=0;
    scopeArsenal=0;

    hiddenSelections[]= { "Camo", "_HelmetCover", "_Cover_Back" };

    class ItemInfo: ItemInfo
    {
        hiddenSelections[]= { "Camo", "_HelmetCover", "_Cover_Back" };
    };
};

class tmtm_h_m92_goggles_b_base: tmtm_h_m92_goggles_base
{
    scope=0;
    scopeCurator=0;
    scopeArsenal=0;

    hiddenSelections[]= { "Camo", "_HelmetCover", "_Cover_Front" };

    class ItemInfo: ItemInfo
    {
        hiddenSelections[]= { "Camo", "_HelmetCover", "_Cover_Front" };
    };
};

class tmtm_h_m92_covered_base: tmtm_h_m92_base
{
    scope=0;
    scopeCurator=0;
    scopeArsenal=0;

    hiddenSelections[]= { "Camo", "Camo1" };

    class ItemInfo: ItemInfo
    {
        hiddenSelections[]= { "Camo", "Camo1" };
    };
};

class tmtm_h_m92_covered_goggles_base: tmtm_h_m92_covered_base
{
    scope=0;
    scopeCurator=0;
    scopeArsenal=0;

    model="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\CUP_Ger_M92_gog_helmet.p3d";
    hiddenSelections[]= { "Camo", "Camo1", "_Cover_Back", "_Cover_Front" };

    class ItemInfo: ItemInfo
    {
        uniformModel="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\CUP_Ger_M92_gog_helmet.p3d";
        hiddenSelections[]= { "Camo", "Camo1", "_Cover_Back", "_Cover_Front" };
    };
};

class tmtm_h_m92_covered_goggles_f_base: tmtm_h_m92_covered_goggles_base
{
    scope=0;
    scopeCurator=0;
    scopeArsenal=0;

    hiddenSelections[]= { "Camo", "Camo1", "_Cover_Back" };

    class ItemInfo: ItemInfo
    {
        hiddenSelections[]= { "Camo", "Camo1", "_Cover_Back" };
    };
};

class tmtm_h_m92_covered_goggles_b_base: tmtm_h_m92_covered_goggles_base
{
    scope=0;
    scopeCurator=0;
    scopeArsenal=0;

    hiddenSelections[]= { "Camo", "Camo1", "_Cover_Front" };

    class ItemInfo: ItemInfo
    {
        hiddenSelections[]= { "Camo", "Camo1", "_Cover_Front" };
    };
};

/*
    Content
*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////
// CUP: Bare helmets
class CUP_H_Ger_M92_Black: ItemCore
{
    displayName="M92 Helmet (Black)";
};

class CUP_H_Ger_M92_Black_GG: ItemCore
{
    displayName="M92 Helmet (Black, Goggles)";
};

class CUP_H_Ger_M92_Black_GG_CB: ItemCore
{
    displayName="M92 Helmet (Black, Goggles)";
};

class CUP_H_Ger_M92_Black_GG_CF: ItemCore
{
    displayName="M92 Helmet (Black, Goggles)";
};

class CUP_H_Ger_M92: ItemCore
{
    displayName="M92 Helmet (Olive)";
};

class CUP_H_Ger_M92_GG: ItemCore
{
    displayName="M92 Helmet (Olive, Goggles)";
};

class CUP_H_Ger_M92_GG_CB: ItemCore
{
    displayName="M92 Helmet (Olive, Goggles)";
};

class CUP_H_Ger_M92_GG_CF: ItemCore
{
    displayName="M92 Helmet (Olive, Goggles)";
};

class CUP_H_Ger_M92_RGR: ItemCore
{
    displayName="M92 Helmet (Ranger Green)";
};

class CUP_H_Ger_M92_RGR_GG: ItemCore
{
    displayName="M92 Helmet (Ranger Green, Goggles)";
};

class CUP_H_Ger_M92_RGR_GG_CB: ItemCore
{
    displayName="M92 Helmet (Ranger Green, Goggles)";
};

class CUP_H_Ger_M92_RGR_GG_CF: ItemCore
{
    displayName="M92 Helmet (Ranger Green, Goggles)";
};

class CUP_H_Ger_M92_Tan: ItemCore
{
    displayName="M92 Helmet (Tan)";
};

class CUP_H_Ger_M92_Tan_GG: ItemCore
{
    displayName="M92 Helmet (Tan, Goggles)";
};

class CUP_H_Ger_M92_Tan_GG_CB: ItemCore
{
    displayName="M92 Helmet (Tan, Goggles)";
};

class CUP_H_Ger_M92_Tan_GG_CF: ItemCore
{
    displayName="M92 Helmet (Tan, Goggles)";
};

// CUP: Covered helmets
class CUP_H_Ger_M92_Cover_GG: ItemCore
{
    displayName="M92 Helmet, Covered (Flecktarn, Goggles)";
};

class CUP_H_Ger_M92_Cover: CUP_H_Ger_M92
{
    displayName="M92 Helmet, Covered (Flecktarn)";
};

class CUP_H_Ger_M92_Cover_GG_CB: ItemCore
{
    displayName="M92 Helmet, Covered (Flecktarn, Goggles)";
};

class CUP_H_Ger_M92_Cover_GG_CF: ItemCore
{
    displayName="M92 Helmet, Covered (Flecktarn, Goggles)";
};

class CUP_H_Ger_M92_Cover_Trop: CUP_H_Ger_M92
{
    displayName="M92 Helmet, Covered (Tropentarn)";
};

class CUP_H_Ger_M92_Cover_Trop_GG: ItemCore
{
    displayName="M92 Helmet, Covered (Tropentarn, Goggles)";
};

class CUP_H_Ger_M92_Cover_Trop_GG_CB: ItemCore
{
    displayName="M92 Helmet, Covered (Tropentarn, Goggles)";
};

class CUP_H_Ger_M92_Cover_Trop_GG_CF: ItemCore
{
    displayName="M92 Helmet, Covered (Tropentarn, Goggles)";
};

//////////////////////////////////////////////////////////////////////////////////////////////////////////
// MM14
class tmtm_h_m92_covered_mm14: tmtm_h_m92_covered_base
{
    author="erem2k";

    scope=2;
    scopeCurator=2;
    scopeArsenal=2;

    displayName="M92 Helmet, Covered (MM14)";
    picture="\tmtm\pack\cup_headgear\Data\ui\icon_tmtm_h_m92_covered_mm14.paa";

    hiddenSelectionsTextures[]= {
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\m92_helmet_co.paa",
        "\tmtm\pack\cup_headgear\Data\tmtm_m92_helmet_covered_mm14_co.paa"
    };

    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[]= {
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\m92_helmet_co.paa",
            "\tmtm\pack\cup_headgear\Data\tmtm_m92_helmet_covered_mm14_co.paa"
        };
    };
};

class tmtm_h_m92_covered_goggles_mm14: tmtm_h_m92_covered_goggles_base
{
    author="erem2k";

    scope=2;
    scopeCurator=2;
    scopeArsenal=2;

    displayName="M92 Helmet, Covered (MM14, Goggles)";
    picture="\tmtm\pack\cup_headgear\Data\ui\icon_tmtm_h_m92_goggles_covered_mm14.paa";

    hiddenSelectionsTextures[]= {
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\m92_helmet_co.paa",
        "\tmtm\pack\cup_headgear\Data\tmtm_m92_helmet_covered_mm14_co.paa"
    };

    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[]= {
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\m92_helmet_co.paa",
            "\tmtm\pack\cup_headgear\Data\tmtm_m92_helmet_covered_mm14_co.paa"
        };
    };
};
// M92 + Goggles + Front Cover (MM14)
class tmtm_h_m92_covered_goggles_f_mm14: tmtm_h_m92_covered_goggles_f_base
{
    author="erem2k";

    scope=2;
    scopeCurator=2;
    scopeArsenal=2;

    displayName="M92 Helmet, Covered (MM14, Goggles)";
    picture="\tmtm\pack\cup_headgear\Data\ui\icon_tmtm_h_m92_goggles_covered_cf_mm14.paa";

    hiddenSelectionsTextures[]= {
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\m92_helmet_co.paa",
        "\tmtm\pack\cup_headgear\Data\tmtm_m92_helmet_covered_mm14_co.paa"
    };

    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[]= {
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\m92_helmet_co.paa",
            "\tmtm\pack\cup_headgear\Data\tmtm_m92_helmet_covered_mm14_co.paa"
        };
    };
};
// M92 + Goggles + Back Cover (MM14)
class tmtm_h_m92_goggles_covered_cb_mm14: tmtm_h_m92_covered_goggles_b_base
{
    author="erem2k";

    scope=2;
    scopeCurator=2;
    scopeArsenal=2;

    displayName="M92 Helmet, Covered (MM14, Goggles)";
    picture="\tmtm\pack\cup_headgear\Data\ui\icon_tmtm_h_m92_goggles_covered_cb_mm14.paa";

    hiddenSelectionsTextures[]= {
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\m92_helmet_co.paa",
        "\tmtm\pack\cup_headgear\Data\tmtm_m92_helmet_covered_mm14_co.paa"
    };

    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[]= {
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\m92_helmet_co.paa",
            "\tmtm\pack\cup_headgear\Data\tmtm_m92_helmet_covered_mm14_co.paa"
        };
    };
};
