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

    // This should also enable proper wound handling visually on the model
    class HitPoints: HitPoints
    {
        class HitFace
        {
            armor=1;
            material=-1;
            name="face_hub";
            passThrough=0.1;
            radius=0.079999998;
            explosionShielding=0.1;
            minimalHit=0.0099999998;
        };
        class HitNeck: HitFace
        {
            armor=1;
            material=-1;
            name="neck";
            passThrough=0.1;
            radius=0.1;
            explosionShielding=0.5;
            minimalHit=0.0099999998;
        };
        class HitHead: HitNeck
        {
            armor=1;
            material=-1;
            name="head";
            passThrough=0.1;
            radius=0.2;
            explosionShielding=0.5;
            minimalHit=0.0099999998;
            depends="HitFace max HitNeck";
        };
        class HitPelvis
        {
            armor=1;
            material=-1;
            name="pelvis";
            passThrough=0.1;
            radius=0.2;
            explosionShielding=1;
            visual="injury_body";
            minimalHit=0.0099999998;
        };
        class HitAbdomen: HitPelvis
        {
            armor=1;
            material=-1;
            name="spine1";
            passThrough=0.1;
            radius=0.15000001;
            explosionShielding=1;
            visual="injury_body";
            minimalHit=0.0099999998;
        };
        class HitDiaphragm: HitAbdomen
        {
            armor=1;
            material=-1;
            name="spine2";
            passThrough=0.1;
            radius=0.15000001;
            explosionShielding=6;
            visual="injury_body";
            minimalHit=0.0099999998;
        };
        class HitChest: HitDiaphragm
        {
            armor=1;
            material=-1;
            name="spine3";
            passThrough=0.1;
            radius=0.15000001;
            explosionShielding=6;
            visual="injury_body";
            minimalHit=0.0099999998;
        };
        class HitBody: HitChest
        {
            armor=1000;
            material=-1;
            name="body";
            passThrough=0.1;
            radius=0.16;
            explosionShielding=6;
            visual="injury_body";
            minimalHit=0.0099999998;
            depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
        };
        class HitArms
        {
            armor=3;
            material=-1;
            name="arms";
            passThrough=1;
            radius=0.1;
            explosionShielding=1;
            visual="injury_hands";
            minimalHit=0.0099999998;
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
        class HitLegs
        {
            armor=3;
            material=-1;
            name="legs";
            passThrough=1;
            radius=0.12;
            explosionShielding=1;
            visual="injury_legs";
            minimalHit=0.0099999998;
        };
    };

    model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\CUP_RUS_Uniform_80s.p3d";
    modelSides[] = { 3, 0 };

    hiddenSelections[] = { "Camo", "clan", "insignia" };
    hiddenSelectionsMaterials[] = {
        "\tmtm\pack\cup_uniforms\Data\tmtm_m88.rvmat",
    };
};

class tmtm_m88_rolled_base: tmtm_m88_base
{
    scope=1;
    scopeCurator=0;

    model="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\CUP_RUS_Uniform_80s_rolled_up.p3d";
};

class tmtm_m88_gloves_base: tmtm_m88_base
{
    scope=1;
    scopeCurator=0;

    model="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\cup_rus_uniform_80s_gloves.p3d";
    hiddenSelections[] = { "Camo", "camo1", "clan", "insignia" };
};

class tmtm_m88_rolled_gloves_base: tmtm_m88_rolled_base
{
    scope=1;
    scopeCurator=0;

    model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\CUP_RUS_Uniform_80s_rolled_up_gloves.p3d";
};

class tmtm_m88_kneepads_base: tmtm_m88_base
{
    scope=1;
    scopeCurator=0;
    
    model="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\CUP_RUS_Soldier_gloves_kneepads.p3d";

    hiddenSelections[]= { "Camo", "Camo1", "Camo5", "clan", "insignia" };
    // hiddenSelectionsTextures[]=
    // {
    //     "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\data\emr_2_msv_co.paa",
    //     "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\data\oakley_2_od_co.paa",
    //     "\CUP\Creatures\People\CUP_Creatures_People_Core\data\gloves_oakley\fs_oakley_glove_green_co.paa"
    // };
};

class tmtm_m88_kneepads_rolled_base: tmtm_m88_kneepads_base
{
    scope=1;
    scopeCurator=0;
    
    model="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\CUP_RUS_Soldier_rolledup_gloves_kneepads.p3d";

    hiddenSelections[]= { "Camo", "Camo1", "Camo5", "clan", "insignia" };
};

/// Same as above, DVD-specific variants
class tmtm_m88_vdv_base: tmtm_m88_base
{
    scope=1;
    scopeCurator=0;
    
    model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\cup_rus_vdv_uniform_80s.p3d";
    hiddenSelectionsMaterials[] = {
        "\tmtm\pack\cup_uniforms\Data\tmtm_m88_vdv.rvmat",
    };
};

class tmtm_m88_vdv_rolled_base: tmtm_m88_vdv_base
{
    scope=1;
    scopeCurator=0;
    
    model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\cup_rus_vdv_uniform_80s_rolled_up.p3d";
};

class tmtm_m88_vdv_gloves_base: tmtm_m88_vdv_base
{
    scope=1;
    scopeCurator=0;
    
    model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\cup_rus_vdv_uniform_80s_gloves.p3d";
    hiddenSelections[] = { "Camo", "camo1", "clan", "insignia" };
};

class tmtm_m88_vdv_rolled_gloves_base: tmtm_m88_vdv_rolled_base
{
    scope=1;
    scopeCurator=0;
    
    model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\cup_rus_vdv_uniform_80s_rolled_up_gloves.p3d";
};

/* 
    Content
*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////
// TTsKO/Butan family
class tmtm_m88_butand: tmtm_m88_base
{
    scope=1;
    scopeArsenal=2;
    scopeCurator=0;
    
    author="erem2k";

    displayName="Uniform M-88, TTsKO Dark";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    uniformClass="tmtm_u_m88_butand";

    hiddenSelectionsTextures[]={
        "\tmtm\pack\cup_uniforms\data\tmtm_m88_ttsko_dark_co.paa"
    };
};

class tmtm_m88_butand_rolled: tmtm_m88_rolled_base
{
    scope=1;
    scopeArsenal=2;
    scopeCurator=0;
    
    author="erem2k";

    displayName="Uniform M-88, TTsKO Dark (Rolled Up)";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    uniformClass="tmtm_u_m88_butand_rolled";

    hiddenSelectionsTextures[]={
        "\tmtm\pack\cup_uniforms\data\tmtm_m88_ttsko_dark_co.paa"
    };
};

class tmtm_m88_butand_gloves: tmtm_m88_gloves_base
{
    scope=1;
    scopeArsenal=2;
    scopeCurator=0;
    
    author="erem2k";

    displayName="Uniform M-88, TTsKO Dark (Gloves)";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    uniformClass="tmtm_u_m88_butand_gloves";

    hiddenSelectionsTextures[]={
        "\tmtm\pack\cup_uniforms\data\tmtm_m88_ttsko_dark_co.paa",
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\data\oakley_co.paa" // uses "wool" part of the texture
    };
};

class tmtm_m88_butand_rolled_gloves: tmtm_m88_rolled_gloves_base
{
    scope=1;
    scopeArsenal=2;
    scopeCurator=0;
    
    author="erem2k";

    displayName="Uniform M-88, TTsKO Dark (Rolled Up, Gloves)";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    uniformClass="tmtm_u_m88_butand_rolled_gloves";

    hiddenSelectionsTextures[]={
        "\tmtm\pack\cup_uniforms\data\tmtm_m88_ttsko_dark_co.paa"
    };
};

class tmtm_m88_butanl: tmtm_m88_base
{
    scope=1;
    scopeArsenal=2;
    scopeCurator=0;
    
    author="erem2k";

    displayName="Uniform M-88, TTsKO Light";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    uniformClass="tmtm_u_m88_butanl";

    hiddenSelectionsTextures[]={
        "\tmtm\pack\cup_uniforms\data\tmtm_m88_ttsko_light_co.paa"
    };
};

class tmtm_m88_butanl_rolled: tmtm_m88_rolled_base
{
    scope=1;
    scopeArsenal=2;
    scopeCurator=0;
    
    author="erem2k";

    displayName="Uniform M-88, TTsKO Light (Rolled Up)";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    uniformClass="tmtm_u_m88_butanl_rolled";

    hiddenSelectionsTextures[]={
        "\tmtm\pack\cup_uniforms\data\tmtm_m88_ttsko_light_co.paa"
    };
};

class tmtm_m88_butanl_gloves: tmtm_m88_gloves_base
{
    scope=1;
    scopeArsenal=2;
    scopeCurator=0;
    
    author="erem2k";

    displayName="Uniform M-88, TTsKO Light (Gloves)";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    uniformClass="tmtm_u_m88_butanl_gloves";

    hiddenSelectionsTextures[]={
        "\tmtm\pack\cup_uniforms\data\tmtm_m88_ttsko_light_co.paa",
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\data\oakley_co.paa" // uses "wool" part of the texture
    };
};

class tmtm_m88_butanl_rolled_gloves: tmtm_m88_rolled_gloves_base
{
    scope=1;
    scopeArsenal=2;
    scopeCurator=0;
    
    author="erem2k";

    displayName="Uniform M-88, TTsKO Light (Rolled Up, Gloves)";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    uniformClass="tmtm_u_m88_butanl_rolled_gloves";

    hiddenSelectionsTextures[]={
        "\tmtm\pack\cup_uniforms\data\tmtm_m88_ttsko_light_co.paa"
    };
};

//////////////////////////////////////////////////////////////////////////////////////////////////////////
// 