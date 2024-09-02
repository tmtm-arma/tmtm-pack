class tmtm_u_m88_early_base: Uniform_Base
{
    scope=1;
    scopeArsenal=0;

    model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
    hiddenSelections[]= { "camo" };

    class ItemInfo: UniformItem
    {
        uniformModel="-";
        containerClass="Supply40";
        mass=60;
    };
};


class tmtm_u_m88_early_khaki: tmtm_u_m88_early_base
{
    scope=2;
    scopeArsenal=2;

    author="OokamiJamie, erem2k";

    displayName="Uniform M-88 Early, Khaki";
    descriptionShort="Uniform, Model 88 Early, Khaki";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    class ItemInfo: ItemInfo
    {
        uniformClass="tmtm_m88_early_khaki";
    };
};

class tmtm_u_m88_early_rolled_khaki: tmtm_u_m88_early_base
{
    scope=2;
    scopeArsenal=2;

    author="OokamiJamie, erem2k";

    displayName="Uniform M-88 Early, Khaki (Rolled)";
    descriptionShort="Uniform, Model 88 Early, Khaki";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    class ItemInfo: ItemInfo
    {
        uniformClass="tmtm_m88_early_rolled_khaki";
    };
};

class tmtm_u_m88_early_rolled_gloves_khaki: tmtm_u_m88_early_base
{
    scope=2;
    scopeArsenal=2;

    author="OokamiJamie, erem2k";

    displayName="Uniform M-88 Early, Khaki (Rolled, Gloves)";
    descriptionShort="Uniform, Model 88 Early, Khaki";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    class ItemInfo: ItemInfo
    {
        uniformClass="tmtm_m88_early_rolled_gloves_khaki";
    };
};

class tmtm_u_m88_early_gloves_khaki: tmtm_u_m88_early_base
{
    scope=2;
    scopeArsenal=2;

    author="OokamiJamie, erem2k";

    displayName="Uniform M-88 Early, Khaki (Gloves)";
    descriptionShort="Uniform, Model 88 Early, Khaki";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    class ItemInfo: ItemInfo
    {
        uniformClass="tmtm_m88_early_gloves_khaki";
    };
};
