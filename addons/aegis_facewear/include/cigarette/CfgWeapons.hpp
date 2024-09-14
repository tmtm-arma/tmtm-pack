class tmtm_nvg_cigarette: NVGoggles
{
    author="AveryTheKitty";
    scope=2;
    scopeArsenal=2;

    displayName="Cigarette";
    picture="\tmtm\pack\aegis_facewear\data\ui\icon_tmtm_g_cigarette_ca.paa";

    model="\tmtm\pack\aegis_facewear\tmtm_g_cigarette.p3d";
    modelOptics="\A3\Weapons_F\Reticle\optics_empty.p3d";

    visionMode[]= { "Normal" };

    class ItemInfo: ItemInfo
    {
        uniformModel="\tmtm\pack\aegis_facewear\tmtm_g_cigarette.p3d";
        modelOff="\tmtm\pack\aegis_facewear\tmtm_g_cigarette.p3d";

        mass=2;
    };
};
