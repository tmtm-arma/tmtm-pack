class CfgWeapons
{

	class U_BasicBody: Uniform_Base
	{
		class ItemInfo;
	};

	class tmtm_u_bdu_base: U_BasicBody
	{
		scope=0;
		model="\simc_uaf_81\suitpack_bdu.p3d";

		hiddenSelections[]= {
			"camo"
		};

		class ItemInfo: ItemInfo
		{
			containerClass="Supply30";
			mass=20;
		};
	};

	///////////////////////////////////////////////////////////////////
	// Textures

	// # Black
	class tmtm_u_bdu_black: tmtm_u_bdu_base
	{
		scope=2;
		scopeArsenal=2;

		author="Casper_TFG, erem2k";

		displayName="Battledress Uniform, Black";
		descriptionShort="Uniform, Battledress, Black";
		picture="TODOPREVIEW";

		hiddenSelectionsTextures[]={
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_black_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="tmtm_bdu_black";
		};
	};
	
	class tmtm_u_bdu_roll_black: tmtm_u_bdu_black
	{
		scope=2;
		scopeArsenal=2;

		author="Casper_TFG, erem2k";

		displayName="Battledress Uniform, Black (Rolled)";

		class ItemInfo: ItemInfo
		{
			uniformClass="tmtm_bdu_roll_black";
		};
	};
	
	class tmtm_u_bdu_roll_high_black: tmtm_u_bdu_black
	{
		scope=2;
		scopeArsenal=2;

		author="Casper_TFG, erem2k";

		displayName="Battledress Uniform, Black (Rolled, High)";

		class ItemInfo: ItemInfo
		{
			uniformClass="tmtm_bdu_roll_high_black";
		};
	};

	class tmtm_u_bdu_roll_highf_black: tmtm_u_bdu_black
	{
		scope=2;
		scopeArsenal=2;

		author="Casper_TFG, erem2k";

		displayName="Battledress Uniform, Black (Rolled, High)";

		class ItemInfo: ItemInfo
		{
			uniformClass="tmtm_bdu_roll_highf_black";
		};
	};

	class tmtm_u_bdu_kneepad_black: tmtm_u_bdu_black
	{
		scope=2;
		scopeArsenal=2;

		author="Casper_TFG, erem2k";

		displayName="Battledress Uniform, Black (Kneepads)";

		class ItemInfo: ItemInfo
		{
			uniformClass="tmtm_bdu_kneepad_black";
		};
	};

	class tmtm_u_bdu_kneepad_roll_black: tmtm_u_bdu_black
	{
		scope=2;
		scopeArsenal=2;

		author="Casper_TFG, erem2k";

		displayName="Battledress Uniform, Black (Kneepads, Rolled)";

		class ItemInfo: ItemInfo
		{
			uniformClass="tmtm_bdu_kneepad_roll_black";
		};
	};

	// # Dubok Blue
	class tmtm_u_bdu_dubokb: tmtm_u_bdu_base
	{
		scope=2;
		scopeArsenal=2;

		author="Casper_TFG, erem2k";

		displayName="Battledress Uniform, Dubok Blue";
		descriptionShort="Uniform, Battledress, Dubok Blue";
		picture="TODOPREVIEW";

		hiddenSelectionsTextures[]={
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokb_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="tmtm_bdu_dubokb";
		};
	};
	
	class tmtm_u_bdu_roll_dubokb: tmtm_u_bdu_dubokb
	{
		scope=2;
		scopeArsenal=2;

		author="Casper_TFG, erem2k";

		displayName="Battledress Uniform, Dubok Blue (Rolled)";

		class ItemInfo: ItemInfo
		{
			uniformClass="tmtm_bdu_roll_dubokb";
		};
	};
	
	class tmtm_u_bdu_roll_high_dubokb: tmtm_u_bdu_dubokb
	{
		scope=2;
		scopeArsenal=2;

		author="Casper_TFG, erem2k";

		displayName="Battledress Uniform, Dubok Blue (Rolled, High)";

		class ItemInfo: ItemInfo
		{
			uniformClass="tmtm_bdu_roll_high_dubokb";
		};
	};

	class tmtm_u_bdu_roll_highf_dubokb: tmtm_u_bdu_dubokb
	{
		scope=2;
		scopeArsenal=2;

		author="Casper_TFG, erem2k";

		displayName="Battledress Uniform, Dubok Blue (Rolled, High)";

		class ItemInfo: ItemInfo
		{
			uniformClass="tmtm_bdu_roll_highf_dubokb";
		};
	};

	class tmtm_u_bdu_kneepad_dubokb: tmtm_u_bdu_dubokb
	{
		scope=2;
		scopeArsenal=2;

		author="Casper_TFG, erem2k";

		displayName="Battledress Uniform, Dubok Blue (Kneepads)";

		class ItemInfo: ItemInfo
		{
			uniformClass="tmtm_bdu_kneepad_dubokb";
		};
	};

	class tmtm_u_bdu_kneepad_roll_dubokb: tmtm_u_bdu_dubokb
	{
		scope=2;
		scopeArsenal=2;

		author="Casper_TFG, erem2k";

		displayName="Battledress Uniform, Dubok Blue (Kneepads, Rolled)";

		class ItemInfo: ItemInfo
		{
			uniformClass="tmtm_bdu_kneepad_roll_dubokb";
		};
	};

	// # Dubok Blue/Teal
	class tmtm_u_bdu_dubokb_mix: tmtm_u_bdu_base
	{
		scope=2;
		scopeArsenal=2;

		author="Casper_TFG, erem2k";

		displayName="Battledress Uniform, Dubok Blue/Teal";
		descriptionShort="Uniform, Battledress, Dubok Blue/Teal";
		picture="TODOPREVIEW";

		hiddenSelectionsTextures[]={
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokb_mix_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="tmtm_bdu_dubokb_mix";
		};
	};
	
	class tmtm_u_bdu_roll_dubokb_mix: tmtm_u_bdu_dubokb_mix
	{
		scope=2;
		scopeArsenal=2;

		author="Casper_TFG, erem2k";

		displayName="Battledress Uniform, Dubok Blue/Teal (Rolled)";

		class ItemInfo: ItemInfo
		{
			uniformClass="tmtm_bdu_roll_dubokb_mix";
		};
	};
	
	class tmtm_u_bdu_roll_high_dubokb_mix: tmtm_u_bdu_dubokb_mix
	{
		scope=2;
		scopeArsenal=2;

		author="Casper_TFG, erem2k";

		displayName="Battledress Uniform, Dubok Blue/Teal (Rolled, High)";

		class ItemInfo: ItemInfo
		{
			uniformClass="tmtm_bdu_roll_high_dubokb_mix";
		};
	};

	class tmtm_u_bdu_roll_highf_dubokb_mix: tmtm_u_bdu_dubokb_mix
	{
		scope=2;
		scopeArsenal=2;

		author="Casper_TFG, erem2k";

		displayName="Battledress Uniform, Dubok Blue/Teal (Rolled, High)";

		class ItemInfo: ItemInfo
		{
			uniformClass="tmtm_bdu_roll_highf_dubokb_mix";
		};
	};

	class tmtm_u_bdu_kneepad_dubokb_mix: tmtm_u_bdu_dubokb_mix
	{
		scope=2;
		scopeArsenal=2;

		author="Casper_TFG, erem2k";

		displayName="Battledress Uniform, Dubok Blue/Teal (Kneepads)";

		class ItemInfo: ItemInfo
		{
			uniformClass="tmtm_bdu_kneepad_dubokb_mix";
		};
	};

	class tmtm_u_bdu_kneepad_roll_dubokb_mix: tmtm_u_bdu_dubokb_mix
	{
		scope=2;
		scopeArsenal=2;

		author="Casper_TFG, erem2k";

		displayName="Battledress Uniform, Dubok Blue/Teal (Kneepads, Rolled)";

		class ItemInfo: ItemInfo
		{
			uniformClass="tmtm_bdu_kneepad_roll_dubokb_mix";
		};
	};

	// # Dubok Gray
	class tmtm_u_bdu_dubokgb: tmtm_u_bdu_base
	{
		scope=2;
		scopeArsenal=2;

		author="Casper_TFG, erem2k";

		displayName="Battledress Uniform, Dubok Gray";
		descriptionShort="Uniform, Battledress, Dubok Gray";
		picture="TODOPREVIEW";

		hiddenSelectionsTextures[]={
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokgb_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="tmtm_bdu_dubokgb";
		};
	};
	
	class tmtm_u_bdu_roll_dubokgb: tmtm_u_bdu_dubokgb
	{
		scope=2;
		scopeArsenal=2;

		author="Casper_TFG, erem2k";

		displayName="Battledress Uniform, Dubok Gray (Rolled)";

		class ItemInfo: ItemInfo
		{
			uniformClass="tmtm_bdu_roll_dubokgb";
		};
	};
	
	class tmtm_u_bdu_roll_high_dubokgb: tmtm_u_bdu_dubokgb
	{
		scope=2;
		scopeArsenal=2;

		author="Casper_TFG, erem2k";

		displayName="Battledress Uniform, Dubok Gray (Rolled, High)";

		class ItemInfo: ItemInfo
		{
			uniformClass="tmtm_bdu_roll_high_dubokgb";
		};
	};

	class tmtm_u_bdu_roll_highf_dubokgb: tmtm_u_bdu_dubokgb
	{
		scope=2;
		scopeArsenal=2;

		author="Casper_TFG, erem2k";

		displayName="Battledress Uniform, Dubok Gray (Rolled, High)";

		class ItemInfo: ItemInfo
		{
			uniformClass="tmtm_bdu_roll_highf_dubokgb";
		};
	};

	class tmtm_u_bdu_kneepad_dubokgb: tmtm_u_bdu_dubokgb
	{
		scope=2;
		scopeArsenal=2;

		author="Casper_TFG, erem2k";

		displayName="Battledress Uniform, Dubok Gray (Kneepads)";

		class ItemInfo: ItemInfo
		{
			uniformClass="tmtm_bdu_kneepad_dubokgb";
		};
	};

	class tmtm_u_bdu_kneepad_roll_dubokgb: tmtm_u_bdu_dubokgb
	{
		scope=2;
		scopeArsenal=2;

		author="Casper_TFG, erem2k";

		displayName="Battledress Uniform, Dubok Gray (Kneepads, Rolled)";

		class ItemInfo: ItemInfo
		{
			uniformClass="tmtm_bdu_kneepad_roll_dubokgb";
		};
	};

	// # Dubok Gray/Pale
	class tmtm_u_bdu_dubokgb_mix_a: tmtm_u_bdu_base
	{
		scope=2;
		scopeArsenal=2;

		author="Casper_TFG, erem2k";

		displayName="Battledress Uniform, Dubok Gray/Pale";
		descriptionShort="Uniform, Battledress, Dubok Gray/Pale";
		picture="TODOPREVIEW";

		hiddenSelectionsTextures[]={
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokgb_mix_a_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="tmtm_bdu_dubokgb_mix_a";
		};
	};
	
	class tmtm_u_bdu_roll_dubokgb_mix_a: tmtm_u_bdu_dubokgb_mix_a
	{
		scope=2;
		scopeArsenal=2;

		author="Casper_TFG, erem2k";

		displayName="Battledress Uniform, Dubok Gray/Pale (Rolled)";

		class ItemInfo: ItemInfo
		{
			uniformClass="tmtm_bdu_roll_dubokgb_mix_a";
		};
	};
	
	class tmtm_u_bdu_roll_high_dubokgb_mix_a: tmtm_u_bdu_dubokgb_mix_a
	{
		scope=2;
		scopeArsenal=2;

		author="Casper_TFG, erem2k";

		displayName="Battledress Uniform, Dubok Gray/Pale (Rolled, High)";

		class ItemInfo: ItemInfo
		{
			uniformClass="tmtm_bdu_roll_high_dubokgb_mix_a";
		};
	};

	class tmtm_u_bdu_roll_highf_dubokgb_mix_a: tmtm_u_bdu_dubokgb_mix_a
	{
		scope=2;
		scopeArsenal=2;

		author="Casper_TFG, erem2k";

		displayName="Battledress Uniform, Dubok Gray/Pale (Rolled, High)";

		class ItemInfo: ItemInfo
		{
			uniformClass="tmtm_bdu_roll_highf_dubokgb_mix_a";
		};
	};

	class tmtm_u_bdu_kneepad_dubokgb_mix_a: tmtm_u_bdu_dubokgb_mix_a
	{
		scope=2;
		scopeArsenal=2;

		author="Casper_TFG, erem2k";

		displayName="Battledress Uniform, Dubok Gray/Pale (Kneepads)";

		class ItemInfo: ItemInfo
		{
			uniformClass="tmtm_bdu_kneepad_dubokgb_mix_a";
		};
	};

	class tmtm_u_bdu_kneepad_roll_dubokgb_mix_a: tmtm_u_bdu_dubokgb_mix_a
	{
		scope=2;
		scopeArsenal=2;

		author="Casper_TFG, erem2k";

		displayName="Battledress Uniform, Dubok Gray/Pale (Kneepads, Rolled)";

		class ItemInfo: ItemInfo
		{
			uniformClass="tmtm_bdu_kneepad_roll_dubokgb_mix_a";
		};
	};

	// # Dubok Gray/Black
	class tmtm_u_bdu_dubokgb_mix_b: tmtm_u_bdu_base
	{
		scope=2;
		scopeArsenal=2;

		author="Casper_TFG, erem2k";

		displayName="Battledress Uniform, Dubok Gray/Black";
		descriptionShort="Uniform, Battledress, dubokgb_mix_b";
		picture="TODOPREVIEW";

		hiddenSelectionsTextures[]={
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokgb_mix_b_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="tmtm_bdu_dubokgb_mix_b";
		};
	};
	
	class tmtm_u_bdu_roll_dubokgb_mix_b: tmtm_u_bdu_dubokgb_mix_b
	{
		scope=2;
		scopeArsenal=2;

		author="Casper_TFG, erem2k";

		displayName="Battledress Uniform, Dubok Gray/Black (Rolled)";

		class ItemInfo: ItemInfo
		{
			uniformClass="tmtm_bdu_roll_dubokgb_mix_b";
		};
	};
	
	class tmtm_u_bdu_roll_high_dubokgb_mix_b: tmtm_u_bdu_dubokgb_mix_b
	{
		scope=2;
		scopeArsenal=2;

		author="Casper_TFG, erem2k";

		displayName="Battledress Uniform, Dubok Gray/Black (Rolled, High)";

		class ItemInfo: ItemInfo
		{
			uniformClass="tmtm_bdu_roll_high_dubokgb_mix_b";
		};
	};

	class tmtm_u_bdu_roll_highf_dubokgb_mix_b: tmtm_u_bdu_dubokgb_mix_b
	{
		scope=2;
		scopeArsenal=2;

		author="Casper_TFG, erem2k";

		displayName="Battledress Uniform, Dubok Gray/Black (Rolled, High)";

		class ItemInfo: ItemInfo
		{
			uniformClass="tmtm_bdu_roll_highf_dubokgb_mix_b";
		};
	};

	class tmtm_u_bdu_kneepad_dubokgb_mix_b: tmtm_u_bdu_dubokgb_mix_b
	{
		scope=2;
		scopeArsenal=2;

		author="Casper_TFG, erem2k";

		displayName="Battledress Uniform, Dubok Gray/Black (Kneepads)";

		class ItemInfo: ItemInfo
		{
			uniformClass="tmtm_bdu_kneepad_dubokgb_mix_b";
		};
	};

	class tmtm_u_bdu_kneepad_roll_dubokgb_mix_b: tmtm_u_bdu_dubokgb_mix_b
	{
		scope=2;
		scopeArsenal=2;

		author="Casper_TFG, erem2k";

		displayName="Battledress Uniform, Dubok Gray/Black (Kneepads, Rolled)";

		class ItemInfo: ItemInfo
		{
			uniformClass="tmtm_bdu_kneepad_roll_dubokgb_mix_b";
		};
	};

	// # Dubok Pale
	class tmtm_u_bdu_dubokpb: tmtm_u_bdu_base
	{
		scope=2;
		scopeArsenal=2;

		author="Casper_TFG, erem2k";

		displayName="Battledress Uniform, Dubok Pale";
		descriptionShort="Uniform, Battledress, Dubok Pale";
		picture="TODOPREVIEW";

		hiddenSelectionsTextures[]={
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokpb_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="tmtm_bdu_dubokpb";
		};
	};
	
	class tmtm_u_bdu_roll_dubokpb: tmtm_u_bdu_dubokpb
	{
		scope=2;
		scopeArsenal=2;

		author="Casper_TFG, erem2k";

		displayName="Battledress Uniform, Dubok Pale (Rolled)";

		class ItemInfo: ItemInfo
		{
			uniformClass="tmtm_bdu_roll_dubokpb";
		};
	};
	
	class tmtm_u_bdu_roll_high_dubokpb: tmtm_u_bdu_dubokpb
	{
		scope=2;
		scopeArsenal=2;

		author="Casper_TFG, erem2k";

		displayName="Battledress Uniform, Dubok Pale (Rolled, High)";

		class ItemInfo: ItemInfo
		{
			uniformClass="tmtm_bdu_roll_high_dubokpb";
		};
	};

	class tmtm_u_bdu_roll_highf_dubokpb: tmtm_u_bdu_dubokpb
	{
		scope=2;
		scopeArsenal=2;

		author="Casper_TFG, erem2k";

		displayName="Battledress Uniform, Dubok Pale (Rolled, High)";

		class ItemInfo: ItemInfo
		{
			uniformClass="tmtm_bdu_roll_highf_dubokpb";
		};
	};

	class tmtm_u_bdu_kneepad_dubokpb: tmtm_u_bdu_dubokpb
	{
		scope=2;
		scopeArsenal=2;

		author="Casper_TFG, erem2k";

		displayName="Battledress Uniform, Dubok Pale (Kneepads)";

		class ItemInfo: ItemInfo
		{
			uniformClass="tmtm_bdu_kneepad_dubokpb";
		};
	};

	class tmtm_u_bdu_kneepad_roll_dubokpb: tmtm_u_bdu_dubokpb
	{
		scope=2;
		scopeArsenal=2;

		author="Casper_TFG, erem2k";

		displayName="Battledress Uniform, Dubok Pale (Kneepads, Rolled)";

		class ItemInfo: ItemInfo
		{
			uniformClass="tmtm_bdu_kneepad_roll_dubokpb";
		};
	};

	// # Dubok Pale/Gray
	class tmtm_u_bdu_dubokpb_mix: tmtm_u_bdu_base
	{
		scope=2;
		scopeArsenal=2;

		author="Casper_TFG, erem2k";

		displayName="Battledress Uniform, Dubok Pale/Gray";
		descriptionShort="Uniform, Battledress, dubokpb_mix";
		picture="TODOPREVIEW";

		hiddenSelectionsTextures[]={
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokpb_mix_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="tmtm_bdu_dubokpb_mix";
		};
	};
	
	class tmtm_u_bdu_roll_dubokpb_mix: tmtm_u_bdu_dubokpb_mix
	{
		scope=2;
		scopeArsenal=2;

		author="Casper_TFG, erem2k";

		displayName="Battledress Uniform, Dubok Pale/Gray (Rolled)";

		class ItemInfo: ItemInfo
		{
			uniformClass="tmtm_bdu_roll_dubokpb_mix";
		};
	};
	
	class tmtm_u_bdu_roll_high_dubokpb_mix: tmtm_u_bdu_dubokpb_mix
	{
		scope=2;
		scopeArsenal=2;

		author="Casper_TFG, erem2k";

		displayName="Battledress Uniform, Dubok Pale/Gray (Rolled, High)";

		class ItemInfo: ItemInfo
		{
			uniformClass="tmtm_bdu_roll_high_dubokpb_mix";
		};
	};

	class tmtm_u_bdu_roll_highf_dubokpb_mix: tmtm_u_bdu_dubokpb_mix
	{
		scope=2;
		scopeArsenal=2;

		author="Casper_TFG, erem2k";

		displayName="Battledress Uniform, Dubok Pale/Gray (Rolled, High)";

		class ItemInfo: ItemInfo
		{
			uniformClass="tmtm_bdu_roll_highf_dubokpb_mix";
		};
	};

	class tmtm_u_bdu_kneepad_dubokpb_mix: tmtm_u_bdu_dubokpb_mix
	{
		scope=2;
		scopeArsenal=2;

		author="Casper_TFG, erem2k";

		displayName="Battledress Uniform, Dubok Pale/Gray (Kneepads)";

		class ItemInfo: ItemInfo
		{
			uniformClass="tmtm_bdu_kneepad_dubokpb_mix";
		};
	};

	class tmtm_u_bdu_kneepad_roll_dubokpb_mix: tmtm_u_bdu_dubokpb_mix
	{
		scope=2;
		scopeArsenal=2;

		author="Casper_TFG, erem2k";

		displayName="Battledress Uniform, Dubok Pale/Gray (Kneepads, Rolled)";

		class ItemInfo: ItemInfo
		{
			uniformClass="tmtm_bdu_kneepad_roll_dubokpb_mix";
		};
	};

	// # Dubok Teal
	class tmtm_u_bdu_dubokt: tmtm_u_bdu_base
	{
		scope=2;
		scopeArsenal=2;

		author="Casper_TFG, erem2k";

		displayName="Battledress Uniform, Dubok Teal";
		descriptionShort="Uniform, Battledress, Dubok Teal";
		picture="TODOPREVIEW";

		hiddenSelectionsTextures[]={
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokt_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="tmtm_bdu_dubokt";
		};
	};
	
	class tmtm_u_bdu_roll_dubokt: tmtm_u_bdu_dubokt
	{
		scope=2;
		scopeArsenal=2;

		author="Casper_TFG, erem2k";

		displayName="Battledress Uniform, Dubok Teal (Rolled)";

		class ItemInfo: ItemInfo
		{
			uniformClass="tmtm_bdu_roll_dubokt";
		};
	};
	
	class tmtm_u_bdu_roll_high_dubokt: tmtm_u_bdu_dubokt
	{
		scope=2;
		scopeArsenal=2;

		author="Casper_TFG, erem2k";

		displayName="Battledress Uniform, Dubok Teal (Rolled, High)";

		class ItemInfo: ItemInfo
		{
			uniformClass="tmtm_bdu_roll_high_dubokt";
		};
	};

	class tmtm_u_bdu_roll_highf_dubokt: tmtm_u_bdu_dubokt
	{
		scope=2;
		scopeArsenal=2;

		author="Casper_TFG, erem2k";

		displayName="Battledress Uniform, Dubok Teal (Rolled, High)";

		class ItemInfo: ItemInfo
		{
			uniformClass="tmtm_bdu_roll_highf_dubokt";
		};
	};

	class tmtm_u_bdu_kneepad_dubokt: tmtm_u_bdu_dubokt
	{
		scope=2;
		scopeArsenal=2;

		author="Casper_TFG, erem2k";

		displayName="Battledress Uniform, Dubok Teal (Kneepads)";

		class ItemInfo: ItemInfo
		{
			uniformClass="tmtm_bdu_kneepad_dubokt";
		};
	};

	class tmtm_u_bdu_kneepad_roll_dubokt: tmtm_u_bdu_dubokt
	{
		scope=2;
		scopeArsenal=2;

		author="Casper_TFG, erem2k";

		displayName="Battledress Uniform, Dubok Teal (Kneepads, Rolled)";

		class ItemInfo: ItemInfo
		{
			uniformClass="tmtm_bdu_kneepad_roll_dubokt";
		};
	};

	// # Dubok Teal/Blue
	class tmtm_u_bdu_dubokt_mix: tmtm_u_bdu_base
	{
		scope=2;
		scopeArsenal=2;

		author="Casper_TFG, erem2k";

		displayName="Battledress Uniform, Dubok Teal/Blue";
		descriptionShort="Uniform, Battledress, Dubok Teal/Blue";
		picture="TODOPREVIEW";

		hiddenSelectionsTextures[]={
			"\tmtm\pack\sns_uniforms\data\tmtm_bdu_dubokt_mix_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="tmtm_bdu_dubokt_mix";
		};
	};
	
	class tmtm_u_bdu_roll_dubokt_mix: tmtm_u_bdu_dubokt_mix
	{
		scope=2;
		scopeArsenal=2;

		author="Casper_TFG, erem2k";

		displayName="Battledress Uniform, Dubok Teal/Blue (Rolled)";

		class ItemInfo: ItemInfo
		{
			uniformClass="tmtm_bdu_roll_dubokt_mix";
		};
	};
	
	class tmtm_u_bdu_roll_high_dubokt_mix: tmtm_u_bdu_dubokt_mix
	{
		scope=2;
		scopeArsenal=2;

		author="Casper_TFG, erem2k";

		displayName="Battledress Uniform, Dubok Teal/Blue (Rolled, High)";

		class ItemInfo: ItemInfo
		{
			uniformClass="tmtm_bdu_roll_high_dubokt_mix";
		};
	};

	class tmtm_u_bdu_roll_highf_dubokt_mix: tmtm_u_bdu_dubokt_mix
	{
		scope=2;
		scopeArsenal=2;

		author="Casper_TFG, erem2k";

		displayName="Battledress Uniform, Dubok Teal/Blue (Rolled, High)";

		class ItemInfo: ItemInfo
		{
			uniformClass="tmtm_bdu_roll_highf_dubokt_mix";
		};
	};

	class tmtm_u_bdu_kneepad_dubokt_mix: tmtm_u_bdu_dubokt_mix
	{
		scope=2;
		scopeArsenal=2;

		author="Casper_TFG, erem2k";

		displayName="Battledress Uniform, Dubok Teal/Blue (Kneepads)";

		class ItemInfo: ItemInfo
		{
			uniformClass="tmtm_bdu_kneepad_dubokt_mix";
		};
	};

	class tmtm_u_bdu_kneepad_roll_dubokt_mix: tmtm_u_bdu_dubokt_mix
	{
		scope=2;
		scopeArsenal=2;

		author="Casper_TFG, erem2k";

		displayName="Battledress Uniform, Dubok Teal/Blue (Kneepads, Rolled)";

		class ItemInfo: ItemInfo
		{
			uniformClass="tmtm_bdu_kneepad_roll_dubokt_mix";
		};
	};
};