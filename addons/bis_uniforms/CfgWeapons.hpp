class CfgWeapons
{
	class ItemCore;
	class UniformItem;
	class Uniform_Base;
	class Item_Base_F;
	
	
	// Change LDF uniforms to reflect base game naming structure
	// Combat Fatigues (Rolled-up) [LDF] --> Combat Fatigues [LDF] (Rolled-up)
	class U_I_E_Uniform_01_officer_F: Uniform_Base
	{
		displayName="Combat Fatigues [LDF] (Officer)";
	};
	class U_I_E_Uniform_01_shortsleeve_F: Uniform_Base
	{
		displayName="Combat Fatigues [LDF] (Rolled-up)";
	};
	class U_I_E_Uniform_01_sweater_F: Uniform_Base
	{
		displayName="Combat Fatigues [LDF] (Sweater)";
	};
	class U_I_E_Uniform_01_tanktop_F: Uniform_Base
	{
		displayName="Combat Fatigues [LDF] (Tank Top)";
	}; 
	
	
	// LDF uniform (tucked in)
	class tmtm_u_combatUniform_LDF: Uniform_Base
	{
		scope=2;
		displayName="Combat Fatigues [LDF] (Tucked)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"a3\characters_f_enoch\uniforms\data\i_e_soldier_01_pants_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tmtm_combatUniform_LDF";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_combatUniformRS_LDF: Uniform_Base
	{
		scope=2;
		displayName="Combat Fatigues [LDF] (Tucked/Rolled-up)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"a3\characters_f_enoch\uniforms\data\i_e_soldier_01_pants_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tmtm_combatUniformRS_LDF";
			containerClass="Supply40";
			mass=40;
		};
	};

	/*
		[
			"a3\characters_f_enoch\uniforms\data\i_e_soldier_01_co.paa",
			"a3\characters_f_enoch\uniforms\data\i_e_soldier_01_pants_co.paa",
			"a3\characters_f_enoch\uniforms\data\i_e_soldier_01_gloves_camo_co.paa",
			""
		]
		
		["a3\characters_f_beta\indep\data\ia_soldier_01_clothing_co.paa",""]
		["a3\characters_f_beta\indep\data\officer_spc_co.paa",""]
	*/
	
	// Fatigues (Hex) [CSAT] 
	// Combat Environment Fatigues
	// Hazardous Environment
	// CSAT Fatigues (Hex)
	
	// RUSSIAN version of CSAT Fatigues
	class tmtm_u_combatUniform_rus: Uniform_Base
	{
		scope=2;
		displayName="Fatigues (RUS)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\a3\characters_f\OPFOR\Data\clothing_rus_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tmtm_combatUniform_rus";
			containerClass="Supply40";
			mass=80;
		};
	};
	// AAF Fatigues variants
	class tmtm_u_combatUniform_brown: Uniform_Base
	{
		scope=2;
		displayName="Combat Fatigues [AAF] (Brown)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\A3\characters_f_exp\Syndikat\Data\U_I_C_Soldier_Para_4_F_2_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tmtm_combatUniform_brown";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_combatUniformRS_brown: Uniform_Base
	{
		scope=2;
		displayName="Combat Fatigues [AAF] (Brown) (Rolled-up)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\A3\characters_f_exp\Syndikat\Data\U_I_C_Soldier_Para_4_F_2_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tmtm_combatUniformRS_brown";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_combatUniform_syndikat: Uniform_Base
	{
		scope=2;
		displayName="Combat Fatigues [Syndikat]";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\characters_f_exp\Syndikat\Data\U_I_C_Soldier_Para_4_F_2_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tmtm_combatUniform_syndikat";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_combatUniformRS_syndikat: Uniform_Base
	{
		scope=2;
		displayName="Combat Fatigues [Syndikat] (Rolled-up)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\characters_f_exp\Syndikat\Data\U_I_C_Soldier_Para_4_F_2_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tmtm_combatUniformRS_syndikat";
			containerClass="Supply40";
			mass=40;
		};
	};
	// NATO Fatigues variants
	class tmtm_u_combatUniform_MTPdarkBlue: Uniform_Base
	{
		scope=2;
		displayName="Gendarmerie Uniform (MTP)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\characters_f_exp\Gendarmerie\Data\U_B_GEN_Soldier_F_02_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tmtm_combatUniform_MTPdarkBlue";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_combatUniformT_MTPdarkBlue: Uniform_Base
	{
		scope=2;
		displayName="Gendarmerie Uniform (MTP) (Tee)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\characters_f_exp\Gendarmerie\Data\U_B_GEN_Soldier_F_02_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tmtm_combatUniformT_MTPdarkBlue";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_combatUniformRS_MTPdarkBlue: Uniform_Base
	{
		scope=2;
		displayName="Gendarmerie Uniform (MTP) (Rolled-up)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\characters_f_exp\Gendarmerie\Data\U_B_GEN_Soldier_F_02_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tmtm_combatUniformRS_MTPdarkBlue";
			containerClass="Supply40";
			mass=40;
		};
	};
	
	
	// Guerilla Garment
	// AAF
	class tmtm_u_guerillaGarment_rustAAF: Uniform_Base
	{
		scope=2;
		displayName="Guerilla Garment (Rust/AAF)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tmtm_guerillaGarment_rustAAF";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_guerillaGarment_skullAAF: Uniform_Base
	{
		scope=2;
		displayName="Guerilla Garment (Skull/AAF)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tmtm_guerillaGarment_skullAAF";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_guerillaGarment_camoRedAAF: Uniform_Base
	{
		scope=2;
		displayName="Guerilla Garment (Camo Red/AAF)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tmtm_guerillaGarment_camoRedAAF";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_guerillaGarment_orangeAAF: Uniform_Base
	{
		scope=2;
		displayName="Guerilla Garment (Orange/AAF)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tmtm_guerillaGarment_orangeAAF";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_guerillaGarment_yellowAAF: Uniform_Base
	{
		scope=2;
		displayName="Guerilla Garment (Yellow/AAF)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tmtm_guerillaGarment_yellowAAF";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_guerillaGarment_blueAAF: Uniform_Base
	{
		scope=2;
		displayName="Guerilla Garment (Blue/AAF)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tmtm_guerillaGarment_blueAAF";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_guerillaGarment_brownAAF: Uniform_Base
	{
		scope=2;
		displayName="Guerilla Garment (Brown/AAF)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tmtm_guerillaGarment_brownAAF";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_guerillaGarment_arnoldAAF: Uniform_Base
	{
		scope=2;
		displayName="Guerilla Garment (Arnold/AAF)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tmtm_guerillaGarment_arnoldAAF";
			containerClass="Supply40";
			mass=40;
		};
	};
	// Brown
	class tmtm_u_guerillaGarment_rustBrown: Uniform_Base
	{
		scope=2;
		displayName="Guerilla Garment (Rust/Brown)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\characters_f_exp\Syndikat\Data\U_I_C_Soldier_Para_4_F_2_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tmtm_guerillaGarment_rustBrown";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_guerillaGarment_skullBrown: Uniform_Base
	{
		scope=2;
		displayName="Guerilla Garment (Skull/Brown)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\characters_f_exp\Syndikat\Data\U_I_C_Soldier_Para_4_F_2_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tmtm_guerillaGarment_skullBrown";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_guerillaGarment_camoRedBrown: Uniform_Base
	{
		scope=2;
		displayName="Guerilla Garment (Camo Red/Brown)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\characters_f_exp\Syndikat\Data\U_I_C_Soldier_Para_4_F_2_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tmtm_guerillaGarment_camoRedBrown";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_guerillaGarment_orangeBrown: Uniform_Base
	{
		scope=2;
		displayName="Guerilla Garment (Orange/Brown)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\characters_f_exp\Syndikat\Data\U_I_C_Soldier_Para_4_F_2_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tmtm_guerillaGarment_orangeBrown";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_guerillaGarment_yellowBrown: Uniform_Base
	{
		scope=2;
		displayName="Guerilla Garment (Yellow/Brown)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\characters_f_exp\Syndikat\Data\U_I_C_Soldier_Para_4_F_2_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tmtm_guerillaGarment_yellowBrown";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_guerillaGarment_blueBrown: Uniform_Base
	{
		scope=2;
		displayName="Guerilla Garment (Blue/Brown)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\characters_f_exp\Syndikat\Data\U_I_C_Soldier_Para_4_F_2_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tmtm_guerillaGarment_blueBrown";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_guerillaGarment_brownBrown: Uniform_Base
	{
		scope=2;
		displayName="Guerilla Garment (Brown/Brown)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\characters_f_exp\Syndikat\Data\U_I_C_Soldier_Para_4_F_2_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tmtm_guerillaGarment_brownBrown";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_guerillaGarment_arnoldBrown: Uniform_Base
	{
		scope=2;
		displayName="Guerilla Garment (Arnold/Brown)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\characters_f_exp\Syndikat\Data\U_I_C_Soldier_Para_4_F_2_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tmtm_guerillaGarment_arnoldBrown";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_guerillaGarment_sandBrown: Uniform_Base
	{
		scope=2;
		displayName="Guerilla Garment (Sand/Brown)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\characters_f_exp\Syndikat\Data\U_I_C_Soldier_Para_4_F_2_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tmtm_guerillaGarment_sandBrown";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_guerillaGarment_greenBrown: Uniform_Base
	{
		scope=2;
		displayName="Guerilla Garment (Green/Brown)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\characters_f_exp\Syndikat\Data\U_I_C_Soldier_Para_4_F_2_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tmtm_guerillaGarment_greenBrown";
			containerClass="Supply40";
			mass=40;
		};
	};
	// LDF
	class tmtm_u_guerillaGarment_rustLDF: Uniform_Base
	{
		scope=2;
		displayName="Guerilla Garment (Rust/LDF)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"a3\characters_f_enoch\uniforms\data\i_e_soldier_01_pants_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tmtm_guerillaGarment_rustLDF";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_guerillaGarment_skullLDF: Uniform_Base
	{
		scope=2;
		displayName="Guerilla Garment (Skull/LDF)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"a3\characters_f_enoch\uniforms\data\i_e_soldier_01_pants_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tmtm_guerillaGarment_skullLDF";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_guerillaGarment_camoRedLDF: Uniform_Base
	{
		scope=2;
		displayName="Guerilla Garment (Camo Red/LDF)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"a3\characters_f_enoch\uniforms\data\i_e_soldier_01_pants_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tmtm_guerillaGarment_camoRedLDF";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_guerillaGarment_orangeLDF: Uniform_Base
	{
		scope=2;
		displayName="Guerilla Garment (Orange/LDF)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"a3\characters_f_enoch\uniforms\data\i_e_soldier_01_pants_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tmtm_guerillaGarment_orangeLDF";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_guerillaGarment_yellowLDF: Uniform_Base
	{
		scope=2;
		displayName="Guerilla Garment (Yellow/LDF)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"a3\characters_f_enoch\uniforms\data\i_e_soldier_01_pants_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tmtm_guerillaGarment_yellowLDF";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_guerillaGarment_blueLDF: Uniform_Base
	{
		scope=2;
		displayName="Guerilla Garment (Blue/LDF)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"a3\characters_f_enoch\uniforms\data\i_e_soldier_01_pants_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tmtm_guerillaGarment_blueLDF";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_guerillaGarment_brownLDF: Uniform_Base
	{
		scope=2;
		displayName="Guerilla Garment (Brown/LDF)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"a3\characters_f_enoch\uniforms\data\i_e_soldier_01_pants_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tmtm_guerillaGarment_brownLDF";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_guerillaGarment_arnoldLDF: Uniform_Base
	{
		scope=2;
		displayName="Guerilla Garment (Arnold/LDF)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"a3\characters_f_enoch\uniforms\data\i_e_soldier_01_pants_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tmtm_guerillaGarment_arnoldLDF";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_guerillaGarment_sandLDF: Uniform_Base
	{
		scope=2;
		displayName="Guerilla Garment (Sand/LDF)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"a3\characters_f_enoch\uniforms\data\i_e_soldier_01_pants_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tmtm_guerillaGarment_sandLDF";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_guerillaGarment_greenLDF: Uniform_Base
	{
		scope=2;
		displayName="Guerilla Garment (Green/LDF)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"a3\characters_f_enoch\uniforms\data\i_e_soldier_01_pants_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tmtm_guerillaGarment_greenLDF";
			containerClass="Supply40";
			mass=40;
		};
	};
	// Syndikat
	class tmtm_u_guerillaGarment_rustSyndikat: Uniform_Base
	{
		scope=2;
		displayName="Guerilla Garment (Rust/Syndikat)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Para_1_F_2_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tmtm_guerillaGarment_rustSyndikat";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_guerillaGarment_skullSyndikat: Uniform_Base
	{
		scope=2;
		displayName="Guerilla Garment (Skull/Syndikat)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Para_1_F_2_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tmtm_guerillaGarment_skullSyndikat";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_guerillaGarment_camoRedSyndikat: Uniform_Base
	{
		scope=2;
		displayName="Guerilla Garment (Camo Red/Syndikat)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Para_1_F_2_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tmtm_guerillaGarment_camoRedSyndikat";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_guerillaGarment_orangeSyndikat: Uniform_Base
	{
		scope=2;
		displayName="Guerilla Garment (Orange/Syndikat)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Para_1_F_2_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tmtm_guerillaGarment_orangeSyndikat";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_guerillaGarment_yellowSyndikat: Uniform_Base
	{
		scope=2;
		displayName="Guerilla Garment (Yellow/Syndikat)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Para_1_F_2_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tmtm_guerillaGarment_yellowSyndikat";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_guerillaGarment_blueSyndikat: Uniform_Base
	{
		scope=2;
		displayName="Guerilla Garment (Blue/Syndikat)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Para_1_F_2_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tmtm_guerillaGarment_blueSyndikat";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_guerillaGarment_brownSyndikat: Uniform_Base
	{
		scope=2;
		displayName="Guerilla Garment (Brown/Syndikat)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Para_1_F_2_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tmtm_guerillaGarment_brownSyndikat";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_guerillaGarment_arnoldSyndikat: Uniform_Base
	{
		scope=2;
		displayName="Guerilla Garment (Arnold/Syndikat)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Para_1_F_2_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tmtm_guerillaGarment_arnoldSyndikat";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_guerillaGarment_sandSyndikat: Uniform_Base
	{
		scope=2;
		displayName="Guerilla Garment (Sand/Syndikat)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Para_1_F_2_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tmtm_guerillaGarment_sandSyndikat";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_guerillaGarment_greenSyndikat: Uniform_Base
	{
		scope=2;
		displayName="Guerilla Garment (Green/Syndikat)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Para_1_F_2_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tmtm_guerillaGarment_greenSyndikat";
			containerClass="Supply40";
			mass=40;
		};
	};
	// Sand
	class tmtm_u_guerillaGarment_rustSand: Uniform_Base
	{
		scope=2;
		displayName="Guerilla Garment (Rust/Sand)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Bootcamp\Guerilla\Data\ig_guerilla_6_1_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tmtm_guerillaGarment_rustSand";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_guerillaGarment_skullSand: Uniform_Base
	{
		scope=2;
		displayName="Guerilla Garment (Skull/Sand)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Bootcamp\Guerilla\Data\ig_guerilla_6_1_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tmtm_guerillaGarment_skullSand";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_guerillaGarment_camoRedSand: Uniform_Base
	{
		scope=2;
		displayName="Guerilla Garment (Camo Red/Sand)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Bootcamp\Guerilla\Data\ig_guerilla_6_1_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tmtm_guerillaGarment_camoRedSand";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_guerillaGarment_orangeSand: Uniform_Base
	{
		scope=2;
		displayName="Guerilla Garment (Orange/Sand)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Bootcamp\Guerilla\Data\ig_guerilla_6_1_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tmtm_guerillaGarment_orangeSand";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_guerillaGarment_yellowSand: Uniform_Base
	{
		scope=2;
		displayName="Guerilla Garment (Yellow/Sand)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Bootcamp\Guerilla\Data\ig_guerilla_6_1_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tmtm_guerillaGarment_yellowSand";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_guerillaGarment_blueSand: Uniform_Base
	{
		scope=2;
		displayName="Guerilla Garment (Blue/Sand)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Bootcamp\Guerilla\Data\ig_guerilla_6_1_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tmtm_guerillaGarment_blueSand";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_guerillaGarment_brownSand: Uniform_Base
	{
		scope=2;
		displayName="Guerilla Garment (Brown/Sand)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Bootcamp\Guerilla\Data\ig_guerilla_6_1_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tmtm_guerillaGarment_brownSand";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_guerillaGarment_arnoldSand: Uniform_Base
	{
		scope=2;
		displayName="Guerilla Garment (Arnold/Sand)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Bootcamp\Guerilla\Data\ig_guerilla_6_1_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tmtm_guerillaGarment_arnoldSand";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_guerillaGarment_sandSand: Uniform_Base
	{
		scope=2;
		displayName="Guerilla Garment (Sand/Sand)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Bootcamp\Guerilla\Data\ig_guerilla_6_1_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tmtm_guerillaGarment_sandSand";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_guerillaGarment_greenSand: Uniform_Base
	{
		scope=2;
		displayName="Guerilla Garment (Green/Sand)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Bootcamp\Guerilla\Data\ig_guerilla_6_1_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tmtm_guerillaGarment_greenSand";
			containerClass="Supply40";
			mass=40;
		};
	};
	
	// Bandit Clothes (Tee)
	
	// Jeans
	class tmtm_u_banditTee_rustJeans: Uniform_Base
	{
		scope=2;
		displayName="Bandit Clothes (Rust/Jeans)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Gamma\Guerrilla\Data\ig_guerrilla3_1_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tmtm_banditTee_rustJeans";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_banditTee_skullJeans: Uniform_Base
	{
		scope=2;
		displayName="Bandit Clothes (Skull/Jeans)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Gamma\Guerrilla\Data\ig_guerrilla3_1_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tmtm_banditTee_skullJeans";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_banditTee_camoRedJeans: Uniform_Base
	{
		scope=2;
		displayName="Bandit Clothes (Camo Red/Jeans)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Gamma\Guerrilla\Data\ig_guerrilla3_1_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tmtm_banditTee_camoRedJeans";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_banditTee_orangeJeans: Uniform_Base
	{
		scope=2;
		displayName="Bandit Clothes (Orange/Jeans)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Gamma\Guerrilla\Data\ig_guerrilla3_1_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tmtm_banditTee_orangeJeans";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_banditTee_yellowJeans: Uniform_Base
	{
		scope=2;
		displayName="Bandit Clothes (Yellow/Jeans)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Gamma\Guerrilla\Data\ig_guerrilla3_1_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tmtm_banditTee_yellowJeans";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_banditTee_blueJeans: Uniform_Base
	{
		scope=2;
		displayName="Bandit Clothes (Blue/Jeans)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Gamma\Guerrilla\Data\ig_guerrilla3_1_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tmtm_banditTee_blueJeans";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_banditTee_brownJeans: Uniform_Base
	{
		scope=2;
		displayName="Bandit Clothes (Brown/Jeans)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Gamma\Guerrilla\Data\ig_guerrilla3_1_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tmtm_banditTee_brownJeans";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_banditTee_arnoldJeans: Uniform_Base
	{
		scope=2;
		displayName="Bandit Clothes (Arnold/Jeans)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Gamma\Guerrilla\Data\ig_guerrilla3_1_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tmtm_banditTee_arnoldJeans";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_banditTee_sandJeans: Uniform_Base
	{
		scope=2;
		displayName="Bandit Clothes (Sand/Jeans)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Gamma\Guerrilla\Data\ig_guerrilla3_1_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tmtm_banditTee_sandJeans";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_banditTee_greenJeans: Uniform_Base
	{
		scope=2;
		displayName="Bandit Clothes (Green/Jeans)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Gamma\Guerrilla\Data\ig_guerrilla3_1_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tmtm_banditTee_greenJeans";
			containerClass="Supply40";
			mass=40;
		};
	};
	
	// Jeans Dark
	class tmtm_u_banditTee_rustJeansDark: Uniform_Base
	{
		scope=2;
		displayName="Bandit Clothes (Rust/Jeans Dark)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Gamma\Guerrilla\Data\ig_guerrilla3_2_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tmtm_banditTee_rustJeansDark";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_banditTee_skullJeansDark: Uniform_Base
	{
		scope=2;
		displayName="Bandit Clothes (Skull/Jeans Dark)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Gamma\Guerrilla\Data\ig_guerrilla3_2_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tmtm_banditTee_skullJeansDark";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_banditTee_camoRedJeansDark: Uniform_Base
	{
		scope=2;
		displayName="Bandit Clothes (Camo Red/Jeans Dark)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Gamma\Guerrilla\Data\ig_guerrilla3_2_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tmtm_banditTee_camoRedJeansDark";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_banditTee_orangeJeansDark: Uniform_Base
	{
		scope=2;
		displayName="Bandit Clothes (Orange/Jeans Dark)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Gamma\Guerrilla\Data\ig_guerrilla3_2_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tmtm_banditTee_orangeJeansDark";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_banditTee_yellowJeansDark: Uniform_Base
	{
		scope=2;
		displayName="Bandit Clothes (Yellow/Jeans Dark)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Gamma\Guerrilla\Data\ig_guerrilla3_2_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tmtm_banditTee_yellowJeansDark";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_banditTee_blueJeansDark: Uniform_Base
	{
		scope=2;
		displayName="Bandit Clothes (Blue/Jeans Dark)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Gamma\Guerrilla\Data\ig_guerrilla3_2_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tmtm_banditTee_blueJeansDark";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_banditTee_brownJeansDark: Uniform_Base
	{
		scope=2;
		displayName="Bandit Clothes (Brown/Jeans Dark)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Gamma\Guerrilla\Data\ig_guerrilla3_2_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tmtm_banditTee_brownJeansDark";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_banditTee_arnoldJeansDark: Uniform_Base
	{
		scope=2;
		displayName="Bandit Clothes (Arnold/Jeans Dark)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Gamma\Guerrilla\Data\ig_guerrilla3_2_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tmtm_banditTee_arnoldJeansDark";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_banditTee_sandJeansDark: Uniform_Base
	{
		scope=2;
		displayName="Bandit Clothes (Sand/Jeans Dark)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Gamma\Guerrilla\Data\ig_guerrilla3_2_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tmtm_banditTee_sandJeansDark";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_banditTee_greenJeansDark: Uniform_Base
	{
		scope=2;
		displayName="Bandit Clothes (Green/Jeans Dark)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Gamma\Guerrilla\Data\ig_guerrilla3_2_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tmtm_banditTee_greenJeansDark";
			containerClass="Supply40";
			mass=40;
		};
	};
	
	// Jeans Dirty
	class tmtm_u_banditTee_rustJeansDirty: Uniform_Base
	{
		scope=2;
		displayName="Bandit Clothes (Rust/Jeans Dirty)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"a3\characters_f_orange\uniforms\data\c_mechanic_01_camo2_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tmtm_banditTee_rustJeansDirty";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_banditTee_skullJeansDirty: Uniform_Base
	{
		scope=2;
		displayName="Bandit Clothes (Skull/Jeans Dirty)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"a3\characters_f_orange\uniforms\data\c_mechanic_01_camo2_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tmtm_banditTee_skullJeansDirty";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_banditTee_camoRedJeansDirty: Uniform_Base
	{
		scope=2;
		displayName="Bandit Clothes (Camo Red/Jeans Dirty)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"a3\characters_f_orange\uniforms\data\c_mechanic_01_camo2_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tmtm_banditTee_camoRedJeansDirty";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_banditTee_orangeJeansDirty: Uniform_Base
	{
		scope=2;
		displayName="Bandit Clothes (Orange/Jeans Dirty)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"a3\characters_f_orange\uniforms\data\c_mechanic_01_camo2_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tmtm_banditTee_orangeJeansDirty";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_banditTee_yellowJeansDirty: Uniform_Base
	{
		scope=2;
		displayName="Bandit Clothes (Yellow/Jeans Dirty)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"a3\characters_f_orange\uniforms\data\c_mechanic_01_camo2_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tmtm_banditTee_yellowJeansDirty";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_banditTee_blueJeansDirty: Uniform_Base
	{
		scope=2;
		displayName="Bandit Clothes (Blue/Jeans Dirty)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"a3\characters_f_orange\uniforms\data\c_mechanic_01_camo2_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tmtm_banditTee_blueJeansDirty";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_banditTee_brownJeansDirty: Uniform_Base
	{
		scope=2;
		displayName="Bandit Clothes (Brown/Jeans Dirty)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"a3\characters_f_orange\uniforms\data\c_mechanic_01_camo2_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tmtm_banditTee_brownJeansDirty";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_banditTee_arnoldJeansDirty: Uniform_Base
	{
		scope=2;
		displayName="Bandit Clothes (Arnold/Jeans Dirty)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"a3\characters_f_orange\uniforms\data\c_mechanic_01_camo2_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tmtm_banditTee_arnoldJeansDirty";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_banditTee_sandJeansDirty: Uniform_Base
	{
		scope=2;
		displayName="Bandit Clothes (Sand/Jeans Dirty)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"a3\characters_f_orange\uniforms\data\c_mechanic_01_camo2_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tmtm_banditTee_sandJeansDirty";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_banditTee_greenJeansDirty: Uniform_Base
	{
		scope=2;
		displayName="Bandit Clothes (Green/Jeans Dirty)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"a3\characters_f_orange\uniforms\data\c_mechanic_01_camo2_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tmtm_banditTee_greenJeansDirty";
			containerClass="Supply40";
			mass=40;
		};
	};
	
	
	
	// Rebreather
	class VestItem;
	class V_RebreatherB;
	class tmtm_v_rebreather_nato: V_RebreatherB
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		author="Trenchgun";
		displayName = "Rebreather [NATO] (Alt)";
		hiddenSelectionsTextures[]=
		{
			"\A3\characters_f\common\data\diver_equip_nato_co.paa", 
			"\A3\characters_f\common\data\diver_equip_nato_co.paa", 
			"\A3\characters_f\data\visors_ca.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel = "\A3\Characters_F\Common\equip_rebreather";
			containerClass = "Supply0";
			mass = 80;
			vestType = "Rebreather";
			//hiddenUnderwaterSelections[] = {"hide"};
			//shownUnderwaterSelections[] = {"unhide", "unhide2"};
			//hiddenUnderwaterSelectionsTextures[] = {"\A3\characters_f\common\data\diver_equip_nato_co.paa", "\A3\characters_f\common\data\diver_equip_nato_co.paa", "\A3\characters_f\data\visors_ca.paa"};
			class HitpointsProtectionInfo
			{
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 8;
					passThrough = 0.5;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 8;
					passThrough = 0.5;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 8;
					passThrough = 0.5;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.5;
				};
			};
		};
	};
	/* Does not display textures correctly. Only shows the NATO version for some reason.
	class V_RebreatherIR;
	class tmtm_v_rebreather_aaf: V_RebreatherIR
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		author="Trenchgun";
		displayName = "Rebreather [AAF] (Alt)";
		hiddenSelectionsTextures[]=
		{
			"\A3\characters_f\common\data\diver_equip_rus_co.paa", 
			"\A3\characters_f\common\data\diver_equip_rus_co.paa", 
			"\A3\characters_f\data\visors_ca.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel = "\A3\Characters_F\Common\equip_rebreather";
			containerClass = "Supply0";
			mass = 80;
			vestType = "Rebreather";
			//hiddenUnderwaterSelections[] = {"hide"};
			//shownUnderwaterSelections[] = {"unhide", "unhide2"};
			//hiddenUnderwaterSelectionsTextures[] = {"\A3\characters_f\common\data\diver_equip_nato_co.paa", "\A3\characters_f\common\data\diver_equip_nato_co.paa", "\A3\characters_f\data\visors_ca.paa"};
			class HitpointsProtectionInfo
			{
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 8;
					passThrough = 0.5;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 8;
					passThrough = 0.5;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 8;
					passThrough = 0.5;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.5;
				};
			};
		};
	};
	class V_RebreatherIA;
	class tmtm_v_rebreather_csat: V_RebreatherIA
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		author="Trenchgun";
		displayName = "Rebreather [CSAT] (Alt)";
		hiddenSelectionsTextures[]=
		{
			"\A3\characters_f\common\data\diver_equip_iran_co.paa", 
			"\A3\characters_f\common\data\diver_equip_iran_co.paa", 
			"\A3\characters_f\data\visors_ca.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel = "\A3\Characters_F\Common\equip_rebreather";
			containerClass = "Supply0";
			mass = 80;
			vestType = "Rebreather";
			//hiddenUnderwaterSelections[] = {"hide"};
			//shownUnderwaterSelections[] = {"unhide", "unhide2"};
			//hiddenUnderwaterSelectionsTextures[] = {"\A3\characters_f\common\data\diver_equip_nato_co.paa", "\A3\characters_f\common\data\diver_equip_nato_co.paa", "\A3\characters_f\data\visors_ca.paa"};
			class HitpointsProtectionInfo
			{
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 8;
					passThrough = 0.5;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 8;
					passThrough = 0.5;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 8;
					passThrough = 0.5;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.5;
				};
			};
		};
	};
	*/
};