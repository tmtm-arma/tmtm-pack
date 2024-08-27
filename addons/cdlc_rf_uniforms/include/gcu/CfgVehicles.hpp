

class tmtm_lightFatigues_combat_scarf_base: O_Soldier_base_F
{
    scope=1;
    scopeCurator=0;
    scopeArsenal=0;

    model="\lxRF\characters_rf\uniform\ig_leader_rf.p3d";

    hiddenSelections[]= { "Camo", "Camo1", "Camo2", "Camo3", "insignia" };

    class Wounds
    {
        tex[]={};
        mat[]=
        {
            "lxrf\characters_rf\uniform\data\u_combatuniform_01_01_firecrew.rvmat",
            "lxrf\characters_rf\uniform\data\U_CombatUniform_01_01_FireCrew_injury.rvmat",
            "lxrf\characters_rf\uniform\data\U_CombatUniform_01_01_FireCrew_injury.rvmat",
            "lxrf\characters_rf\uniform\data\u_combatuniform_01_02_firecrew.rvmat",
            "a3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01_Pants_injury.rvmat",
            "a3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01_Pants_injury.rvmat",
            "a3\characters_f_enoch\uniforms\data\i_e_soldier_01_pants.rvmat",
            "a3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01_Pants_injury.rvmat",
            "a3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01_Pants_injury.rvmat",
            "lxrf\characters_rf\uniform\data\U_CombatUniform_01_03_FireCrew.rvmat",
            "lxrf\characters_rf\uniform\data\U_CombatUniform_01_03_FireCrew_injury.rvmat",
            "lxrf\characters_rf\uniform\data\U_CombatUniform_01_03_FireCrew_injury.rvmat",
            "lxrf\characters_rf\uniform\data\coveralls_rescue.rvmat",
            "lxrf\characters_rf\uniform\data\coveralls_rescue_injury.rvmat",
            "lxrf\characters_rf\uniform\data\coveralls_rescue_injury.rvmat",
            "lxrf\characters_rf\uniform\data\jacket_rf.rvmat",
            "lxrf\characters_rf\uniform\data\jacket_injury.rvmat",
            "lxrf\characters_rf\uniform\data\jacket_injury.rvmat",
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
            "A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat",
            "lxRF\characters_rf\heads\data\Body_Barry.rvmat",
            "lxRF\characters_rf\heads\data\Body_Barry_injury.rvmat",
            "lxRF\characters_rf\heads\data\Body_Barry_injury.rvmat"
        };
    };
};

// Content
class tmtm_lightFatigues_combat_scarf_csata: tmtm_lightFatigues_combat_scarf_base
{
    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    author="erem2k";

    displayName="Light Combat Fatigues, Scarf (Hex)";
    picture="\A3\characters_F\data\ui\icon_U_OI_Officer_ocamo_ca.paa";

    uniformClass="tmtm_u_lightFatigues_combat_scarf_csata";

    hiddenSelectionsTextures[]= {
        "\a3\characters_f_beta\indep\data\ia_soldier_01_clothing_co.paa",
        "\a3\characters_f\opfor\data\officer_noinsignia_hex_CO.paa",
        "\a3\characters_F\opfor\data\clothing_co.paa",
        "\a3\characters_f_gamma\civil\data\c_cloth1_black.paa",
        "\a3\ui_f_tacops\data\CfgUnitInsignia\csat_scimitarRegiment_ca.paa"
    };
};


class tmtm_lightFatigues_combat_scarf_csatt: tmtm_lightFatigues_combat_scarf_base
{
    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    author="erem2k";

    displayName="Light Combat Fatigues, Scarf (Green Hex)";
    picture="\A3\characters_f_exp\data\ui\icon_U_OT_officer_F_ca.paa";

    uniformClass="tmtm_u_lightFatigues_combat_scarf_csatt";

    hiddenSelectionsTextures[]= {
        "a3\characters_f_beta\INDEP\Data\ia_soldier_01_clothing_co.paa",
        "\tmtm\pack\opfor_uniforms\data\tmtm_lightFatigues_csatt_co.paa",
        "\a3\characters_f_exp\opfor\data\clothing_tna_CO.paa",
        "\a3\characters_f_gamma\civil\data\c_cloth1_black.paa",
        ""
    };
};

class tmtm_lightFatigues_combat_scarf_csatu: tmtm_lightFatigues_combat_scarf_base
{
    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    author="Ravenholme, erem2k";

    displayName="Light Combat Fatigues, Scarf (Urban)";
    picture="\tmtm\pack\opfor_uniforms\data\ui\icon_tmtm_u_lightFatigues_csatu_ca.paa";

    uniformClass="tmtm_u_lightFatigues_combat_scarf_csatu";

    hiddenSelectionsTextures[]= {
        "a3\characters_f_beta\INDEP\Data\ia_soldier_01_clothing_co.paa",
        "\tmtm\pack\opfor_uniforms\data\tmtm_lightFatigues_csatu_co.paa",
        "\a3\characters_F\opfor\Data\clothing_oucamo_co.paa",
        "\tmtm\pack\cdlc_rf_uniforms\data\tmtm_lcf_scarf_white_co.paa",
        ""
    };
};
