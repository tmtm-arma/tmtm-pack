class tmtm_m88_early_base: O_Soldier_base_F
{
    scope=1;
    scopeCurator=0;

    model="\tmtm\pack\aegis_uniforms\tmtm_u_m88_early.p3d";
    hiddenSelections[]= { "camo", "insignia" };

    modelSides[]={0, 3};
    camouflage=1.6;

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

    class Wounds
    {
        tex[]={};
        mat[]=
        {
            "tmtm\pack\aegis_uniforms\data\tmtm_m88_early.rvmat",
            "tmtm\pack\aegis_uniforms\data\tmtm_m88_early_injury.rvmat",
            "tmtm\pack\aegis_uniforms\data\tmtm_m88_early_injury.rvmat",
            "A3\Characters_F\Common\Data\basicbody.rvmat",
            "A3\Characters_F\Common\Data\basicbody_injury.rvmat",
            "A3\Characters_F\Common\Data\basicbody_injury.rvmat",
            "A3\Characters_F\Heads\Data\hl_white.rvmat",
            "A3\Characters_F\Heads\Data\hl_white_injury.rvmat",
            "A3\Characters_F\Heads\Data\hl_white_injury.rvmat",
            "A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat",
            "A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
            "A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
            "A3\Characters_F\Heads\Data\hl_white_02_bald_muscular.rvmat",
            "A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat",
            "A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat",
            "A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat",
            "A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
            "A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
            "A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat",
            "A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
            "A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
            "A3\Characters_F\Heads\Data\hl_white_old.rvmat",
            "A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
            "A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
            "A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat",
            "A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
            "A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
            "A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular.rvmat",
            "A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat",
            "A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat",
            "A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular.rvmat",
            "A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat",
            "A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat"
        };
    };

};

class tmtm_m88_early_rolled_base: tmtm_m88_early_base
{
    scope=1;
    scopeCurator=0;

    model="\tmtm\pack\aegis_uniforms\tmtm_u_m88_early_rolled.p3d";
};

class tmtm_m88_early_gloves_base: tmtm_m88_early_base
{
    scope=1;
    scopeCurator=0;

    model="\tmtm\pack\aegis_uniforms\tmtm_u_m88_early_gloves.p3d";
    hiddenSelections[]= { "camo", "camo1", "insignia" };
};

class tmtm_m88_early_rolled_gloves_base: tmtm_m88_early_base
{
    scope=1;
    scopeCurator=0;

    model="\tmtm\pack\aegis_uniforms\tmtm_u_m88_early_rolled_gloves.p3d";
    hiddenSelections[]= { "camo", "camo1", "insignia" };
};

// content
class tmtm_m88_early_khaki: tmtm_m88_early_base
{
    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    author="OokamiJamie, erem2k";

    displayName="Uniform M-88 Early, Khaki";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    uniformClass="tmtm_u_m88_early_khaki";

    hiddenSelectionsTextures[]={
        "\tmtm\pack\aegis_uniforms\data\tmtm_m88_early_khaki_co.paa"
    };
};

class tmtm_m88_early_rolled_khaki: tmtm_m88_early_rolled_base
{
    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    author="OokamiJamie, erem2k";

    displayName="Uniform M-88 Early, Khaki (Rolled)";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    uniformClass="tmtm_u_m88_early_rolled_khaki";

    hiddenSelectionsTextures[]={
        "\tmtm\pack\aegis_uniforms\data\tmtm_m88_early_khaki_co.paa"
    };
};

class tmtm_m88_early_gloves_khaki: tmtm_m88_early_gloves_base
{
    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    author="OokamiJamie, erem2k";

    displayName="Uniform M-88 Early, Khaki (Gloves)";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    uniformClass="tmtm_u_m88_early_gloves_khaki";

    hiddenSelectionsTextures[]={
        "\tmtm\pack\aegis_uniforms\data\tmtm_m88_early_khaki_co.paa",
        "\tmtm\pack\aegis_uniforms\data\tmtm_tacGloves_black_co.paa"
    };
};


class tmtm_m88_early_rolled_gloves_khaki: tmtm_m88_early_rolled_gloves_base
{
    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    author="OokamiJamie, erem2k";

    displayName="Uniform M-88 Early, Khaki (Rolled, Gloves)";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    uniformClass="tmtm_u_m88_early_rolled_gloves_khaki";

    hiddenSelectionsTextures[]={
        "\tmtm\pack\aegis_uniforms\data\tmtm_m88_early_khaki_co.paa",
        "\tmtm\pack\aegis_uniforms\data\tmtm_tacGloves_black_co.paa"
    };
};
