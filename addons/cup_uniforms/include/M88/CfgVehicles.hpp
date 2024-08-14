// M88 Uniform
class tmtm_m88_base: O_Soldier_base_F
{
    scope=1;
    scopeCurator=0;

    class Wounds
    {
        tex[] = {};
        mat[] = {


            // Meaty parts injuries
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

    model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\CUP_RUS_Uniform_80s.p3d";
    modelSides[] = { 3, 0 };

    class UniformInfo
    {
        class SlotsInfo
        {
            class NVG : UniformSlotInfo{ slotType = NVG_SLOT; };
            class Scuba : UniformSlotInfo{ slotType = SCUBA_SLOT; };
            class Googles : UniformSlotInfo{ slotType = GOGGLE_SLOT; };
            class Headgear : UniformSlotInfo{ slotType = HEADGEAR_SLOT; };
        };
    };

    hiddenSelections[] = { "Camo", "clan", "insignia" };
};

class tmtm_m88_rolled_base: tmtm_m88_base
{
    scope=1;
    scopeCurator=0;

    model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\CUP_RUS_Uniform_80s_rolled_up.p3d";
};

class tmtm_m88_rolled_gloves_base: tmtm_m88_base
{
    scope=1;
    scopeCurator=0;

    model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\CUP_RUS_Uniform_80s_rolled_up_gloves.p3d";
};