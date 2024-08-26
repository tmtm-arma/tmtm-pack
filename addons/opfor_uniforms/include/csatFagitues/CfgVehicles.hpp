class tmtm_csatFatigues_base: O_Soldier_F
{
    author = "Trenchgun";
    scope = 0;
    scopeArsenal = 0;
    scopeCurator = 0;
    displayName = "CSAT Fatigues (Base)";
    //model = "\A3\characters_F\OPFOR\o_soldier_01.p3d";
    hiddenSelections[] = {
        "Camo1",
        "Camo2",
        "insignia"
    };
    hiddenSelectionsMaterials[]=
    {
        "\tmtm\pack\opfor_uniforms\Data\tmtm_csatFatigues.rvmat"
    };
};


class tmtm_csatFatigues_atacsAu: tmtm_csatFatigues_base
{
    author = "Trenchgun";
    scope = 1;
    scopeArsenal = 2;
    scopeCurator = 0;
    modelSides[]={1,2,3,4};
    //displayName = "CSAT Fatigues (ATACS AU)";
    uniformClass = "tmtm_u_csatFatigues_atacsAu";
    hiddenSelectionsTextures[] = {
        "\tmtm\pack\opfor_uniforms\Data\tmtm_csatFatigues_atacsAu_co.paa",
        "\A3\Characters_F\OPFOR\Data\tech_CO.paa"
    };
};

class tmtm_csatFatigues_atacsFg: tmtm_csatFatigues_base
{
    scope = 1;
    scopeArsenal = 2;
    scopeCurator = 0;
    displayName = "CSAT Fatigues (ATACS FG)";
    uniformClass = "tmtm_u_csatFatigues_atacsFg";
    hiddenSelectionsTextures[] = {
        "\tmtm\pack\opfor_uniforms\Data\tmtm_csatFatigues_atacsFg_co.paa",
        "\A3\Characters_F\OPFOR\Data\tech_CO.paa"
    };
};

class tmtm_csatFatigues_black: tmtm_csatFatigues_base
{
    scope = 1;
    scopeArsenal = 2;
    scopeCurator = 0;
    displayName = "CSAT Fatigues (Black)";
    uniformClass = "tmtm_u_csatFatigues_black";
    hiddenSelectionsTextures[] = {
        "\tmtm\pack\opfor_uniforms\Data\tmtm_csatFatigues_black_co.paa",
        "\A3\Characters_F\OPFOR\Data\tech_CO.paa"
    };
};

class tmtm_csatFatigues_blue: tmtm_csatFatigues_base
{
    scope = 1;
    scopeArsenal = 2;
    scopeCurator = 0;
    displayName = "CSAT Fatigues (Blue)";
    uniformClass = "tmtm_u_csatFatigues_blue";
    hiddenSelectionsTextures[] = {
        "\tmtm\pack\opfor_uniforms\Data\tmtm_csatFatigues_blue_co.paa",
        "\A3\Characters_F\OPFOR\Data\tech_CO.paa"
    };
};

class tmtm_csatFatigues_emr: tmtm_csatFatigues_base
{
    scope = 1;
    scopeArsenal = 2;
    scopeCurator = 0;
    displayName = "CSAT Fatigues (EMR)";
    uniformClass = "tmtm_u_csatFatigues_emr";
    hiddenSelectionsTextures[] = {
        "\tmtm\pack\opfor_uniforms\Data\tmtm_csatFatigues_emr_co.paa",
        "\A3\Characters_F\OPFOR\Data\tech_CO.paa"
    };
};

class tmtm_csatFatigues_grey: tmtm_csatFatigues_base
{
    scope = 1;
    scopeArsenal = 2;
    scopeCurator = 0;
    displayName = "CSAT Fatigues (Grey)";
    uniformClass = "tmtm_u_csatFatigues_grey";
    hiddenSelectionsTextures[] = {
        "\tmtm\pack\opfor_uniforms\Data\tmtm_csatFatigues_grey_co.paa",
        "\A3\Characters_F\OPFOR\Data\tech_CO.paa"
    };
};

class tmtm_csatFatigues_greyBlack: tmtm_csatFatigues_base
{
    scope = 1;
    scopeArsenal = 2;
    scopeCurator = 0;
    displayName = "CSAT Fatigues (Grey/Black)";
    uniformClass = "tmtm_u_csatFatigues_greyBlack";
    hiddenSelectionsTextures[] = {
        "\tmtm\pack\opfor_uniforms\Data\tmtm_csatFatigues_greyBlack_co.paa",
        "\A3\Characters_F\OPFOR\Data\tech_CO.paa"
    };
};

class tmtm_csatFatigues_ldf: tmtm_csatFatigues_base
{
    scope = 1;
    scopeArsenal = 2;
    scopeCurator = 0;
    displayName = "CSAT Fatigues (LDF)";
    uniformClass = "tmtm_u_csatFatigues_ldf";
    hiddenSelectionsTextures[] = {
        "\tmtm\pack\opfor_uniforms\Data\tmtm_csatFatigues_ldf_co.paa",
        "\A3\Characters_F\OPFOR\Data\tech_CO.paa"
    };
};

class tmtm_csatFatigues_mtp: tmtm_csatFatigues_base
{
    scope = 1;
    scopeArsenal = 2;
    scopeCurator = 0;
    displayName = "CSAT Fatigues (MTP)";
    uniformClass = "tmtm_u_csatFatigues_mtp";
    hiddenSelectionsTextures[] = {
        "\tmtm\pack\opfor_uniforms\Data\tmtm_csatFatigues_mtp_co.paa",
        "\A3\Characters_F\OPFOR\Data\tech_CO.paa"
    };
};

class tmtm_csatFatigues_multicam: tmtm_csatFatigues_base
{
    scope = 1;
    scopeArsenal = 2;
    scopeCurator = 0;
    displayName = "CSAT Fatigues (Multicam)";
    uniformClass = "tmtm_u_csatFatigues_multicam";
    hiddenSelectionsTextures[] = {
        "\tmtm\pack\opfor_uniforms\Data\tmtm_csatFatigues_multicam_co.paa",
        "\A3\Characters_F\OPFOR\Data\tech_CO.paa"
    };
};

class tmtm_csatFatigues_natoWdl: tmtm_csatFatigues_base
{
    scope = 1;
    scopeArsenal = 2;
    scopeCurator = 0;
    displayName = "CSAT Fatigues (NATO Woodland)";
    uniformClass = "tmtm_u_csatFatigues_natoWdl";
    hiddenSelectionsTextures[] = {
        "\tmtm\pack\opfor_uniforms\Data\tmtm_csatFatigues_natoWdl_co.paa",
        "\A3\Characters_F\OPFOR\Data\tech_CO.paa"
    };
};

class tmtm_csatFatigues_surpat: tmtm_csatFatigues_base
{
    scope = 1;
    scopeArsenal = 2;
    scopeCurator = 0;
    displayName = "CSAT Fatigues (SURPAT)";
    uniformClass = "tmtm_u_csatFatigues_surpat";
    hiddenSelectionsTextures[] = {
        "\tmtm\pack\opfor_uniforms\Data\tmtm_csatFatigues_surpat_co.paa",
        "\A3\Characters_F\OPFOR\Data\tech_CO.paa"
    };
};

class tmtm_csatFatigues_yellow: tmtm_csatFatigues_base
{
    scope = 1;
    scopeArsenal = 2;
    scopeCurator = 0;
    displayName = "CSAT Fatigues (Yellow)";
    uniformClass = "tmtm_u_csatFatigues_yellow";
    hiddenSelectionsTextures[] = {
        "\tmtm\pack\opfor_uniforms\Data\tmtm_csatFatigues_yellow_co.paa",
        "\A3\Characters_F\OPFOR\Data\tech_CO.paa"
    };
};
