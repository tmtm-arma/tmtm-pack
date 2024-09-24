class tmtm_v_tacticalvest_base: Vest_Camo_Base
{
    scope=0;
    scopeArsenal=0;
    scopeCurator=0;
    picture="\A3\characters_f\Data\UI\icon_V_TacVest_blk_CA.paa";
    model="A3\Characters_F\Common\equip_tacticalvest";
    hiddenSelections[]=
    {
        "camo"
    };

    class ItemInfo: ItemInfo
    {
        uniformModel="A3\Characters_F\Common\equip_tacticalvest";
        containerClass="Supply100";
        mass=40;
        class HitpointsProtectionInfo
        {
            class Chest
            {
                hitpointName="HitChest";
                armor=8;
                passThrough=0.5;
            };
            class Diaphragm
            {
                hitpointName="HitDiaphragm";
                armor=8;
                passThrough=0.5;
            };
            class Abdomen
            {
                hitpointName="HitAbdomen";
                armor=8;
                passThrough=0.5;
            };
            class Body
            {
                hitpointName="HitBody";
                passThrough=0.5;
            };
        };
    };
};

// Tactical Vest
class tmtm_v_tacticalvest_mercblack: tmtm_v_tacticalvest_base
{
    author="erem2k";
    scope=1;
    scopeArsenal=2;
    scopeCurator=0;
    displayName="Tactical Vest (Mercenary Black)";
    picture="\tmtm\pack\blufor_vests\Data\ui\icon_tmtm_v_tacticalvest_mercblack.paa";

    hiddenSelectionsTextures[]=
    {
        "\tmtm\pack\blufor_vests\Data\tmtm_tacticalvest_mercblack_co.paa"
    };
};
class tmtm_v_tacticalvest_mercblue: tmtm_v_tacticalvest_base
{
    author="erem2k";
    scope=1;
    scopeArsenal=2;
    scopeCurator=0;
    displayName="Tactical Vest (Mercenary Blue)";
    picture="\tmtm\pack\blufor_vests\Data\ui\icon_tmtm_v_tacticalvest_mercblue.paa";

    hiddenSelectionsTextures[]=
    {
        "\tmtm\pack\blufor_vests\Data\tmtm_tacticalvest_mercblue_co.paa"
    };
};
class tmtm_v_tacticalvest_mercgreen: tmtm_v_tacticalvest_base
{
    author="erem2k";
    scope=1;
    scopeArsenal=2;
    scopeCurator=0;
    displayName="Tactical Vest (Mercenary Green)";
    picture="\tmtm\pack\blufor_vests\Data\ui\icon_tmtm_v_tacticalvest_mercgreen.paa";

    hiddenSelectionsTextures[]=
    {
        "\tmtm\pack\blufor_vests\Data\tmtm_tacticalvest_mercgreen_co.paa"
    };
};
class tmtm_v_tacticalvest_mercred: tmtm_v_tacticalvest_base
{
    author="erem2k";
    scope=1;
    scopeArsenal=2;
    scopeCurator=0;
    displayName="Tactical Vest (Mercenary Red)";
    picture="\tmtm\pack\blufor_vests\Data\ui\icon_tmtm_v_tacticalvest_mercred.paa";

    hiddenSelectionsTextures[]=
    {
        "\tmtm\pack\blufor_vests\Data\tmtm_tacticalvest_mercred_co.paa"
    };
};
class tmtm_v_tacticalvest_mm14: tmtm_v_tacticalvest_base
{
    author="erem2k";
    scope=1;
    scopeArsenal=2;
    scopeCurator=0;
    displayName="Tactical Vest (MM14)";
    picture="\tmtm\pack\blufor_vests\Data\ui\icon_tmtm_v_tacticalvest_mm14.paa";

    hiddenSelectionsTextures[]=
    {
        "\tmtm\pack\blufor_vests\Data\tmtm_tacticalvest_mm14_co.paa"
    };
};
