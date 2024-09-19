class tmtm_u_reconSuit_base: ItemCore
{
    scope=1;
    scopeArsenal=0;

    model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
    allowedSlots[]={BACKPACK_SLOT};

    class ItemInfo: UniformItem
    {
        uniformModel="-";
        containerClass="Supply40";
        mass=20;
    };
};
