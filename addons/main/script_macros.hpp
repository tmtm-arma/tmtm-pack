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

#define HITPOINTS_UNIFORM_NOARMOR\
	class HitFace\
	{\
		armor=1;\
		material=-1;\
		name="face_hub";\
		passThrough=0.80000001;\
		radius=0.079999998;\
		explosionShielding=0.1;\
		minimalHit=0.0099999998;\
	};\
	class HitNeck: HitFace\
	{\
		armor=1;\
		material=-1;\
		name="neck";\
		passThrough=0.80000001;\
		radius=0.1;\
		explosionShielding=0.5;\
		minimalHit=0.0099999998;\
	};\
	class HitHead: HitNeck\
	{\
		armor=1;\
		material=-1;\
		name="head";\
		passThrough=0.80000001;\
		radius=0.2;\
		explosionShielding=0.5;\
		minimalHit=0.0099999998;\
		depends="HitFace max HitNeck";\
	};\
	class HitPelvis: HitHead\
	{\
		armor=6;\
		material=-1;\
		name="pelvis";\
		passThrough=0.80000001;\
		radius=0.23999999;\
		explosionShielding=1;\
		visual="injury_body";\
		minimalHit=0.0099999998;\
		depends="0";\
	};\
	class HitAbdomen: HitPelvis\
	{\
		armor=1;\
		material=-1;\
		name="spine1";\
		passThrough=0.80000001;\
		radius=0.16;\
		explosionShielding=1;\
		visual="injury_body";\
		minimalHit=0.0099999998;\
	};\
	class HitDiaphragm: HitAbdomen\
	{\
		armor=1;\
		material=-1;\
		name="spine2";\
		passThrough=0.80000001;\
		radius=0.18000001;\
		explosionShielding=6;\
		visual="injury_body";\
		minimalHit=0.0099999998;\
	};\
	class HitChest: HitDiaphragm\
	{\
		armor=1;\
		material=-1;\
		name="spine3";\
		passThrough=0.80000001;\
		radius=0.18000001;\
		explosionShielding=6;\
		visual="injury_body";\
		minimalHit=0.0099999998;\
	};\
	class HitBody: HitChest\
	{\
		armor=1000;\
		material=-1;\
		name="body";\
		passThrough=1;\
		radius=0;\
		explosionShielding=6;\
		visual="injury_body";\
		minimalHit=0.0099999998;\
		depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";\
	};\
	class HitArms: HitBody\
	{\
		armor=3;\
		material=-1;\
		name="arms";\
		passThrough=1;\
		radius=0.1;\
		explosionShielding=1;\
		visual="injury_hands";\
		minimalHit=0.0099999998;\
		depends="0";\
	};\
	class HitHands: HitArms\
	{\
		armor=3;\
		material=-1;\
		name="hands";\
		passThrough=1;\
		radius=0.1;\
		explosionShielding=1;\
		visual="injury_hands";\
		minimalHit=0.0099999998;\
		depends="HitArms";\
	};\
	class HitLegs: HitHands\
	{\
		armor=3;\
		material=-1;\
		name="legs";\
		passThrough=1;\
		radius=0.14;\
		explosionShielding=1;\
		visual="injury_legs";\
		minimalHit=0.0099999998;\
		depends="0";\
	};\
	class Incapacitated: HitLegs\
	{\
		armor=1000;\
		material=-1;\
		name="body";\
		passThrough=1;\
		radius=0;\
		explosionShielding=1;\
		visual="";\
		minimalHit=0;\
		depends="(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";\
	};\
