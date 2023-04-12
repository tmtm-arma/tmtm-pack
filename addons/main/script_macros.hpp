// Boolean
#define true 1
#define false 0

// sides
#define BLUFOR 0
#define OPFOR 1
#define INDFOR 2
#define CIVILIAN 3

// Slot definitions
#define DEFAULT_SLOT 0
#define MUZZLE_SLOT 101
#define OPTICS_SLOT 201
#define FLASHLIGHT_SLOT 301
#define NVG_SLOT 602
#define GOGGLE_SLOT 603
#define HEADGEAR_SLOT 605
#define UNIFORM_SLOT 801

#define HMD_SLOT       616
#define BINOCULAR_SLOT 617
#define MEDIKIT_SLOT   619
#define RADIO_SLOT    611

#define VEST_SLOT      701
#define BACKPACK_SLOT  901

#define SCUBA_SLOT "SCUBA_SLOT"

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
