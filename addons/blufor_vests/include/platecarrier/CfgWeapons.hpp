class tmtm_v_platecarrier1_cbr: Vest_Camo_Base
{
    author="Trenchgun";
    scope=1;
    scopeArsenal=2;
    scopeCurator=0;
    displayName="Carrier Lite (Coyote)";
    picture="\A3\characters_f\Data\UI\icon_V_plate_carrier_1_CA.paa";
    model="\A3\Characters_F\BLUFOR\equip_b_vest02";
    hiddenSelections[]=
    {
        "camo"
    };
    hiddenSelectionsTextures[]=
    {
        "\A3\Characters_F\BLUFOR\Data\vests_cbr_co.paa"
    };
    class ItemInfo: ItemInfo
    {
        uniformModel="\A3\Characters_F\BLUFOR\equip_b_vest02";
        containerClass="Supply140";
        mass=80;
        hiddenSelections[]=
        {
            "camo"
        };
        class HitpointsProtectionInfo
        {
            class Chest
            {
                HitpointName="HitChest";
                armor=16;
                PassThrough=0.30000001;
            };
            class Diaphragm
            {
                HitpointName="HitDiaphragm";
                armor=16;
                PassThrough=0.30000001;
            };
            class Abdomen
            {
                hitpointName="HitAbdomen";
                armor=16;
                passThrough=0.30000001;
            };
            class Body
            {
                hitpointName="HitBody";
                passThrough=0.30000001;
            };
        };
    };
};

////////////////////////////////////////////////////////
// Blufor platecarriers
class tmtm_v_platecarrier2_cbr: tmtm_v_platecarrier1_cbr
{
    author="Trenchgun";
    scope=1;
    scopeArsenal=2;
    scopeCurator=0;
    displayName="Carrier Rig (Coyote)";
    picture="\A3\characters_f\Data\UI\icon_V_plate_carrier_2_CA.paa";
    model="\A3\Characters_F\BLUFOR\equip_b_vest01.p3d";
    hiddenSelections[]=
    {
        "camo"
    };
    hiddenSelectionsTextures[]=
    {
        "\A3\Characters_F\BLUFOR\Data\vests_cbr_co.paa"
    };
    class ItemInfo: ItemInfo
    {
        uniformModel="\A3\Characters_F\BLUFOR\equip_b_vest01";
        containerClass="Supply140";
        mass=100;
        hiddenSelections[]=
        {
            "camo"
        };
        class HitpointsProtectionInfo
        {
            class Chest
            {
                HitpointName="HitChest";
                armor=20;
                PassThrough=0.2;
            };
            class Diaphragm
            {
                HitpointName="HitDiaphragm";
                armor=20;
                PassThrough=0.2;
            };
            class Abdomen
            {
                hitpointName="HitAbdomen";
                armor=20;
                passThrough=0.2;
            };
            class Body
            {
                hitpointName="HitBody";
                passThrough=0.2;
            };
        };
    };
};
class tmtm_v_platecarrier1_khk: tmtm_v_platecarrier1_cbr
{
    author="Trenchgun";
    scope=1;
    scopeArsenal=2;
    scopeCurator=0;
    displayName="Carrier Lite (Khaki)";
    picture="\A3\characters_f\Data\UI\icon_V_plate_carrier_2_CA.paa";
    model="\A3\Characters_F\BLUFOR\equip_b_vest01.p3d";
    hiddenSelections[]=
    {
        "camo"
    };
    hiddenSelectionsTextures[]=
    {
        "\A3\Characters_F\BLUFOR\Data\vests_khk_co.paa"
    };
};
class tmtm_v_platecarrier2_khk: tmtm_v_platecarrier2_cbr
{
    author="Trenchgun";
    scope=1;
    scopeArsenal=2;
    scopeCurator=0;
    displayName="Carrier Rig (Khaki)";
    picture="\A3\characters_f\Data\UI\icon_V_plate_carrier_2_CA.paa";
    model="\A3\Characters_F\BLUFOR\equip_b_vest01.p3d";
    hiddenSelections[]=
    {
        "camo"
    };
    hiddenSelectionsTextures[]=
    {
        "\A3\Characters_F\BLUFOR\Data\vests_khk_co.paa"
    };
};
