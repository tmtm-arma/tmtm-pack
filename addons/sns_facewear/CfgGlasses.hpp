class CfgGlasses
{
    class None;
    
    class tmtm_g_wool_gloves_base: None
	{
		scope=0;

		model="simc_uaf_69\len_gloves_1.p3d";
		picture="\simc_uaf_67_preview\icons\nomex_1_ca.paa";

		hiddenSelections[]= { "nomex" };
        hiddenSelectionsMaterials[] = {
			"\tmtm\pack\sns_facewear\data\wool_gloves.rvmat"
		};

		identityTypes[]={};
		mass=2;
	};

    class tmtm_g_wool_gloves_cut_base: tmtm_g_wool_gloves_base
	{
		scope=0;
		model="simc_uaf_69\len_gloves_1_cut.p3d";
	};

    ///////////////////////////////////////////////////////////
    // Regular length
    class tmtm_g_wool_gloves_black : tmtm_g_wool_gloves_base
    {
		scope=2;
        scopeArsenal=2;
        
        author="erem2k, Lennard";

		displayname="Wool Gloves (Black)";
 		picture="\simc_uaf_67_preview\icons\nomex_1_ca.paa";

		hiddenSelectionsTextures[]= {
			"\tmtm\pack\sns_facewear\data\wool_gloves_black_co.paa"
		};
    };

    class tmtm_g_wool_gloves_brown : tmtm_g_wool_gloves_base
    {
		scope=2;
        scopeArsenal=2;
        
        author="erem2k, Lennard";

		displayname="Wool Gloves (Brown)";
 		picture="\simc_uaf_67_preview\icons\nomex_1_ca.paa";

		hiddenSelectionsTextures[]= {
			"\tmtm\pack\sns_facewear\data\wool_gloves_brown_co.paa"
		};
    };

    class tmtm_g_wool_gloves_olive : tmtm_g_wool_gloves_base
    {
		scope=2;
        scopeArsenal=2;
        
        author="erem2k, Lennard";

		displayname="Wool Gloves (Olive)";
 		picture="\simc_uaf_67_preview\icons\nomex_1_ca.paa";

		hiddenSelectionsTextures[]= {
			"\tmtm\pack\sns_facewear\data\wool_gloves_olive_co.paa"
		};
    };

    ///////////////////////////////////////////////////////////
    // Cut
    class tmtm_g_wool_gloves_cut_black : tmtm_g_wool_gloves_cut_base
    {
		scope=2;
        scopeArsenal=2;
        
        author="erem2k, Lennard";

		displayname="Wool Gloves (Black, Cut)";
 		picture="\simc_uaf_67_preview\icons\nomex_1_ca.paa";

		hiddenSelectionsTextures[]= {
			"\tmtm\pack\sns_facewear\data\wool_gloves_black_co.paa"
		};
    };

    class tmtm_g_wool_gloves_cut_brown : tmtm_g_wool_gloves_cut_base
    {
		scope=2;
        scopeArsenal=2;
        
        author="erem2k, Lennard";

		displayname="Wool Gloves (Brown, Cut)";
 		picture="\simc_uaf_67_preview\icons\nomex_1_ca.paa";

		hiddenSelectionsTextures[]= {
			"\tmtm\pack\sns_facewear\data\wool_gloves_brown_co.paa"
		};
    };

    class tmtm_g_wool_gloves_cut_olive : tmtm_g_wool_gloves_cut_base
    {
		scope=2;
        scopeArsenal=2;
        
        author="erem2k, Lennard";

		displayname="Wool Gloves (Olive, Cut)";
 		picture="\simc_uaf_67_preview\icons\nomex_1_ca.paa";

		hiddenSelectionsTextures[]= {
			"\tmtm\pack\sns_facewear\data\wool_gloves_olive_co.paa"
		};
    };
};