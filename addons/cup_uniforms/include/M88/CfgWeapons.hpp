class tmtm_u_m88_base: ItemCore
{
    scope=0;

    model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
    allowedSlots[] = {BACKPACK_SLOT};

    class ItemInfo: UniformItem
    {
    	uniformModel = "-";
    	// uniformClass = "yourclasshere";
    	containerClass = "Supply60";
    	mass = 20;
    };
};

/* 
    Content
*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////
// TTsKO/Butan family
class tmtm_u_m88_butand: tmtm_u_m88_base
{
    scope=2;
    scopeArsenal=2;

    author="erem2k";

    displayName="Uniform M-88, TTsKO Dark";
    descriptionShort="Uniform, Model 88, TTsKO";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    class ItemInfo: ItemInfo
    {
        uniformClass="tmtm_m88_butand";
    };
};

class tmtm_u_m88_butand_rolled: tmtm_u_m88_base
{
    scope=2;
    scopeArsenal=2;

    author="erem2k";

    displayName="Uniform M-88, TTsKO Dark (Rolled Up)";
    descriptionShort="Uniform, Model 88, TTsKO";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    class ItemInfo: ItemInfo
    {
        uniformClass="tmtm_m88_butand_rolled";
    };
};

class tmtm_u_m88_butand_gloves: tmtm_u_m88_base
{
    scope=2;
    scopeArsenal=2;

    author="erem2k";

    displayName="Uniform M-88, TTsKO Dark (Gloves)";
    descriptionShort="Uniform, Model 88, TTsKO";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    class ItemInfo: ItemInfo
    {
        uniformClass="tmtm_m88_butand_gloves";
    };
};

class tmtm_u_m88_butand_rolled_gloves: tmtm_u_m88_base
{
    scope=2;
    scopeArsenal=2;

    author="erem2k";

    displayName="Uniform M-88, TTsKO Dark (Rolled Up, Gloves)";
    descriptionShort="Uniform, Model 88, TTsKO";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    class ItemInfo: ItemInfo
    {
        uniformClass="tmtm_m88_butand_rolled_gloves";
    };
};


class tmtm_u_m88_butanl: tmtm_u_m88_base
{
    scope=2;
    scopeArsenal=2;

    author="erem2k";

    displayName="Uniform M-88, TTsKO Light";
    descriptionShort="Uniform, Model 88, TTsKO";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    class ItemInfo: ItemInfo
    {
        uniformClass="tmtm_m88_butanl";
    };
};

class tmtm_u_m88_butanl_rolled: tmtm_u_m88_base
{
    scope=2;
    scopeArsenal=2;

    author="erem2k";

    displayName="Uniform M-88, TTsKO Light (Rolled Up)";
    descriptionShort="Uniform, Model 88, TTsKO";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    class ItemInfo: ItemInfo
    {
        uniformClass="tmtm_m88_butanl_rolled";
    };
};

class tmtm_u_m88_butanl_gloves: tmtm_u_m88_base
{
    scope=2;
    scopeArsenal=2;

    author="erem2k";

    displayName="Uniform M-88, TTsKO Light (Gloves)";
    descriptionShort="Uniform, Model 88, TTsKO";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    class ItemInfo: ItemInfo
    {
        uniformClass="tmtm_m88_butanl_gloves";
    };
};

class tmtm_u_m88_butanl_rolled_gloves: tmtm_u_m88_base
{
    scope=2;
    scopeArsenal=2;

    author="erem2k";

    displayName="Uniform M-88, TTsKO Light (Rolled Up, Gloves)";
    descriptionShort="Uniform, Model 88, TTsKO";
    picture="\tmtm\pack\main\data\ui\icon_tmtm_wip_ca.paa";

    class ItemInfo: ItemInfo
    {
        uniformClass="tmtm_m88_butanl_rolled_gloves";
    };
};

//////////////////////////////////////////////////////////////////////////////////////////////////////////