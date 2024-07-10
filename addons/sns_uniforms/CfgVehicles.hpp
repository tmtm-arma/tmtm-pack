class CfgVehicles
{
    class B_Soldier_base_F;

	///////////////////////////////////////////////////////////////////
	// Base variants

	class tmtm_bdu_base: B_Soldier_base_F
	{
		scope=0;
		selectionClan="";
		model="\simc_uaf_93\dcu.p3d";

		modelSides[]={6};

		hiddenSelections[]= {
			"camo",
			"camo2",
			"rank",
			"insignia",
			"nom",
			"gas",
			"clan"
		};
		hiddenSelectionsTextures[]= {
			"\simc_uaf_81\data\bdu_co.paa",
			"\simc_uaf_81\data\bdu_co.paa",
			"",
			"",
			"",
			"",
			""
		};

		class Wounds {
			tex[]={};
			mat[]= {
				"simc_uaf_81\data\bdu.rvmat",
				"simc_uaf_81\data\bdu_verwundet.rvmat",
				"simc_uaf_81\data\bdu_verwundet.rvmat",
				"simc_uaf_81\data\bdu.rvmat",
				"simc_uaf_81\data\bdu_verwundet.rvmat",
				"simc_uaf_81\data\bdu_verwundet.rvmat",
				"a3\characters_f\heads\data\hl_white_bald_muscular.rvmat",
				"a3\characters_f\heads\data\hl_white_bald_muscular_injury.rvmat",
				"a3\characters_f\heads\data\hl_white_bald_muscular_injury.rvmat",
				"a3\characters_f\heads\data\hl_black_bald_muscular.rvmat",
				"a3\characters_f\heads\data\hl_black_bald_muscular_injury.rvmat",
				"a3\characters_f\heads\data\hl_black_bald_muscular_injury.rvmat",
				"a3\characters_f\heads\data\hl_white_hairy_muscular.rvmat",
				"a3\characters_f\heads\data\hl_white_hairy_muscular_injury.rvmat",
				"a3\characters_f\heads\data\hl_white_hairy_muscular_injury.rvmat",
				"a3\characters_f\heads\data\hl_white_old.rvmat",
				"a3\characters_f\heads\data\hl_white_old_injury.rvmat",
				"a3\characters_f\heads\data\hl_white_old_injury.rvmat",
				"a3\characters_f\heads\data\hl_asian_bald_muscular.rvmat",
				"a3\characters_f\heads\data\hl_asian_bald_muscular_injury.rvmat",
				"a3\characters_f\heads\data\hl_asian_bald_muscular_injury.rvmat"
			};
		};
	};

	class tmtm_bdu_late_base: tmtm_bdu_base
	{
		scope=0;
		selectionClan="clan";

		hiddenSelections[]= {
			"camo",
			"camo2",
			"rank",
			"insignia",
			"nom",
			"gas"
		};

		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_81\data\bdu_co.paa",
			"\simc_uaf_81\data\bdu_co.paa",
			"",
			"",
			"",
			""
		};
	};

	class tmtm_bdu_roll_base: tmtm_bdu_base
	{
		scope=0;
		model="\simc_uaf_81\bdu_erla_low.p3d";
	};

	class tmtm_bdu_roll_high_base: tmtm_bdu_base
	{
		scope=0;
		model="\simc_uaf_81\bdu_erla_trop.p3d";
	};

	class tmtm_bdu_roll_highf_base: tmtm_bdu_base
	{
		scope=0;
		model="\simc_uaf_81\bdu_erla_roll.p3d";
	};

	class tmtm_bdu_kneepad_base: tmtm_bdu_late_base
	{
		scope=0;
		model="\simc_uaf_93\dcu_knee.p3d";
	};

	class tmtm_bdu_kneepad_roll_base: tmtm_bdu_late_base
	{
		scope=0;
		model="\simc_uaf_93\dcu_knee_trop.p3d";
	};

	///////////////////////////////////////////////////////////////////
	// Textures

	// # Black
	class tmtm_bdu_black: tmtm_bdu_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		
		author="simcardo, erem2k";

		displayName="BDU, Black";
		picture="";

		uniformClass="TODO";

		hiddenSelectionsTextures[]={
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_black_co.paa",
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_black_co.paa"
		};
	};

	class tmtm_bdu_roll_black: tmtm_bdu_roll_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		
		author="simcardo, erem2k";

		displayName="BDU, Black (Rolled)";
		picture="";

		uniformClass="TODO";

		hiddenSelectionsTextures[]={
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_black_co.paa",
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_black_co.paa"
		};
	};

	class tmtm_bdu_roll_high_black: tmtm_bdu_roll_high_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		
		author="simcardo, erem2k";

		displayName="BDU, Black (Rolled, High)";
		picture="";

		uniformClass="TODO";

		hiddenSelectionsTextures[]={
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_black_co.paa",
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_black_co.paa"
		};
	};

	class tmtm_bdu_roll_highf_black: tmtm_bdu_roll_highf_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		
		author="simcardo, erem2k";

		displayName="BDU, Black (Rolled, High)";
		picture="";

		uniformClass="TODO";

		hiddenSelectionsTextures[]={
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_black_co.paa",
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_black_co.paa"
		};
	};

	class tmtm_bdu_kneepad_black: tmtm_bdu_kneepad_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		
		author="simcardo, erem2k";

		displayName="BDU, Black (Kneepads)";
		picture="";

		uniformClass="TODO";

		hiddenSelectionsTextures[]={
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_black_co.paa",
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_black_co.paa"
		};
	};

	class tmtm_bdu_kneepad_roll_black: tmtm_bdu_kneepad_roll_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		
		author="simcardo, erem2k";

		displayName="BDU, Black (Kneepads, Rolled)";
		picture="";

		uniformClass="TODO";

		hiddenSelectionsTextures[]={
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_black_co.paa",
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_black_co.paa"
		};
	};

	// # Dubok Blue
	class tmtm_bdu_dubokb: tmtm_bdu_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		
		author="simcardo, erem2k";

		displayName="BDU, Dubok Blue";
		picture="";

		uniformClass="TODO";

		hiddenSelectionsTextures[]={
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokb_co.paa",
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokb_co.paa"
		};
	};

	class tmtm_bdu_roll_dubokb: tmtm_bdu_roll_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		
		author="simcardo, erem2k";

		displayName="BDU, Dubok Blue (Rolled)";
		picture="";

		uniformClass="TODO";

		hiddenSelectionsTextures[]={
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokb_co.paa",
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokb_co.paa"
		};
	};

	class tmtm_bdu_roll_high_dubokb: tmtm_bdu_roll_high_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		
		author="simcardo, erem2k";

		displayName="BDU, Dubok Blue (Rolled, High)";
		picture="";

		uniformClass="TODO";

		hiddenSelectionsTextures[]={
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokb_co.paa",
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokb_co.paa"
		};
	};

	class tmtm_bdu_roll_highf_dubokb: tmtm_bdu_roll_highf_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		
		author="simcardo, erem2k";

		displayName="BDU, Dubok Blue (Rolled, High)";
		picture="";

		uniformClass="TODO";

		hiddenSelectionsTextures[]={
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokb_co.paa",
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokb_co.paa"
		};
	};

	class tmtm_bdu_kneepad_dubokb: tmtm_bdu_kneepad_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		
		author="simcardo, erem2k";

		displayName="BDU, Dubok Blue (Kneepads)";
		picture="";

		uniformClass="TODO";

		hiddenSelectionsTextures[]={
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokb_co.paa",
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokb_co.paa"
		};
	};

	class tmtm_bdu_kneepad_roll_dubokb: tmtm_bdu_kneepad_roll_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		
		author="simcardo, erem2k";

		displayName="BDU, Dubok Blue (Kneepads, Rolled)";
		picture="";

		uniformClass="TODO";

		hiddenSelectionsTextures[]={
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokb_co.paa",
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokb_co.paa"
		};
	};

	// # Dubok Blue/Teal
	class tmtm_bdu_dubokb_mix: tmtm_bdu_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		
		author="simcardo, erem2k";

		displayName="BDU, Dubok Blue/Teal";
		picture="";

		uniformClass="TODO";

		hiddenSelectionsTextures[]={
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokb_mix_co.paa",
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokb_mix_co.paa"
		};
	};

	class tmtm_bdu_roll_dubokb_mix: tmtm_bdu_roll_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		
		author="simcardo, erem2k";

		displayName="BDU, Dubok Blue/Teal (Rolled)";
		picture="";

		uniformClass="TODO";

		hiddenSelectionsTextures[]={
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokb_mix_co.paa",
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokb_mix_co.paa"
		};
	};

	class tmtm_bdu_roll_high_dubokb_mix: tmtm_bdu_roll_high_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		
		author="simcardo, erem2k";

		displayName="BDU, Dubok Blue/Teal (Rolled, High)";
		picture="";

		uniformClass="TODO";

		hiddenSelectionsTextures[]={
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokb_mix_co.paa",
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokb_mix_co.paa"
		};
	};

	class tmtm_bdu_roll_highf_dubokb_mix: tmtm_bdu_roll_highf_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		
		author="simcardo, erem2k";

		displayName="BDU, Dubok Blue/Teal (Rolled, High)";
		picture="";

		uniformClass="TODO";

		hiddenSelectionsTextures[]={
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokb_mix_co.paa",
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokb_mix_co.paa"
		};
	};

	class tmtm_bdu_kneepad_dubokb_mix: tmtm_bdu_kneepad_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		
		author="simcardo, erem2k";

		displayName="BDU, Dubok Blue/Teal (Kneepads)";
		picture="";

		uniformClass="TODO";

		hiddenSelectionsTextures[]={
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokb_mix_co.paa",
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokb_mix_co.paa"
		};
	};

	class tmtm_bdu_kneepad_roll_dubokb_mix: tmtm_bdu_kneepad_roll_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		
		author="simcardo, erem2k";

		displayName="BDU, Dubok Blue/Teal (Kneepads, Rolled)";
		picture="";

		uniformClass="TODO";

		hiddenSelectionsTextures[]={
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokb_mix_co.paa",
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokb_mix_co.paa"
		};
	};

	// # Dubok Gray
	class tmtm_bdu_dubokgb: tmtm_bdu_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		
		author="simcardo, erem2k";

		displayName="BDU, Dubok Gray";
		picture="";

		uniformClass="TODO";

		hiddenSelectionsTextures[]={
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokgb_co.paa",
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokgb_co.paa"
		};
	};

	class tmtm_bdu_roll_dubokgb: tmtm_bdu_roll_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		
		author="simcardo, erem2k";

		displayName="BDU, Dubok Gray (Rolled)";
		picture="";

		uniformClass="TODO";

		hiddenSelectionsTextures[]={
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokgb_co.paa",
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokgb_co.paa"
		};
	};

	class tmtm_bdu_roll_high_dubokgb: tmtm_bdu_roll_high_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		
		author="simcardo, erem2k";

		displayName="BDU, Dubok Gray (Rolled, High)";
		picture="";

		uniformClass="TODO";

		hiddenSelectionsTextures[]={
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokgb_co.paa",
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokgb_co.paa"
		};
	};

	class tmtm_bdu_roll_highf_dubokgb: tmtm_bdu_roll_highf_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		
		author="simcardo, erem2k";

		displayName="BDU, Dubok Gray (Rolled, High)";
		picture="";

		uniformClass="TODO";

		hiddenSelectionsTextures[]={
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokgb_co.paa",
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokgb_co.paa"
		};
	};

	class tmtm_bdu_kneepad_dubokgb: tmtm_bdu_kneepad_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		
		author="simcardo, erem2k";

		displayName="BDU, Dubok Gray (Kneepads)";
		picture="";

		uniformClass="TODO";

		hiddenSelectionsTextures[]={
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokgb_co.paa",
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokgb_co.paa"
		};
	};

	class tmtm_bdu_kneepad_roll_dubokgb: tmtm_bdu_kneepad_roll_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		
		author="simcardo, erem2k";

		displayName="BDU, Dubok Gray (Kneepads, Rolled)";
		picture="";

		uniformClass="TODO";

		hiddenSelectionsTextures[]={
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokgb_co.paa",
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokgb_co.paa"
		};
	};

	// # Dubok Gray/Pale
	class tmtm_bdu_dubokgb_mix_a: tmtm_bdu_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		
		author="simcardo, erem2k";

		displayName="BDU, Dubok Gray/Pale";
		picture="";

		uniformClass="TODO";

		hiddenSelectionsTextures[]={
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokgb_mix_a_co.paa",
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokgb_mix_a_co.paa"
		};
	};

	class tmtm_bdu_roll_dubokgb_mix_a: tmtm_bdu_roll_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		
		author="simcardo, erem2k";

		displayName="BDU, Dubok Gray/Pale (Rolled)";
		picture="";

		uniformClass="TODO";

		hiddenSelectionsTextures[]={
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokgb_mix_a_co.paa",
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokgb_mix_a_co.paa"
		};
	};

	class tmtm_bdu_roll_high_dubokgb_mix_a: tmtm_bdu_roll_high_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		
		author="simcardo, erem2k";

		displayName="BDU, Dubok Gray/Pale (Rolled, High)";
		picture="";

		uniformClass="TODO";

		hiddenSelectionsTextures[]={
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokgb_mix_a_co.paa",
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokgb_mix_a_co.paa"
		};
	};

	class tmtm_bdu_roll_highf_dubokgb_mix_a: tmtm_bdu_roll_highf_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		
		author="simcardo, erem2k";

		displayName="BDU, Dubok Gray/Pale (Rolled, High)";
		picture="";

		uniformClass="TODO";

		hiddenSelectionsTextures[]={
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokgb_mix_a_co.paa",
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokgb_mix_a_co.paa"
		};
	};

	class tmtm_bdu_kneepad_dubokgb_mix_a: tmtm_bdu_kneepad_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		
		author="simcardo, erem2k";

		displayName="BDU, Dubok Gray/Pale (Kneepads)";
		picture="";

		uniformClass="TODO";

		hiddenSelectionsTextures[]={
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokgb_mix_a_co.paa",
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokgb_mix_a_co.paa"
		};
	};

	class tmtm_bdu_kneepad_roll_dubokgb_mix_a: tmtm_bdu_kneepad_roll_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		
		author="simcardo, erem2k";

		displayName="BDU, Dubok Gray/Pale (Kneepads, Rolled)";
		picture="";

		uniformClass="TODO";

		hiddenSelectionsTextures[]={
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokgb_mix_a_co.paa",
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokgb_mix_a_co.paa"
		};
	};

	// # Dubok Gray/Black
	class tmtm_bdu_dubokgb_mix_b: tmtm_bdu_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		
		author="simcardo, erem2k";

		displayName="BDU, Dubok Gray/Black";
		picture="";

		uniformClass="TODO";

		hiddenSelectionsTextures[]={
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokgb_mix_b_co.paa",
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokgb_mix_b_co.paa"
		};
	};

	class tmtm_bdu_roll_dubokgb_mix_b: tmtm_bdu_roll_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		
		author="simcardo, erem2k";

		displayName="BDU, Dubok Gray/Black (Rolled)";
		picture="";

		uniformClass="TODO";

		hiddenSelectionsTextures[]={
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokgb_mix_b_co.paa",
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokgb_mix_b_co.paa"
		};
	};

	class tmtm_bdu_roll_high_dubokgb_mix_b: tmtm_bdu_roll_high_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		
		author="simcardo, erem2k";

		displayName="BDU, Dubok Gray/Black (Rolled, High)";
		picture="";

		uniformClass="TODO";

		hiddenSelectionsTextures[]={
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokgb_mix_b_co.paa",
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokgb_mix_b_co.paa"
		};
	};

	class tmtm_bdu_roll_highf_dubokgb_mix_b: tmtm_bdu_roll_highf_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		
		author="simcardo, erem2k";

		displayName="BDU, Dubok Gray/Black (Rolled, High)";
		picture="";

		uniformClass="TODO";

		hiddenSelectionsTextures[]={
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokgb_mix_b_co.paa",
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokgb_mix_b_co.paa"
		};
	};

	class tmtm_bdu_kneepad_dubokgb_mix_b: tmtm_bdu_kneepad_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		
		author="simcardo, erem2k";

		displayName="BDU, Dubok Gray/Black (Kneepads)";
		picture="";

		uniformClass="TODO";

		hiddenSelectionsTextures[]={
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokgb_mix_b_co.paa",
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokgb_mix_b_co.paa"
		};
	};

	class tmtm_bdu_kneepad_roll_dubokgb_mix_b: tmtm_bdu_kneepad_roll_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		
		author="simcardo, erem2k";

		displayName="BDU, Dubok Gray/Black (Kneepads, Rolled)";
		picture="";

		uniformClass="TODO";

		hiddenSelectionsTextures[]={
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokgb_mix_b_co.paa",
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokgb_mix_b_co.paa"
		};
	};

	// # Dubok Pale
	class tmtm_bdu_dubokpb: tmtm_bdu_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		
		author="simcardo, erem2k";

		displayName="BDU, Dubok Pale";
		picture="";

		uniformClass="TODO";

		hiddenSelectionsTextures[]={
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokpb_co.paa",
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokpb_co.paa"
		};
	};

	class tmtm_bdu_roll_dubokpb: tmtm_bdu_roll_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		
		author="simcardo, erem2k";

		displayName="BDU, Dubok Pale (Rolled)";
		picture="";

		uniformClass="TODO";

		hiddenSelectionsTextures[]={
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokpb_co.paa",
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokpb_co.paa"
		};
	};

	class tmtm_bdu_roll_high_dubokpb: tmtm_bdu_roll_high_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		
		author="simcardo, erem2k";

		displayName="BDU, Dubok Pale (Rolled, High)";
		picture="";

		uniformClass="TODO";

		hiddenSelectionsTextures[]={
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokpb_co.paa",
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokpb_co.paa"
		};
	};

	class tmtm_bdu_roll_highf_dubokpb: tmtm_bdu_roll_highf_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		
		author="simcardo, erem2k";

		displayName="BDU, Dubok Pale (Rolled, High)";
		picture="";

		uniformClass="TODO";

		hiddenSelectionsTextures[]={
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokpb_co.paa",
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokpb_co.paa"
		};
	};

	class tmtm_bdu_kneepad_dubokpb: tmtm_bdu_kneepad_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		
		author="simcardo, erem2k";

		displayName="BDU, Dubok Pale (Kneepads)";
		picture="";

		uniformClass="TODO";

		hiddenSelectionsTextures[]={
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokpb_co.paa",
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokpb_co.paa"
		};
	};

	class tmtm_bdu_kneepad_roll_dubokpb: tmtm_bdu_kneepad_roll_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		
		author="simcardo, erem2k";

		displayName="BDU, Dubok Pale (Kneepads, Rolled)";
		picture="";

		uniformClass="TODO";

		hiddenSelectionsTextures[]={
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokpb_co.paa",
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokpb_co.paa"
		};
	};

	// # Dubok Pale/Gray
	class tmtm_bdu_dubokpb_mix: tmtm_bdu_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		
		author="simcardo, erem2k";

		displayName="BDU, Dubok Pale/Gray";
		picture="";

		uniformClass="TODO";

		hiddenSelectionsTextures[]={
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokpb_mix_co.paa",
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokpb_mix_co.paa"
		};
	};

	class tmtm_bdu_roll_dubokpb_mix: tmtm_bdu_roll_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		
		author="simcardo, erem2k";

		displayName="BDU, Dubok Pale/Gray (Rolled)";
		picture="";

		uniformClass="TODO";

		hiddenSelectionsTextures[]={
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokpb_mix_co.paa",
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokpb_mix_co.paa"
		};
	};

	class tmtm_bdu_roll_high_dubokpb_mix: tmtm_bdu_roll_high_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		
		author="simcardo, erem2k";

		displayName="BDU, Dubok Pale/Gray (Rolled, High)";
		picture="";

		uniformClass="TODO";

		hiddenSelectionsTextures[]={
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokpb_mix_co.paa",
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokpb_mix_co.paa"
		};
	};

	class tmtm_bdu_roll_highf_dubokpb_mix: tmtm_bdu_roll_highf_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		
		author="simcardo, erem2k";

		displayName="BDU, Dubok Pale/Gray (Rolled, High)";
		picture="";

		uniformClass="TODO";

		hiddenSelectionsTextures[]={
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokpb_mix_co.paa",
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokpb_mix_co.paa"
		};
	};

	class tmtm_bdu_kneepad_dubokpb_mix: tmtm_bdu_kneepad_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		
		author="simcardo, erem2k";

		displayName="BDU, Dubok Pale/Gray (Kneepads)";
		picture="";

		uniformClass="TODO";

		hiddenSelectionsTextures[]={
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokpb_mix_co.paa",
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokpb_mix_co.paa"
		};
	};

	class tmtm_bdu_kneepad_roll_dubokpb_mix: tmtm_bdu_kneepad_roll_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		
		author="simcardo, erem2k";

		displayName="BDU, Dubok Pale/Gray (Kneepads, Rolled)";
		picture="";

		uniformClass="TODO";

		hiddenSelectionsTextures[]={
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokpb_mix_co.paa",
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokpb_mix_co.paa"
		};
	};

	// # Dubok Teal
	class tmtm_bdu_dubokt: tmtm_bdu_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		
		author="simcardo, erem2k";

		displayName="BDU, Dubok Teal";
		picture="";

		uniformClass="TODO";

		hiddenSelectionsTextures[]={
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokt_co.paa",
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokt_co.paa"
		};
	};

	class tmtm_bdu_roll_dubokt: tmtm_bdu_roll_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		
		author="simcardo, erem2k";

		displayName="BDU, Dubok Teal (Rolled)";
		picture="";

		uniformClass="TODO";

		hiddenSelectionsTextures[]={
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokt_co.paa",
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokt_co.paa"
		};
	};

	class tmtm_bdu_roll_high_dubokt: tmtm_bdu_roll_high_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		
		author="simcardo, erem2k";

		displayName="BDU, Dubok Teal (Rolled, High)";
		picture="";

		uniformClass="TODO";

		hiddenSelectionsTextures[]={
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokt_co.paa",
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokt_co.paa"
		};
	};

	class tmtm_bdu_roll_highf_dubokt: tmtm_bdu_roll_highf_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		
		author="simcardo, erem2k";

		displayName="BDU, Dubok Teal (Rolled, High)";
		picture="";

		uniformClass="TODO";

		hiddenSelectionsTextures[]={
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokt_co.paa",
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokt_co.paa"
		};
	};

	class tmtm_bdu_kneepad_dubokt: tmtm_bdu_kneepad_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		
		author="simcardo, erem2k";

		displayName="BDU, Dubok Teal (Kneepads)";
		picture="";

		uniformClass="TODO";

		hiddenSelectionsTextures[]={
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokt_co.paa",
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokt_co.paa"
		};
	};

	class tmtm_bdu_kneepad_roll_dubokt: tmtm_bdu_kneepad_roll_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		
		author="simcardo, erem2k";

		displayName="BDU, Dubok Teal (Kneepads, Rolled)";
		picture="";

		uniformClass="TODO";

		hiddenSelectionsTextures[]={
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokt_co.paa",
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokt_co.paa"
		};
	};

	// # Dubok Teal (Mix)
	class tmtm_bdu_dubokt_mix: tmtm_bdu_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		
		author="simcardo, erem2k";

		displayName="BDU, Dubok Teal/Blue";
		picture="";

		uniformClass="TODO";

		hiddenSelectionsTextures[]={
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokt_mix_co.paa",
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokt_mix_co.paa"
		};
	};

	class tmtm_bdu_roll_dubokt_mix: tmtm_bdu_roll_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		
		author="simcardo, erem2k";

		displayName="BDU, Dubok Teal/Blue (Rolled)";
		picture="";

		uniformClass="TODO";

		hiddenSelectionsTextures[]={
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokt_mix_co.paa",
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokt_mix_co.paa"
		};
	};

	class tmtm_bdu_roll_high_dubokt_mix: tmtm_bdu_roll_high_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		
		author="simcardo, erem2k";

		displayName="BDU, Dubok Teal/Blue (Rolled, High)";
		picture="";

		uniformClass="TODO";

		hiddenSelectionsTextures[]={
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokt_mix_co.paa",
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokt_mix_co.paa"
		};
	};

	class tmtm_bdu_roll_highf_dubokt_mix: tmtm_bdu_roll_highf_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		
		author="simcardo, erem2k";

		displayName="BDU, Dubok Teal/Blue (Rolled, High)";
		picture="";

		uniformClass="TODO";

		hiddenSelectionsTextures[]={
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokt_mix_co.paa",
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokt_mix_co.paa"
		};
	};

	class tmtm_bdu_kneepad_dubokt_mix: tmtm_bdu_kneepad_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		
		author="simcardo, erem2k";

		displayName="BDU, Dubok Teal/Blue (Kneepads)";
		picture="";

		uniformClass="TODO";

		hiddenSelectionsTextures[]={
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokt_mix_co.paa",
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokt_mix_co.paa"
		};
	};

	class tmtm_bdu_kneepad_roll_dubokt_mix: tmtm_bdu_kneepad_roll_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		
		author="simcardo, erem2k";

		displayName="BDU, Dubok Teal/Blue (Kneepads, Rolled)";
		picture="";

		uniformClass="TODO";

		hiddenSelectionsTextures[]={
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokt_mix_co.paa",
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokt_mix_co.paa"
		};
	};
};