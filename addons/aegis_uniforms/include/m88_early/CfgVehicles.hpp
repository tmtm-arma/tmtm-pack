class tmtm_m88_early_base: O_Soldier_base_F
{
    scope=1;
    scopeCurator=0;

    model="\tmtm\pack\aegis_uniforms\tmtm_u_m88_early.p3d";
    hiddenSelections[]= { "camo_jacket", "camo_pants", "insignia" };

    modelSides[]={0, 3};
    camouflage=1.6;

    class HitPoints: HitPoints
    {
        HITPOINTS_UNIFORM_NOARMOR
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

    model="\tmtm\pack\aegis_uniforms\tmtm_u_m88_early_gloves_wool.p3d";
    hiddenSelections[]= { "camo_jacket", "camo_pants", "camo_gloves", "insignia" };
};

class tmtm_m88_early_rolled_gloves_base: tmtm_m88_early_base
{
    scope=1;
    scopeCurator=0;

    model="\tmtm\pack\aegis_uniforms\tmtm_u_m88_early_rolled_gloves_wool.p3d";
    hiddenSelections[]= { "camo_jacket", "camo_pants", "camo_gloves", "insignia" };
};

class tmtm_m88_early_gloves_tactical_base: tmtm_m88_early_base
{
    scope=1;
    scopeCurator=0;

    model="\tmtm\pack\aegis_uniforms\tmtm_u_m88_early_gloves_tactical.p3d";
    hiddenSelections[]= { "camo_jacket", "camo_pants", "camo_gloves", "insignia" };
};

class tmtm_m88_early_rolled_gloves_tactical_base: tmtm_m88_early_base
{
    scope=1;
    scopeCurator=0;

    model="\tmtm\pack\aegis_uniforms\tmtm_u_m88_early_rolled_gloves_tactical.p3d";
    hiddenSelections[]= { "camo_jacket", "camo_pants", "camo_gloves", "insignia" };
};

class tmtm_m88_early_gloves_leather_base: tmtm_m88_early_base
{
    scope=1;
    scopeCurator=0;

    model="\tmtm\pack\aegis_uniforms\tmtm_u_m88_early_gloves_leather.p3d";
    hiddenSelections[]= { "camo_jacket", "camo_pants", "camo_gloves", "insignia" };
};

class tmtm_m88_early_rolled_gloves_leather_base: tmtm_m88_early_base
{
    scope=1;
    scopeCurator=0;

    model="\tmtm\pack\aegis_uniforms\tmtm_u_m88_early_rolled_gloves_leather.p3d";
    hiddenSelections[]= { "camo_jacket", "camo_pants", "camo_gloves", "insignia" };
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
        "\tmtm\pack\aegis_uniforms\data\tmtm_m88_early_khaki_co.paa",
        "\tmtm\pack\aegis_uniforms\data\tmtm_m88_early_khaki_co.paa"
    };
};

class tmtm_m88_early_khaki_rolled: tmtm_m88_early_rolled_base
{
    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    author="OokamiJamie, erem2k";

    displayName="Uniform M-88 Early, Khaki (Rolled)";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    uniformClass="tmtm_u_m88_early_khaki_rolled";

    hiddenSelectionsTextures[]={
        "\tmtm\pack\aegis_uniforms\data\tmtm_m88_early_khaki_co.paa",
        "\tmtm\pack\aegis_uniforms\data\tmtm_m88_early_khaki_co.paa"
    };
};

class tmtm_m88_early_khaki_gloves: tmtm_m88_early_gloves_base
{
    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    author="OokamiJamie, erem2k";

    displayName="Uniform M-88 Early, Khaki (Gloves)";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    uniformClass="tmtm_u_m88_early_khaki_gloves";

    hiddenSelectionsTextures[]={
        "\tmtm\pack\aegis_uniforms\data\tmtm_m88_early_khaki_co.paa",
        "\tmtm\pack\aegis_uniforms\data\tmtm_m88_early_khaki_co.paa",
        "\tmtm\pack\aegis_uniforms\data\tmtm_gloves_wool_brown_co.paa"
    };
};

class tmtm_m88_early_khaki_rolled_gloves: tmtm_m88_early_rolled_gloves_base
{
    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    author="OokamiJamie, erem2k";

    displayName="Uniform M-88 Early, Khaki (Rolled, Gloves)";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    uniformClass="tmtm_u_m88_early_khaki_rolled_gloves";

    hiddenSelectionsTextures[]={
        "\tmtm\pack\aegis_uniforms\data\tmtm_m88_early_khaki_co.paa",
        "\tmtm\pack\aegis_uniforms\data\tmtm_m88_early_khaki_co.paa",
        "\tmtm\pack\aegis_uniforms\data\tmtm_gloves_wool_brown_co.paa"
    };
};

class tmtm_m88_early_ttskoe: tmtm_m88_early_base
{
    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    author="OokamiJamie, erem2k";

    displayName="Uniform M-88 Early, TTsKO Early";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    uniformClass="tmtm_u_m88_early_ttskoe";

    hiddenSelectionsTextures[]={
        "\tmtm\pack\aegis_uniforms\data\tmtm_m88_early_ttsko_early_co.paa",
        "\tmtm\pack\aegis_uniforms\data\tmtm_m88_early_ttsko_early_co.paa"
    };
};

class tmtm_m88_early_ttskoe_rolled: tmtm_m88_early_rolled_base
{
    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    author="OokamiJamie, erem2k";

    displayName="Uniform M-88 Early, TTsKO Early (Rolled)";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    uniformClass="tmtm_u_m88_early_ttskoe_rolled";

    hiddenSelectionsTextures[]={
        "\tmtm\pack\aegis_uniforms\data\tmtm_m88_early_ttsko_early_co.paa",
        "\tmtm\pack\aegis_uniforms\data\tmtm_m88_early_ttsko_early_co.paa"
    };
};

class tmtm_m88_early_ttskoe_gloves: tmtm_m88_early_gloves_base
{
    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    author="OokamiJamie, erem2k";

    displayName="Uniform M-88 Early, TTsKO Early (Gloves)";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    uniformClass="tmtm_u_m88_early_ttskoe_gloves";

    hiddenSelectionsTextures[]={
        "\tmtm\pack\aegis_uniforms\data\tmtm_m88_early_ttsko_early_co.paa",
        "\tmtm\pack\aegis_uniforms\data\tmtm_m88_early_ttsko_early_co.paa",
        "\tmtm\pack\aegis_uniforms\data\tmtm_gloves_wool_brown_co.paa"
    };
};

class tmtm_m88_early_ttskoe_rolled_gloves: tmtm_m88_early_rolled_gloves_base
{
    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    author="OokamiJamie, erem2k";

    displayName="Uniform M-88 Early, TTsKO Early (Rolled, Gloves)";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    uniformClass="tmtm_u_m88_early_ttskoe_rolled_gloves";

    hiddenSelectionsTextures[]={
        "\tmtm\pack\aegis_uniforms\data\tmtm_m88_early_ttsko_early_co.paa",
        "\tmtm\pack\aegis_uniforms\data\tmtm_m88_early_ttsko_early_co.paa",
        "\tmtm\pack\aegis_uniforms\data\tmtm_gloves_wool_brown_co.paa"
    };
};

class tmtm_m88_early_ttskol: tmtm_m88_early_base
{
    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    author="OokamiJamie, erem2k";

    displayName="Uniform M-88 Early, TTsKO Late";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    uniformClass="tmtm_u_m88_early_ttskol";

    hiddenSelectionsTextures[]={
        "\tmtm\pack\aegis_uniforms\data\tmtm_m88_early_ttsko_late_co.paa",
        "\tmtm\pack\aegis_uniforms\data\tmtm_m88_early_ttsko_late_co.paa"
    };
};

class tmtm_m88_early_ttskol_rolled: tmtm_m88_early_rolled_base
{
    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    author="OokamiJamie, erem2k";

    displayName="Uniform M-88 Early, TTsKO Late (Rolled)";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    uniformClass="tmtm_u_m88_early_ttskol_rolled";

    hiddenSelectionsTextures[]={
        "\tmtm\pack\aegis_uniforms\data\tmtm_m88_early_ttsko_late_co.paa",
        "\tmtm\pack\aegis_uniforms\data\tmtm_m88_early_ttsko_late_co.paa"
    };
};

class tmtm_m88_early_ttskol_gloves: tmtm_m88_early_gloves_base
{
    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    author="OokamiJamie, erem2k";

    displayName="Uniform M-88 Early, TTsKO Late (Gloves)";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    uniformClass="tmtm_u_m88_early_ttskol_gloves";

    hiddenSelectionsTextures[]={
        "\tmtm\pack\aegis_uniforms\data\tmtm_m88_early_ttsko_late_co.paa",
        "\tmtm\pack\aegis_uniforms\data\tmtm_m88_early_ttsko_late_co.paa",
        "\tmtm\pack\aegis_uniforms\data\tmtm_gloves_wool_black_co.paa"
    };
};

class tmtm_m88_early_ttskol_rolled_gloves: tmtm_m88_early_rolled_gloves_base
{
    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    author="OokamiJamie, erem2k";

    displayName="Uniform M-88 Early, TTsKO Late (Rolled, Gloves)";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    uniformClass="tmtm_u_m88_early_ttskol_rolled_gloves";

    hiddenSelectionsTextures[]={
        "\tmtm\pack\aegis_uniforms\data\tmtm_m88_early_ttsko_late_co.paa",
        "\tmtm\pack\aegis_uniforms\data\tmtm_m88_early_ttsko_late_co.paa",
        "\tmtm\pack\aegis_uniforms\data\tmtm_gloves_wool_black_co.paa"
    };
};

class tmtm_m88_early_bg: tmtm_m88_early_base
{
    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    author="OokamiJamie, erem2k";

    displayName="Uniform M-88 Early, Border Guard";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    uniformClass="tmtm_u_m88_early_bg";

    hiddenSelectionsTextures[]={
        "\tmtm\pack\aegis_uniforms\data\tmtm_m88_early_bg_co.paa",
        "\tmtm\pack\aegis_uniforms\data\tmtm_m88_early_bg_co.paa"
    };
};

class tmtm_m88_early_bg_rolled: tmtm_m88_early_rolled_base
{
    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    author="OokamiJamie, erem2k";

    displayName="Uniform M-88 Early, Border Guard (Rolled)";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    uniformClass="tmtm_u_m88_early_bg_rolled";

    hiddenSelectionsTextures[]={
        "\tmtm\pack\aegis_uniforms\data\tmtm_m88_early_bg_co.paa",
        "\tmtm\pack\aegis_uniforms\data\tmtm_m88_early_bg_co.paa"
    };
};

class tmtm_m88_early_bg_gloves: tmtm_m88_early_gloves_base
{
    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    author="OokamiJamie, erem2k";

    displayName="Uniform M-88 Early, Border Guard (Gloves)";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    uniformClass="tmtm_u_m88_early_bg_gloves";

    hiddenSelectionsTextures[]={
        "\tmtm\pack\aegis_uniforms\data\tmtm_m88_early_bg_co.paa",
        "\tmtm\pack\aegis_uniforms\data\tmtm_m88_early_bg_co.paa",
        "\tmtm\pack\aegis_uniforms\data\tmtm_gloves_wool_brown_co.paa"
    };
};

class tmtm_m88_early_bg_rolled_gloves: tmtm_m88_early_rolled_gloves_base
{
    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    author="OokamiJamie, erem2k";

    displayName="Uniform M-88 Early, Border Guard (Rolled, Gloves)";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    uniformClass="tmtm_u_m88_early_bg_rolled_gloves";

    hiddenSelectionsTextures[]={
        "\tmtm\pack\aegis_uniforms\data\tmtm_m88_early_bg_co.paa",
        "\tmtm\pack\aegis_uniforms\data\tmtm_m88_early_bg_co.paa",
        "\tmtm\pack\aegis_uniforms\data\tmtm_gloves_wool_brown_co.paa"
    };
};
