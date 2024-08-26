class tmtm_u_lightFatigues_combat_scarf_base: Uniform_Base
{
    scope=1;
    scopeArsenal=0;
    scopeCurator=0;

    model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
    hiddenSelections[]= { "camo" };

    class ItemInfo: UniformItem
    {
        uniformModel="-";
        containerClass="Supply40";
        mass=40;
    };
};

// Content
class tmtm_u_lightFatigues_combat_scarf_csata: tmtm_u_lightFatigues_combat_scarf_base
{
    scope=2;
    scopeArsenal=2;

    author="erem2k";

    displayName="Light Combat Fatigues, Scarf (Hex)";
    descriptionShort="Light Fatigues, Combat, Scarf, Hex";
    picture="\A3\characters_F\data\ui\icon_U_OI_Officer_ocamo_ca.paa";

    hiddenSelectionsTextures[]= {
        "\a3\characters_f\opfor\Data\officer_noinsignia_hex_CO.paa"
    };

    class ItemInfo: ItemInfo
    {
        uniformClass="tmtm_lightFatigues_combat_scarf_csata";
    };
};

class tmtm_u_lightFatigues_combat_scarf_csatt: tmtm_u_lightFatigues_combat_scarf_base
{
    scope=2;
    scopeArsenal=2;

    author="erem2k";

    displayName="Light Combat Fatigues, Scarf (Green Hex)";
    descriptionShort="Light Fatigues, Combat, Scarf, Green Hex";
    picture="\A3\characters_f_exp\data\ui\icon_U_OT_officer_F_ca.paa";

    hiddenSelectionsTextures[]= {
        "\tmtm\pack\opfor_uniforms\data\tmtm_lightFatigues_csatt_co.paa"
    };

    class ItemInfo: ItemInfo
    {
        uniformClass="tmtm_lightFatigues_combat_scarf_csatt";
    };
};

class tmtm_u_lightFatigues_combat_scarf_csatu: tmtm_u_lightFatigues_combat_scarf_base
{
    scope=2;
    scopeArsenal=2;

    author="Ravenholme";

    displayName="Light Combat Fatigues, Scarf (Urban)";
    descriptionShort="Light Fatigues, Combat, Scarf, Urban";
    picture="\tmtm\pack\opfor_uniforms\data\ui\icon_tmtm_u_lightFatigues_csatu_ca.paa";

    hiddenSelectionsTextures[]= {
        "\tmtm\pack\opfor_uniforms\data\tmtm_lightFatigues_csatu_co.paa"
    };

    class ItemInfo: ItemInfo
    {
        uniformClass="tmtm_lightFatigues_combat_scarf_csatu";
    };
};
