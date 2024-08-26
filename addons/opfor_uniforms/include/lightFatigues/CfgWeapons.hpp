class tmtm_u_lightFatigues_base: Uniform_Base
{
    scope=1;
    scopeArsenal=0;

    model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
    hiddenSelections[]= { "camo" };
    hiddenSelectionsTextures[]= {
        "\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_opfor_co.paa"
    };

    class ItemInfo: UniformItem
    {
        uniformModel="-";
        containerClass="Supply40";
        mass=60;
    };
};

// Content
class tmtm_u_lightFatigues_csatt: tmtm_u_lightFatigues_base
{
    scope=2;
    scopeArsenal=2;

    author="erem2k";

    displayName="Light Fatigues (Green Hex)";
    descriptionShort="Light Fatigues, Green Hex";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    class ItemInfo: ItemInfo
    {
        uniformClass="tmtm_lightFatigues_csatt";
    };
};

class tmtm_u_lightFatigues_csatu: tmtm_u_lightFatigues_base
{
    scope=2;
    scopeArsenal=2;

    author="Ravenholme";

    displayName="Light Fatigues (Urban)";
    descriptionShort="Light Fatigues, Urban";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    class ItemInfo: ItemInfo
    {
        uniformClass="tmtm_lightFatigues_csatu";
    };
};
