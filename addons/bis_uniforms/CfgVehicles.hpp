class CfgVehicles
{
	
	
	// RUSSIAN version of CSAT Fatigues
	class O_Soldier_F;
	class tmtm_combatUniform_rus: O_Soldier_F
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		modelSides[]={1,2,3,4};
		uniformClass="tmtm_u_combatUniform_rus";
		hiddenSelectionsTextures[] = {
			"\a3\characters_f\OPFOR\Data\clothing_rus_co.paa",
			"\A3\Characters_F\OPFOR\Data\tech_rus_CO.paa"
		};
	};
	
	
	
	
	// AAF Fatigues variants
	class I_Soldier_F;
	class I_Soldier_02_F;
	class tmtm_combatUniform_brown: I_Soldier_F
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		modelSides[]={1,2,3,4};
		hiddenSelectionsTextures[] = {
			"\A3\characters_f_exp\Syndikat\Data\U_I_C_Soldier_Para_4_F_2_co.paa"
		};
		uniformClass="tmtm_u_combatUniform_brown";
	};
	class tmtm_combatUniformRS_brown: I_Soldier_02_F
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		modelSides[]={1,2,3,4};
		hiddenSelectionsTextures[] = {
			"\A3\characters_f_exp\Syndikat\Data\U_I_C_Soldier_Para_4_F_2_co.paa"
		};
		uniformClass="tmtm_u_combatUniformRS_brown";
	};
	class tmtm_combatUniform_syndikat: I_Soldier_F
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		modelSides[]={1,2,3,4};
		hiddenSelectionsTextures[] = {
			"\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Para_1_F_2_co.paa"
		};
		uniformClass="tmtm_u_combatUniform_syndikat";
	};
	class tmtm_combatUniformRS_syndikat: I_Soldier_02_F
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		modelSides[]={1,2,3,4};
		hiddenSelectionsTextures[] = {
			"\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Para_1_F_2_co.paa"
		};
		uniformClass="tmtm_u_combatUniformRS_syndikat";
	};
	// LDF (Tucked in)
	class tmtm_combatUniform_LDF: I_Soldier_F
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		modelSides[]={1,2,3,4};
		hiddenSelectionsTextures[] = {
			"a3\characters_f_enoch\uniforms\data\i_e_soldier_01_pants_co.paa"
		};
		uniformClass="tmtm_u_combatUniform_LDF";
	};
	class tmtm_combatUniformRS_LDF: I_Soldier_02_F
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		modelSides[]={1,2,3,4};
		hiddenSelectionsTextures[] = {
			"a3\characters_f_enoch\uniforms\data\i_e_soldier_01_pants_co.paa"
		};
		uniformClass="tmtm_u_combatUniformRS_LDF";
	};
	
	
	// NATO Fatigues variants
	class B_Soldier_base_F;
	class tmtm_combatUniform_MTPdarkBlue: B_Soldier_base_F
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		modelSides[]={1,2,3,4};
		hiddenSelectionsTextures[] = {
			"\A3\characters_f_exp\Gendarmerie\Data\U_B_GEN_Soldier_F_02_co.paa"
		};
		uniformClass="tmtm_u_combatUniform_MTPdarkBlue";
	};
	class B_Soldier_02_f;
	class tmtm_combatUniformT_MTPdarkBlue: B_Soldier_02_f
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		modelSides[]={1,2,3,4};
		hiddenSelections[]=
		{
			"Camo",
			"Camo2",
			"Insignia"
		};
		hiddenSelectionsTextures[] = {
			"\A3\characters_f_exp\Gendarmerie\Data\U_B_GEN_Soldier_F_02_co.paa",
			"a3\characters_f\common\data\basicbody_black_co.paa"
		};
		uniformClass="tmtm_u_combatUniformT_MTPdarkBlue";
	};
	class B_Soldier_03_f;
	class tmtm_combatUniformRS_MTPdarkBlue: B_Soldier_03_f
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		modelSides[]={1,2,3,4};
		hiddenSelectionsTextures[] = {
			"\A3\characters_f_exp\Gendarmerie\Data\U_B_GEN_Soldier_F_02_co.paa"
		};
		uniformClass="tmtm_u_combatUniform_MTPdarkBlue";
	};
	
	// Guerrilla Garments (Tee, AAF pants, scarf)
	// shirts
	#define S_SAND "\A3\Characters_F_Bootcamp\Guerrilla\Data\c_cloth1_kabeiroi_co.paa"
	#define S_GREEN "\A3\Characters_F_Orange\Uniforms\Data\c_cloth1_olive_co.paa"
	#define S_RUST "\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Para_1_F_1_co.paa"
					//"a3\characters_f_exp\syndikat\data\u_i_c_soldier_bandit_3_f_1_co.paa"
	#define S_SKULL "\a3\characters_f_gamma\Civil\Data\c_cloth1_black.paa"
	#define S_CAMORED "A3\Characters_F\Civil\Data\c_cloth1_bandit_co.paa"
	#define S_ORANGE "A3\Characters_F\Civil\Data\c_cloth1_v3_co.paa"
	#define S_YELLOW "A3\Characters_F\Civil\Data\c_cloth1_v2_co.paa"
	#define S_BLUE "A3\Characters_F\Civil\Data\c_cloth1_co.paa"
	#define S_BROWN "\a3\characters_f_gamma\Civil\Data\c_cloth1_brown.paa"
	#define S_ARNOLD "A3\Characters_F\Civil\Data\poor_co.paa"
	
	
	// pants
	#define P_AAF "\A3\characters_f_beta\indep\data\ia_soldier_01_clothing_co.paa"
	#define P_SYNDIKAT "\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Para_1_F_2_co.paa"
	#define P_BROWN "\A3\characters_f_exp\Syndikat\Data\U_I_C_Soldier_Para_4_F_2_co.paa"
	#define P_LDF "a3\characters_f_enoch\uniforms\data\i_e_soldier_01_pants_co.paa"
	#define P_SAND "\A3\Characters_F_Bootcamp\Guerrilla\Data\ig_guerrilla_6_1_co.paa"
	
	class I_G_Soldier_F;
	// AAF
	class tmtm_guerillaGarment_rustAAF: I_G_Soldier_F
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		modelSides[]={1,2,3,4};
		uniformClass="tmtm_u_guerillaGarment_rustAAF";
		hiddenSelectionsTextures[] = {
			S_RUST,
			P_AAF
		};
	};
	class tmtm_guerillaGarment_skullAAF: I_G_Soldier_F
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		modelSides[]={1,2,3,4};
		uniformClass="tmtm_u_guerillaGarment_skullAAF";
		hiddenSelectionsTextures[] = {
			S_SKULL,
			P_AAF
		};
	};
	class tmtm_guerillaGarment_camoRedAAF: I_G_Soldier_F
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		modelSides[]={1,2,3,4};
		uniformClass="tmtm_u_guerillaGarment_camoRedAAF";
		hiddenSelectionsTextures[] = {
			S_CAMORED,
			P_AAF
		};
	};
	class tmtm_guerillaGarment_orangeAAF: I_G_Soldier_F
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		modelSides[]={1,2,3,4};
		uniformClass="tmtm_u_guerillaGarment_orangeAAF";
		hiddenSelectionsTextures[] = {
			S_ORANGE,
			P_AAF
		};
	};
	class tmtm_guerillaGarment_yellowAAF: I_G_Soldier_F
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		modelSides[]={1,2,3,4};
		uniformClass="tmtm_u_guerillaGarment_yellowAAF";
		hiddenSelectionsTextures[] = {
			S_YELLOW,
			P_AAF
		};
	};
	class tmtm_guerillaGarment_blueAAF: I_G_Soldier_F
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		modelSides[]={1,2,3,4};
		uniformClass="tmtm_u_guerillaGarment_blueAAF";
		hiddenSelectionsTextures[] = {
			S_BLUE,
			P_AAF
		};
	};
	class tmtm_guerillaGarment_brownAAF: I_G_Soldier_F
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		modelSides[]={1,2,3,4};
		uniformClass="tmtm_u_guerillaGarment_brownAAF";
		hiddenSelectionsTextures[] = {
			S_BROWN,
			P_AAF
		};
	};
	class tmtm_guerillaGarment_arnoldAAF: I_G_Soldier_F
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		modelSides[]={1,2,3,4};
		uniformClass="tmtm_u_guerillaGarment_arnoldAAF";
		hiddenSelectionsTextures[] = {
			S_ARNOLD,
			P_AAF
		};
	};
	// Brown
	class tmtm_guerillaGarment_rustBrown: I_G_Soldier_F
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		modelSides[]={1,2,3,4};
		uniformClass="tmtm_u_guerillaGarment_rustBrown";
		hiddenSelectionsTextures[] = {
			S_RUST,
			P_BROWN
		};
	};
	class tmtm_guerillaGarment_skullBrown: I_G_Soldier_F
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		modelSides[]={1,2,3,4};
		uniformClass="tmtm_u_guerillaGarment_skullBrown";
		hiddenSelectionsTextures[] = {
			S_SKULL,
			P_BROWN
		};
	};
	class tmtm_guerillaGarment_camoRedBrown: I_G_Soldier_F
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		modelSides[]={1,2,3,4};
		uniformClass="tmtm_u_guerillaGarment_camoRedBrown";
		hiddenSelectionsTextures[] = {
			S_CAMORED,
			P_BROWN
		};
	};
	class tmtm_guerillaGarment_orangeBrown: I_G_Soldier_F
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		modelSides[]={1,2,3,4};
		uniformClass="tmtm_u_guerillaGarment_orangeBrown";
		hiddenSelectionsTextures[] = {
			S_ORANGE,
			P_BROWN
		};
	};
	class tmtm_guerillaGarment_yellowBrown: I_G_Soldier_F
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		modelSides[]={1,2,3,4};
		uniformClass="tmtm_u_guerillaGarment_yellowBrown";
		hiddenSelectionsTextures[] = {
			S_YELLOW,
			P_BROWN
		};
	};
	class tmtm_guerillaGarment_blueBrown: I_G_Soldier_F
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		modelSides[]={1,2,3,4};
		uniformClass="tmtm_u_guerillaGarment_blueBrown";
		hiddenSelectionsTextures[] = {
			S_BLUE,
			P_BROWN
		};
	};
	class tmtm_guerillaGarment_brownBrown: I_G_Soldier_F
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		modelSides[]={1,2,3,4};
		uniformClass="tmtm_u_guerillaGarment_brownBrown";
		hiddenSelectionsTextures[] = {
			S_BROWN,
			P_BROWN
		};
	};
	class tmtm_guerillaGarment_arnoldBrown: I_G_Soldier_F
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		modelSides[]={1,2,3,4};
		uniformClass="tmtm_u_guerillaGarment_arnoldBrown";
		hiddenSelectionsTextures[] = {
			S_ARNOLD,
			P_BROWN
		};
	};
	class tmtm_guerillaGarment_sandBrown: I_G_Soldier_F
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		modelSides[]={1,2,3,4};
		uniformClass="tmtm_u_guerillaGarment_sandBrown";
		hiddenSelectionsTextures[] = {
			S_SAND,
			P_BROWN
		};
	};
	class tmtm_guerillaGarment_greenBrown: I_G_Soldier_F
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		modelSides[]={1,2,3,4};
		uniformClass="tmtm_u_guerillaGarment_greenBrown";
		hiddenSelectionsTextures[] = {
			S_GREEN,
			P_BROWN
		};
	};
	// LDF
	class tmtm_guerillaGarment_rustLDF: I_G_Soldier_F
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		modelSides[]={1,2,3,4};
		uniformClass="tmtm_u_guerillaGarment_rustLDF";
		hiddenSelectionsTextures[] = {
			S_RUST,
			P_LDF
		};
	};
	class tmtm_guerillaGarment_skullLDF: I_G_Soldier_F
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		modelSides[]={1,2,3,4};
		uniformClass="tmtm_u_guerillaGarment_skullLDF";
		hiddenSelectionsTextures[] = {
			S_SKULL,
			P_LDF
		};
	};
	class tmtm_guerillaGarment_camoRedLDF: I_G_Soldier_F
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		modelSides[]={1,2,3,4};
		uniformClass="tmtm_u_guerillaGarment_camoRedLDF";
		hiddenSelectionsTextures[] = {
			S_CAMORED,
			P_LDF
		};
	};
	class tmtm_guerillaGarment_orangeLDF: I_G_Soldier_F
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		modelSides[]={1,2,3,4};
		uniformClass="tmtm_u_guerillaGarment_orangeLDF";
		hiddenSelectionsTextures[] = {
			S_ORANGE,
			P_LDF
		};
	};
	class tmtm_guerillaGarment_yellowLDF: I_G_Soldier_F
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		modelSides[]={1,2,3,4};
		uniformClass="tmtm_u_guerillaGarment_yellowLDF";
		hiddenSelectionsTextures[] = {
			S_YELLOW,
			P_LDF
		};
	};
	class tmtm_guerillaGarment_blueLDF: I_G_Soldier_F
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		modelSides[]={1,2,3,4};
		uniformClass="tmtm_u_guerillaGarment_blueLDF";
		hiddenSelectionsTextures[] = {
			S_BLUE,
			P_LDF
		};
	};
	class tmtm_guerillaGarment_brownLDF: I_G_Soldier_F
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		modelSides[]={1,2,3,4};
		uniformClass="tmtm_u_guerillaGarment_brownLDF";
		hiddenSelectionsTextures[] = {
			S_BROWN,
			P_LDF
		};
	};
	class tmtm_guerillaGarment_arnoldLDF: I_G_Soldier_F
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		modelSides[]={1,2,3,4};
		uniformClass="tmtm_u_guerillaGarment_arnoldLDF";
		hiddenSelectionsTextures[] = {
			S_ARNOLD,
			P_LDF
		};
	};
	class tmtm_guerillaGarment_sandLDF: I_G_Soldier_F
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		modelSides[]={1,2,3,4};
		uniformClass="tmtm_u_guerillaGarment_sandLDF";
		hiddenSelectionsTextures[] = {
			S_SAND,
			P_LDF
		};
	};
	class tmtm_guerillaGarment_greenLDF: I_G_Soldier_F
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		modelSides[]={1,2,3,4};
		uniformClass="tmtm_u_guerillaGarment_greenLDF";
		hiddenSelectionsTextures[] = {
			S_GREEN,
			P_LDF
		};
	};
	// Syndikat
	class tmtm_guerillaGarment_rustSyndikat: I_G_Soldier_F
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		modelSides[]={1,2,3,4};
		uniformClass="tmtm_u_guerillaGarment_rustSyndikat";
		hiddenSelectionsTextures[] = {
			S_RUST,
			P_SYNDIKAT
		};
	};
	class tmtm_guerillaGarment_skullSyndikat: I_G_Soldier_F
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		modelSides[]={1,2,3,4};
		uniformClass="tmtm_u_guerillaGarment_skullSyndikat";
		hiddenSelectionsTextures[] = {
			S_SKULL,
			P_SYNDIKAT
		};
	};
	class tmtm_guerillaGarment_camoRedSyndikat: I_G_Soldier_F
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		modelSides[]={1,2,3,4};
		uniformClass="tmtm_u_guerillaGarment_camoRedSyndikat";
		hiddenSelectionsTextures[] = {
			S_CAMORED,
			P_SYNDIKAT
		};
	};
	class tmtm_guerillaGarment_orangeSyndikat: I_G_Soldier_F
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		modelSides[]={1,2,3,4};
		uniformClass="tmtm_u_guerillaGarment_orangeSyndikat";
		hiddenSelectionsTextures[] = {
			S_ORANGE,
			P_SYNDIKAT
		};
	};
	class tmtm_guerillaGarment_yellowSyndikat: I_G_Soldier_F
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		modelSides[]={1,2,3,4};
		uniformClass="tmtm_u_guerillaGarment_yellowSyndikat";
		hiddenSelectionsTextures[] = {
			S_YELLOW,
			P_SYNDIKAT
		};
	};
	class tmtm_guerillaGarment_blueSyndikat: I_G_Soldier_F
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		modelSides[]={1,2,3,4};
		uniformClass="tmtm_u_guerillaGarment_blueSyndikat";
		hiddenSelectionsTextures[] = {
			S_BLUE,
			P_SYNDIKAT
		};
	};
	class tmtm_guerillaGarment_brownSyndikat: I_G_Soldier_F
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		modelSides[]={1,2,3,4};
		uniformClass="tmtm_u_guerillaGarment_brownSyndikat";
		hiddenSelectionsTextures[] = {
			S_BROWN,
			P_SYNDIKAT
		};
	};
	class tmtm_guerillaGarment_arnoldSyndikat: I_G_Soldier_F
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		modelSides[]={1,2,3,4};
		uniformClass="tmtm_u_guerillaGarment_arnoldSyndikat";
		hiddenSelectionsTextures[] = {
			S_ARNOLD,
			P_SYNDIKAT
		};
	};
	class tmtm_guerillaGarment_sandSyndikat: I_G_Soldier_F
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		modelSides[]={1,2,3,4};
		uniformClass="tmtm_u_guerillaGarment_sandSyndikat";
		hiddenSelectionsTextures[] = {
			S_SAND,
			P_SYNDIKAT
		};
	};
	class tmtm_guerillaGarment_greenSyndikat: I_G_Soldier_F
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		modelSides[]={1,2,3,4};
		uniformClass="tmtm_u_guerillaGarment_greenSyndikat";
		hiddenSelectionsTextures[] = {
			S_GREEN,
			P_SYNDIKAT
		};
	};
	// Sand
	class tmtm_guerillaGarment_rustSand: I_G_Soldier_F
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		modelSides[]={1,2,3,4};
		uniformClass="tmtm_u_guerillaGarment_rustSand";
		hiddenSelectionsTextures[] = {
			S_RUST,
			P_SAND
		};
	};
	class tmtm_guerillaGarment_skullSand: I_G_Soldier_F
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		modelSides[]={1,2,3,4};
		uniformClass="tmtm_u_guerillaGarment_skullSand";
		hiddenSelectionsTextures[] = {
			S_SKULL,
			P_SAND
		};
	};
	class tmtm_guerillaGarment_camoRedSand: I_G_Soldier_F
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		modelSides[]={1,2,3,4};
		uniformClass="tmtm_u_guerillaGarment_camoRedSand";
		hiddenSelectionsTextures[] = {
			S_CAMORED,
			P_SAND
		};
	};
	class tmtm_guerillaGarment_orangeSand: I_G_Soldier_F
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		modelSides[]={1,2,3,4};
		uniformClass="tmtm_u_guerillaGarment_orangeSand";
		hiddenSelectionsTextures[] = {
			S_ORANGE,
			P_SAND
		};
	};
	class tmtm_guerillaGarment_yellowSand: I_G_Soldier_F
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		modelSides[]={1,2,3,4};
		uniformClass="tmtm_u_guerillaGarment_yellowSand";
		hiddenSelectionsTextures[] = {
			S_YELLOW,
			P_SAND
		};
	};
	class tmtm_guerillaGarment_blueSand: I_G_Soldier_F
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		modelSides[]={1,2,3,4};
		uniformClass="tmtm_u_guerillaGarment_blueSand";
		hiddenSelectionsTextures[] = {
			S_BLUE,
			P_SAND
		};
	};
	class tmtm_guerillaGarment_brownSand: I_G_Soldier_F
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		modelSides[]={1,2,3,4};
		uniformClass="tmtm_u_guerillaGarment_brownSand";
		hiddenSelectionsTextures[] = {
			S_BROWN,
			P_SAND
		};
	};
	class tmtm_guerillaGarment_arnoldSand: I_G_Soldier_F
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		modelSides[]={1,2,3,4};
		uniformClass="tmtm_u_guerillaGarment_arnoldSand";
		hiddenSelectionsTextures[] = {
			S_ARNOLD,
			P_SAND
		};
	};
	class tmtm_guerillaGarment_sandSand: I_G_Soldier_F
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		modelSides[]={1,2,3,4};
		uniformClass="tmtm_u_guerillaGarment_sandSand";
		hiddenSelectionsTextures[] = {
			S_SAND,
			P_SAND
		};
	};
	class tmtm_guerillaGarment_greenSand: I_G_Soldier_F
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		modelSides[]={1,2,3,4};
		uniformClass="tmtm_u_guerillaGarment_greenSand";
		hiddenSelectionsTextures[] = {
			S_GREEN,
			P_SAND
		};
	};

	// Bandit Clothes (Tee)
	
	#define P_JEANS "\A3\Characters_F_Gamma\Guerrilla\Data\ig_guerrilla3_1_co.paa"
	#define P_JEANS_DARK "\A3\Characters_F_Gamma\Guerrilla\Data\ig_guerrilla3_2_co.paa"
	#define P_JEANS_DIRTY "a3\characters_f_orange\uniforms\data\c_mechanic_01_camo2_co.paa"
	
	class I_C_Soldier_Bandit_3_F;
	
	// Jeans
	class tmtm_banditTee_rustJeans: I_C_Soldier_Bandit_3_F
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		modelSides[]={1,2,3,4};
		uniformClass="tmtm_u_banditTee_rustJeans";
		hiddenSelectionsTextures[] = {
			S_RUST,
			P_JEANS
		};
	};
	class tmtm_banditTee_skullJeans: I_C_Soldier_Bandit_3_F
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		modelSides[]={1,2,3,4};
		uniformClass="tmtm_u_banditTee_skullJeans";
		hiddenSelectionsTextures[] = {
			S_SKULL,
			P_JEANS
		};
	};
	class tmtm_banditTee_camoRedJeans: I_C_Soldier_Bandit_3_F
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		modelSides[]={1,2,3,4};
		uniformClass="tmtm_u_banditTee_camoRedJeans";
		hiddenSelectionsTextures[] = {
			S_CAMORED,
			P_JEANS
		};
	};
	class tmtm_banditTee_orangeJeans: I_C_Soldier_Bandit_3_F
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		modelSides[]={1,2,3,4};
		uniformClass="tmtm_u_banditTee_orangeJeans";
		hiddenSelectionsTextures[] = {
			S_ORANGE,
			P_JEANS
		};
	};
	class tmtm_banditTee_yellowJeans: I_C_Soldier_Bandit_3_F
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		modelSides[]={1,2,3,4};
		uniformClass="tmtm_u_banditTee_yellowJeans";
		hiddenSelectionsTextures[] = {
			S_YELLOW,
			P_JEANS
		};
	};
	class tmtm_banditTee_blueJeans: I_C_Soldier_Bandit_3_F
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		modelSides[]={1,2,3,4};
		uniformClass="tmtm_u_banditTee_blueJeans";
		hiddenSelectionsTextures[] = {
			S_BLUE,
			P_JEANS
		};
	};
	class tmtm_banditTee_brownJeans: I_C_Soldier_Bandit_3_F
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		modelSides[]={1,2,3,4};
		uniformClass="tmtm_u_banditTee_brownJeans";
		hiddenSelectionsTextures[] = {
			S_BROWN,
			P_JEANS
		};
	};
	class tmtm_banditTee_arnoldJeans: I_C_Soldier_Bandit_3_F
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		modelSides[]={1,2,3,4};
		uniformClass="tmtm_u_banditTee_arnoldJeans";
		hiddenSelectionsTextures[] = {
			S_ARNOLD,
			P_JEANS
		};
	};
	class tmtm_banditTee_sandJeans: I_C_Soldier_Bandit_3_F
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		modelSides[]={1,2,3,4};
		uniformClass="tmtm_u_banditTee_sandJeans";
		hiddenSelectionsTextures[] = {
			S_SAND,
			P_JEANS
		};
	};
	class tmtm_banditTee_greenJeans: I_C_Soldier_Bandit_3_F
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		modelSides[]={1,2,3,4};
		uniformClass="tmtm_u_banditTee_greenJeans";
		hiddenSelectionsTextures[] = {
			S_GREEN,
			P_JEANS
		};
	};
	
	// Jeans Dark
	class tmtm_banditTee_rustJeansDark: I_C_Soldier_Bandit_3_F
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		modelSides[]={1,2,3,4};
		uniformClass="tmtm_u_banditTee_rustJeansDark";
		hiddenSelectionsTextures[] = {
			S_RUST,
			P_JEANS_DARK
		};
	};
	class tmtm_banditTee_skullJeansDark: I_C_Soldier_Bandit_3_F
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		modelSides[]={1,2,3,4};
		uniformClass="tmtm_u_banditTee_skullJeansDark";
		hiddenSelectionsTextures[] = {
			S_SKULL,
			P_JEANS_DARK
		};
	};
	class tmtm_banditTee_camoRedJeansDark: I_C_Soldier_Bandit_3_F
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		modelSides[]={1,2,3,4};
		uniformClass="tmtm_u_banditTee_camoRedJeansDark";
		hiddenSelectionsTextures[] = {
			S_CAMORED,
			P_JEANS_DARK
		};
	};
	class tmtm_banditTee_orangeJeansDark: I_C_Soldier_Bandit_3_F
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		modelSides[]={1,2,3,4};
		uniformClass="tmtm_u_banditTee_orangeJeansDark";
		hiddenSelectionsTextures[] = {
			S_ORANGE,
			P_JEANS_DARK
		};
	};
	class tmtm_banditTee_yellowJeansDark: I_C_Soldier_Bandit_3_F
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		modelSides[]={1,2,3,4};
		uniformClass="tmtm_u_banditTee_yellowJeansDark";
		hiddenSelectionsTextures[] = {
			S_YELLOW,
			P_JEANS_DARK
		};
	};
	class tmtm_banditTee_blueJeansDark: I_C_Soldier_Bandit_3_F
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		modelSides[]={1,2,3,4};
		uniformClass="tmtm_u_banditTee_blueJeansDark";
		hiddenSelectionsTextures[] = {
			S_BLUE,
			P_JEANS_DARK
		};
	};
	class tmtm_banditTee_brownJeansDark: I_C_Soldier_Bandit_3_F
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		modelSides[]={1,2,3,4};
		uniformClass="tmtm_u_banditTee_brownJeansDark";
		hiddenSelectionsTextures[] = {
			S_BROWN,
			P_JEANS_DARK
		};
	};
	class tmtm_banditTee_arnoldJeansDark: I_C_Soldier_Bandit_3_F
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		modelSides[]={1,2,3,4};
		uniformClass="tmtm_u_banditTee_arnoldJeansDark";
		hiddenSelectionsTextures[] = {
			S_ARNOLD,
			P_JEANS_DARK
		};
	};
	class tmtm_banditTee_sandJeansDark: I_C_Soldier_Bandit_3_F
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		modelSides[]={1,2,3,4};
		uniformClass="tmtm_u_banditTee_sandJeansDark";
		hiddenSelectionsTextures[] = {
			S_SAND,
			P_JEANS_DARK
		};
	};
	class tmtm_banditTee_greenJeansDark: I_C_Soldier_Bandit_3_F
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		modelSides[]={1,2,3,4};
		uniformClass="tmtm_u_banditTee_greenJeansDark";
		hiddenSelectionsTextures[] = {
			S_GREEN,
			P_JEANS_DARK
		};
	};
	
	// Jeans Dirty
	class tmtm_banditTee_rustJeansDirty: I_C_Soldier_Bandit_3_F
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		modelSides[]={1,2,3,4};
		uniformClass="tmtm_u_banditTee_rustJeansDirty";
		hiddenSelectionsTextures[] = {
			S_RUST,
			P_JEANS_DIRTY
		};
	};
	class tmtm_banditTee_skullJeansDirty: I_C_Soldier_Bandit_3_F
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		modelSides[]={1,2,3,4};
		uniformClass="tmtm_u_banditTee_skullJeansDirty";
		hiddenSelectionsTextures[] = {
			S_SKULL,
			P_JEANS_DIRTY
		};
	};
	class tmtm_banditTee_camoRedJeansDirty: I_C_Soldier_Bandit_3_F
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		modelSides[]={1,2,3,4};
		uniformClass="tmtm_u_banditTee_camoRedJeansDirty";
		hiddenSelectionsTextures[] = {
			S_CAMORED,
			P_JEANS_DIRTY
		};
	};
	class tmtm_banditTee_orangeJeansDirty: I_C_Soldier_Bandit_3_F
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		modelSides[]={1,2,3,4};
		uniformClass="tmtm_u_banditTee_orangeJeansDirty";
		hiddenSelectionsTextures[] = {
			S_ORANGE,
			P_JEANS_DIRTY
		};
	};
	class tmtm_banditTee_yellowJeansDirty: I_C_Soldier_Bandit_3_F
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		modelSides[]={1,2,3,4};
		uniformClass="tmtm_u_banditTee_yellowJeansDirty";
		hiddenSelectionsTextures[] = {
			S_YELLOW,
			P_JEANS_DIRTY
		};
	};
	class tmtm_banditTee_blueJeansDirty: I_C_Soldier_Bandit_3_F
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		modelSides[]={1,2,3,4};
		uniformClass="tmtm_u_banditTee_blueJeansDirty";
		hiddenSelectionsTextures[] = {
			S_BLUE,
			P_JEANS_DIRTY
		};
	};
	class tmtm_banditTee_brownJeansDirty: I_C_Soldier_Bandit_3_F
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		modelSides[]={1,2,3,4};
		uniformClass="tmtm_u_banditTee_brownJeansDirty";
		hiddenSelectionsTextures[] = {
			S_BROWN,
			P_JEANS_DIRTY
		};
	};
	class tmtm_banditTee_arnoldJeansDirty: I_C_Soldier_Bandit_3_F
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		modelSides[]={1,2,3,4};
		uniformClass="tmtm_u_banditTee_arnoldJeansDirty";
		hiddenSelectionsTextures[] = {
			S_ARNOLD,
			P_JEANS_DIRTY
		};
	};
	class tmtm_banditTee_sandJeansDirty: I_C_Soldier_Bandit_3_F
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		modelSides[]={1,2,3,4};
		uniformClass="tmtm_u_banditTee_sandJeansDirty";
		hiddenSelectionsTextures[] = {
			S_SAND,
			P_JEANS_DIRTY
		};
	};
	class tmtm_banditTee_greenJeansDirty: I_C_Soldier_Bandit_3_F
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		modelSides[]={1,2,3,4};
		uniformClass="tmtm_u_banditTee_greenJeansDirty";
		hiddenSelectionsTextures[] = {
			S_GREEN,
			P_JEANS_DIRTY
		};
	};
	
	


	/* Vanilla */
	// Guerrilla Fatigues Variants
	
	// Guerilla Garment --> U_BG_Guerilla1_1
	
	// Guerilla Uniform --> U_BG_leader ------> DOESNT WORK
	/*
		["a3\characters_f_gamma\guerrilla\data\ig_guerrilla2_1_co.paa",""]
		shirt camos:
		
		pants camos:
			khaki/tan = "\A3\Characters_F_Gamma\Guerrilla\Data\ig_guerrilla2_1_co.paa"
			blue/black = "\A3\Characters_F_Gamma\Guerrilla\Data\ig_guerrilla2_2_co.paa"
			green = "\A3\Characters_F_Gamma\Guerrilla\Data\ig_guerrilla2_3_co.paa"
	*/
	
	
	/* Apex */
	// Bandit Clothes (Skull) --> U_I_C_Soldier_Bandit_2_F -------> DOESNT WORK

	// Bandit CLothes (Tee) --> U_I_C_Soldier_Bandit_3_F
	/*
		og:
			["a3\characters_f_exp\syndikat\data\u_i_c_soldier_bandit_3_f_1_co.paa","a3\characters_f_gamma\guerrilla\data\ig_guerrilla3_1_co.paa"]
		["a3\characters_f_orange\uniforms\data\c_mechanic_01_camo1_co.paa","a3\characters_f_orange\uniforms\data\c_mechanic_01_camo2_co.paa"]
		shirt camos:
			same as above
		
		pants camos:
			jeans = "\A3\Characters_F_Gamma\Guerrilla\Data\ig_guerrilla3_1_co.paa"
			jeans dark = "\A3\Characters_F_Gamma\Guerrilla\Data\ig_guerrilla3_2_co.paa"
			jeans dirty = "a3\characters_f_orange\uniforms\data\c_mechanic_01_camo2_co.paa"
			
	*/
	// Paramilitary Garb (Jacket) --> U_I_C_Soldier_Para_2_F
	/*
		og:
			["a3\characters_f_exp\syndikat\data\u_i_c_soldier_para_2_f_1_co.paa","a3\characters_f_exp\syndikat\data\u_i_c_soldier_para_2_f_2_co.paa",""]
		shirt:
			
		pants:
			
	
	*/
	// Paramilitary Garb (Shirt) --> U_I_C_Soldier_Para_2_F
	
	// Paramilitary Garb (Tank Top) --> U_I_C_Soldier_Para_4_F_2_co
	
	// Paramilitary Garb (Tee) --> UI_C_Soldier_Para_1_F
	
	/* Contact, LDF */
	// Combat Fatigues [LDF] --> U_I_E_Uniform_01_F
	
	// Combat Fatigues (Rolled-up) [LDF] --> U_I_E_uniform_01_shortsleeve_F
	
	// Combat Fatigues (Tank Top) [LDF] --> U_I_E_Uniform_01_tanktop_F
	
	/* Contact, Guerilla */
	// Deserter Clothes (Jacket) --> U_I_L_Uniform_01_camo_F
	
	// Deserter Clothes (T-Shirt) --> U_I_L_Uniform_01_deserter_F
	
	
	
};