class tmtm_oversuit_base;

class tmtm_oversuit_cdf_base: tmtm_oversuit_base
{
    scope=1;
    scopeCurator=0;

    hiddenSelectionsMaterials[] = {
        "\tmtm\pack\faction_cdf\characters\uniforms\data\tmtm_oversuit_cdf.rvmat"
    };
};

class tmtm_oversuit_cdf_aircrew: tmtm_oversuit_cdf_base
{
    scope=1;
    scopeCurator=0;

    author="erem2k";

    displayName="CDF Crew Oversuit, Aircraft";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    uniformClass="tmtm_u_oversuit_cdf_aircrew";

    hiddenSelectionsTextures[]={
        "\tmtm\pack\faction_cdf\characters\uniforms\data\tmtm_oversuit_cdf_airman_co.paa"
    };
};

class tmtm_oversuit_cdf_tankcrew: tmtm_oversuit_cdf_base
{
    scope=1;
    scopeCurator=0;

    author="erem2k";

    displayName="CDF Crew Oversuit, Armor";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    uniformClass="tmtm_u_oversuit_cdf_tankcrew";

    hiddenSelectionsTextures[]={
        "\tmtm\pack\faction_cdf\characters\uniforms\data\tmtm_oversuit_cdf_crew_co.paa"
    };
};
