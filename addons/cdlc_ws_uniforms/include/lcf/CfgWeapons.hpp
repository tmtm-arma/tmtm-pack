class tmtm_u_lightFatigues_combat_base: Uniform_Base
{
    scope=1;
    scopeArsenal=0;

    model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
    hiddenSelections[]= { "camo" };

    hiddenSelectionsTextures[] = {
        "\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_opfor_co.paa"
    };

    class ItemInfo: UniformItem
    {
        uniformModel="-";
        containerClass="Supply40";
        mass=60;
    };
};

class tmtm_u_lightFatigues_combat_csatt: tmtm_u_lightFatigues_combat_base
{
    scope=2;
    scopeArsenal=2;

    author="erem2k";

    displayName="Light Combat Fatigues (Green Hex)";
    descriptionShort="Light Fatigues, Combat, Green Hex";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    class ItemInfo: ItemInfo
    {
        uniformClass="tmtm_lightFatigues_combat_csatt";
    };
};

class tmtm_u_lightFatigues_combat_csatu: tmtm_u_lightFatigues_combat_base
{
    scope=2;
    scopeArsenal=2;

    author="Ravenholme";

    displayName="Light Combat Fatigues (Urban)";
    descriptionShort="Light Fatigues, Combat, Urban";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    class ItemInfo: ItemInfo
    {
        uniformClass="tmtm_lightFatigues_combat_csatu";
    };
};
