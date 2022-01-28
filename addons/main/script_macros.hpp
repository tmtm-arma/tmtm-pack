// sides
#define BLUFOR 0
#define OPFOR 1
#define INDFOR 2	
#define CIVILIAN 3

// textures	--> currently does not seem to work 
//				possible problem with behavior of defines from different locations
#define TEX(COMPONENT,NAME,VARIANT) "\tmtm\pack\##COMPONENT##\Data\tmtm_##NAME##_##VARIANT##_co.paa"

#define TFAR_BACKPACK_BLUFOR\
        tf_dialog = "rt1523g_radio_dialog";\
        tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";\
        tf_encryptionCode = "tf_west_radio_code";\
        tf_hasLRradio = 1;\
        tf_range = 20000;\
        tf_subtype = "digital_lr";

#define TFAR_BACKPACK_OPFOR\
        tf_dialog = "bussole_radio_dialog";\
        tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";\
        tf_encryptionCode = "tf_east_radio_code";\
        tf_hasLRradio = 1;\
        tf_range = 20000;\
        tf_subtype = "digital_lr";

#define TFAR_BACKPACK_INDEP\
        tf_dialog = "anprc155_radio_dialog";\
        tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";\
        tf_encryptionCode = "tf_independent_radio_code";\
        tf_hasLRradio = 1;\
        tf_range = 20000;\
        tf_subtype = "digital_lr";



