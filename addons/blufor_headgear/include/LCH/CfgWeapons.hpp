class tmtm_h_helmetLight_black: ItemCore
{
    scope=2;
    author="Trenchgun";
    picture="\A3\Characters_F\data\ui\icon_H_HelmetB_light_ca.paa";
    displayName="LCH (Black)";

    model="\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
    hiddenSelections[]= { "camo" };
    hiddenSelectionsTextures[]= {
        "\tmtm\pack\blufor_headgear\Data\tmtm_helmet_black_co.paa"
    };

    descriptionShort="$STR_A3_SP_AL_I";
    class ItemInfo: ItemInfo
    {
        mass=20;
        uniformModel="\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
        modelSides[]={3,1};

        hiddenSelections[]= { "camo" };

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

class tmtm_h_helmetLight_grey: tmtm_h_helmetLight_black
{
    scope=2;
    displayName="LCH (Grey)";
    hiddenSelectionsTextures[]=
    {
        "\tmtm\pack\blufor_headgear\Data\tmtm_helmet_grey_co.paa"
    };
};

class tmtm_h_helmetLight_olive: tmtm_h_helmetLight_black
{
    scope=2;
    displayName="LCH (Olive)";
    hiddenSelectionsTextures[]=
    {
        "\tmtm\pack\blufor_headgear\Data\tmtm_helmet_olive_co.paa"
    };
};

class tmtm_h_helmetLight_coyote: tmtm_h_helmetLight_black
{
    scope=2;
    displayName="LCH (Coyote)";
    hiddenSelectionsTextures[]=
    {
        "\tmtm\pack\blufor_headgear\Data\tmtm_helmet_coyote_co.paa"
    };
};
