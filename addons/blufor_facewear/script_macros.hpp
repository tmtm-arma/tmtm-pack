#define TMTM_NVG_CAMONETTING_ITEMINFO(ArgTexture) \
class ItemInfo \
{ \
    type=616; \
    hmdType=0; \
    uniformModel= ArgModel; \
    modelOff= ArgModel; \
    hiddenSelections[]= {"camo1", "camo2"}; \
    hiddenSelectionsTextures[]= {"", ArgTexture }; \
    mass=2; \
}; \

