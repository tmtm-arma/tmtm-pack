class tmtm_v_belt_ammo_base: Vest_Camo_Base
{
    scope=1;
    scopeArsenal=0;

    model="\tmtm\pack\aegis_vests\tmtm_v_belt_ammo.p3d";
    hiddenSelections[]= { "camo" };

    class ItemInfo: ItemInfo
    {
        uniformModel="\tmtm\pack\aegis_vests\tmtm_v_belt_ammo.p3d";
        hiddenSelections[]= { "camo" };

        containerClass="Supply60";
        mass=5;
    };
};

class tmtm_v_belt_ammo: tmtm_v_belt_ammo_base
{
    author="POLPOX";
    scope=2;
    scopeArsenal=2;

    displayName = "Cartridge Belt, MG";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    hiddenSelectionsTextures[]= {
        "a3\weapons_f_exp\machineguns\lmg_03\data\lmg_03_f_body_co.paa"
    };

    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[]= {
            "a3\weapons_f_exp\machineguns\lmg_03\data\lmg_03_f_body_co.paa"
        };
    };
};

class tmtm_v_belt_ammo_long: tmtm_v_belt_ammo_base
{
    author="POLPOX";
    scope=2;
    scopeArsenal=2;

    displayName = "Cartridge Belt, MG (Long)";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    hiddenSelectionsTextures[]= {
        "a3\weapons_f_exp\machineguns\lmg_03\data\lmg_03_f_body_co.paa"
    };

    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[]= {
            "a3\weapons_f_exp\machineguns\lmg_03\data\lmg_03_f_body_co.paa"
        };

        containerClass="Supply120";
        mass=10;
    };
};
