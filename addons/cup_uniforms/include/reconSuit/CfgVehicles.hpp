class tmtm_reconSuit_base: O_Soldier_base_F
{
    scope=1;
    scopeArsenal=0;
    scopeCurator=0;

    model="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\6Sh122\CUP_6Sh122_1.p3d";

    // Jacket, arms, pants, boots, insignia
    hiddenSelections[]= { "Camo1", "Camo2", "Camo3", "Camo4", "insignia"};
    hiddenSelectionsMaterials[] = {
        "tmtm\pack\cup_uniforms\data\tmtm_reconSuit_jacket.rvmat",
        "CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\6Sh122\data\ra_6sh122_jacket_hands.rvmat",
        "CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\6Sh122\data\ra_6sh122_pants.rvmat",
        "CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\ra_vkpo_shoes_s"
    };

    camouflage=1.4;
    modelSides[]={0,3};

    class HitPoints: HitPoints
    {
        HITPOINTS_UNIFORM_NOARMOR
    };

    class Wounds
    {
        tex[]={};
        mat[]=
        {
            "CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\6Sh122\data\ra_6Sh122_Jacket.rvmat",
            "CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\6Sh122\data\ra_6Sh122_Jacket_injury.rvmat",
            "CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\6Sh122\data\ra_6Sh122_Jacket_injury.rvmat",
            "CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\6Sh122\data\ra_6Sh122_Jacket_hands.rvmat",
            "CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\6Sh122\data\ra_6Sh122_Jacket_hands_injury.rvmat",
            "CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\6Sh122\data\ra_6Sh122_Jacket_hands_injury.rvmat",
            "CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\6Sh122\data\ra_6Sh122_Pants.rvmat",
            "CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\6Sh122\data\ra_6Sh122_Pants_injury.rvmat",
            "CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\6Sh122\data\ra_6Sh122_Pants_injury.rvmat",
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

class tmtm_reconSuit_gloves_base: tmtm_reconSuit_base
{
    scope=1;
    scopeArsenal=0;
    scopeCurator=0;

    model="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\6Sh122\CUP_6Sh122_4.p3d";

    // Jacket, arms, pants, boots, gloves, kneepads, insignia
    hiddenSelections[]= { "Camo1", "Camo2", "Camo3", "Camo4", "Camo5", "Camo6", "insignia" };
    hiddenSelectionsMaterials[] = {
        "tmtm\pack\cup_uniforms\data\tmtm_reconSuit_jacket.rvmat",
        "CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\6Sh122\data\ra_6sh122_jacket_hands.rvmat",
        "CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\6Sh122\data\ra_6sh122_pants.rvmat",
        "CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\ra_vkpo_shoes_s",
        "tmtm\pack\cup_uniforms\data\tmtm_reconSuit_gloves.rvmat",
        "CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\6b51_s.rvmat"
    };
};
