class tmtm_v_pasgt_base: Vest_Camo_Base
{
    scope=0;
    scopeArsenal=0;

    model="\simc_uaf_81\suitpack_pasgt.p3d";

    hiddenSelections[]= {
        "camo",
        "ifak"
    };

    class ItemInfo: VestItem
    {
        uniformModel="\simc_uaf_81\vest_pasgt.p3d";
        hiddenSelections[]= {
            "camo",
            "ifak"
        };

        hiddenSelectionsTextures[]= {
            "",
            ""
        };

        containerClass="Supply40";
        mass=70;

        class HitpointsProtectionInfo
        {
            class Chest
            {
                hitpointName="HitChest";
                armor=12;
                passThrough=0.5;
            };
            class Diaphragm
            {
                hitpointName="HitDiaphragm";
                armor=12;
                passThrough=0.5;
            };
            class Abdomen
            {
                hitpointName="HitAbdomen";
                armor=12;
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

class tmtm_v_pasgt_alt_base: tmtm_v_pasgt_base
{
    scope=0;
    scopeArsenal=0;

    class ItemInfo: ItemInfo
    {
        uniformModel="\simc_uaf_81\vest_pasgt_sluit.p3d";
        hiddenSelections[]= {
            "camo",
            "ifak"
        };
        containerClass="Supply40";
        mass=85;
    };
};
class tmtm_v_pasgt_ep_base: tmtm_v_pasgt_base
{
    scope=0;
    scopeArsenal=0;

    class ItemInfo: ItemInfo
    {
        containerClass="Supply150";
        mass=85;
    };
};
