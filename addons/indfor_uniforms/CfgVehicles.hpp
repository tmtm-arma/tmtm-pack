class CfgVehicles 
{     
	class B_Soldier_base_F;
	class tmtm_commandoSweater_base: B_Soldier_base_F
	{
		author="Trenchgun";
		_generalMacro="B_soldier_F";
		scope=0;
		scopeArsenal=0;
		scopeCurator=0;
		displayName="Commando Sweater";
		model="\A3\characters_f_bootcamp\Guerrilla\ig_guerrilla_6_1.p3d";
		modelSides[]={1,2,3,4};
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsMaterials[]=
		{
			"\A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"
		};
	};
	class tmtm_commandoSweater_black: tmtm_commandoSweater_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Commando Sweater (Black)";
		uniformClass="tmtm_u_commandoSweater_black";
		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\indfor_uniforms\Data\tmtm_commandoSweater_black_co.paa"
		};
	};
	class tmtm_commandoSweater_blue: tmtm_commandoSweater_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Commando Sweater (Blue)";
		uniformClass="tmtm_u_commandoSweater_blue";
		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\indfor_uniforms\Data\tmtm_commandoSweater_blue_co.paa"
		};
	};
	class tmtm_commandoSweater_brown: tmtm_commandoSweater_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Commando Sweater (Brown)";
		uniformClass="tmtm_u_commandoSweater_brown";
		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\indfor_uniforms\Data\tmtm_commandoSweater_brown_co.paa"
		};
	};
	class tmtm_commandoSweater_erdl: tmtm_commandoSweater_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Commando Sweater (ERDL)";
		uniformClass="tmtm_u_commandoSweater_erdl";
		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\indfor_uniforms\Data\tmtm_commandoSweater_erdl_co.paa"
		};
	};
	class tmtm_commandoSweater_erdlArvn: tmtm_commandoSweater_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Commando Sweater (ERDL ARVN)";
		uniformClass="tmtm_u_commandoSweater_erdlArvn";
		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\indfor_uniforms\Data\tmtm_commandoSweater_erdlArvn_co.paa"
		};
	};
	class tmtm_commandoSweater_erdlOcean: tmtm_commandoSweater_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Commando Sweater (ERDL Ocean)";
		uniformClass="tmtm_u_commandoSweater_erdlOcean";
		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\indfor_uniforms\Data\tmtm_commandoSweater_erdlOcean_co.paa"
		};
	};
	class tmtm_commandoSweater_ghost: tmtm_commandoSweater_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Commando Sweater (Ghost)";
		uniformClass="tmtm_u_commandoSweater_ghost";
		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\indfor_uniforms\Data\tmtm_commandoSweater_ghost_co.paa"
		};
	};
		class tmtm_commandoSweater_navy: tmtm_commandoSweater_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Commando Sweater (Navy)";
		uniformClass="tmtm_u_commandoSweater_navy";
		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\indfor_uniforms\Data\tmtm_commandoSweater_navy_co.paa"
		};
	};
	class tmtm_commandoSweater_red: tmtm_commandoSweater_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Commando Sweater (Red)";
		uniformClass="tmtm_u_commandoSweater_red";
		hiddenSelectionsTextures[]=
		{
			"\tmtm\pack\indfor_uniforms\Data\tmtm_commandoSweater_red_co.paa"
		};
	};
};