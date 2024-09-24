class tmtm_v_rba_base: Vest_Camo_Base
{
    scope=0;
    scopeArsenal=0;

    model="\simc_uaf_93\suitpack_rba.p3d";

    hiddenSelections[]= { "camo" };

    class ItemInfo: VestItem
    {
        uniformModel="\simc_uaf_93\vest_rba_mk1.p3d";

        hiddenSelections[]= { "camo" };

        containerClass="Supply40";
        mass=75;

        class HitpointsProtectionInfo
        {
            class Chest
            {
                hitpointName="HitChest";
                armor=15;
                passThrough=0.5;
            };
            class Diaphragm
            {
                hitpointName="HitDiaphragm";
                armor=15;
                passThrough=0.5;
            };
            class Abdomen
            {
                hitpointName="HitAbdomen";
                armor=15;
                passThrough=0.5;
            };
            class Body
            {
                hitpointName="HitBody";
                passThrough=0.5;
            };
        };
    };
};

class tmtm_v_rba_alice_sidearm_base: tmtm_v_rba_base
{
    scope=1;
    scopeArsenal=0;

    class ItemInfo: ItemInfo
    {
        uniformModel="\simc_uaf_93\vest_rba_mk1_belt_45_2.p3d";

        hiddenSelections[]= { "camo", "camo3" };

        containerClass="Supply150";
        mass=85;
    };
};

class tmtm_v_rba_lbv_base: tmtm_v_rba_base
{
    scope=1;
    scopeArsenal=0;

    class ItemInfo: ItemInfo
    {
        uniformModel="\simc_uaf_93\vest_rba_mk1_lbv.p3d";

        hiddenSelections[]= { "camo" };

        containerClass="Supply100";
        mass=85;
    };
};

class tmtm_v_rba_backplate_base: tmtm_v_rba_base
{
    scope=0;
    scopeArsenal=0;

    class ItemInfo: VestItem
    {
        uniformModel="\simc_uaf_93\vest_rba_mk2.p3d";

        hiddenSelections[]= { "camo" };

        containerClass="Supply40";
        mass=75;

        class HitpointsProtectionInfo
        {
            class Chest
            {
                hitpointName="HitChest";
                armor=18;
                passThrough=0.5;
            };
            class Diaphragm
            {
                hitpointName="HitDiaphragm";
                armor=15;
                passThrough=0.5;
            };
            class Abdomen
            {
                hitpointName="HitAbdomen";
                armor=15;
                passThrough=0.5;
            };
            class Body
            {
                hitpointName="HitBody";
                armor=10;
                passThrough=0.5;
            };
        };
    };
};
