class CfgVehicles
{
	class B_Soldier_base_F;
	
	// Combat Fatigues --------------------------------------------------------------
	// various retextures for the vanilla BLUFOR uniform (normal and rolled sleeves)
	
	
	class tmtm_combatUniform_black: B_Soldier_base_F
	{
		author="Trenchgun";
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		model="\A3\Characters_F\BLUFOR\b_soldier_01.p3d";
		modelSides[]={1,2,3,4};
		uniformClass="tmtm_u_combatUniform_black";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\blufor_uniforms\Data\tmtm_combatUniform_black_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\A3\Characters_F\BLUFOR\Data\clothing1.rvmat"
		};
	};
	class tmtm_combatUniform_black_rs: tmtm_combatUniform_black
	{
		displayName="Soldier (Black) (RS)";
		model="\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
		uniformClass="tmtm_u_combatUniform_black_rs";
	};
	class tmtm_combatUniform_blackTan: tmtm_combatUniform_black
	{
		displayName="Soldier (Black/Tan)";
		uniformClass="tmtm_u_combatUniform_blackTan";
		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\blufor_uniforms\Data\tmtm_combatUniform_blackTan_co.paa"
		};
	};
	class tmtm_combatUniform_blackTan_rs: tmtm_combatUniform_blackTan
	{
		displayName="Soldier (Black/Tan) (RS)";
		model="\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
		uniformClass="tmtm_u_combatUniform_blackTan_rs";
	};
	class tmtm_combatUniform_tan: tmtm_combatUniform_black
	{
		displayName="Soldier (Tan)";
		uniformClass="tmtm_u_combatUniform_tan";
		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\blufor_uniforms\Data\tmtm_combatUniform_tan_co.paa"
		};
	};
	class tmtm_combatUniform_tan_rs: tmtm_combatUniform_tan
	{
		displayName="Soldier (Tan) (RS)";
		model="\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
		uniformClass="tmtm_u_combatUniform_tan_rs";
	};
	class tmtm_combatUniform_erdl_arvn: tmtm_combatUniform_black
	{
		displayName="Soldier (ERDL ARVN)";
		uniformClass="tmtm_u_combatUniform_erdl_arvn";
		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\blufor_uniforms\Data\tmtm_combatUniform_erdl_arvn_co.paa"
		};
	};
	class tmtm_combatUniform_erdl_arvn_rs: tmtm_combatUniform_erdl_arvn
	{
		displayName="Soldier (ERDL ARVN) (RS)";
		model="\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
		uniformClass="tmtm_u_combatUniform_erdl_arvn_rs";
	};
	class tmtm_combatUniform_erdl_oce: tmtm_combatUniform_black
	{
		displayName="Soldier (ERDL Ocean)";
		uniformClass="tmtm_u_combatUniform_erdl_oce";
		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\blufor_uniforms\Data\tmtm_combatUniform_erdl_oce_co.paa"
		};
	};
	class tmtm_combatUniform_erdl_oce_rs: tmtm_combatUniform_erdl_oce
	{
		displayName="Soldier (ERDL Ocean) (RS)";
		model="\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
		uniformClass="tmtm_u_combatUniform_erdl_oce_rs";
	};
	class tmtm_combatUniform_ghost: tmtm_combatUniform_black
	{
		displayName="Soldier (Ghost)";
		uniformClass="tmtm_u_combatUniform_ghost";
		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\blufor_uniforms\Data\tmtm_combatUniform_ghost_co.paa"
		};
	};
	class tmtm_combatUniform_ghost_rs: tmtm_combatUniform_ghost
	{
		displayName="Soldier (Ghost) (RS)";
		model="\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
		uniformClass="tmtm_u_combatUniform_ghost_rs";
	};
	class tmtm_combatUniform_nwupat: tmtm_combatUniform_black
	{
		displayName="Soldier (NWUPAT)";
		uniformClass="tmtm_u_combatUniform_nwupat";
		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\blufor_uniforms\Data\tmtm_combatUniform_nwupat_co.paa"
		};
	};
	class tmtm_combatUniform_nwupat_rs: tmtm_combatUniform_nwupat
	{
		displayName="Soldier (NWUPAT) (RS)";
		model="\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
		uniformClass="tmtm_u_combatUniform_nwupat_rs";
	};
	// VANILLA TEXTURE
	class tmtm_combatUniform_sage: tmtm_combatUniform_black
	{
		displayName="Soldier (Sage)";
		uniformClass="tmtm_u_combatUniform_sage";
		hiddenSelectionsTextures[]=
		{
			"\a3\characters_f\BLUFOR\Data\clothing_sage_co.paa"
		};
	};
	// VANILLA TEXTURE
	class tmtm_combatUniform_sage_rs: tmtm_combatUniform_sage
	{
		displayName="Soldier (Sage) (RS)";
		model="\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
		uniformClass="tmtm_u_combatUniform_sage_rs";
	};
	// VANILLA TEXTURE
	class tmtm_combatUniform_erdl: tmtm_combatUniform_black
	{
		displayName="Soldier (ERDL)";
		uniformClass="tmtm_u_combatUniform_erdl";
		hiddenSelectionsTextures[]=
		{
			"\a3\characters_f\BLUFOR\Data\clothing_wdl_co.paa"
		};
	};
	// VANILLA TEXTURE
	class tmtm_combatUniform_erdl_rs: tmtm_combatUniform_erdl
	{
		displayName="Soldier (ERDL) (RS)";
		model="\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
		uniformClass="tmtm_u_combatUniform_erdl_rs";
	};
	class tmtm_combatUniform_mcamb: tmtm_combatUniform_black
	{
		displayName="Soldier (Mutlicam Black)";
		uniformClass="tmtm_u_combatUniform_mcamb";
		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\blufor_uniforms\Data\tmtm_combatUniform_mcamb_co.paa"
		};
	};
	class tmtm_combatUniform_mcamb_rs: tmtm_combatUniform_mcamb
	{
		displayName="Soldier (Multicam Black) (RS)";
		model="\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
		uniformClass="tmtm_u_combatUniform_mcamb_rs";
	};
	class tmtm_combatUniform_mcamb_black: tmtm_combatUniform_black
	{
		displayName="Soldier (Mutlicam Black/Black)";
		uniformClass="tmtm_u_combatUniform_mcamb_black";
		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\blufor_uniforms\Data\tmtm_combatUniform_softshellblack_mcamb_co.paa"
		};
	};
	class tmtm_combatUniform_mcamb_black_rs: tmtm_combatUniform_mcamb_black
	{
		displayName="Soldier (Multicam Black/Black) (RS)";
		model="\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
		uniformClass="tmtm_u_combatUniform_mcamb_black_rs";
	};
	class tmtm_combatUniform_mcamb_grey: tmtm_combatUniform_black
	{
		displayName="Soldier (Mutlicam Black/Grey)";
		uniformClass="tmtm_u_combatUniform_mcamb_grey";
		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\blufor_uniforms\Data\tmtm_combatUniform_softshellgrey_mcamb_co.paa"
		};
	};
	class tmtm_combatUniform_mcamb_grey_rs: tmtm_combatUniform_mcamb_grey
	{
		displayName="Soldier (Multicam Black/Grey) (RS)";
		model="\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
		uniformClass="tmtm_u_combatUniform_mcamb_grey_rs";
	};
	
	// Fatigues, T-Shirt --------------------------------------------------------------
	// adds some black T-Shirt variants to the vanilla Combat Fatigues (Tee)
	
	class tmtm_combatUniformT_mcam_black: B_Soldier_base_F
	{
		author="Trenchgun";
		scope=1;
		displayName="Soldier (MTP) (Black Tee)";
		picture="";
		model="a3\characters_F\BLUFOR\b_soldier_02.p3d";
		modelSides[]={3,1};
		uniformClass="tmtm_u_combatUniformT_mcam_black";
		hiddenSelections[]=
		{
			"Camo",
			"Camo2",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"A3\Characters_F\BLUFOR\Data\clothing1_co.paa",
			"a3\characters_f\common\data\basicbody_black_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\A3\Characters_F\BLUFOR\Data\clothing1.rvmat"
		};
	};
	class tmtm_combatUniformT_ctrg_black: tmtm_combatUniformT_mcam_black
	{
		displayName="Soldier (CTRG) (Black Tee)";
		uniformClass="tmtm_u_combatUniformT_ctrg_black";
		hiddenSelectionsTextures[]=
		{
			"\a3\characters_f_epa\BLUFOR\Data\clothing1_mtp_co.paa",
			"a3\characters_f\common\data\basicbody_black_co.paa"
		};
	};
	class tmtm_combatUniformT_erdl_black: tmtm_combatUniformT_mcam_black
	{
		displayName="Soldier (ERDL) (Black Tee)";
		uniformClass="tmtm_u_combatUniformT_erdl_black";
		hiddenSelectionsTextures[]=
		{
			"\a3\characters_f\BLUFOR\Data\clothing_wdl_co.paa",
			"a3\characters_f\common\data\basicbody_black_co.paa"
		};
	};
	class tmtm_combatUniformT_sage_black: tmtm_combatUniformT_mcam_black
	{
		displayName="Soldier (Sage) (Black Tee)";
		uniformClass="tmtm_u_combatUniformT_sage_black";
		hiddenSelectionsTextures[]=
		{
			"\a3\characters_f\BLUFOR\Data\clothing_sage_co.paa",
			"a3\characters_f\common\data\basicbody_black_co.paa"
		};
	};
	class tmtm_combatUniformT_tropic_black: tmtm_combatUniformT_mcam_black
	{
		displayName="Soldier (Tropic) (Black Tee)";
		uniformClass="tmtm_u_combatUniformT_tropic_black";
		hiddenSelectionsTextures[]=
		{
			"\a3\characters_f_exp\BLUFOR\Data\U_BT_Soldier_AR_F_tna_02_co.paa",
			"a3\characters_f\common\data\basicbody_black_co.paa"
		};
	};
	class tmtm_combatUniformT_ctrg_stealth_black: tmtm_combatUniformT_mcam_black
	{
		displayName="Soldier (CTRG Stealth) (Black Tee)";
		uniformClass="tmtm_u_combatUniformT_ctrg_tropic_black";
		hiddenSelectionsTextures[]=
		{
			"\a3\characters_f_exp\BLUFOR\Data\U_B_CTRG_Soldier_F_co.paa",
			"a3\characters_f\common\data\basicbody_black_co.paa"
		};
	};
	class tmtm_combatUniformT_mcamb: tmtm_combatUniformT_mcam_black
	{
		displayName="Soldier (Multicam Black) (Tee)";
		uniformClass="tmtm_u_combatUniformT_mcamb_black";
		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\blufor_uniforms\Data\tmtm_combatUniform_mcamb_co.paa",
			"a3\characters_f\common\data\basicbody_black_co.paa"
		};
	};
	
	// CTRG Stealth Fatigues -----------------------------------------------
	// advanced Gen3 fatigues with the collar up
	
	class B_CTRG_Soldier_F;
	class tmtm_combatUniformC_erdl: B_CTRG_Soldier_F
	{
		author="Trenchgun";
		scope=1;
		displayName="Soldier ERDL (Collar)";
		picture="";
		model="\A3\Characters_F_Exp\BLUFOR\B_CTRG_Soldier_01_F.p3d";
		modelSides[]+={0,1,2,3,6};
		uniformClass="tmtm_u_erdl_collar";
		hiddenSelectionsTextures[]=
		{
			"\a3\characters_f\BLUFOR\Data\clothing_wdl_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\A3\Characters_F\BLUFOR\Data\clothing1.rvmat"
		};
	};
	class tmtm_combatUniformC_sage: tmtm_combatUniformC_erdl
	{
		displayName="Soldier Sage (Collar)";
		uniformClass="tmtm_u_erdl_collar";
		hiddenSelectionsTextures[]=
		{
			"\a3\characters_f\BLUFOR\Data\clothing_sage_co.paa"
		};
	};
	class tmtm_combatUniformC_mtp: tmtm_combatUniformC_erdl
	{
		displayName="Soldier MTP (Collar)";
		uniformClass="tmtm_u_mtp_collar";
		hiddenSelectionsTextures[]=
		{
			"A3\Characters_F\BLUFOR\Data\clothing1_co.paa"
		};
	};
	class tmtm_combatUniformC_black: tmtm_combatUniformC_erdl
	{
		displayName="Soldier Black (Collar)";
		uniformClass="tmtm_u_black_collar";
		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\blufor_uniforms\Data\tmtm_combatUniform_black_co.paa"
		};
	};
	class tmtm_combatUniformC_blackTan: tmtm_combatUniformC_erdl
	{
		displayName="Soldier Black/Tan (Collar)";
		uniformClass="tmtm_u_blackTan_collar";
		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\blufor_uniforms\Data\tmtm_combatUniform_blackTan_co.paa"
		};
	};
	class tmtm_combatUniformC_ghost: tmtm_combatUniformC_erdl
	{
		displayName="Soldier Ghost (Collar)";
		uniformClass="tmtm_u_ghost_collar";
		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\blufor_uniforms\Data\tmtm_combatUniform_ghost_co.paa"
		};
	};
	class tmtm_combatUniformC_tan: tmtm_combatUniformC_erdl
	{
		displayName="Soldier Tan (Collar)";
		uniformClass="tmtm_u_soldier_tan_collar";
		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\blufor_uniforms\Data\tmtm_combatUniform_tan_co.paa"
		};
	};
	class tmtm_combatUniformC_mcamb: tmtm_combatUniformC_erdl
	{
		displayName="Soldier Multicam Black (Collar)";
		uniformClass="tmtm_u_mcamb_collar";
		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\blufor_uniforms\Data\tmtm_combatUniform_mcamb_co.paa"
		};
	};
	class tmtm_combatUniformC_mcamb_black: tmtm_combatUniformC_erdl
	{
		displayName="Soldier Multicam Black (Softshell Black) (Collar)";
		uniformClass="tmtm_u_mcamb_black_collar";
		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\blufor_uniforms\Data\tmtm_combatUniform_softshellblack_mcamb_co.paa"
		};
	};
	class tmtm_combatUniformC_mcamb_grey: tmtm_combatUniformC_erdl
	{
		displayName="Soldier Multicam Black (Softshell Grey) (Collar)";
		uniformClass="tmtm_u_mcamb_grey_collar";
		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\blufor_uniforms\Data\tmtm_combatUniform_softshellgrey_mcamb_co.paa"
		};
	};
	
	// Survival Fatigues ----------------------------------------------------------
	// various retextures of the survival fatigues (T-Shirt, Gen3 pants, diving fins)
	
	class B_soldier_survival_F: B_Soldier_base_F
	{
	};
	class tmtm_survival_black: B_soldier_survival_F
	{
		author="Trenchgun";
		_generalMacro="B_soldier_survival_F";
		scope=1;
		displayName="Survival (Black)";
		picture="";
		model="a3\characters_F_epa\BLUFOR\b_soldier_survival_01.p3d";
		modelSides[]={3,1};
		uniformClass="U_B_survival_uniform";
		hiddenUnderwaterSelections[]=
		{
			"hide"
		};
		shownUnderwaterSelections[]=
		{
			"unhide",
			"unhide2"
		};
		hiddenUnderwaterSelectionsTextures[]=
		{
			"a3\characters_F\common\data\diver_equip_nato_co.paa",
			"a3\characters_F\common\data\diver_equip_nato_co.paa",
			"a3\characters_f\data\visors_ca.paa"
		};
		hiddenSelections[]=
		{
			"Camo",
			"Camo2",
			"Camo3",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\blufor_uniforms\Data\tmtm_combatUniform_black_co.paa",
			"a3\characters_f\common\data\diver_suit_co",
			"a3\characters_f\common\data\basicbody_black_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"a3\characters_F\BLUFOR\Data\clothing1.rvmat",
			"",
			""
		};
	};
	class tmtm_survival_blackTan: tmtm_survival_black
	{
		displayName="Survival (Black/Tan)";
		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\blufor_uniforms\Data\tmtm_combatUniform_blackTan_co.paa",
			"a3\characters_f\common\data\diver_suit_co",
			"a3\characters_f\common\data\basicbody_black_co.paa"
		};
	};
	class tmtm_survival_tan: tmtm_survival_black
	{
		displayName="Survival (Tan)";
		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\blufor_uniforms\Data\tmtm_combatUniform_tan_co.paa",
			"a3\characters_f\common\data\diver_suit_co",
			"a3\characters_f\common\data\basicbody_black_co.paa"
		};
	};
	class tmtm_survival_erdl_arvn: tmtm_survival_black
	{
		displayName="Survival (ERDL ARVN)";
		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\blufor_uniforms\Data\tmtm_combatUniform_erdl_arvn_co.paa",
			"a3\characters_f\common\data\diver_suit_co",
			"a3\characters_f\common\data\basicbody_black_co.paa"
		};
	};
	class tmtm_survival_erdl_oce: tmtm_survival_black
	{
		displayName="Survival (ERDL Ocean)";
		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\blufor_uniforms\Data\tmtm_combatUniform_erdl_oce_co.paa",
			"a3\characters_f\common\data\diver_suit_co",
			"a3\characters_f\common\data\basicbody_blue_co.paa"
		};
	};
	class tmtm_survival_ghost: tmtm_survival_black
	{
		displayName="Survival (Ghost)";
		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\blufor_uniforms\Data\tmtm_combatUniform_ghost_co.paa",
			"a3\characters_f\common\data\diver_suit_co",
			"a3\characters_f\common\data\basicbody_black_co.paa"
		};
	};
	class tmtm_survival_nwupat: tmtm_survival_black
	{
		displayName="Survival (NWUPAT)";
		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\blufor_uniforms\Data\tmtm_combatUniform_nwupat_co.paa",
			"a3\characters_f\common\data\diver_suit_co",
			"a3\characters_f\common\data\basicbody_black_co.paa"
		};
	};
	class tmtm_survival_sage: tmtm_survival_black
	{
		displayName="Survival (Sage)";
		hiddenSelectionsTextures[]=
		{
			"\a3\characters_f\BLUFOR\Data\clothing_sage_co.paa",
			"a3\characters_f\common\data\diver_suit_co",
			"a3\characters_f\common\data\basicbody_black_co.paa"
		};
	};
	class tmtm_survival_erdl: tmtm_survival_black
	{
		displayName="Survival (ERDL)";
		hiddenSelectionsTextures[]=
		{
			"\a3\characters_f\BLUFOR\Data\clothing_wdl_co.paa",
			"a3\characters_f\common\data\diver_suit_co",
			"a3\characters_f\common\data\basicbody_black_co.paa"
		};
	};
	class tmtm_survival_mcamb: tmtm_survival_black
	{
		displayName="Survival (Multicam Black)";
		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\blufor_uniforms\Data\tmtm_combatUniform_mcamb_co.paa",
			"a3\characters_f\common\data\diver_suit_co",
			"a3\characters_f\common\data\basicbody_black_co.paa"
		};
	};
};