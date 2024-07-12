#define TMTM_NVG_WOOL_GLOVES_BASE_ITEMINFO(ArgModel, ArgTexture) \
class ItemInfo \
{ \
    type=616; \
    hmdType=0; \
    uniformModel= ArgModel; \
    modelOff= ArgModel; \
    hiddenSelections[]= { "nomex" }; \
    hiddenSelectionsTextures[]= { ArgTexture }; \
    mass=2; \
}; \

#define TMTM_NVG_WOOL_GLOVES_ITEMINFO(ArgTexture) TMTM_NVG_WOOL_GLOVES_BASE_ITEMINFO("simc_uaf_69\len_gloves_1.p3d",ArgTexture)

#define TMTM_NVG_WOOL_GLOVES_CUT_ITEMINFO(ArgTexture) TMTM_NVG_WOOL_GLOVES_BASE_ITEMINFO("simc_uaf_69\len_gloves_1_cut.p3d",ArgTexture)
