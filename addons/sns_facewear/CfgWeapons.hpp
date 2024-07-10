class CfgWeapons
{
	class NVGoggles;

    class tmtm_nvg_wool_gloves_base: NVGoggles
    {
        scope=0;

		model="simc_uaf_69\suitpack_nomex.p3d";
		hiddenSelections[]= {
			"nomex"
		};

		modelOptics="\A3\Weapons_F\empty";
		visionMode[]= {
			"Normal",
			"Normal"
		};
    };

    class tmtm_nvg_wool_gloves_black: tmtm_nvg_wool_gloves_base
    {
		scope=2;
        scopeArsenal=2;
        
        author="erem2k, Lennard";

		displayname="Wool Gloves (Black)";
        descriptionShort="Glove, Wool";

 		picture="\simc_uaf_67_preview\icons\nomex_1_ca.paa";

		hiddenSelectionsTextures[]= {
			"\tmtm\pack\sns_facewear\data\tmtm_wool_gloves_black_co.paa"
		};

        TMTM_NVG_WOOL_GLOVES_ITEMINFO("\tmtm\pack\sns_facewear\data\tmtm_wool_gloves_black_co.paa")
    };

    class tmtm_nvg_wool_gloves_brown: tmtm_nvg_wool_gloves_base
    {
		scope=2;
        scopeArsenal=2;
        
        author="erem2k, Lennard";

		displayname="Wool Gloves (Brown)";
        descriptionShort="Glove, Wool";

 		picture="\simc_uaf_67_preview\icons\nomex_1_ca.paa";

		hiddenSelectionsTextures[]= {
			"\tmtm\pack\sns_facewear\data\tmtm_wool_gloves_brown_co.paa"
		};

        TMTM_NVG_WOOL_GLOVES_ITEMINFO("\tmtm\pack\sns_facewear\data\tmtm_wool_gloves_brown_co.paa")
    };

    class tmtm_nvg_wool_gloves_olive: tmtm_nvg_wool_gloves_base
    {
		scope=2;
        scopeArsenal=2;
        
        author="erem2k, Lennard";

		displayname="Wool Gloves (Olive)";
        descriptionShort="Glove, Wool";

 		picture="\simc_uaf_67_preview\icons\nomex_1_ca.paa";

		hiddenSelectionsTextures[]= {
			"\tmtm\pack\sns_facewear\data\tmtm_wool_gloves_olive_co.paa"
		};

        TMTM_NVG_WOOL_GLOVES_ITEMINFO("\tmtm\pack\sns_facewear\data\tmtm_wool_gloves_olive_co.paa")
    };

    ///////////////////////////////////////////////////////////
    // Cut
    class tmtm_nvg_wool_gloves_cut_black: tmtm_nvg_wool_gloves_base
    {
		scope=2;
        scopeArsenal=2;
        
        author="erem2k, Lennard";

		displayname="Wool Gloves (Black, Cut)";
        descriptionShort="Glove, Wool, Cut";

 		picture="\simc_uaf_67_preview\icons\nomex_1_ca.paa";

		hiddenSelectionsTextures[]= {
			"\tmtm\pack\sns_facewear\data\tmtm_wool_gloves_black_co.paa"
		};

        TMTM_NVG_WOOL_GLOVES_CUT_ITEMINFO("\tmtm\pack\sns_facewear\data\tmtm_wool_gloves_black_co.paa")
    };

    class tmtm_nvg_wool_gloves_cut_brown: tmtm_nvg_wool_gloves_base
    {
		scope=2;
        scopeArsenal=2;
        
        author="erem2k, Lennard";

		displayname="Wool Gloves (Brown, Cut)";
        descriptionShort="Glove, Wool, Cut";

 		picture="\simc_uaf_67_preview\icons\nomex_1_ca.paa";

		hiddenSelectionsTextures[]= {
			"\tmtm\pack\sns_facewear\data\tmtm_wool_gloves_brown_co.paa"
		};

        TMTM_NVG_WOOL_GLOVES_CUT_ITEMINFO("\tmtm\pack\sns_facewear\data\tmtm_wool_gloves_brown_co.paa")
    };

    class tmtm_nvg_wool_gloves_cut_olive: tmtm_nvg_wool_gloves_base
    {
		scope=2;
        scopeArsenal=2;
        
        author="erem2k, Lennard";

		displayname="Wool Gloves (Olive, Cut)";
        descriptionShort="Glove, Wool, Cut";

 		picture="\simc_uaf_67_preview\icons\nomex_1_ca.paa";

		hiddenSelectionsTextures[]= {
			"\tmtm\pack\sns_facewear\data\tmtm_wool_gloves_olive_co.paa"
		};

        TMTM_NVG_WOOL_GLOVES_CUT_ITEMINFO("\tmtm\pack\sns_facewear\data\tmtm_wool_gloves_olive_co.paa")
    };
};