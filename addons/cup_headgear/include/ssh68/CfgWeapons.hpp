// SSh-68
class tmtm_h_ssh68_base : ItemCore
{
    scope=0;
    scopeCurator=0;
    scopeArsenal=0;

    model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\CUP_H_SSH68.p3d";
    hiddenSelections[] = {"camo"};

    hiddenSelectionsMaterials[] = {
        "\tmtm\pack\cup_headgear\Data\tmtm_ssh68.rvmat"
    };

    class ItemInfo: HeadgearItem
    {
        mass = 20;
        uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\CUP_H_SSH68.p3d";
        allowedSlots[] = {UNIFORM_SLOT, BACKPACK_SLOT, VEST_SLOT, HEADGEAR_SLOT};
        modelSides[] = {6};

        hiddenSelections[] = {"camo"};
        hiddenSelectionsMaterials[] = {
            "\tmtm\pack\cup_headgear\Data\tmtm_ssh68.rvmat"
        };

        class HitpointsProtectionInfo
        {
            class Head
            {
                hitpointName="HitHead";
                armor=4;
                passThrough=0.5;
            };
        };
    };
};

class tmtm_h_ssh68_net_base : tmtm_h_ssh68_base
{
    scope=0;
    scopeCurator=0;
    scopeArsenal=0;

    hiddenSelectionsMaterials[] = {
        "\tmtm\pack\cup_headgear\Data\tmtm_ssh68_net.rvmat"
    };

    class ItemInfo: ItemInfo
    {
        hiddenSelectionsMaterials[] = {
            "\tmtm\pack\cup_headgear\Data\tmtm_ssh68_net.rvmat"
        };
    };
};

// SSh-68 (Covered)
class tmtm_h_ssh68_covered_base : tmtm_h_ssh68_base
{
    scope=0;
    scopeCurator=0;
    scopeArsenal=0;

    displayName  = "SSh-68 (Covered)";

    model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\CUP_H_SSH68_cover.p3d";

    // Hidden selections are screwy because CUP: LOD1 takes "camo", whlist LOD3+ displays "camo1"
    hiddenSelections[] = {"camo", "camo1"};
    hiddenSelectionsMaterials[] = {
        "\tmtm\pack\cup_headgear\Data\tmtm_ssh68_covered.rvmat"
    };

    class ItemInfo: ItemInfo
    {
        mass = 20;
        uniformModel="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\CUP_H_SSH68_cover.p3d";
        
        hiddenSelections[] = {"camo", "camo1"};
        hiddenSelectionsMaterials[] = {
            "\tmtm\pack\cup_headgear\Data\tmtm_ssh68_covered.rvmat"
        };
    };
};

class tmtm_h_ssh68_covered_net_base : tmtm_h_ssh68_covered_base
{
    scope=0;
    scopeCurator=0;
    scopeArsenal=0;

    hiddenSelectionsMaterials[] = {
        "\tmtm\pack\cup_headgear\Data\tmtm_ssh68_covered_net.rvmat"
    };

    class ItemInfo: ItemInfo
    {
        hiddenSelectionsMaterials[] = {
            "\tmtm\pack\cup_headgear\Data\tmtm_ssh68_covered_net.rvmat"
        };
    };
};

// SSh-68 (CUP patches)
class CUP_H_RUS_SSH68_base;
class CUP_H_RUS_SSH68_cover_base : CUP_H_RUS_SSH68_base
{
    class ItemInfo;
};

class CUP_H_RUS_SSH68_cover_berezka : CUP_H_RUS_SSH68_cover_base
{
    displayName = "SSh-68, Covered (Berezka Yellow)";

    hiddenSelections[] = {"camo", "camo1"};
    hiddenSelectionsTextures[] = {
        "\tmtm\pack\cup_headgear\Data\tmtm_ssh68_covered_berezkayellow_co.paa",
        "\tmtm\pack\cup_headgear\Data\tmtm_ssh68_covered_berezkayellow_co.paa"
    };
    hiddenSelectionsMaterials[] = {
        "\tmtm\pack\cup_headgear\Data\tmtm_ssh68_covered.rvmat"
    };

    class ItemInfo: ItemInfo
    {
        hiddenSelections[] = {"camo", "camo1"}; 
        hiddenSelectionsTextures[] = {
            "\tmtm\pack\cup_headgear\Data\tmtm_ssh68_covered_berezkayellow_co.paa",
            "\tmtm\pack\cup_headgear\Data\tmtm_ssh68_covered_berezkayellow_co.paa"
        };
    };
};

class CUP_H_RUS_SSH68_cover_vsr84_dubok : CUP_H_RUS_SSH68_cover_base
{
    displayName = "SSh-68, Covered (TTsKO)"; // it's called butan >:(

    // fix the LODs displaying incorrect camo as well, same for following patches
    hiddenSelections[] = {"camo", "camo1"};
    hiddenSelectionsTextures[] = {
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\data\ssh68_cover_vsr84_dubok_co.paa",
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\data\ssh68_cover_vsr84_dubok_co.paa"
    };

    class ItemInfo: ItemInfo
    {
        hiddenSelections[] = {"camo", "camo1"}; 
        hiddenSelectionsTextures[] = {
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\data\ssh68_cover_vsr84_dubok_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\data\ssh68_cover_vsr84_dubok_co.paa"
        };
    };
};

class CUP_H_RUS_SSH68_cover_vsr93 : CUP_H_RUS_SSH68_cover_base
{
    displayName = "SSh-68, Covered (VSR-93)";

    hiddenSelections[] = {"camo", "camo1"};
    hiddenSelectionsTextures[] = {
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\data\ssh68_cover_vsr93_co.paa",
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\data\ssh68_cover_vsr93_co.paa"
    };

    class ItemInfo: ItemInfo
    {
        hiddenSelections[] = {"camo", "camo1"}; 
        hiddenSelectionsTextures[] = {
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\data\ssh68_cover_vsr93_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\data\ssh68_cover_vsr93_co.paa"
        };
    };
};

class CUP_H_RUS_SSH68_cover_vsr98 : CUP_H_RUS_SSH68_cover_base
{
    displayName = "SSh-68, Covered (VSR-98)";

    hiddenSelections[] = {"camo", "camo1"};
    hiddenSelectionsTextures[] = {
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\data\ssh68_cover_vsr98_co.paa",
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\data\ssh68_cover_vsr98_co.paa"
    };

    class ItemInfo: ItemInfo
    {
        hiddenSelections[] = {"camo", "camo1"}; 
        hiddenSelectionsTextures[] = {
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\data\ssh68_cover_vsr98_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\data\ssh68_cover_vsr98_co.paa"
        };
    };
};

// SSh-68
class tmtm_h_ssh68_black: tmtm_h_ssh68_base
{
    author="erem2k";
    
    scope=2;
    scopeCurator=2;
    scopeArsenal=2;

    displayName  = "SSh-68 (Black)";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    hiddenSelectionsTextures[] = {
        "\tmtm\pack\cup_headgear\Data\tmtm_ssh68_black_co.paa"
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[] = {
            "\tmtm\pack\cup_headgear\Data\tmtm_ssh68_black_co.paa"
        };
    };
};

class tmtm_h_ssh68_grey: tmtm_h_ssh68_base
{
    author="erem2k";
    
    scope=2;
    scopeCurator=2;
    scopeArsenal=2;

    displayName  = "SSh-68 (Grey)";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    hiddenSelectionsTextures[] = {
        "\tmtm\pack\cup_headgear\Data\tmtm_ssh68_grey_co.paa"
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[] = {
            "\tmtm\pack\cup_headgear\Data\tmtm_ssh68_grey_co.paa"
        };
    };
};

class tmtm_h_ssh68_khaki: tmtm_h_ssh68_base
{
    author="erem2k";
    
    scope=2;
    scopeCurator=2;
    scopeArsenal=2;

    displayName  = "SSh-68 (Khaki)";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    hiddenSelectionsTextures[] = {
        "\tmtm\pack\cup_headgear\Data\tmtm_ssh68_khaki_co.paa"
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[] = {
            "\tmtm\pack\cup_headgear\Data\tmtm_ssh68_khaki_co.paa"
        };
    };
};

class tmtm_h_ssh68_khaki_camo: tmtm_h_ssh68_base
{
    author="erem2k";
    
    scope=2;
    scopeCurator=2;
    scopeArsenal=2;

    displayName  = "SSh-68 (Khaki/Camo)";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    hiddenSelectionsTextures[] = {
        "\tmtm\pack\cup_headgear\Data\tmtm_ssh68_khaki_camo_co.paa"
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[] = {
            "\tmtm\pack\cup_headgear\Data\tmtm_ssh68_khaki_camo_co.paa"
        };
    };
};

class tmtm_h_ssh68_palegreen: tmtm_h_ssh68_base
{
    author="erem2k";
    
    scope=2;
    scopeCurator=2;
    scopeArsenal=2;

    displayName  = "SSh-68 (Pale Green)";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    hiddenSelectionsTextures[] = {
        "\tmtm\pack\cup_headgear\Data\tmtm_ssh68_palegreen_co.paa"
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[] = {
            "\tmtm\pack\cup_headgear\Data\tmtm_ssh68_palegreen_co.paa"
        };
    };
};

class tmtm_h_ssh68_olive: tmtm_h_ssh68_base
{
    author="erem2k";
    
    scope=2;
    scopeCurator=2;
    scopeArsenal=2;

    displayName  = "SSh-68 (Olive/Worn)";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    hiddenSelectionsTextures[] = {
        "\tmtm\pack\cup_headgear\Data\tmtm_ssh68_olive_co.paa"
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[] = {
            "\tmtm\pack\cup_headgear\Data\tmtm_ssh68_olive_co.paa"
        };
    };
};

class tmtm_h_ssh68_olive_camo: tmtm_h_ssh68_base
{
    author="erem2k";
    
    scope=2;
    scopeCurator=2;
    scopeArsenal=2;

    displayName  = "SSh-68 (Olive/Camo)";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    hiddenSelectionsTextures[] = {
        "\tmtm\pack\cup_headgear\Data\tmtm_ssh68_olive_camo_co.paa"
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[] = {
            "\tmtm\pack\cup_headgear\Data\tmtm_ssh68_olive_camo_co.paa"
        };
    };
};

class tmtm_h_ssh68_un: tmtm_h_ssh68_base
{
    author="erem2k";
    
    scope=2;
    scopeCurator=2;
    scopeArsenal=2;

    displayName  = "SSh-68 (UN)";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    hiddenSelectionsTextures[] = {
        "\tmtm\pack\cup_headgear\Data\tmtm_ssh68_un_co.paa"
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[] = {
            "\tmtm\pack\cup_headgear\Data\tmtm_ssh68_un_co.paa"
        };
    };
};

// SSh-68 Net
class tmtm_h_ssh68_net_khaki_green: tmtm_h_ssh68_net_base
{
    author="erem2k";
    
    scope=2;
    scopeCurator=2;
    scopeArsenal=2;

    displayName  = "SSh-68, Net (Khaki/Green)";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    hiddenSelectionsTextures[] = {
        "\tmtm\pack\cup_headgear\Data\tmtm_ssh68_net_khaki_green_co.paa"
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[] = {
            "\tmtm\pack\cup_headgear\Data\tmtm_ssh68_net_khaki_green_co.paa"
        };
    };
};

class tmtm_h_ssh68_net_olive_brown: tmtm_h_ssh68_net_base
{
    author="erem2k";
    
    scope=2;
    scopeCurator=2;
    scopeArsenal=2;

    displayName  = "SSh-68, Net (Olive/Brown)";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    hiddenSelectionsTextures[] = {
        "\tmtm\pack\cup_headgear\Data\tmtm_ssh68_net_olive_brown_co.paa"
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[] = {
            "\tmtm\pack\cup_headgear\Data\tmtm_ssh68_net_olive_brown_co.paa"
        };
    };
};

class tmtm_h_ssh68_net_olive_khaki: tmtm_h_ssh68_net_base
{
    author="erem2k";
    
    scope=2;
    scopeCurator=2;
    scopeArsenal=2;

    displayName  = "SSh-68, Net (Olive/Khaki)";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    hiddenSelectionsTextures[] = {
        "\tmtm\pack\cup_headgear\Data\tmtm_ssh68_net_olive_khaki_co.paa"
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[] = {
            "\tmtm\pack\cup_headgear\Data\tmtm_ssh68_net_olive_khaki_co.paa"
        };
    };
};

// SSh-68 Covered (Single colors)
class tmtm_h_ssh68_covered_olive: tmtm_h_ssh68_covered_base
{
    author="erem2k";
    
    scope=2;
    scopeCurator=2;
    scopeArsenal=2;

    displayName  = "SSh-68, Covered (Olive)";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    hiddenSelectionsTextures[] = {
        "\tmtm\pack\cup_headgear\Data\tmtm_ssh68_covered_olive_co.paa",
        "\tmtm\pack\cup_headgear\Data\tmtm_ssh68_covered_olive_co.paa"
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[] = {
            "\tmtm\pack\cup_headgear\Data\tmtm_ssh68_covered_olive_co.paa",
            "\tmtm\pack\cup_headgear\Data\tmtm_ssh68_covered_olive_co.paa"
        };
    };
};

class tmtm_h_ssh68_covered_khaki: tmtm_h_ssh68_covered_base
{
    author="erem2k";
    
    scope=2;
    scopeCurator=2;
    scopeArsenal=2;

    displayName  = "SSh-68, Covered (Khaki)";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    hiddenSelectionsTextures[] = {
        "\tmtm\pack\cup_headgear\Data\tmtm_ssh68_covered_khaki_co.paa",
        "\tmtm\pack\cup_headgear\Data\tmtm_ssh68_covered_khaki_co.paa"
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[] = {
            "\tmtm\pack\cup_headgear\Data\tmtm_ssh68_covered_khaki_co.paa",
            "\tmtm\pack\cup_headgear\Data\tmtm_ssh68_covered_khaki_co.paa"
        };
    };
};

// SSh-68 (Camouflages)
class tmtm_h_ssh68_covered_berezkawhite: tmtm_h_ssh68_covered_base
{
    author="erem2k";
    
    scope=2;
    scopeCurator=2;
    scopeArsenal=2;

    displayName  = "SSh-68, Covered (Berezka White)";
    picture="\tmtm\pack\cup_headgear\Data\ui\icon_tmtm_h_ssh68_covered_berezkawhite.paa";

    hiddenSelectionsTextures[] = {
        "\tmtm\pack\cup_headgear\Data\tmtm_ssh68_covered_berezkawhite_co.paa",
        "\tmtm\pack\cup_headgear\Data\tmtm_ssh68_covered_berezkawhite_co.paa"
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[] = {
            "\tmtm\pack\cup_headgear\Data\tmtm_ssh68_covered_berezkawhite_co.paa",
            "\tmtm\pack\cup_headgear\Data\tmtm_ssh68_covered_berezkawhite_co.paa"
        };
    };
};

class tmtm_h_ssh68_covered_aaf: tmtm_h_ssh68_covered_base
{
    author="erem2k";
    
    scope=2;
    scopeCurator=2;
    scopeArsenal=2;

    displayName  = "SSh-68, Covered (Digital)";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    hiddenSelectionsTextures[] = {
        "\tmtm\pack\cup_headgear\Data\tmtm_ssh68_covered_aaf_co.paa",
        "\tmtm\pack\cup_headgear\Data\tmtm_ssh68_covered_aaf_co.paa"
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[] = {
            "\tmtm\pack\cup_headgear\Data\tmtm_ssh68_covered_aaf_co.paa",
            "\tmtm\pack\cup_headgear\Data\tmtm_ssh68_covered_aaf_co.paa"
        };
    };
};

class tmtm_h_ssh68_covered_csata: tmtm_h_ssh68_covered_base
{
    author="erem2k";
    
    scope=2;
    scopeCurator=2;
    scopeArsenal=2;

    displayName  = "SSh-68, Covered (Hex, Arid)";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    hiddenSelectionsTextures[] = {
        "\tmtm\pack\cup_headgear\Data\tmtm_ssh68_covered_csata_co.paa", 
        "\tmtm\pack\cup_headgear\Data\tmtm_ssh68_covered_csata_co.paa"
    };

    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[] = {
            "\tmtm\pack\cup_headgear\Data\tmtm_ssh68_covered_csata_co.paa", 
            "\tmtm\pack\cup_headgear\Data\tmtm_ssh68_covered_csata_co.paa"
        };
    };
};

class tmtm_h_ssh68_covered_csatt: tmtm_h_ssh68_covered_base
{
    author="erem2k";
    
    scope=2;
    scopeCurator=2;
    scopeArsenal=2;

    displayName  = "SSh-68, Covered (Hex, Temperate)";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    hiddenSelectionsTextures[] = {
        "\tmtm\pack\cup_headgear\Data\tmtm_ssh68_covered_csatt_co.paa",
        "\tmtm\pack\cup_headgear\Data\tmtm_ssh68_covered_csatt_co.paa"
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[] = {
            "\tmtm\pack\cup_headgear\Data\tmtm_ssh68_covered_csatt_co.paa",
            "\tmtm\pack\cup_headgear\Data\tmtm_ssh68_covered_csatt_co.paa"
        };
    };
};

class tmtm_h_ssh68_covered_butanb: tmtm_h_ssh68_covered_base
{
    author="erem2k";
    
    scope=2;
    scopeCurator=2;
    scopeArsenal=2;

    displayName  = "SSh-68, Covered (TTsKO Brown)";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    hiddenSelectionsTextures[] = {
        "\tmtm\pack\cup_headgear\Data\tmtm_ssh68_covered_ttsko_brown_co.paa",
        "\tmtm\pack\cup_headgear\Data\tmtm_ssh68_covered_ttsko_brown_co.paa"
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[] = {
            "\tmtm\pack\cup_headgear\Data\tmtm_ssh68_covered_ttsko_brown_co.paa",
            "\tmtm\pack\cup_headgear\Data\tmtm_ssh68_covered_ttsko_brown_co.paa"
        };
    };
};

class tmtm_h_ssh68_covered_butano: tmtm_h_ssh68_covered_base
{
    author="erem2k";
    
    scope=2;
    scopeCurator=2;
    scopeArsenal=2;

    displayName  = "SSh-68, Covered (TTsKO Oxblood)";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    hiddenSelectionsTextures[] = {
        "\tmtm\pack\cup_headgear\Data\tmtm_ssh68_covered_ttsko_oxblood_co.paa",
        "\tmtm\pack\cup_headgear\Data\tmtm_ssh68_covered_ttsko_oxblood_co.paa"
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[] = {
            "\tmtm\pack\cup_headgear\Data\tmtm_ssh68_covered_ttsko_oxblood_co.paa",
            "\tmtm\pack\cup_headgear\Data\tmtm_ssh68_covered_ttsko_oxblood_co.paa"
        };
    };
};

class tmtm_h_ssh68_covered_dubok: tmtm_h_ssh68_covered_base
{
    author="erem2k";
    
    scope=2;
    scopeCurator=2;
    scopeArsenal=2;

    displayName  = "SSh-68, Covered (Dubok)";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    hiddenSelectionsTextures[] = {
        "\tmtm\pack\cup_headgear\Data\tmtm_ssh68_covered_dubok_co.paa",
        "\tmtm\pack\cup_headgear\Data\tmtm_ssh68_covered_dubok_co.paa"
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[] = {
            "\tmtm\pack\cup_headgear\Data\tmtm_ssh68_covered_dubok_co.paa",
            "\tmtm\pack\cup_headgear\Data\tmtm_ssh68_covered_dubok_co.paa"
        };
    };
};

class tmtm_h_ssh68_covered_sfia: tmtm_h_ssh68_covered_base
{
    author="erem2k";
    
    scope=2;
    scopeCurator=2;
    scopeArsenal=2;

    displayName  = "SSh-68, Covered (SFIA)";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    hiddenSelectionsTextures[] = {
        "\tmtm\pack\cup_headgear\Data\tmtm_ssh68_covered_sfia_co.paa",
        "\tmtm\pack\cup_headgear\Data\tmtm_ssh68_covered_sfia_co.paa"
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[] = {
            "\tmtm\pack\cup_headgear\Data\tmtm_ssh68_covered_sfia_co.paa",
            "\tmtm\pack\cup_headgear\Data\tmtm_ssh68_covered_sfia_co.paa"
        };
    };
};

class tmtm_h_ssh68_covered_lizardt: tmtm_h_ssh68_covered_base
{
    author="erem2k";
    
    scope=2;
    scopeCurator=2;
    scopeArsenal=2;

    displayName  = "SSh-68, Covered (Takistan Lizard)";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    hiddenSelectionsTextures[] = {
        "\tmtm\pack\cup_headgear\Data\tmtm_ssh68_covered_lizardt_co.paa",
        "\tmtm\pack\cup_headgear\Data\tmtm_ssh68_covered_lizardt_co.paa"
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[] = {
            "\tmtm\pack\cup_headgear\Data\tmtm_ssh68_covered_lizardt_co.paa",
            "\tmtm\pack\cup_headgear\Data\tmtm_ssh68_covered_lizardt_co.paa"
        };
    };
};

class tmtm_h_ssh68_covered_un: tmtm_h_ssh68_covered_base
{
    author="erem2k";
    
    scope=2;
    scopeCurator=2;
    scopeArsenal=2;

    displayName  = "SSh-68, Covered (UN)";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    hiddenSelectionsTextures[] = {
        "\tmtm\pack\cup_headgear\Data\tmtm_ssh68_covered_un_co.paa",
        "\tmtm\pack\cup_headgear\Data\tmtm_ssh68_covered_un_co.paa"
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[] = {
            "\tmtm\pack\cup_headgear\Data\tmtm_ssh68_covered_un_co.paa",
            "\tmtm\pack\cup_headgear\Data\tmtm_ssh68_covered_un_co.paa"
        };
    };
};

class tmtm_h_ssh68_covered_un_crest: tmtm_h_ssh68_covered_base
{
    author="erem2k";
    
    scope=2;
    scopeCurator=2;
    scopeArsenal=2;

    displayName  = "SSh-68, Covered (UN, Crest)";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    hiddenSelectionsTextures[] = {
        "\tmtm\pack\cup_headgear\Data\tmtm_ssh68_covered_un_crest_co.paa",
        "\tmtm\pack\cup_headgear\Data\tmtm_ssh68_covered_un_crest_co.paa"
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[] = {
            "\tmtm\pack\cup_headgear\Data\tmtm_ssh68_covered_un_badge_co.paa",
            "\tmtm\pack\cup_headgear\Data\tmtm_ssh68_covered_un_badge_co.paa"
        };
    };
};

class tmtm_h_ssh68_covered_wdl: tmtm_h_ssh68_covered_base
{
    author="erem2k";
    
    scope=2;
    scopeCurator=2;
    scopeArsenal=2;

    displayName  = "SSh-68, Covered (Woodland)";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    hiddenSelectionsTextures[] = {
        "\tmtm\pack\cup_headgear\Data\tmtm_ssh68_covered_wdl_co.paa",
        "\tmtm\pack\cup_headgear\Data\tmtm_ssh68_covered_wdl_co.paa"
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[] = {
            "\tmtm\pack\cup_headgear\Data\tmtm_ssh68_covered_wdl_co.paa",
            "\tmtm\pack\cup_headgear\Data\tmtm_ssh68_covered_wdl_co.paa"
        };
    };
};

// Cover + Net
class tmtm_h_ssh68_covered_net_lizardt: tmtm_h_ssh68_covered_net_base
{
    author="erem2k";
    
    scope=2;
    scopeCurator=2;
    scopeArsenal=2;

    displayName  = "SSh-68, Covered/Net (Takistan Lizard/Green)";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    hiddenSelectionsTextures[] = {
        "\tmtm\pack\cup_headgear\Data\tmtm_ssh68_covered_net_lizardt_co.paa",
        "\tmtm\pack\cup_headgear\Data\tmtm_ssh68_covered_net_lizardt_co.paa"
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[] = {
            "\tmtm\pack\cup_headgear\Data\tmtm_ssh68_covered_net_lizardt_co.paa",
            "\tmtm\pack\cup_headgear\Data\tmtm_ssh68_covered_net_lizardt_co.paa"
        };
    };
};
