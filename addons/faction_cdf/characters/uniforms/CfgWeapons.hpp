class tmtm_u_oversuit_base: Uniform_Base
{
    class ItemInfo;
};

class tmtm_u_oversuit_cdf_aircrew: tmtm_u_oversuit_base
{
    scope=2;
    scopeArsenal=2;

    author="erem2k";

    displayName="CDF Crew Oversuit, Aircraft";
    descriptionShort="Oversuit, Crew, Flight";
    picture="\tmtm\pack\faction_cdf\characters\uniforms\data\ui\icon_tmtm_u_oversuit_cdf_aircrew_ca.paa";

    class ItemInfo: ItemInfo
    {
        uniformClass="tmtm_oversuit_cdf_aircrew";
    };
};

class tmtm_u_oversuit_cdf_tankcrew: tmtm_u_oversuit_base
{
    scope=2;
    scopeArsenal=2;

    author="erem2k";

    displayName="CDF Crew Oversuit, Armor";
    descriptionShort="Oversuit, Crew, Tank";
    picture="\tmtm\pack\faction_cdf\characters\uniforms\data\ui\icon_tmtm_u_oversuit_cdf_tankcrew_ca.paa";

    class ItemInfo: ItemInfo
    {
        uniformClass="tmtm_oversuit_cdf_tankcrew";
    };
};
