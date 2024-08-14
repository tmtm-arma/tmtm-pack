// ACU
class tmtm_acu_base: B_Soldier_base_F
{
    scope=1;
    scopeCurator = 0;

    class Wounds /// changes material of skin according to damage
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
            "A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",

            "CUP\Creatures\People\Military\CUP_Creatures_People_Military_HIL\data\Blouse.rvmat",
            "CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\ACU\data\Blouse_w1.rvmat",
            "CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\ACU\data\Blouse_w2.rvmat",

            "CUP\Creatures\People\Military\CUP_Creatures_People_Military_HIL\data\pants.rvmat",
            "CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\ACU\data\pants_w1.rvmat",
            "CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\ACU\data\pants_w2.rvmat"

        };
    };

    model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\ACU\CUP_ACU_1.p3d";
    modelSides[] = { 3, 1 };

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

    // #include "\tmtm\pack\main\hitpoints_uniform_none.h"

    hiddenSelections[] = {"Camo1", "Camo2", "camo3", "flag", "clan", "insignia"};
    hiddenSelectionsMaterials[] = {
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_HIL\data\blouse.rvmat",
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_HIL\data\pants.rvmat",
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\data\oakley_2.rvmat"
    };
};

class tmtm_acu_gloves_base: tmtm_acu_base
{
    scope=1;
    scopeCurator = 0;

    model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\ACU\CUP_ACU_1_gloves.p3d";
};

class tmtm_acu_rolled_base: tmtm_acu_base
{
    scope=1;
    scopeCurator = 0;

    model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\ACU\CUP_ACU_1_rolled.p3d";
};

class tmtm_acu_rolled_gloves_base: tmtm_acu_base
{
    scope=1;
    scopeCurator = 0;

    model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\ACU\CUP_ACU_1_rolled_gloves.p3d";
};


// AFU ACU (MM14)
class tmtm_acu_mm14: tmtm_acu_base
{
    author="erem2k";

    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    displayName = "AFU ACU (MM14)";
    uniformClass = "tmtm_u_acu_mm14";

    hiddenSelectionsTextures[] =
    {
        "\tmtm\pack\cup_uniforms\Data\tmtm_acu_blouse_mm14_flag_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_acu_pants_mm14_co.paa"
    };
};
// AFU ACU (Gloves/MM14)
class tmtm_acu_gloves_mm14: tmtm_acu_gloves_base
{
    author="erem2k";

    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    displayName = "AFU ACU (Gloves/MM14)";
    uniformClass = "tmtm_u_acu_gloves_mm14";

    hiddenSelectionsTextures[] =
    {
        "\tmtm\pack\cup_uniforms\Data\tmtm_acu_blouse_mm14_flag_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_acu_pants_mm14_co.paa",
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\data\oakley_2_tan_co.paa"
    };
};
// AFU ACU (Rolled/MM14)
class tmtm_acu_rolled_mm14: tmtm_acu_rolled_base
{
    author="erem2k";

    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    displayName = "AFU ACU (Rolled/MM14)";
    uniformClass = "tmtm_u_acu_rolled_mm14";

    hiddenSelectionsTextures[] =
    {
        "\tmtm\pack\cup_uniforms\Data\tmtm_acu_blouse_mm14_flag_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_acu_pants_mm14_co.paa",
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\data\oakley_2_tan_co.paa"
    };
};
// AFU ACU (Rolled/Gloves/MM14)
class tmtm_acu_rolled_gloves_mm14: tmtm_acu_rolled_gloves_base
{
    author="erem2k";

    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    displayName = "AFU ACU (Rolled/Gloves/MM14)";
    uniformClass = "tmtm_u_acu_rolled_gloves_mm14";

    hiddenSelectionsTextures[] =
    {
        "\tmtm\pack\cup_uniforms\Data\tmtm_acu_blouse_mm14_flag_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_acu_pants_mm14_co.paa",
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\data\oakley_2_tan_co.paa"
    };
};
// AFU National Guard ACU (Dark Olive)
class tmtm_acu_darkolive: tmtm_acu_base
{
    author="erem2k";

    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    displayName = "AFU National Guard ACU (Dark Olive)";
    uniformClass = "tmtm_u_acu_darkolive";

    hiddenSelectionsTextures[] =
    {
        "\tmtm\pack\cup_uniforms\Data\tmtm_acu_blouse_darkolive_flag_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_acu_pants_darkolive_co.paa"
    };
};
// AFU National Guard ACU (Gloves/Dark Olive)
class tmtm_acu_gloves_darkolive: tmtm_acu_gloves_base
{
    author="erem2k";

    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    displayName = "AFU National Guard ACU (Gloves/Dark Olive)";
    uniformClass = "tmtm_u_acu_gloves_darkolive";

    hiddenSelectionsTextures[] =
    {
        "\tmtm\pack\cup_uniforms\Data\tmtm_acu_blouse_darkolive_flag_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_acu_pants_darkolive_co.paa",
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\data\oakley_2_od_co.paa"
    };
};
// AFU National Guard ACU (Rolled/Dark Olive)
class tmtm_acu_rolled_darkolive: tmtm_acu_rolled_base
{
    author="erem2k";

    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    displayName = "AFU National Guard ACU (Rolled/Dark Olive)";
    uniformClass = "tmtm_u_acu_rolled_darkolive";

    hiddenSelectionsTextures[] =
    {
        "\tmtm\pack\cup_uniforms\Data\tmtm_acu_blouse_darkolive_flag_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_acu_pants_darkolive_co.paa",
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\data\oakley_2_od_co.paa"
    };
};
// AFU National Guard ACU (Rolled/Gloves/Dark Olive)
class tmtm_acu_rolled_gloves_darkolive: tmtm_acu_rolled_gloves_base
{
    author="erem2k";

    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    displayName = "AFU National Guard ACU (Rolled/Gloves/Dark Olive)";
    uniformClass = "tmtm_u_acu_rolled_gloves_darkolive";

    hiddenSelectionsTextures[] =
    {
        "\tmtm\pack\cup_uniforms\Data\tmtm_acu_blouse_darkolive_flag_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_acu_pants_darkolive_co.paa",
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\data\oakley_2_od_co.paa"
    };
};
// Uniform ACU (Dark Olive)
class tmtm_acu_noflag_darkolive: tmtm_acu_base
{
    author="erem2k";

    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    displayName = "Uniform ACU (Dark Olive)";
    uniformClass = "tmtm_u_acu_noflag_darkolive";

    hiddenSelectionsTextures[] =
    {
        "\tmtm\pack\cup_uniforms\Data\tmtm_acu_blouse_darkolive_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_acu_pants_darkolive_co.paa"
    };
};
// Uniform ACU (Gloves/Dark Olive)
class tmtm_acu_gloves_noflag_darkolive: tmtm_acu_gloves_base
{
    author="erem2k";

    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    displayName = "Uniform ACU (Gloves/Dark Olive)";
    uniformClass = "tmtm_u_acu_gloves_noflag_darkolive";

    hiddenSelectionsTextures[] =
    {
        "\tmtm\pack\cup_uniforms\Data\tmtm_acu_blouse_darkolive_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_acu_pants_darkolive_co.paa",
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\data\oakley_2_od_co.paa"
    };
};
// Uniform ACU (Rolled/Dark Olive)
class tmtm_acu_rolled_noflag_darkolive: tmtm_acu_rolled_base
{
    author="erem2k";

    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    displayName = "Uniform ACU (Rolled/Dark Olive)";
    uniformClass = "tmtm_u_acu_rolled_noflag_darkolive";

    hiddenSelectionsTextures[] =
    {
        "\tmtm\pack\cup_uniforms\Data\tmtm_acu_blouse_darkolive_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_acu_pants_darkolive_co.paa",
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\data\oakley_2_od_co.paa"
    };
};
// Uniform ACU (Rolled/Gloves/Dark Olive)
class tmtm_acu_rolled_gloves_noflag_darkolive: tmtm_acu_rolled_gloves_base
{
    author="erem2k";

    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    displayName = "Uniform ACU (Rolled/Gloves/Dark Olive)";
    uniformClass = "tmtm_u_acu_rolled_gloves_noflag_darkolive";

    hiddenSelectionsTextures[] =
    {
        "\tmtm\pack\cup_uniforms\Data\tmtm_acu_blouse_darkolive_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_acu_pants_darkolive_co.paa",
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\data\oakley_2_od_co.paa"
    };
};