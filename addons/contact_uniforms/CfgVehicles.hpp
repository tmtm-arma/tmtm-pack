class CfgVehicles
{
	class O_R_Gorka_base_F;
	
	class tmtm_granit_base: O_R_Gorka_base_F
	{
		author = "Trenchgun"; 
        scope = 0; 
		picture = "";
        model = "\A3\characters_f_enoch\Uniforms\Gorka_01_F.p3d";
		modelSides[] = {0,1,2,3};
        hiddenSelections[] = 
		{
			"camo_1",
			"camo_2",
			"Insignia"
		}; 
        hiddenSelectionsMaterials[] = 
		{
			"a3\Characters_F_Enoch\Uniforms\Data\Gorka_01.rvmat"
		};
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"a3\Characters_F_Enoch\Uniforms\Data\Gorka_01.rvmat",
				"a3\Characters_F_Enoch\Uniforms\Data\Gorka_01_injury.rvmat",
				"a3\Characters_F_Enoch\Uniforms\Data\Gorka_01_injury.rvmat",
				"A3\Characters_F\Common\Data\basicbody.rvmat",
				"A3\Characters_F\Common\Data\basicbody_injury.rvmat",
				"A3\Characters_F\Common\Data\basicbody_injury.rvmat",
				"a3\characters_f\heads\data\hl_white.rvmat",
				"a3\characters_f\heads\data\hl_white_injury.rvmat",
				"a3\characters_f\heads\data\hl_white_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_02_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat",
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
				"A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular.rvmat",
				"A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat",
				"A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat",
				"A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular.rvmat",
				"A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat",
				"A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat"
			};
		};
	};
	class tmtm_granit_3cd: tmtm_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName = "Granit (DCU)";
		uniformClass = "tmtm_u_granit_3cd";
		
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\contact_uniforms\Data\tmtm_granit_3cd_co.paa"
		};
	};
	class tmtm_granit_6cd: tmtm_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName = "Granit (DBDU)";
		uniformClass = "tmtm_u_granit_6cd";
		
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\contact_uniforms\Data\tmtm_granit_6cd_co.paa"
		};
	};
	class tmtm_granit_afghan: tmtm_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName = "Granit (Afghan)";
		uniformClass = "tmtm_u_granit_afghan";
		
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\contact_uniforms\Data\tmtm_granit_afghan_co.paa"
		};
	};
	class tmtm_granit_atacsAu: tmtm_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName = "Granit (ATACS AU)";
		uniformClass = "tmtm_u_granit_atacsAu";
		
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\contact_uniforms\Data\tmtm_granit_atacsAu_co.paa"
		};
	};
	class tmtm_granit_atacsAuBlack: tmtm_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName = "Granit (ATACS AU/Black)";
		uniformClass = "tmtm_u_granit_atacsAuBlack";
		
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\contact_uniforms\Data\tmtm_granit_atacsAuBlack_co.paa"
		};
	};
	class tmtm_granit_atacsAuRanger: tmtm_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName = "Granit (ATACS AU/Ranger)";
		uniformClass = "tmtm_u_granit_atacsAuRanger";
		
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\contact_uniforms\Data\tmtm_granit_atacsAuRanger_co.paa"
		};
	};
	class tmtm_granit_atacsFg: tmtm_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName = "Granit (ATACS FG)";
		uniformClass = "tmtm_u_granit_atacsFg";
		
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\contact_uniforms\Data\tmtm_granit_atacsFg_co.paa"
		};
	};
	class tmtm_granit_atacsFgBlack: tmtm_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName = "Granit (ATACS FG/Black)";
		uniformClass = "tmtm_u_granit_atacsFgBlack";
		
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\contact_uniforms\Data\tmtm_granit_atacsFgBlack_co.paa"
		};
	};
	class tmtm_granit_atacsFgRanger: tmtm_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName = "Granit (ATACS FG/Ranger)";
		uniformClass = "tmtm_u_granit_atacsFgRanger";
		
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\contact_uniforms\Data\tmtm_granit_atacsFgRanger_co.paa"
		};
	};
	class tmtm_granit_black3cd: tmtm_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName = "Granit (Black/DCU)";
		uniformClass = "tmtm_u_granit_black3cd";
		
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\contact_uniforms\Data\tmtm_granit_black3cd_co.paa"
		};
	};
	class tmtm_granit_blackKhaki: tmtm_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName = "Granit (Black/Khaki)";
		uniformClass = "tmtm_u_granit_blackKhaki";
		
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\contact_uniforms\Data\tmtm_granit_blackKhaki_co.paa"
		};
	};
	class tmtm_granit_blackM81: tmtm_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName = "Granit (Black/M81)";
		uniformClass = "tmtm_u_granit_blackM81";
		
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\contact_uniforms\Data\tmtm_granit_blackM81_co.paa"
		};
	};
	class tmtm_granit_blackMulticam: tmtm_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName = "Granit (Black/Multicam)";
		uniformClass = "tmtm_u_granit_blackMulticam";
		
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\contact_uniforms\Data\tmtm_granit_blackMulticam_co.paa"
		};
	};
	class tmtm_granit_blue: tmtm_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName = "Granit (Blue)";
		uniformClass = "tmtm_u_granit_blue";
		
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\contact_uniforms\Data\tmtm_granit_blue_co.paa"
		};
	};
	class tmtm_granit_blue3cd: tmtm_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName = "Granit (Blue/DCU)";
		uniformClass = "tmtm_u_granit_blue3cd";
		
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\contact_uniforms\Data\tmtm_granit_blue3cd_co.paa"
		};
	};
	class tmtm_granit_blueAlt: tmtm_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName = "Granit (Blue Alt)";
		uniformClass = "tmtm_u_granit_blueAlt";
		
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\contact_uniforms\Data\tmtm_granit_blueAlt_co.paa"
		};
	};
	class tmtm_granit_blueKhaki: tmtm_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName = "Granit (Blue/Khaki)";
		uniformClass = "tmtm_u_granit_blueKhaki";
		
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\contact_uniforms\Data\tmtm_granit_blueKhaki_co.paa"
		};
	};
	class tmtm_granit_blueM81: tmtm_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName = "Granit (Blue/M81)";
		uniformClass = "tmtm_u_granit_blueM81";
		
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\contact_uniforms\Data\tmtm_granit_blueM81_co.paa"
		};
	};
	class tmtm_granit_blueMulticam: tmtm_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName = "Granit (Blue/Multicam)";
		uniformClass = "tmtm_u_granit_blueMulticam";
		
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\contact_uniforms\Data\tmtm_granit_blueMulticam_co.paa"
		};
	};
	class tmtm_granit_brown3cd: tmtm_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName = "Granit (Brown/DCU)";
		uniformClass = "tmtm_u_granit_brown3cd";
		
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\contact_uniforms\Data\tmtm_granit_brown3cd_co.paa"
		};
	};
	class tmtm_granit_brownKhaki: tmtm_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName = "Granit (Brown/Khaki)";
		uniformClass = "tmtm_u_granit_brownKhaki";
		
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\contact_uniforms\Data\tmtm_granit_brownKhaki_co.paa"
		};
	};
	class tmtm_granit_brownM81: tmtm_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName = "Granit (Brown/M81)";
		uniformClass = "tmtm_u_granit_brownM81";
		
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\contact_uniforms\Data\tmtm_granit_brownM81_co.paa"
		};
	};
	class tmtm_granit_brownMulticam: tmtm_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName = "Granit (Brown/Multicam)";
		uniformClass = "tmtm_u_granit_brownMulticam";
		
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\contact_uniforms\Data\tmtm_granit_brownMulticam_co.paa"
		};
	};
	class tmtm_granit_cadpat: tmtm_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName = "Granit (CADPAT)";
		uniformClass = "tmtm_u_granit_cadpat";
		
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\contact_uniforms\Data\tmtm_granit_cadpat_co.paa"
		};
	};
	class tmtm_granit_cadpatWinter: tmtm_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName = "Granit (CADPAT/Winter)";
		uniformClass = "tmtm_u_granit_cadpatWinter";
		
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\contact_uniforms\Data\tmtm_granit_cadpatWinter_co.paa"
		};
	};
	class tmtm_granit_cbrn: tmtm_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName = "Granit (CBRN)";
		uniformClass = "tmtm_u_granit_cbrn";
		
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\contact_uniforms\Data\tmtm_granit_cbrn_co.paa"
		};
	};
	class tmtm_granit_cbrnBlack: tmtm_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName = "Granit (CBRN/Black)";
		uniformClass = "tmtm_u_granit_cbrnBlack";
		
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\contact_uniforms\Data\tmtm_granit_cbrnBlack_co.paa"
		};
	};
	class tmtm_granit_cbrnBlackAlt: tmtm_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName = "Granit (CBRN/Black Alt)";
		uniformClass = "tmtm_u_granit_cbrnBlackAlt";
		
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\contact_uniforms\Data\tmtm_granit_cbrnBlackAlt_co.paa"
		};
	};
	class tmtm_granit_csat: tmtm_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName = "Granit (CSAT)";
		uniformClass = "tmtm_u_granit_csat";
		
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\contact_uniforms\Data\tmtm_granit_csat_co.paa"
		};
	};
	class tmtm_granit_csatAlt: tmtm_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName = "Granit (CSAT Alt)";
		uniformClass = "tmtm_u_granit_csatAlt";
		
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\contact_uniforms\Data\tmtm_granit_csatAlt_co.paa"
		};
	};
	class tmtm_granit_csatArid: tmtm_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName = "Granit (CSAT Arid)";
		uniformClass = "tmtm_u_granit_csatArid";
		
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\contact_uniforms\Data\tmtm_granit_csatArid_co.paa"
		};
	};
	class tmtm_granit_csatAridAlt: tmtm_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName = "Granit (CSAT Arid Alt)";
		uniformClass = "tmtm_u_granit_csatAridAlt";
		
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\contact_uniforms\Data\tmtm_granit_csatAridAlt_co.paa"
		};
	};
	class tmtm_granit_emr: tmtm_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName = "Granit (EMR)";
		uniformClass = "tmtm_u_granit_emr";
		
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\contact_uniforms\Data\tmtm_granit_emr_co.paa"
		};
	};
	class tmtm_granit_emrAlt: tmtm_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName = "Granit (EMR Alt)";
		uniformClass = "tmtm_u_granit_emrAlt";
		
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\contact_uniforms\Data\tmtm_granit_emrAlt_co.paa"
		};
	};
	class tmtm_granit_emrFull: tmtm_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName = "Granit (EMR Full)";
		uniformClass = "tmtm_u_granit_emrFull";
		
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\contact_uniforms\Data\tmtm_granit_emrFull_co.paa"
		};
	};
	class tmtm_granit_emrWinter: tmtm_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName = "Granit (EMR/Winter)";
		uniformClass = "tmtm_u_granit_emrWinter";
		
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\contact_uniforms\Data\tmtm_granit_emrWinter_co.paa"
		};
	};
	class tmtm_granit_flecktarn: tmtm_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName = "Granit (Flecktarn)";
		uniformClass = "tmtm_u_granit_flecktarn";
		
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\contact_uniforms\Data\tmtm_granit_flecktarn_co.paa"
		};
	};
	class tmtm_granit_flecktarnAlt: tmtm_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName = "Granit (Flecktarn Alt)";
		uniformClass = "tmtm_u_granit_flecktarnAlt";
		
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\contact_uniforms\Data\tmtm_granit_flecktarnAlt_co.paa"
		};
	};
	class tmtm_granit_green3cd: tmtm_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName = "Granit (Green/DCU)";
		uniformClass = "tmtm_u_granit_green3cd";
		
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\contact_uniforms\Data\tmtm_granit_green3cd_co.paa"
		};
	};
	class tmtm_granit_greenKhaki: tmtm_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName = "Granit (Green/Khaki)";
		uniformClass = "tmtm_u_granit_greenKhaki";
		
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\contact_uniforms\Data\tmtm_granit_greenKhaki_co.paa"
		};
	};
	class tmtm_granit_greenM81: tmtm_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName = "Granit (Green/M81)";
		uniformClass = "tmtm_u_granit_greenM81";
		
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\contact_uniforms\Data\tmtm_granit_greenM81_co.paa"
		};
	};
	class tmtm_granit_greenMulticam: tmtm_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName = "Granit (Green/Multicam)";
		uniformClass = "tmtm_u_granit_greenMulticam";
		
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\contact_uniforms\Data\tmtm_granit_greenMulticam_co.paa"
		};
	};
	class tmtm_granit_grey: tmtm_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName = "Granit (Grey)";
		uniformClass = "tmtm_u_granit_grey";
		
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\contact_uniforms\Data\tmtm_granit_grey_co.paa"
		};
	};
	class tmtm_granit_izlom: tmtm_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName = "Granit (Izlom)";
		uniformClass = "tmtm_u_granit_izlom";
		
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\contact_uniforms\Data\tmtm_granit_izlom_co.paa"
		};
	};
	class tmtm_granit_izlomAlt: tmtm_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName = "Granit (Izlom Alt)";
		uniformClass = "tmtm_u_granit_izlomAlt";
		
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\contact_uniforms\Data\tmtm_granit_izlomAlt_co.paa"
		};
	};
	class tmtm_granit_izlomAltWinter: tmtm_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName = "Granit (Izlom Alt Winter)";
		uniformClass = "tmtm_u_granit_izlomAltWinter";
		
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\contact_uniforms\Data\tmtm_granit_izlomAltWinter_co.paa"
		};
	};
	class tmtm_granit_klmk: tmtm_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName = "Granit (KLMK)";
		uniformClass = "tmtm_u_granit_klmk";
		
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\contact_uniforms\Data\tmtm_granit_klmk_co.paa"
		};
	};
	class tmtm_granit_klmkAlt: tmtm_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName = "Granit (KLMK Alt)";
		uniformClass = "tmtm_u_granit_klmkAlt";
		
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\contact_uniforms\Data\tmtm_granit_klmkAlt_co.paa"
		};
	};
	class tmtm_granit_klmkReverse: tmtm_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName = "Granit (KLMK Reverse)";
		uniformClass = "tmtm_u_granit_klmkReverse";
		
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\contact_uniforms\Data\tmtm_granit_klmkReverse_co.paa"
		};
	};
	class tmtm_granit_klmkReverseAlt: tmtm_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName = "Granit (KLMK Reverse Alt)";
		uniformClass = "tmtm_u_granit_klmkReverseAlt";
		
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\contact_uniforms\Data\tmtm_granit_klmkReverseAlt_co.paa"
		};
	};
	class tmtm_granit_ldf: tmtm_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName = "Granit (LDF)";
		uniformClass = "tmtm_u_granit_ldf";
		
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\contact_uniforms\Data\tmtm_granit_ldf_co.paa"
		};
	};
	class tmtm_granit_ldfAlt: tmtm_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName = "Granit (LDF Alt)";
		uniformClass = "tmtm_u_granit_ldfAlt";
		
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\contact_uniforms\Data\tmtm_granit_ldfAlt_co.paa"
		};
	};
	class tmtm_granit_m81: tmtm_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName = "Granit (M81)";
		uniformClass = "tmtm_u_granit_m81";
		
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\contact_uniforms\Data\tmtm_granit_m81_co.paa"
		};
	};
	class tmtm_granit_m81Winter: tmtm_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName = "Granit (M81/Winter)";
		uniformClass = "tmtm_u_granit_m81Winter";
		
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\contact_uniforms\Data\tmtm_granit_m81Winter_co.paa"
		};
	};
	class tmtm_granit_marpatDes: tmtm_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName = "Granit (MARPAT Desert)";
		uniformClass = "tmtm_u_granit_marpatDes";
		
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\contact_uniforms\Data\tmtm_granit_marpatDes_co.paa"
		};
	};
	class tmtm_granit_marpatDesWinter: tmtm_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName = "Granit (MARPAT Desert/Winter)";
		uniformClass = "tmtm_u_granit_marpatDesWinter";
		
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\contact_uniforms\Data\tmtm_granit_marpatDesWinter_co.paa"
		};
	};
	class tmtm_granit_marpatWdl: tmtm_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName = "Granit (MARPAT)";
		uniformClass = "tmtm_u_granit_marpatWdl";
		
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\contact_uniforms\Data\tmtm_granit_marpatWdl_co.paa"
		};
	};
	class tmtm_granit_marpatWdlWinter: tmtm_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName = "Granit (MARPAT/Winter)";
		uniformClass = "tmtm_u_granit_marpatWdlWinter";
		
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\contact_uniforms\Data\tmtm_granit_marpatWdlWinter_co.paa"
		};
	};
	class tmtm_granit_mtp: tmtm_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName = "Granit (MTP)";
		uniformClass = "tmtm_u_granit_mtp";
		
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\contact_uniforms\Data\tmtm_granit_mtp_co.paa"
		};
	};
	class tmtm_granit_mtpWinter: tmtm_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName = "Granit (MTP/Winter)";
		uniformClass = "tmtm_u_granit_mtpWinter";
		
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\contact_uniforms\Data\tmtm_granit_mtpWinter_co.paa"
		};
	};
	class tmtm_granit_multicam: tmtm_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName = "Granit (Multicam)";
		uniformClass = "tmtm_u_granit_multicam";
		
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\contact_uniforms\Data\tmtm_granit_multicam_co.paa"
		};
	};
	class tmtm_granit_multicamWinter: tmtm_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName = "Granit (Multicam/Winter)";
		uniformClass = "tmtm_u_granit_multicamWinter";
		
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\contact_uniforms\Data\tmtm_granit_multicamWinter_co.paa"
		};
	};
	class tmtm_granit_natoWinter: tmtm_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName = "Granit (NATO Winter)";
		uniformClass = "tmtm_u_granit_natoWinter";
		
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\contact_uniforms\Data\tmtm_granit_natoWinter_co.paa"
		};
	};
	class tmtm_granit_night3cd: tmtm_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName = "Granit (Night/DCU)";
		uniformClass = "tmtm_u_granit_night3cd";
		
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\contact_uniforms\Data\tmtm_granit_night3cd_co.paa"
		};
	};
	class tmtm_granit_night6cd: tmtm_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName = "Granit (Night/DBDU)";
		uniformClass = "tmtm_u_granit_night6cd";
		
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\contact_uniforms\Data\tmtm_granit_night6cd_co.paa"
		};
	};
	class tmtm_granit_nightM81: tmtm_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName = "Granit (Night/M81)";
		uniformClass = "tmtm_u_granit_nightM81";
		
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\contact_uniforms\Data\tmtm_granit_nightM81_co.paa"
		};
	};
	class tmtm_granit_ocp: tmtm_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName = "Granit (OCP)";
		uniformClass = "tmtm_u_granit_ocp";
		
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\contact_uniforms\Data\tmtm_granit_ocp_co.paa"
		};
	};
	class tmtm_granit_ocpWinter: tmtm_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName = "Granit (OCP/Winter)";
		uniformClass = "tmtm_u_granit_ocpWinter";
		
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\contact_uniforms\Data\tmtm_granit_ocpWinter_co.paa"
		};
	};
	class tmtm_granit_olive3cd: tmtm_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName = "Granit (Olive/DCU)";
		uniformClass = "tmtm_u_granit_olive3cd";
		
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\contact_uniforms\Data\tmtm_granit_olive3cd_co.paa"
		};
	};
	class tmtm_granit_oliveKhaki: tmtm_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName = "Granit (Olive/Khaki)";
		uniformClass = "tmtm_u_granit_oliveKhaki";
		
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\contact_uniforms\Data\tmtm_granit_oliveKhaki_co.paa"
		};
	};
	class tmtm_granit_oliveM81: tmtm_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName = "Granit (Olive/M81)";
		uniformClass = "tmtm_u_granit_oliveM81";
		
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\contact_uniforms\Data\tmtm_granit_oliveM81_co.paa"
		};
	};
	class tmtm_granit_oliveMulticam: tmtm_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName = "Granit (Olive/Multicam)";
		uniformClass = "tmtm_u_granit_oliveMulticam";
		
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\contact_uniforms\Data\tmtm_granit_oliveMulticam_co.paa"
		};
	};
	class tmtm_granit_partizan: tmtm_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName = "Granit (Partizan)";
		uniformClass = "tmtm_u_granit_partizan";
		
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\contact_uniforms\Data\tmtm_granit_partizan_co.paa"
		};
	};
	class tmtm_granit_partizanAlt: tmtm_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName = "Granit (Partizan Alt)";
		uniformClass = "tmtm_u_granit_partizanAlt";
		
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\contact_uniforms\Data\tmtm_granit_partizanAlt_co.paa"
		};
	};
	class tmtm_granit_partizanAltWinter: tmtm_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName = "Granit (Partizan Alt/Winter)";
		uniformClass = "tmtm_u_granit_partizanAltWinter";
		
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\contact_uniforms\Data\tmtm_granit_partizanAltWinter_co.paa"
		};
	};
	class tmtm_granit_partizanAutumn: tmtm_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName = "Granit (Partizan Autumn)";
		uniformClass = "tmtm_u_granit_partizanAutumn";
		
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\contact_uniforms\Data\tmtm_granit_partizanAutumn_co.paa"
		};
	};
	class tmtm_granit_partizanAutumnAlt: tmtm_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName = "Granit (Partizan Autumn Alt)";
		uniformClass = "tmtm_u_granit_partizanAutumnAlt";
		
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\contact_uniforms\Data\tmtm_granit_partizanAutumnAlt_co.paa"
		};
	};
	class tmtm_granit_partizanAutumnAltWinter: tmtm_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName = "Granit (Partizan Autumn Alt/Winter)";
		uniformClass = "tmtm_u_granit_partizanAutumnAltWinter";
		
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\contact_uniforms\Data\tmtm_granit_partizanAutumnAltWinter_co.paa"
		};
	};
	class tmtm_granit_skol: tmtm_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName = "Granit (Skol)";
		uniformClass = "tmtm_u_granit_skol";
		
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\contact_uniforms\Data\tmtm_granit_skol_co.paa"
		};
	};
	class tmtm_granit_skolAlt: tmtm_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName = "Granit (Skol Alt)";
		uniformClass = "tmtm_u_granit_skolAlt";
		
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\contact_uniforms\Data\tmtm_granit_skolAlt_co.paa"
		};
	};
	class tmtm_granit_skolAltWinter: tmtm_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName = "Granit (Skol Alt/Winter)";
		uniformClass = "tmtm_u_granit_skolAltWinter";
		
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\contact_uniforms\Data\tmtm_granit_skolAltWinter_co.paa"
		};
	};
	class tmtm_granit_surpat: tmtm_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName = "Granit (SURPAT)";
		uniformClass = "tmtm_u_granit_surpat";
		
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\contact_uniforms\Data\tmtm_granit_surpat_co.paa"
		};
	};
	class tmtm_granit_surpatAlt: tmtm_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName = "Granit (SURPAT Alt)";
		uniformClass = "tmtm_u_granit_surpatAlt";
		
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\contact_uniforms\Data\tmtm_granit_surpatAlt_co.paa"
		};
	};
	class tmtm_granit_surpatFull: tmtm_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName = "Granit (SURPAT)";
		uniformClass = "tmtm_u_granit_surpatFull";
		
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\contact_uniforms\Data\tmtm_granit_surpatFull_co.paa"
		};
	};
	class tmtm_granit_surpatRanger: tmtm_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName = "Granit (SURPAT/Ranger)";
		uniformClass = "tmtm_u_granit_surpatRanger";
		
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\contact_uniforms\Data\tmtm_granit_surpatRanger_co.paa"
		};
	};
	class tmtm_granit_surpatBlack: tmtm_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName = "Granit (SURPAT/Black)";
		uniformClass = "tmtm_u_granit_surpatBlack";
		
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\contact_uniforms\Data\tmtm_granit_surpatBlack_co.paa"
		};
	};
	class tmtm_granit_urbanRed: tmtm_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName = "Granit (Urban Red)";
		uniformClass = "tmtm_u_granit_urbanRed";
		
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\contact_uniforms\Data\tmtm_granit_urbanRed_co.paa"
		};
	};
	class tmtm_granit_urbanRedAlt: tmtm_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName = "Granit (Urban Red Alt)";
		uniformClass = "tmtm_u_granit_urbanRedAlt";
		
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\contact_uniforms\Data\tmtm_granit_urbanRedAlt_co.paa"
		};
	};
	class tmtm_granit_white: tmtm_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName = "Granit (White)";
		uniformClass = "tmtm_u_granit_white";
		
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\contact_uniforms\Data\tmtm_granit_white_co.paa"
		};
	};
	class tmtm_granit_winterCadpat: tmtm_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName = "Granit (Winter/CADPAT)";
		uniformClass = "tmtm_u_granit_winterCadpat";
		
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\contact_uniforms\Data\tmtm_granit_winterCadpat_co.paa"
		};
	};
	class tmtm_granit_winterEmr: tmtm_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName = "Granit (Winter/EMR)";
		uniformClass = "tmtm_u_granit_winterEmr";
		
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\contact_uniforms\Data\tmtm_granit_winterEmr_co.paa"
		};
	};
	class tmtm_granit_winterIzlomAlt: tmtm_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName = "Granit (Winter/Izlom Alt)";
		uniformClass = "tmtm_u_granit_winterIzlomAlt";
		
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\contact_uniforms\Data\tmtm_granit_winterIzlomAlt_co.paa"
		};
	};
	class tmtm_granit_winterKamysh: tmtm_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName = "Granit (Winter/Kamysh)";
		uniformClass = "tmtm_u_granit_winterKamysh";
		
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\contact_uniforms\Data\tmtm_granit_winterKamysh_co.paa"
		};
	};
	class tmtm_granit_winterM81: tmtm_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName = "Granit (Winter/M81)";
		uniformClass = "tmtm_u_granit_winterM81";
		
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\contact_uniforms\Data\tmtm_granit_winterM81_co.paa"
		};
	};
	class tmtm_granit_winterMarpatDes: tmtm_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName = "Granit (Winter/MARPAT Desert)";
		uniformClass = "tmtm_u_granit_winterMarpatDes";
		
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\contact_uniforms\Data\tmtm_granit_winterMarpatDes_co.paa"
		};
	};
	class tmtm_granit_winterMarpatWdl: tmtm_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName = "Granit (Winter/MARPAT)";
		uniformClass = "tmtm_u_granit_winterMarpatWdl";
		
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\contact_uniforms\Data\tmtm_granit_winterMarpatWdl_co.paa"
		};
	};
	class tmtm_granit_winterMtp: tmtm_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName = "Granit (Winter/MTP)";
		uniformClass = "tmtm_u_granit_winterMtp";
		
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\contact_uniforms\Data\tmtm_granit_winterMtp_co.paa"
		};
	};
	class tmtm_granit_winterMulticam: tmtm_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName = "Granit (Winter/Multicam)";
		uniformClass = "tmtm_u_granit_winterMulticam";
		
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\contact_uniforms\Data\tmtm_granit_winterMulticam_co.paa"
		};
	};
	class tmtm_granit_winterOcp: tmtm_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName = "Granit (Winter/OCP)";
		uniformClass = "tmtm_u_granit_winterOcp";
		
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\contact_uniforms\Data\tmtm_granit_winterOcp_co.paa"
		};
	};
	class tmtm_granit_winterPartizanAlt: tmtm_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName = "Granit (Winter/Partizan Alt)";
		uniformClass = "tmtm_u_granit_winterPartizanAlt";
		
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\contact_uniforms\Data\tmtm_granit_winterPartizanAlt_co.paa"
		};
	};
	class tmtm_granit_winterPartizanAutumnAlt: tmtm_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName = "Granit (Winter/Partizan Autumn Alt)";
		uniformClass = "tmtm_u_granit_winterPartizanAutumnAlt";
		
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\contact_uniforms\Data\tmtm_granit_winterPartizanAutumnAlt_co.paa"
		};
	};
	class tmtm_granit_winterSkolAlt: tmtm_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName = "Granit (Winter/Skol Alt)";
		uniformClass = "tmtm_u_granit_winterSkolAlt";
		
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\contact_uniforms\Data\tmtm_granit_winterSkolAlt_co.paa"
		};
	};
	class tmtm_granit_winterUcp: tmtm_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName = "Granit (Winter/UCP)";
		uniformClass = "tmtm_u_granit_winterUcp";
		
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\contact_uniforms\Data\tmtm_granit_winterUcp_co.paa"
		};
	};
	class tmtm_granit_ucp: tmtm_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName = "Granit (UCP)";
		uniformClass = "tmtm_u_granit_ucp";
		
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\contact_uniforms\Data\tmtm_granit_ucp_co.paa"
		};
	};
	class tmtm_granit_ucpWinter: tmtm_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName = "Granit (UCP/Winter)";
		uniformClass = "tmtm_u_granit_ucpWinter";
		
		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\contact_uniforms\Data\tmtm_granit_ucpWinter_co.paa"
		};
	};
};