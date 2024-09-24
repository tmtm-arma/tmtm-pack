class tmtm_u_oversuit_base: Uniform_Base
{
    scope=1;
    scopeArsenal=0;

    model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
    hiddenSelections[]= { "camo", "insignia" };

    class ItemInfo: UniformItem
    {
        uniformModel="-";
        containerClass="Supply30";
        mass=30;
    };
};
