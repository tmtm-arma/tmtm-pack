class tmtm_b_belt_ammo_base: Bag_Base
{
    scope=1;
    scopeArsenal=0;

    model="\tmtm\pack\aegis_vests\tmtm_v_belt_ammo.p3d";
    hiddenSelections[]= {"camo"};

    maximumLoad=60;
    mass=5;
};

class tmtm_b_belt_ammo: tmtm_b_belt_ammo_base
{
    author="POLPOX";
    scope=2;
    scopeArsenal=2;

    displayName = "Cartridge Belt, MG";
    picture="\tmtm\pack\aegis_vests\data\ui\icon_tmtm_v_belt_ammo_ca.paa";

    hiddenSelectionsTextures[]= {
        "a3\weapons_f_exp\machineguns\lmg_03\data\lmg_03_f_body_co.paa"
    };
};

class tmtm_b_belt_ammo_long: tmtm_b_belt_ammo_base
{
    author="POLPOX";
    scope=2;
    scopeArsenal=2;

    displayName = "Cartridge Belt, MG (Long)";
    picture="\tmtm\pack\aegis_vests\data\ui\icon_tmtm_v_belt_ammo_long_ca.paa";

    hiddenSelectionsTextures[]= {
        "a3\weapons_f_exp\machineguns\lmg_03\data\lmg_03_f_body_co.paa"
    };

    maximumLoad=120;
    mass=10;
};
