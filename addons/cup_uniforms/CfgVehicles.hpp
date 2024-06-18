class CfgVehicles
{
	class O_Soldier_base_F;
	class B_Soldier_base_F;

	//////////////////////////////////////////////////////////////////////////
	// Maskhalat
	class tmtm_maskhalat_base: O_Soldier_base_F
	{
		scope=1;
		class Wounds
		{
			tex[] = {};
			mat[] = {
				/// Replace with w1 and w2 from the NAPA folder

				// "a3\Characters_F_Enoch\Uniforms\Data\Gorka_01.rvmat",
				// "a3\Characters_F_Enoch\Uniforms\Data\Gorka_01_injury.rvmat",
				// "a3\Characters_F_Enoch\Uniforms\Data\Gorka_01_injury.rvmat",

				// "A3\Characters_F\Common\Data\basicbody.rvmat",
				// "A3\Characters_F\Common\Data\basicbody_injury.rvmat",
				// "A3\Characters_F\Common\Data\basicbody_injury.rvmat",

				"A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",

				"A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",

				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",

				"A3\Characters_F\Heads\Data\hl_white_old.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",

				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"

			};
		};

		picture = "";
        model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_NAPA\CUP_NAPA_Soldier.p3d";
		modelSides[] = { 3, 1 };
		hiddenSelections[] = { "Camo1", "Camo2", "clan", "insignia" };
        hiddenSelectionsMaterials[] =
		{
			"\tmtm\pack\cup_uniforms\Data\tmtm_maskhalat_jacket.rvmat",
			"\tmtm\pack\cup_uniforms\Data\tmtm_maskhalat_pants.rvmat"
		};
	};
	class tmtm_maskhalat_loose_base: tmtm_maskhalat_base
	{
        model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_NAPA\CUP_NAPA_Soldier2.p3d";
	};
	class tmtm_maskhalat_hood_base: tmtm_maskhalat_base
	{
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_NAPA\CUP_NAPA_Soldier4.p3d";
	};

	// ACU
	class tmtm_acu_base: B_Soldier_base_F
	{
		scope=1;
		scopeCurator = 0;

		class Wounds /// changes material of skin according to damage
		{
			tex[] = {};
			mat[] = {

				// Meaty parts injuries
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",

				"A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",

				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",

				"A3\Characters_F\Heads\Data\hl_white_old.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",

				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",

				"CUP\Creatures\People\Military\CUP_Creatures_People_Military_HIL\data\Blouse.rvmat",
				"CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\ACU\data\Blouse_w1.rvmat",
				"CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\ACU\data\Blouse_w2.rvmat",

				"CUP\Creatures\People\Military\CUP_Creatures_People_Military_HIL\data\pants.rvmat",
				"CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\ACU\data\pants_w1.rvmat",
				"CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\ACU\data\pants_w2.rvmat"

			};
		};

		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\ACU\CUP_ACU_1.p3d";
		modelSides[] = { 3, 1 };

		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG : UniformSlotInfo{ slotType = NVG_SLOT; };
				class Scuba : UniformSlotInfo{ slotType = SCUBA_SLOT; };
				class Googles : UniformSlotInfo{ slotType = GOGGLE_SLOT; };
				class Headgear : UniformSlotInfo{ slotType = HEADGEAR_SLOT; };
			};
		};

		// #include "\tmtm\pack\main\hitpoints_uniform_none.h"

		hiddenSelections[] = {"Camo1", "Camo2", "camo3", "flag", "clan", "insignia"};
		hiddenSelectionsMaterials[] = {
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_HIL\data\blouse.rvmat",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_HIL\data\pants.rvmat",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\data\oakley_2.rvmat"
		};
	};

	class tmtm_acu_gloves_base: tmtm_acu_base
	{
		scope=1;
		scopeCurator = 0;

		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\ACU\CUP_ACU_1_gloves.p3d";
	};

	class tmtm_acu_rolled_base: tmtm_acu_base
	{
		scope=1;
		scopeCurator = 0;

		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\ACU\CUP_ACU_1_rolled.p3d";
	};

	class tmtm_acu_rolled_gloves_base: tmtm_acu_base
	{
		scope=1;
		scopeCurator = 0;

		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\ACU\CUP_ACU_1_rolled_gloves.p3d";
	};

	// M88 Uniform
	class tmtm_m88_base: O_Soldier_base_F
	{
		scope=1;
		scopeCurator=0;

		class Wounds
		{
			tex[] = {};
			mat[] = {


				// Meaty parts injuries
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",

				"A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",

				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",

				"A3\Characters_F\Heads\Data\hl_white_old.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",

				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"

			};
		};

		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\CUP_RUS_Uniform_80s.p3d";
		modelSides[] = { 3, 0 };

		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG : UniformSlotInfo{ slotType = NVG_SLOT; };
				class Scuba : UniformSlotInfo{ slotType = SCUBA_SLOT; };
				class Googles : UniformSlotInfo{ slotType = GOGGLE_SLOT; };
				class Headgear : UniformSlotInfo{ slotType = HEADGEAR_SLOT; };
			};
		};

		hiddenSelections[] = { "Camo", "clan", "insignia" };
	};

	class tmtm_m88_rolled_base: tmtm_m88_base
	{
		scope=1;
		scopeCurator=0;

		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\CUP_RUS_Uniform_80s_rolled_up.p3d";
	};

	class tmtm_m88_rolled_gloves_base: tmtm_m88_base
	{
		scope=1;
		scopeCurator=0;

		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\CUP_RUS_Uniform_80s_rolled_up_gloves.p3d";
	};

	//////////////////////////////////////////////////////////////////////////
	// Maskhalat (Berezka White)
	class tmtm_maskhalat_berezkaWhite: tmtm_maskhalat_base
	{
		author="erem2k";

		scope=1;
		scopeArsenal=2;
		scopeCurator=0;

		displayName = "Maskhalat (Berezka White)";
		uniformClass = "tmtm_u_maskhalat_berezkaWhite";

		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\cup_uniforms\Data\tmtm_maskhalat_jacket_berezkaWhite_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_maskhalat_pants_berezkaWhite_co.paa"
		};
	};
	// Maskhalat + Loose Pants (Berezka White)
	class tmtm_maskhalat_berezkaWhite_loose: tmtm_maskhalat_loose_base
	{
		author="erem2k";

		scope=1;
		scopeArsenal=2;
		scopeCurator=0;

		displayName = "Maskhalat (Berezka White/Loose)";
		uniformClass = "tmtm_u_maskhalat_berezkaWhite_loose";

		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\cup_uniforms\Data\tmtm_maskhalat_jacket_berezkaWhite_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_maskhalat_pants_berezkaWhite_co.paa"
		};
	};
	// Maskhalat + Loose Pants (Berezka White/Hood)
	class tmtm_maskhalat_berezkaWhite_hood: tmtm_maskhalat_hood_base
	{
		author="erem2k";

		scope=1;
		scopeArsenal=2;
		scopeCurator=0;

		displayName="Maskhalat (Berezka White/Hood)";
		uniformClass = "tmtm_u_maskhalat_berezkaWhite_hood";

		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\cup_uniforms\Data\tmtm_maskhalat_jacket_berezkaWhite_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_maskhalat_pants_berezkaWhite_co.paa"
		};
	};
	// Maskhalat (Berezka Yellow)
	class tmtm_maskhalat_berezkaYellow: tmtm_maskhalat_base
	{
		author="erem2k";

		scope=1;
		scopeArsenal=2;
		scopeCurator=0;

		displayName="Maskhalat (Berezka Yellow)";
		uniformClass = "tmtm_u_maskhalat_berezkaYellow";

		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\cup_uniforms\Data\tmtm_maskhalat_jacket_berezkaYellow_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_maskhalat_pants_berezkaYellow_co.paa"
		};
	};
	// Maskhalat + Loose Pants (Berezka Yellow)
	class tmtm_maskhalat_berezkaYellow_loose: tmtm_maskhalat_loose_base
	{
		author="erem2k";

		scope=1;
		scopeArsenal=2;
		scopeCurator=0;

		displayName="Maskhalat (Berezka Yellow/Loose)";
		uniformClass = "tmtm_u_maskhalat_berezkaYellow_loose";

		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\cup_uniforms\Data\tmtm_maskhalat_jacket_berezkaYellow_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_maskhalat_pants_berezkaYellow_co.paa"
		};
	};
	// Maskhalat + Loose Pants (Berezka Yellow/Hood)
	class tmtm_maskhalat_berezkaYellow_hood: tmtm_maskhalat_hood_base
	{
		author="erem2k";

		scope=1;
		scopeArsenal=2;
		scopeCurator=0;

		displayName="Maskhalat (Berezka Yellow/Hood)";
		uniformClass = "tmtm_u_maskhalat_berezkaYellow_hood";

		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\cup_uniforms\Data\tmtm_maskhalat_jacket_berezkaYellow_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_maskhalat_pants_berezkaYellow_co.paa"
		};
	};
	// Maskhalat + Loose Pants (Svitanok)
	class tmtm_maskhalat_svitanok_loose: tmtm_maskhalat_loose_base
	{
		author="erem2k";

		scope=1;
		scopeArsenal=2;
		scopeCurator=0;

		displayName="Maskhalat (Svitanok/Loose)";
		uniformClass = "tmtm_u_maskhalat_svitanok_loose";

		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\cup_uniforms\Data\tmtm_maskhalat_jacket_svitanok_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_maskhalat_pants_svitanok_co.paa"
		};
	};
	// Maskhalat + Loose Pants (Svitanok/Hood)
	class tmtm_maskhalat_svitanok_hood: tmtm_maskhalat_hood_base
	{
		author="erem2k";

		scope=1;
		scopeArsenal=2;
		scopeCurator=0;

		displayName="Maskhalat (Svitanok/Hood)";
		uniformClass = "tmtm_u_maskhalat_svitanok_hood";

		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\cup_uniforms\Data\tmtm_maskhalat_jacket_svitanok_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_maskhalat_pants_svitanok_co.paa"
		};
	};
	// Maskhalat + Loose Pants (Berezka Winter)
	class tmtm_maskhalat_berezkaWinter_loose: tmtm_maskhalat_loose_base
	{
		author="erem2k";

		scope=1;
		scopeArsenal=2;
		scopeCurator=0;

		displayName="Maskhalat (Berezka Winter/Loose)";
		uniformClass = "tmtm_u_maskhalat_berezkaWinter_loose";

		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\cup_uniforms\Data\tmtm_maskhalat_jacket_berezkaWinter_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_maskhalat_pants_berezkaWinter_co.paa"
		};
	};
	// Maskhalat + Loose Pants (Berezka Winter/Hood)
	class tmtm_maskhalat_berezkaWinter_hood: tmtm_maskhalat_hood_base
	{
		author="erem2k";

		scope=1;
		scopeArsenal=2;
		scopeCurator=0;

		displayName="Maskhalat (Berezka Winter/Hood)";
		uniformClass = "tmtm_u_maskhalat_berezkaWinter_hood";

		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\cup_uniforms\Data\tmtm_maskhalat_jacket_berezkaWinter_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_maskhalat_pants_berezkaWinter_co.paa"
		};
	};

	// AFU ACU (MM14)
	class tmtm_acu_mm14: tmtm_acu_base
	{
		author="erem2k";

		scope=1;
		scopeArsenal=2;
		scopeCurator=0;

		displayName = "AFU ACU (MM14)";
		uniformClass = "tmtm_u_acu_mm14";

		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\cup_uniforms\Data\tmtm_acu_blouse_mm14_flag_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_acu_pants_mm14_co.paa"
		};
	};
	// AFU ACU (Gloves/MM14)
	class tmtm_acu_gloves_mm14: tmtm_acu_gloves_base
	{
		author="erem2k";

		scope=1;
		scopeArsenal=2;
		scopeCurator=0;

		displayName = "AFU ACU (Gloves/MM14)";
		uniformClass = "tmtm_u_acu_gloves_mm14";

		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\cup_uniforms\Data\tmtm_acu_blouse_mm14_flag_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_acu_pants_mm14_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\data\oakley_2_tan_co.paa"
		};
	};
	// AFU ACU (Rolled/MM14)
	class tmtm_acu_rolled_mm14: tmtm_acu_rolled_base
	{
		author="erem2k";

		scope=1;
		scopeArsenal=2;
		scopeCurator=0;

		displayName = "AFU ACU (Rolled/MM14)";
		uniformClass = "tmtm_u_acu_rolled_mm14";

		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\cup_uniforms\Data\tmtm_acu_blouse_mm14_flag_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_acu_pants_mm14_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\data\oakley_2_tan_co.paa"
		};
	};
	// AFU ACU (Rolled/Gloves/MM14)
	class tmtm_acu_rolled_gloves_mm14: tmtm_acu_rolled_gloves_base
	{
		author="erem2k";

		scope=1;
		scopeArsenal=2;
		scopeCurator=0;

		displayName = "AFU ACU (Rolled/Gloves/MM14)";
		uniformClass = "tmtm_u_acu_rolled_gloves_mm14";

		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\cup_uniforms\Data\tmtm_acu_blouse_mm14_flag_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_acu_pants_mm14_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\data\oakley_2_tan_co.paa"
		};
	};
	// AFU National Guard ACU (Dark Olive)
	class tmtm_acu_darkolive: tmtm_acu_base
	{
		author="erem2k";

		scope=1;
		scopeArsenal=2;
		scopeCurator=0;

		displayName = "AFU National Guard ACU (Dark Olive)";
		uniformClass = "tmtm_u_acu_darkolive";

		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\cup_uniforms\Data\tmtm_acu_blouse_darkolive_flag_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_acu_pants_darkolive_co.paa"
		};
	};
	// AFU National Guard ACU (Gloves/Dark Olive)
	class tmtm_acu_gloves_darkolive: tmtm_acu_gloves_base
	{
		author="erem2k";

		scope=1;
		scopeArsenal=2;
		scopeCurator=0;

		displayName = "AFU National Guard ACU (Gloves/Dark Olive)";
		uniformClass = "tmtm_u_acu_gloves_darkolive";

		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\cup_uniforms\Data\tmtm_acu_blouse_darkolive_flag_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_acu_pants_darkolive_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\data\oakley_2_od_co.paa"
		};
	};
	// AFU National Guard ACU (Rolled/Dark Olive)
	class tmtm_acu_rolled_darkolive: tmtm_acu_rolled_base
	{
		author="erem2k";

		scope=1;
		scopeArsenal=2;
		scopeCurator=0;

		displayName = "AFU National Guard ACU (Rolled/Dark Olive)";
		uniformClass = "tmtm_u_acu_rolled_darkolive";

		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\cup_uniforms\Data\tmtm_acu_blouse_darkolive_flag_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_acu_pants_darkolive_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\data\oakley_2_od_co.paa"
		};
	};
	// AFU National Guard ACU (Rolled/Gloves/Dark Olive)
	class tmtm_acu_rolled_gloves_darkolive: tmtm_acu_rolled_gloves_base
	{
		author="erem2k";

		scope=1;
		scopeArsenal=2;
		scopeCurator=0;

		displayName = "AFU National Guard ACU (Rolled/Gloves/Dark Olive)";
		uniformClass = "tmtm_u_acu_rolled_gloves_darkolive";

		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\cup_uniforms\Data\tmtm_acu_blouse_darkolive_flag_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_acu_pants_darkolive_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\data\oakley_2_od_co.paa"
		};
	};
	// Uniform ACU (Dark Olive)
	class tmtm_acu_noflag_darkolive: tmtm_acu_base
	{
		author="erem2k";

		scope=1;
		scopeArsenal=2;
		scopeCurator=0;

		displayName = "Uniform ACU (Dark Olive)";
		uniformClass = "tmtm_u_acu_noflag_darkolive";

		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\cup_uniforms\Data\tmtm_acu_blouse_darkolive_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_acu_pants_darkolive_co.paa"
		};
	};
	// Uniform ACU (Gloves/Dark Olive)
	class tmtm_acu_gloves_noflag_darkolive: tmtm_acu_gloves_base
	{
		author="erem2k";

		scope=1;
		scopeArsenal=2;
		scopeCurator=0;

		displayName = "Uniform ACU (Gloves/Dark Olive)";
		uniformClass = "tmtm_u_acu_gloves_noflag_darkolive";

		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\cup_uniforms\Data\tmtm_acu_blouse_darkolive_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_acu_pants_darkolive_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\data\oakley_2_od_co.paa"
		};
	};
	// Uniform ACU (Rolled/Dark Olive)
	class tmtm_acu_rolled_noflag_darkolive: tmtm_acu_rolled_base
	{
		author="erem2k";

		scope=1;
		scopeArsenal=2;
		scopeCurator=0;

		displayName = "Uniform ACU (Rolled/Dark Olive)";
		uniformClass = "tmtm_u_acu_rolled_noflag_darkolive";

		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\cup_uniforms\Data\tmtm_acu_blouse_darkolive_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_acu_pants_darkolive_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\data\oakley_2_od_co.paa"
		};
	};
	// Uniform ACU (Rolled/Gloves/Dark Olive)
	class tmtm_acu_rolled_gloves_noflag_darkolive: tmtm_acu_rolled_gloves_base
	{
		author="erem2k";

		scope=1;
		scopeArsenal=2;
		scopeCurator=0;

		displayName = "Uniform ACU (Rolled/Gloves/Dark Olive)";
		uniformClass = "tmtm_u_acu_rolled_gloves_noflag_darkolive";

		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\cup_uniforms\Data\tmtm_acu_blouse_darkolive_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_acu_pants_darkolive_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\data\oakley_2_od_co.paa"
		};
	};

	class CUP_B_USMC_Soldier_06;

	class tmtm_nomex_grey: CUP_B_USMC_Soldier_06
	{
		author="trenchgun";

		scope=1;
		scopeArsenal=2;
		scopeCurator=0;

		displayName="Nomex Flightsuit (Grey)";
		uniformClass="tmtm_u_nomex_grey";

		picture="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USMC\data\ui\icon_u_b_usmc_pilotoverall_ca.paa";
		hiddenSelections[] = {"Camo", "Camo2"};
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\cup_uniforms\Data\tmtm_nomex_grey_co.paa",
			"\cup\creatures\people\military\cup_creatures_people_military_usmc\data\gloves_co.paa"
		};
	};





	class CUP_U_O_RUS_Soldier_VKPO_Jacket_Winter_1;
	/*
	hiddenSelectionsTextures[] = {
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\VKPO_Winter\data\ra_VKPO_Jacket_w_CO.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\VKPO_Winter\data\ra_VKPO_Jacket_hands_w_CO.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\ra_VKPO_Pants_s_CO.paa"
	};
	*/
	class tmtm_vkpo_jacket_winter_Forest_1: CUP_U_O_RUS_Soldier_VKPO_Jacket_Winter_1 {
		author="trenchgun";

		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="VKPO Winter Jacket 1 (CDF Forest)";
		uniformClass="tmtm_u_vkpo_jacket_winter_Forest_1";
		picture="";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_forest_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_forest_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_forest_co.paa"
		};
	};
	class tmtm_vkpo_jacket_winter_ForestMountain_1: CUP_U_O_RUS_Soldier_VKPO_Jacket_Winter_1 {
		author="trenchgun";

		scope=1;
		scopeArsenal=2;
		scopeCurator=0;

		displayName="VKPO Winter Jacket 1 (CDF Forest/Mountain)";
		uniformClass="tmtm_u_vkpo_jacket_winter_ForestMountain_1";

		picture="";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_forest_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_forest_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_mountain_co.paa"
		};
	};
	class tmtm_vkpo_jacket_winter_ForestOxblood_1: CUP_U_O_RUS_Soldier_VKPO_Jacket_Winter_1 {
		author="trenchgun";

		scope=1;
		scopeArsenal=2;
		scopeCurator=0;

		displayName="VKPO Winter Jacket 1 (CDF Forest/Oxblood)";
		uniformClass="tmtm_u_vkpo_jacket_winter_ForestOxblood_1";

		picture="";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_forest_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_forest_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_oxblood_co.paa"
		};
	};
	class tmtm_vkpo_jacket_winter_ForestMTP_1: CUP_U_O_RUS_Soldier_VKPO_Jacket_Winter_1 {
		author="trenchgun";

		scope=1;
		scopeArsenal=2;
		scopeCurator=0;

		displayName="VKPO Winter Jacket 1 (CDF Forest/MTP)";
		uniformClass="tmtm_u_vkpo_jacket_winter_ForestMTP_1";

		picture="";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_forest_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_forest_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_mtp_co.paa"
		};
	};
	class tmtm_vkpo_jacket_winter_Mountain_1: CUP_U_O_RUS_Soldier_VKPO_Jacket_Winter_1 {
		author="trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="VKPO Winter Jacket 1 (CDF Mountain)";
		uniformClass="tmtm_u_vkpo_jacket_winter_Mountain_1";
		picture="";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_mountain_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_mountain_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_mountain_co.paa"
		};
	};
	class tmtm_vkpo_jacket_winter_MountainForest_1: CUP_U_O_RUS_Soldier_VKPO_Jacket_Winter_1 {
		author="trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="VKPO Winter Jacket 1 (CDF Mountain/Forest)";
		uniformClass="tmtm_u_vkpo_jacket_winter_MountainForest_1";
		picture="";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_mountain_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_mountain_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_forest_co.paa"
		};
	};
	class tmtm_vkpo_jacket_winter_MountainOxblood_1: CUP_U_O_RUS_Soldier_VKPO_Jacket_Winter_1 {
		author="trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="VKPO Winter Jacket 1 (CDF Mountain/Oxblood)";
		uniformClass="tmtm_u_vkpo_jacket_winter_MountainOxblood_1";
		picture="";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_mountain_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_mountain_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_oxblood_co.paa"
		};
	};
	class tmtm_vkpo_jacket_winter_MountainMTP_1: CUP_U_O_RUS_Soldier_VKPO_Jacket_Winter_1 {
		author="trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="VKPO Winter Jacket 1 (CDF Mountain/MTP)";
		uniformClass="tmtm_u_vkpo_jacket_winter_MountainMTP_1";
		picture="";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_mountain_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_mountain_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_mtp_co.paa"
		};
	};
	class tmtm_vkpo_jacket_winter_Oxblood_1: CUP_U_O_RUS_Soldier_VKPO_Jacket_Winter_1 {
		author="trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="VKPO Winter Jacket 1 (CDF Oxblood)";
		uniformClass="tmtm_u_vkpo_jacket_winter_Oxblood_1";
		picture="";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_oxblood_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_oxblood_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_oxblood_co.paa"
		};
	};
	class tmtm_vkpo_jacket_winter_OxbloodForest_1: CUP_U_O_RUS_Soldier_VKPO_Jacket_Winter_1 {
		author="trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="VKPO Winter Jacket 1 (CDF Oxblood/Forest)";
		uniformClass="tmtm_u_vkpo_jacket_winter_OxbloodForest_1";
		picture="";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_oxblood_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_oxblood_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_forest_co.paa"
		};
	};
	class tmtm_vkpo_jacket_winter_OxbloodMountain_1: CUP_U_O_RUS_Soldier_VKPO_Jacket_Winter_1 {
		author="trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="VKPO Winter Jacket 1 (CDF Oxblood/Mountain)";
		uniformClass="tmtm_u_vkpo_jacket_winter_OxbloodMountain_1";
		picture="";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_oxblood_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_oxblood_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_mountain_co.paa"
		};
	};
	class tmtm_vkpo_jacket_winter_OxbloodMTP_1: CUP_U_O_RUS_Soldier_VKPO_Jacket_Winter_1 {
		author="trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="VKPO Winter Jacket 1 (CDF Oxblood/MTP)";
		uniformClass="tmtm_u_vkpo_jacket_winter_OxbloodMTP_1";
		picture="";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_oxblood_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_oxblood_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_mtp_co.paa"
		};
	};
	class tmtm_vkpo_jacket_winter_MTP_1: CUP_U_O_RUS_Soldier_VKPO_Jacket_Winter_1 {
		author="trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="VKPO Winter Jacket 1 (MTP)";
		uniformClass="tmtm_u_vkpo_jacket_winter_MTP_1";
		picture="";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_mtp_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_mtp_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_mtp_co.paa"
		};
	};
	class tmtm_vkpo_jacket_winter_MTPForest_1: CUP_U_O_RUS_Soldier_VKPO_Jacket_Winter_1 {
		author="trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="VKPO Winter Jacket 1 (MTP/CDF Forest)";
		uniformClass="tmtm_u_vkpo_jacket_winter_MTPForest_1";
		picture="";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_mtp_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_mtp_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_forest_co.paa"
		};
	};
	class tmtm_vkpo_jacket_winter_MTPMountain_1: CUP_U_O_RUS_Soldier_VKPO_Jacket_Winter_1 {
		author="trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="VKPO Winter Jacket 1 (MTP/CDF Mountain)";
		uniformClass="tmtm_u_vkpo_jacket_winter_MTPMountain_1";
		picture="";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_mtp_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_mtp_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_mountain_co.paa"
		};
	};
	class tmtm_vkpo_jacket_winter_MTPOxblood_1: CUP_U_O_RUS_Soldier_VKPO_Jacket_Winter_1 {
		author="trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="VKPO Winter Jacket 1 (MTP/CDF Oxblood)";
		uniformClass="tmtm_u_vkpo_jacket_winter_MTPOxblood_1";
		picture="";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_mtp_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_mtp_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_oxblood_co.paa"
		};
	};
	class tmtm_vkpo_jacket_winter_blackForest_1: CUP_U_O_RUS_Soldier_VKPO_Jacket_Winter_1 {
		author="trenchgun";

		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="VKPO Winter Jacket 1 (Black/CDF Forest)";
		uniformClass="tmtm_u_vkpo_jacket_winter_blackForest_1";
		picture="";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_black_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_black_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_forest_co.paa"
		};
	};
	class tmtm_vkpo_jacket_winter_blackMountain_1: CUP_U_O_RUS_Soldier_VKPO_Jacket_Winter_1 {
		author="trenchgun";

		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="VKPO Winter Jacket 1 (Black/CDF Mountain)";
		uniformClass="tmtm_u_vkpo_jacket_winter_blackMountain_1";
		picture="";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_black_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_black_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_mountain_co.paa"
		};
	};
	class tmtm_vkpo_jacket_winter_blackOxblood_1: CUP_U_O_RUS_Soldier_VKPO_Jacket_Winter_1 {
		author="trenchgun";

		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="VKPO Winter Jacket 1 (Black/CDF Oxblood)";
		uniformClass="tmtm_u_vkpo_jacket_winter_blackOxblood_1";
		picture="";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_black_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_black_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_oxblood_co.paa"
		};
	};
	class tmtm_vkpo_jacket_winter_blackMTP_1: CUP_U_O_RUS_Soldier_VKPO_Jacket_Winter_1 {
		author="trenchgun";

		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="VKPO Winter Jacket 1 (Black/MTP)";
		uniformClass="tmtm_u_vkpo_jacket_winter_blackMTP_1";
		picture="";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_black_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_black_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_mtp_co.paa"
		};
	};
	class CUP_U_O_RUS_Soldier_VKPO_Jacket_Winter_2;
	/*
	hiddenSelectionsTextures[] = {
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\VKPO_Winter\data\ra_VKPO_Jacket_w_CO.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\VKPO_Winter\data\ra_VKPO_Jacket_hands_w_CO.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\ra_VKPO_Pants_s_CO.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\ra_Gloves_Shoes_s_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\6b51_s_CO.paa"
	};
	*/
	class CUP_U_O_RUS_Soldier_VKPO_Jacket_Winter_3;
	/*
	hiddenSelectionsTextures[] = {
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\VKPO_Winter\data\ra_VKPO_Jacket_w_CO.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\VKPO_Winter\data\ra_VKPO_Jacket_hands_w_CO.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\ra_VKPO_Pants_s_CO.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\ra_Gloves_Shoes_s_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\6b51_s_CO.paa"
	};
	*/
	class tmtm_vkpo_jacket_winter_Forest_2: CUP_U_O_RUS_Soldier_VKPO_Jacket_Winter_3 {
		author="trenchgun";

		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="VKPO Winter Jacket 2 (CDF Forest)";
		uniformClass="tmtm_u_vkpo_jacket_winter_Forest_2";
		picture="";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_forest_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_forest_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_forest_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\ra_Gloves_Shoes_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\6b51_s_CO.paa"
		};
	};
	class tmtm_vkpo_jacket_winter_ForestMountain_2: CUP_U_O_RUS_Soldier_VKPO_Jacket_Winter_3 {
		author="trenchgun";

		scope=1;
		scopeArsenal=2;
		scopeCurator=0;

		displayName="VKPO Winter Jacket 2 (CDF Forest/Mountain)";
		uniformClass="tmtm_u_vkpo_jacket_winter_ForestMountain_2";

		picture="";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_forest_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_forest_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_mountain_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\ra_Gloves_Shoes_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\6b51_s_CO.paa"
		};
	};
	class tmtm_vkpo_jacket_winter_ForestOxblood_2: CUP_U_O_RUS_Soldier_VKPO_Jacket_Winter_3 {
		author="trenchgun";

		scope=1;
		scopeArsenal=2;
		scopeCurator=0;

		displayName="VKPO Winter Jacket 2 (CDF Forest/Oxblood)";
		uniformClass="tmtm_u_vkpo_jacket_winter_ForestOxblood_2";

		picture="";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_forest_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_forest_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_oxblood_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\ra_Gloves_Shoes_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\6b51_s_CO.paa"
		};
	};
	class tmtm_vkpo_jacket_winter_ForestMTP_2: CUP_U_O_RUS_Soldier_VKPO_Jacket_Winter_3 {
		author="trenchgun";

		scope=1;
		scopeArsenal=2;
		scopeCurator=0;

		displayName="VKPO Winter Jacket 2 (CDF Forest/MTP)";
		uniformClass="tmtm_u_vkpo_jacket_winter_ForestMTP_2";

		picture="";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_forest_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_forest_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_mtp_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\ra_Gloves_Shoes_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\6b51_s_CO.paa"
		};
	};
	class tmtm_vkpo_jacket_winter_Mountain_2: CUP_U_O_RUS_Soldier_VKPO_Jacket_Winter_3 {
		author="trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="VKPO Winter Jacket 2 (CDF Mountain)";
		uniformClass="tmtm_u_vkpo_jacket_winter_Mountain_2";
		picture="";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_mountain_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_mountain_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_mountain_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\ra_Gloves_Shoes_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\6b51_s_CO.paa"
		};
	};
	class tmtm_vkpo_jacket_winter_MountainForest_2: CUP_U_O_RUS_Soldier_VKPO_Jacket_Winter_3 {
		author="trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="VKPO Winter Jacket 2 (CDF Mountain/Forest)";
		uniformClass="tmtm_u_vkpo_jacket_winter_MountainForest_2";
		picture="";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_mountain_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_mountain_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_forest_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\ra_Gloves_Shoes_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\6b51_s_CO.paa"
		};
	};
	class tmtm_vkpo_jacket_winter_MountainOxblood_2: CUP_U_O_RUS_Soldier_VKPO_Jacket_Winter_3 {
		author="trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="VKPO Winter Jacket 2 (CDF Mountain/Oxblood)";
		uniformClass="tmtm_u_vkpo_jacket_winter_MountainOxblood_2";
		picture="";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_mountain_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_mountain_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_oxblood_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\ra_Gloves_Shoes_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\6b51_s_CO.paa"
		};
	};
	class tmtm_vkpo_jacket_winter_MountainMTP_2: CUP_U_O_RUS_Soldier_VKPO_Jacket_Winter_3 {
		author="trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="VKPO Winter Jacket 2 (CDF Mountain/MTP)";
		uniformClass="tmtm_u_vkpo_jacket_winter_MountainMTP_2";
		picture="";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_mountain_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_mountain_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_mtp_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\ra_Gloves_Shoes_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\6b51_s_CO.paa"
		};
	};
	class tmtm_vkpo_jacket_winter_Oxblood_2: CUP_U_O_RUS_Soldier_VKPO_Jacket_Winter_3 {
		author="trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="VKPO Winter Jacket 2 (CDF Oxblood)";
		uniformClass="tmtm_u_vkpo_jacket_winter_Oxblood_2";
		picture="";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_oxblood_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_oxblood_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_oxblood_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\ra_Gloves_Shoes_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\6b51_s_CO.paa"
		};
	};
	class tmtm_vkpo_jacket_winter_OxbloodForest_2: CUP_U_O_RUS_Soldier_VKPO_Jacket_Winter_3 {
		author="trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="VKPO Winter Jacket 2 (CDF Oxblood/Forest)";
		uniformClass="tmtm_u_vkpo_jacket_winter_OxbloodForest_2";
		picture="";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_oxblood_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_oxblood_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_forest_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\ra_Gloves_Shoes_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\6b51_s_CO.paa"
		};
	};
	class tmtm_vkpo_jacket_winter_OxbloodMountain_2: CUP_U_O_RUS_Soldier_VKPO_Jacket_Winter_3 {
		author="trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="VKPO Winter Jacket 2 (CDF Oxblood/Mountain)";
		uniformClass="tmtm_u_vkpo_jacket_winter_OxbloodMountain_2";
		picture="";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_oxblood_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_oxblood_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_mountain_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\ra_Gloves_Shoes_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\6b51_s_CO.paa"
		};
	};
	class tmtm_vkpo_jacket_winter_OxbloodMTP_2: CUP_U_O_RUS_Soldier_VKPO_Jacket_Winter_3 {
		author="trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="VKPO Winter Jacket 2 (CDF Oxblood/MTP)";
		uniformClass="tmtm_u_vkpo_jacket_winter_OxbloodMTP_2";
		picture="";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_oxblood_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_oxblood_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_mtp_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\ra_Gloves_Shoes_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\6b51_s_CO.paa"
		};
	};
	class tmtm_vkpo_jacket_winter_MTP_2: CUP_U_O_RUS_Soldier_VKPO_Jacket_Winter_3 {
		author="trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="VKPO Winter Jacket 2 (MTP)";
		uniformClass="tmtm_u_vkpo_jacket_winter_MTP_2";
		picture="";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_mtp_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_mtp_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_mtp_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\ra_Gloves_Shoes_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\6b51_s_CO.paa"
		};
	};
	class tmtm_vkpo_jacket_winter_MTPForest_2: CUP_U_O_RUS_Soldier_VKPO_Jacket_Winter_3 {
		author="trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="VKPO Winter Jacket 2 (MTP/CDF Forest)";
		uniformClass="tmtm_u_vkpo_jacket_winter_MTPForest_2";
		picture="";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_mtp_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_mtp_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_forest_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\ra_Gloves_Shoes_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\6b51_s_CO.paa"
		};
	};
	class tmtm_vkpo_jacket_winter_MTPMountain_2: CUP_U_O_RUS_Soldier_VKPO_Jacket_Winter_3 {
		author="trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="VKPO Winter Jacket 2 (MTP/CDF Mountain)";
		uniformClass="tmtm_u_vkpo_jacket_winter_MTPMountain_2";
		picture="";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_mtp_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_mtp_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_mountain_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\ra_Gloves_Shoes_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\6b51_s_CO.paa"
		};
	};
	class tmtm_vkpo_jacket_winter_MTPOxblood_2: CUP_U_O_RUS_Soldier_VKPO_Jacket_Winter_3 {
		author="trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="VKPO Winter Jacket 2 (MTP/CDF Oxblood)";
		uniformClass="tmtm_u_vkpo_jacket_winter_MTPOxblood_2";
		picture="";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_mtp_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_mtp_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_oxblood_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\ra_Gloves_Shoes_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\6b51_s_CO.paa"
		};
	};
	class tmtm_vkpo_jacket_winter_blackForest_2: CUP_U_O_RUS_Soldier_VKPO_Jacket_Winter_3 {
		author="trenchgun";

		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="VKPO Winter Jacket 2 (Black/CDF Forest)";
		uniformClass="tmtm_u_vkpo_jacket_winter_blackForest_2";
		picture="";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_black_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_black_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_forest_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\ra_Gloves_Shoes_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\6b51_s_CO.paa"
		};
	};
	class tmtm_vkpo_jacket_winter_blackMountain_2: CUP_U_O_RUS_Soldier_VKPO_Jacket_Winter_3 {
		author="trenchgun";

		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="VKPO Winter Jacket 2 (Black/CDF Mountain)";
		uniformClass="tmtm_u_vkpo_jacket_winter_blackMountain_2";
		picture="";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_black_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_black_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_mountain_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\ra_Gloves_Shoes_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\6b51_s_CO.paa"
		};
	};
	class tmtm_vkpo_jacket_winter_blackOxblood_2: CUP_U_O_RUS_Soldier_VKPO_Jacket_Winter_3 {
		author="trenchgun";

		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="VKPO Winter Jacket 2 (Black/CDF Oxblood)";
		uniformClass="tmtm_u_vkpo_jacket_winter_blackOxblood_2";
		picture="";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_black_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_black_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_oxblood_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\ra_Gloves_Shoes_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\6b51_s_CO.paa"
		};
	};
	class tmtm_vkpo_jacket_winter_blackMTP_2: CUP_U_O_RUS_Soldier_VKPO_Jacket_Winter_3 {
		author="trenchgun";

		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="VKPO Winter Jacket 2 (Black/MTP)";
		uniformClass="tmtm_u_vkpo_jacket_winter_blackMTP_2";
		picture="";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_black_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_black_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_mtp_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\ra_Gloves_Shoes_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\6b51_s_CO.paa"
		};
	};
	
	class CUP_U_O_RUS_Soldier_VKPO_Jacket_Winter_4;
	/*
	hiddenSelectionsTextures[] = {
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\VKPO_Winter\data\ra_VKPO_Jacket_w_CO.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\VKPO_Winter\data\ra_VKPO_Jacket_hands_w_CO.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\ra_VKPO_Pants_s_CO.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\ra_Gloves_Shoes_s_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\6b51_s_CO.paa"
	};
	
	*/
	class tmtm_vkpo_jacket_winter_Forest_3: CUP_U_O_RUS_Soldier_VKPO_Jacket_Winter_4 {
		author="trenchgun";

		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="VKPO Winter Jacket 3 (CDF Forest)";
		uniformClass="tmtm_u_vkpo_jacket_winter_Forest_3";
		picture="";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_forest_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_forest_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_forest_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\ra_Gloves_Shoes_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\6b51_s_CO.paa"
		};
	};
	class tmtm_vkpo_jacket_winter_ForestMountain_3: CUP_U_O_RUS_Soldier_VKPO_Jacket_Winter_4 {
		author="trenchgun";

		scope=1;
		scopeArsenal=2;
		scopeCurator=0;

		displayName="VKPO Winter Jacket 3 (CDF Forest/Mountain)";
		uniformClass="tmtm_u_vkpo_jacket_winter_ForestMountain_3";

		picture="";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_forest_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_forest_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_mountain_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\ra_Gloves_Shoes_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\6b51_s_CO.paa"
		};
	};
	class tmtm_vkpo_jacket_winter_ForestOxblood_3: CUP_U_O_RUS_Soldier_VKPO_Jacket_Winter_4 {
		author="trenchgun";

		scope=1;
		scopeArsenal=2;
		scopeCurator=0;

		displayName="VKPO Winter Jacket 3 (CDF Forest/Oxblood)";
		uniformClass="tmtm_u_vkpo_jacket_winter_ForestOxblood_3";

		picture="";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_forest_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_forest_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_oxblood_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\ra_Gloves_Shoes_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\6b51_s_CO.paa"
		};
	};
	class tmtm_vkpo_jacket_winter_ForestMTP_3: CUP_U_O_RUS_Soldier_VKPO_Jacket_Winter_4 {
		author="trenchgun";

		scope=1;
		scopeArsenal=2;
		scopeCurator=0;

		displayName="VKPO Winter Jacket 3 (CDF Forest/MTP)";
		uniformClass="tmtm_u_vkpo_jacket_winter_ForestMTP_3";

		picture="";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_forest_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_forest_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_mtp_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\ra_Gloves_Shoes_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\6b51_s_CO.paa"
		};
	};
	class tmtm_vkpo_jacket_winter_Mountain_3: CUP_U_O_RUS_Soldier_VKPO_Jacket_Winter_4 {
		author="trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="VKPO Winter Jacket 3 (CDF Mountain)";
		uniformClass="tmtm_u_vkpo_jacket_winter_Mountain_3";
		picture="";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_mountain_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_mountain_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_mountain_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\ra_Gloves_Shoes_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\6b51_s_CO.paa"
		};
	};
	class tmtm_vkpo_jacket_winter_MountainForest_3: CUP_U_O_RUS_Soldier_VKPO_Jacket_Winter_4 {
		author="trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="VKPO Winter Jacket 3 (CDF Mountain/Forest)";
		uniformClass="tmtm_u_vkpo_jacket_winter_MountainForest_3";
		picture="";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_mountain_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_mountain_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_forest_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\ra_Gloves_Shoes_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\6b51_s_CO.paa"
		};
	};
	class tmtm_vkpo_jacket_winter_MountainOxblood_3: CUP_U_O_RUS_Soldier_VKPO_Jacket_Winter_4 {
		author="trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="VKPO Winter Jacket 3 (CDF Mountain/Oxblood)";
		uniformClass="tmtm_u_vkpo_jacket_winter_MountainOxblood_3";
		picture="";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_mountain_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_mountain_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_oxblood_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\ra_Gloves_Shoes_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\6b51_s_CO.paa"
		};
	};
	class tmtm_vkpo_jacket_winter_MountainMTP_3: CUP_U_O_RUS_Soldier_VKPO_Jacket_Winter_4 {
		author="trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="VKPO Winter Jacket 3 (CDF Mountain/MTP)";
		uniformClass="tmtm_u_vkpo_jacket_winter_MountainMTP_3";
		picture="";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_mountain_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_mountain_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_mtp_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\ra_Gloves_Shoes_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\6b51_s_CO.paa"
		};
	};
	class tmtm_vkpo_jacket_winter_Oxblood_3: CUP_U_O_RUS_Soldier_VKPO_Jacket_Winter_4 {
		author="trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="VKPO Winter Jacket 3 (CDF Oxblood)";
		uniformClass="tmtm_u_vkpo_jacket_winter_Oxblood_3";
		picture="";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_oxblood_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_oxblood_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_oxblood_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\ra_Gloves_Shoes_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\6b51_s_CO.paa"
		};
	};
	class tmtm_vkpo_jacket_winter_OxbloodForest_3: CUP_U_O_RUS_Soldier_VKPO_Jacket_Winter_4 {
		author="trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="VKPO Winter Jacket 3 (CDF Oxblood/Forest)";
		uniformClass="tmtm_u_vkpo_jacket_winter_OxbloodForest_3";
		picture="";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_oxblood_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_oxblood_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_forest_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\ra_Gloves_Shoes_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\6b51_s_CO.paa"
		};
	};
	class tmtm_vkpo_jacket_winter_OxbloodMountain_3: CUP_U_O_RUS_Soldier_VKPO_Jacket_Winter_4 {
		author="trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="VKPO Winter Jacket 3 (CDF Oxblood/Mountain)";
		uniformClass="tmtm_u_vkpo_jacket_winter_OxbloodMountain_3";
		picture="";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_oxblood_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_oxblood_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_mountain_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\ra_Gloves_Shoes_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\6b51_s_CO.paa"
		};
	};
	class tmtm_vkpo_jacket_winter_OxbloodMTP_3: CUP_U_O_RUS_Soldier_VKPO_Jacket_Winter_4 {
		author="trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="VKPO Winter Jacket 3 (CDF Oxblood/MTP)";
		uniformClass="tmtm_u_vkpo_jacket_winter_OxbloodMTP_3";
		picture="";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_oxblood_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_oxblood_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_mtp_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\ra_Gloves_Shoes_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\6b51_s_CO.paa"
		};
	};
	class tmtm_vkpo_jacket_winter_MTP_3: CUP_U_O_RUS_Soldier_VKPO_Jacket_Winter_4 {
		author="trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="VKPO Winter Jacket 3 (MTP)";
		uniformClass="tmtm_u_vkpo_jacket_winter_MTP_3";
		picture="";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_mtp_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_mtp_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_mtp_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\ra_Gloves_Shoes_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\6b51_s_CO.paa"
		};
	};
	class tmtm_vkpo_jacket_winter_MTPForest_3: CUP_U_O_RUS_Soldier_VKPO_Jacket_Winter_4 {
		author="trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="VKPO Winter Jacket 3 (MTP/CDF Forest)";
		uniformClass="tmtm_u_vkpo_jacket_winter_MTPForest_3";
		picture="";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_mtp_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_mtp_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_forest_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\ra_Gloves_Shoes_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\6b51_s_CO.paa"
		};
	};
	class tmtm_vkpo_jacket_winter_MTPMountain_3: CUP_U_O_RUS_Soldier_VKPO_Jacket_Winter_4 {
		author="trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="VKPO Winter Jacket 3 (MTP/CDF Mountain)";
		uniformClass="tmtm_u_vkpo_jacket_winter_MTPMountain_3";
		picture="";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_mtp_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_mtp_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_mountain_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\ra_Gloves_Shoes_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\6b51_s_CO.paa"
		};
	};
	class tmtm_vkpo_jacket_winter_MTPOxblood_3: CUP_U_O_RUS_Soldier_VKPO_Jacket_Winter_4 {
		author="trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="VKPO Winter Jacket 3 (MTP/CDF Oxblood)";
		uniformClass="tmtm_u_vkpo_jacket_winter_MTPOxblood_3";
		picture="";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_mtp_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_mtp_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_oxblood_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\ra_Gloves_Shoes_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\6b51_s_CO.paa"
		};
	};
	class tmtm_vkpo_jacket_winter_blackForest_3: CUP_U_O_RUS_Soldier_VKPO_Jacket_Winter_4 {
		author="trenchgun";

		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="VKPO Winter Jacket 3 (Black/CDF Forest)";
		uniformClass="tmtm_u_vkpo_jacket_winter_blackForest_3";
		picture="";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_black_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_black_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_forest_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\ra_Gloves_Shoes_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\6b51_s_CO.paa"
		};
	};
	class tmtm_vkpo_jacket_winter_blackMountain_3: CUP_U_O_RUS_Soldier_VKPO_Jacket_Winter_4 {
		author="trenchgun";

		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="VKPO Winter Jacket 3 (Black/CDF Mountain)";
		uniformClass="tmtm_u_vkpo_jacket_winter_blackMountain_3";
		picture="";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_black_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_black_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_mountain_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\ra_Gloves_Shoes_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\6b51_s_CO.paa"
		};
	};
	class tmtm_vkpo_jacket_winter_blackOxblood_3: CUP_U_O_RUS_Soldier_VKPO_Jacket_Winter_4 {
		author="trenchgun";

		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="VKPO Winter Jacket 3 (Black/CDF Oxblood)";
		uniformClass="tmtm_u_vkpo_jacket_winter_blackOxblood_3";
		picture="";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_black_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_black_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_oxblood_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\ra_Gloves_Shoes_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\6b51_s_CO.paa"
		};
	};
	class tmtm_vkpo_jacket_winter_blackMTP_3: CUP_U_O_RUS_Soldier_VKPO_Jacket_Winter_4 {
		author="trenchgun";

		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="VKPO Winter Jacket 3 (Black/MTP)";
		uniformClass="tmtm_u_vkpo_jacket_winter_blackMTP_3";
		picture="";
		hiddenSelectionsTextures[]={
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_black_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_black_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_mtp_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\ra_Gloves_Shoes_s_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\6b51_s_CO.paa"
		};
	};
	

	class CUP_U_O_RUS_Soldier_VKPO_Winter_1;
	/*
	hiddenSelectionsTextures[] = {
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\VKPO_Winter\data\ra_VKPO_Jacket_w_CO.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\VKPO_Winter\data\ra_VKPO_Jacket_hands_w_CO.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\ra_VKPO_Pants_w_CO.paa"
	};
	*/
	class CUP_U_O_RUS_Soldier_VKPO_Winter_2;
	/*
	hiddenSelectionsTextures[] = { 
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\VKPO_Winter\data\ra_VKPO_Jacket_w_CO.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\VKPO_Winter\data\ra_VKPO_Jacket_hands_w_CO.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\ra_VKPO_Pants_w_CO.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\ra_Gloves_Shoes_s_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\6b51_s_CO.paa"
	};
	*/
	class CUP_U_O_RUS_Soldier_VKPO_Winter_3;
	/*
	hiddenSelectionsTextures[] = {
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\VKPO_Winter\data\ra_VKPO_Jacket_w_CO.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\VKPO_Winter\data\ra_VKPO_Jacket_hands_w_CO.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\ra_VKPO_Pants_w_CO.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\ra_Gloves_Shoes_s_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\6b51_s_CO.paa"
	};
	*/
	class CUP_U_O_RUS_Soldier_VKPO_Winter_4;
	/*
	hiddenSelectionsTextures[] = {
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\VKPO_Winter\data\ra_VKPO_Jacket_w_CO.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\VKPO_Winter\data\ra_VKPO_Jacket_hands_w_CO.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\ra_VKPO_Pants_w_CO.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\ra_Gloves_Shoes_s_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\6b51_s_CO.paa"
	};
	*/
};
