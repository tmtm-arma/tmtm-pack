class tmtm_h_helmetEnhanced_black: ItemCore
{
    author="Trenchgun";

    scope=2;
    scopeArsenal=2;

    picture="\A3\characters_f\Data\UI\icon_H_HelmetB_CA.paa";
    displayName="ECH (Black)";

    model="\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
    hiddenSelections[]= { "camo" };
    hiddenSelectionsTextures[]= {
        "\tmtm\pack\blufor_headgear\Data\tmtm_helmet_black_co.paa"
    };

    class ItemInfo: HeadgearItem
    {
        mass=50;
        uniformModel="\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
        modelSides[]={3,1};

        hiddenSelections[]= { "camo" };

        class HitpointsProtectionInfo
        {
            class Head
            {
                hitpointName="HitHead";
                armor=10;
                passThrough=0.5;
            };
        };
    };
};

class tmtm_h_helmetEnhanced_grey: tmtm_h_helmetEnhanced_black
{
    scope=2;
    scopeArsenal=2;

    displayName="ECH (Grey)";
    hiddenSelectionsTextures[]=
    {
        "\tmtm\pack\blufor_headgear\Data\tmtm_helmet_grey_co.paa"
    };
};

class tmtm_h_helmetEnhanced_olive: tmtm_h_helmetEnhanced_black
{
    scope=2;
    scopeArsenal=2;

    displayName="ECH (Olive)";
    hiddenSelectionsTextures[]=
    {
        "\tmtm\pack\blufor_headgear\Data\tmtm_helmet_olive_co.paa"
    };
};

class tmtm_h_helmetEnhanced_coyote: tmtm_h_helmetEnhanced_black
{
    scope=2;
    scopeArsenal=2;

    displayName="ECH (Coyote)";
    hiddenSelectionsTextures[]=
    {
        "\tmtm\pack\blufor_headgear\Data\tmtm_helmet_coyote_co.paa"
    };
};
