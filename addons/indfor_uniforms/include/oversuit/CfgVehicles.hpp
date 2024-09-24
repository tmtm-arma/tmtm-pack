class tmtm_oversuit_base: B_Soldier_base_F
{
    scope=1;
    scopeCurator=0;

    model="\A3\Characters_F_Tank\Uniforms\U_Tank_crew_F.p3d";
    modelSides[]={0,3};

    hiddenSelections[]= { "Camo", "insignia" };
    hiddenSelectionsMaterials[] = {
        "tmtm\pack\indfor_uniforms\data\tmtm_oversuit.rvmat"
    };

    class HitPoints: HitPoints
    {
        HITPOINTS_UNIFORM_NOARMOR
    };

    class Wounds
    {
        tex[]={};
        mat[]=
        {
            "A3\Characters_F_Tank\Uniforms\Data\U_Tank_crew_F.rvmat",
            "A3\Characters_F_Tank\Uniforms\Data\U_Tank_crew_F_injury.rvmat",
            "A3\Characters_F_Tank\Uniforms\Data\U_Tank_crew_F_injury.rvmat",
            "A3\characters_f\common\data\coveralls.rvmat",
            "A3\Characters_F\Common\Data\coveralls_injury.rvmat",
            "A3\Characters_F\Common\Data\coveralls_injury.rvmat",
            "A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat",
            "A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
            "A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
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
            "A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"
        };
    };
};
