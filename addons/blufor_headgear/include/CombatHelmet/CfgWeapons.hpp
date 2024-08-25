class tmtm_h_helmet_black: ItemCore
{
    author="Trenchgun";
    scope=2;
    displayName="Combat Helmet (Black)";
    picture="\A3\characters_f\Data\UI\icon_H_helmet_plain_ca.paa";
    model="\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
    hiddenSelections[]=
    {
        "camo"
    };
    hiddenSelectionsTextures[]=
    {
        "\tmtm\pack\blufor_headgear\Data\tmtm_helmet_black_co.paa"
    };
    class ItemInfo: HeadgearItem
    {
        mass=30;
        uniformModel="\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
        modelSides[]={3,1};
        hiddenSelections[]=
        {
            "camo"
        };
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

class tmtm_h_helmet_grey: tmtm_h_helmet_black
{
    scope=2;
    displayName="Combat Helmet (Grey)";
    hiddenSelectionsTextures[]=
    {
        "\tmtm\pack\blufor_headgear\Data\tmtm_helmet_grey_co.paa"
    };
};

class tmtm_h_helmet_olive: tmtm_h_helmet_black
{
    scope=2;
    displayName="Combat Helmet (Olive)";
    hiddenSelectionsTextures[]=
    {
        "\tmtm\pack\blufor_headgear\Data\tmtm_helmet_olive_co.paa"
    };
};

class tmtm_h_helmet_coyote: tmtm_h_helmet_black
{
    scope=2;
    displayName="Combat Helmet (Coyote)";
    hiddenSelectionsTextures[]=
    {
        "\tmtm\pack\blufor_headgear\Data\tmtm_helmet_coyote_co.paa"
    };
};
