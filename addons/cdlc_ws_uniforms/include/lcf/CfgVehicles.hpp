class tmtm_lightFatigues_combat_base: O_Soldier_base_F
{
    scope=1;
    scopeCurator=0;

    hiddenSelections[]= { "Camo", "camo1", "camo2", "insignia" }; // gloves, uniform, common opfor uniform bits, insignia

    model="lxWS\characters_1_f_lxws\uniform\ia_lcf_lxws.p3d";

    class Wounds
    {
        tex[]={};
        mat[]=
        {
            "lxws\characters_f_lxws\data\sfia\c_cloth1_deserter.rvmat",
            "lxws\characters_f_lxws\data\sfia\c_cloth1_deserter_injury.rvmat",
            "lxws\characters_f_lxws\data\sfia\c_cloth1_deserter_injury.rvmat",
            "lxws\characters_f_lxws\uniform\djellaba\data\lxws_djellaba_pants.rvmat",
            "lxws\characters_f_lxws\uniform\djellaba\data\lxWS_djellaba_pants_injury.rvmat",
            "lxws\characters_f_lxws\uniform\djellaba\data\lxWS_djellaba_pants_injury.rvmat",
            "lxws\characters_f_lxws\uniform\djellaba\data\lxws_djellaba_shirt.rvmat",
            "lxws\characters_f_lxws\uniform\djellaba\data\lxWS_djellaba_shirt_injury.rvmat",
            "lxws\characters_f_lxws\uniform\djellaba\data\lxWS_djellaba_shirt_injury.rvmat",
            "lxws\characters_f_lxws\uniform\djellaba\data\lxws_djellaba_shirt_gn.rvmat",
            "lxws\characters_f_lxws\uniform\djellaba\data\lxWS_djellaba_shirt_gn_injury.rvmat",
            "lxws\characters_f_lxws\uniform\djellaba\data\lxWS_djellaba_shirt_gn_injury.rvmat",
            "lxws\characters_1_f_lxws\uniform\data\lxws_djellaba_pants_stealth.rvmat",
            "lxws\characters_1_f_lxws\uniform\data\lxWS_djellaba_pants_stealth_injury.rvmat",
            "lxws\characters_1_f_lxws\uniform\data\lxWS_djellaba_pants_stealth_injury.rvmat",
            "lxws\characters_1_f_lxws\uniform\data\lxws_djellaba_shirt_stealth.rvmat",
            "lxws\characters_1_f_lxws\uniform\data\lxWS_djellaba_shirt_stealth_injury.rvmat",
            "lxws\characters_1_f_lxws\uniform\data\lxWS_djellaba_shirt_stealth_injury.rvmat",
            "lxws\characters_f_lxws\uniform\data\tak_civil01.rvmat",
            "lxws\characters_f_lxws\uniform\data\tak_civil01_injury.rvmat",
            "lxws\characters_f_lxws\uniform\data\tak_civil01_injury.rvmat",
            "lxws\characters_f_lxws\uniform\data\tak_civil02.rvmat",
            "lxws\characters_f_lxws\uniform\data\tak_civil02_injury.rvmat",
            "lxws\characters_f_lxws\uniform\data\tak_civil02_injury.rvmat",
            "lxws\characters_f_lxws\uniform\data\tak_civil03.rvmat",
            "lxws\characters_f_lxws\uniform\data\tak_civil03_injury.rvmat",
            "lxws\characters_f_lxws\uniform\data\tak_civil03_injury.rvmat",
            "lxws\characters_f_lxws\data\sfia\officer_sfia.rvmat",
            "a3\characters_f_beta\indep\data\officer_injury.rvmat",
            "a3\characters_f_beta\indep\data\officer_injury.rvmat",
            "a3\characters_f\civil\data\c_cloth1.rvmat",
            "a3\characters_f\civil\data\c_cloth1_injury.rvmat",
            "a3\characters_f\civil\data\c_cloth1_injury.rvmat",
            "a3\characters_f\civil\data\c_cloth2.rvmat",
            "a3\characters_f\civil\data\c_cloth2_injury.rvmat",
            "a3\characters_f\civil\data\c_cloth2_injury.rvmat",
            "a3\characters_f\civil\data\c_cloth3.rvmat",
            "a3\characters_f\civil\data\c_cloth3_injury.rvmat",
            "a3\characters_f\civil\data\c_cloth3_injury.rvmat",
            "a3\characters_f\civil\data\c_cloth4.rvmat",
            "a3\characters_f\civil\data\c_cloth4_injury.rvmat",
            "a3\characters_f\civil\data\c_cloth4_injury.rvmat",
            "a3\characters_f_epb\blufor\data\clothing1_dirty.rvmat",
            "a3\Characters_f\blufor\Data\clothing1_injury.rvmat",
            "a3\Characters_f\blufor\Data\clothing1_injury.rvmat",
            "a3\characters_f\civil\data\c_poloshirtpants.rvmat",
            "a3\characters_f\civil\data\c_poloshirtpants_injury.rvmat",
            "a3\characters_f\civil\data\c_poloshirtpants_injury.rvmat",
            "a3\characters_f\civil\data\c_poloshirt.rvmat",
            "a3\characters_f\civil\data\c_poloshirt_injury.rvmat",
            "a3\characters_f\civil\data\c_poloshirt_injury.rvmat",
            "a3\characters_f\common\data\coveralls.rvmat",
            "a3\Characters_F\Common\Data\coveralls_injury.rvmat",
            "A3\Characters_F\Common\Data\coveralls_injury.rvmat",
            "a3\characters_f\civil\data\hunter.rvmat",
            "a3\characters_f\civil\data\hunter_injury.rvmat",
            "a3\characters_f\civil\data\hunter_injury.rvmat",
            "a3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat",
            "a3\characters_f_beta\indep\data\ia_soldier_01_clothing_injury.rvmat",
            "a3\characters_f_beta\indep\data\ia_soldier_01_clothing_injury.rvmat",
            "a3\characters_f_gamma\guerrilla\data\ig_guerrilla2_1.rvmat",
            "A3\Characters_F_Gamma\Guerrilla\Data\ig_guerrilla2_1_injury.rvmat",
            "A3\Characters_F_Gamma\Guerrilla\Data\ig_guerrilla2_1_injury.rvmat",
            "a3\characters_f_gamma\guerrilla\data\ig_guerrilla3_1.rvmat",
            "a3\characters_f\civil\data\hunter_injury.rvmat",
            "a3\characters_f\civil\data\hunter_injury.rvmat",
            "a3\characters_f_epb\guerrilla\data\ig_guerrilla4_1.rvmat",
            "A3\Characters_F_EPB\Guerrilla\Data\ig_guerrilla4_1_injury.rvmat",
            "A3\Characters_F_EPB\Guerrilla\Data\ig_guerrilla4_1_injury.rvmat",
            "a3\characters_f_bootcamp\guerrilla\data\ig_guerrilla_6_1.rvmat",
            "A3\Characters_F_Bootcamp\Guerrilla\Data\ig_guerrilla_6_1_injury.rvmat",
            "A3\Characters_F_Bootcamp\Guerrilla\Data\ig_guerrilla_6_1_injury.rvmat",
            "a3\characters_f_beta\indep\data\officer.rvmat",
            "a3\characters_f_beta\indep\data\officer_injury.rvmat",
            "a3\characters_f_beta\indep\data\officer_injury.rvmat",
            "a3\Characters_F\BLUFOR\Data\clothing1.rvmat",
            "A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat",
            "A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat",
            "a3\Characters_F\Common\Data\basicbody.rvmat",
            "A3\Characters_F\Common\Data\basicbody_injury.rvmat",
            "A3\Characters_F\Common\Data\basicbody_injury.rvmat",
            "a3\characters_f_exp\blufor\data\u_b_ctrg_soldier_f.rvmat",
            "a3\characters_f_exp\blufor\data\u_b_ctrg_soldier_f_injury.rvmat",
            "a3\characters_f_exp\blufor\data\u_b_ctrg_soldier_f_injury.rvmat",
            "A3\Characters_F\OPFOR\Data\clothing.rvmat",
            "A3\Characters_F\OPFOR\Data\clothing_injury.rvmat",
            "A3\Characters_F\OPFOR\Data\clothing_injury.rvmat",
            "A3\Characters_F\OPFOR\Data\officer_noInsignia.rvmat",
            "A3\Characters_F\OPFOR\Data\officer_injury_noinsignia.rvmat",
            "A3\Characters_F\OPFOR\Data\officer_injury_noinsignia.rvmat",
            "lxws\characters_1_f_lxws\uniform\data\clothing1_noflag.rvmat",
            "lxws\characters_1_f_lxws\uniform\data\clothing1_noflag_injury.rvmat",
            "lxws\characters_1_f_lxws\uniform\data\clothing1_noflag_injury.rvmat",
            "A3\Characters_F\Common\Data\basicbody.rvmat",
            "A3\Characters_F\Common\Data\basicbody_injury.rvmat",
            "A3\Characters_F\Common\Data\basicbody_injury.rvmat",
            "a3\characters_f\heads\data\hl_white.rvmat",
            "a3\characters_f\heads\data\hl_white_injury.rvmat",
            "a3\characters_f\heads\data\hl_white_injury.rvmat",
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

    class HitPoints: HitPoints
    {
        class HitFace: HitFace
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
            passThrough=0.64999998;
            radius=0.23999999;
            explosionShielding=1;
            visual="injury_body";
            minimalHit=0.0099999998;
            depends="0";
        };
        class HitAbdomen: HitPelvis
        {
            armor=3;
            material=-1;
            name="spine1";
            passThrough=0.64999998;
            radius=0.16;
            explosionShielding=1;
            visual="injury_body";
            minimalHit=0.0099999998;
        };
        class HitDiaphragm: HitAbdomen
        {
            armor=3;
            material=-1;
            name="spine2";
            passThrough=0.64999998;
            radius=0.18000001;
            explosionShielding=4;
            visual="injury_body";
            minimalHit=0.0099999998;
        };
        class HitChest: HitDiaphragm
        {
            armor=3;
            material=-1;
            name="spine3";
            passThrough=0.64999998;
            radius=0.18000001;
            explosionShielding=4;
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
            explosionShielding=4;
            visual="injury_body";
            minimalHit=0.0099999998;
            depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
        };
        class HitArms: HitBody
        {
            armor=4;
            material=-1;
            name="arms";
            passThrough=0.89999998;
            radius=0.1;
            explosionShielding=0.60000002;
            visual="injury_hands";
            minimalHit=0.0099999998;
            depends="0";
        };
        class HitHands: HitArms
        {
            armor=3;
            material=-1;
            name="hands";
            passThrough=0.89999998;
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

/////////////////////////////////////////////////////////
class tmtm_lightFatigues_combat_csatt: tmtm_lightFatigues_combat_base
{
    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    author="erem2k";

    displayName="Light Combat Fatigues (Green Hex)";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    uniformClass="tmtm_u_lightFatigues_combat_csatt";

    hiddenSelectionsTextures[]={
        "a3\characters_f_beta\indep\data\ia_soldier_01_clothing_co.paa",
        "\tmtm\pack\opfor_uniforms\data\tmtm_lightFatigues_csatt_co.paa",
        "\a3\characters_F_Exp\opfor\data\clothing_tna_CO.paa",
        ""
    };
};

class tmtm_lightFatigues_combat_csatu: tmtm_lightFatigues_combat_base
{
    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    author="Ravenholme";

    displayName="Light Combat Fatigues (Urban)";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    uniformClass="tmtm_u_lightFatigues_combat_csatu";

    hiddenSelectionsTextures[]={
        "a3\characters_f_beta\indep\data\ia_soldier_01_clothing_co.paa",
        "\tmtm\pack\opfor_uniforms\data\tmtm_lightFatigues_csatu_co.paa",
        "\a3\characters_F\opfor\data\clothing_oucamo_CO.paa",
        ""
    };
};
