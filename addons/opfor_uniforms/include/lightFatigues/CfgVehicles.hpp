class tmtm_lightFatigues_base: O_Soldier_base_F
{
    scope=1;
    scopeArsenal=0;
    scopeCurator=0;

    model="\A3\characters_F\OPFOR\o_officer_noinsignia_f.p3d";
    modelSides[]={0,3};

    hiddenSelections[]= { "Camo", "insignia" };

    camouflage=1.6;
    armor=2; // ?? it's clothing, what's it doing here
    armorStructural=4;
    explosionShielding=0.40000001;

    class Wounds
    {
        mat[]=
        {
            "A3\Characters_F\OPFOR\Data\officer_noInsignia.rvmat",
            "A3\Characters_F\OPFOR\Data\officer_injury_noinsignia.rvmat",
            "A3\Characters_F\OPFOR\Data\officer_injury_noinsignia.rvmat"
        };
        tex[]={};
    };

    class HitPoints: HitPoints
    {
        class HitFace
        {
            armor=1;
            material=-1;
            name="face_hub";
            passThrough=0.80000001;
            radius=0.079999998;
            explosionShielding=0.1;
            minimalHit=0.0099999998;
        };
        class HitNeck: HitFace
        {
            armor=1;
            material=-1;
            name="neck";
            passThrough=0.80000001;
            radius=0.1;
            explosionShielding=0.5;
            minimalHit=0.0099999998;
        };
        class HitHead: HitNeck
        {
            armor=1;
            material=-1;
            name="head";
            passThrough=0.80000001;
            radius=0.2;
            explosionShielding=0.5;
            minimalHit=0.0099999998;
            depends="HitFace max HitNeck";
        };
        class HitPelvis: HitHead
        {
            armor=6;
            material=-1;
            name="pelvis";
            passThrough=0.80000001;
            radius=0.23999999;
            explosionShielding=1;
            visual="injury_body";
            minimalHit=0.0099999998;
            depends="0";
        };
        class HitAbdomen: HitPelvis
        {
            armor=1;
            material=-1;
            name="spine1";
            passThrough=0.80000001;
            radius=0.16;
            explosionShielding=1;
            visual="injury_body";
            minimalHit=0.0099999998;
        };
        class HitDiaphragm: HitAbdomen
        {
            armor=1;
            material=-1;
            name="spine2";
            passThrough=0.80000001;
            radius=0.18000001;
            explosionShielding=6;
            visual="injury_body";
            minimalHit=0.0099999998;
        };
        class HitChest: HitDiaphragm
        {
            armor=1;
            material=-1;
            name="spine3";
            passThrough=0.80000001;
            radius=0.18000001;
            explosionShielding=6;
            visual="injury_body";
            minimalHit=0.0099999998;
        };
        class HitBody: HitChest
        {
            armor=1000;
            material=-1;
            name="body";
            passThrough=1;
            radius=0;
            explosionShielding=6;
            visual="injury_body";
            minimalHit=0.0099999998;
            depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
        };
        class HitArms: HitBody
        {
            armor=3;
            material=-1;
            name="arms";
            passThrough=1;
            radius=0.1;
            explosionShielding=1;
            visual="injury_hands";
            minimalHit=0.0099999998;
            depends="0";
        };
        class HitHands: HitArms
        {
            armor=3;
            material=-1;
            name="hands";
            passThrough=1;
            radius=0.1;
            explosionShielding=1;
            visual="injury_hands";
            minimalHit=0.0099999998;
            depends="HitArms";
        };
        class HitLegs: HitHands
        {
            armor=6;
            material=-1;
            name="legs";
            passThrough=0.89999998;
            radius=0.14;
            explosionShielding=0.30000001;
            visual="injury_legs";
            minimalHit=0.0099999998;
            depends="0";
        };
        class Incapacitated: HitLegs
        {
            armor=1000;
            material=-1;
            name="body";
            passThrough=1;
            radius=0;
            explosionShielding=1;
            visual="";
            minimalHit=0;
            depends="(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
        };
    };
};

// Content
class tmtm_lightFatigues_csatt: tmtm_lightFatigues_base
{
    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    author="erem2k";

    displayName="Light Fatigues (Green Hex)";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    uniformClass="tmtm_u_lightFatigues_csatt";

    hiddenSelectionsTextures[]={
        "\tmtm\pack\opfor_uniforms\data\tmtm_lightFatigues_csatt_co.paa",
        ""
    };
};

class tmtm_lightFatigues_csatu: tmtm_lightFatigues_base
{
    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    author="Ravenholme";

    displayName="Light Fatigues (Urban)";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    uniformClass="tmtm_u_lightFatigues_csatu";

    hiddenSelectionsTextures[]={
        "\tmtm\pack\opfor_uniforms\data\tmtm_lightFatigues_csatu_co.paa",
        ""
    };
};
