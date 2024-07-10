class CfgWeapons
{
	class ItemCore;
	class HelmetBase: ItemCore
	{
		class ItemInfo;
	};
    
    class tmtm_h_balaclava_slit_base: HelmetBase
	{
		scope=0;

		descriptionShort="$STR_A3_SP_NOARMOR";

		model="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Balaclava\CUP_Balaclava_c.p3d";
		hiddenSelections[]= {
			"Camo1"
		};

		class ItemInfo: ItemInfo
		{
			hiddenSelections[]= {
				"Camo1"
			};

			uniformModel="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Balaclava\CUP_Balaclava_c.p3d";
			mass=1;

			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=0;
					passThrough=1;
				};
			};
		};
	};

    class tmtm_h_balaclava_slit_loose_base: tmtm_h_balaclava_slit_base
    {
        scope=0;

		model="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Balaclava\CUP_Balaclava_c_v2.p3d";
		hiddenSelections[]= {
			"Camo1"
		};

		class ItemInfo: ItemInfo
		{
			uniformModel="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Balaclava\CUP_Balaclava_c_v2.p3d";
            hiddenSelections[]= {
				"Camo1"
			};
		};
    };

    class tmtm_h_balaclava_slit_ameba: tmtm_h_balaclava_slit_base
    {
		scope=2;
        scopeArsenal=2;
		author="erem2k";

		displayName="Balaclava, Slit (Ameba)";
		picture="\tmtm\pack\cup_facewear\data\ui\icon_tmtm_f_balaclava_slit_ameba_ca.paa";

		hiddenSelectionsTextures[] = {
			"\tmtm\pack\cup_facewear\data\tmtm_balaclava_slit_ameba_co.paa"
		};

		class ItemInfo: ItemInfo
		{
            hiddenSelectionsTextures[] = {
                "\tmtm\pack\cup_facewear\data\tmtm_balaclava_slit_ameba_co.paa"
            };
		};
    };

    class tmtm_h_balaclava_slit_loose_ameba: tmtm_h_balaclava_slit_loose_base
    {
		scope=2;
        scopeArsenal=2;
		author="erem2k";

		displayName="Balaclava, Slit (Ameba, Loose)";
		picture="\tmtm\pack\cup_facewear\data\ui\icon_tmtm_f_balaclava_slit_loose_ameba_ca.paa";

		hiddenSelectionsTextures[] = {
			"\tmtm\pack\cup_facewear\data\tmtm_balaclava_slit_ameba_co.paa"
		};

		class ItemInfo: ItemInfo
		{
            hiddenSelectionsTextures[] = {
                "\tmtm\pack\cup_facewear\data\tmtm_balaclava_slit_ameba_co.paa"
            };
		};
    };

    class tmtm_h_balaclava_slit_black: tmtm_h_balaclava_slit_base
    {
		scope=2;
        scopeArsenal=2;
		author="erem2k";

		displayName="Balaclava, Slit (Black)";
		picture="\tmtm\pack\cup_facewear\data\ui\icon_tmtm_f_balaclava_slit_black_ca.paa";

		hiddenSelectionsTextures[] = {
			"\tmtm\pack\cup_facewear\data\tmtm_balaclava_slit_black_co.paa"
		};

		class ItemInfo: ItemInfo
		{
            hiddenSelectionsTextures[] = {
                "\tmtm\pack\cup_facewear\data\tmtm_balaclava_slit_black_co.paa"
            };
		};
    };

    class tmtm_h_balaclava_slit_loose_black: tmtm_h_balaclava_slit_loose_base
    {
		scope=2;
        scopeArsenal=2;
		author="erem2k";

		displayName="Balaclava, Slit (Black, Loose)";
		picture="\tmtm\pack\cup_facewear\data\ui\icon_tmtm_f_balaclava_slit_loose_black_ca.paa";

		hiddenSelectionsTextures[] = {
			"\tmtm\pack\cup_facewear\data\tmtm_balaclava_slit_black_co.paa"
		};

		class ItemInfo: ItemInfo
		{
            hiddenSelectionsTextures[] = {
                "\tmtm\pack\cup_facewear\data\tmtm_balaclava_slit_black_co.paa"
            };
		};
    };

    class tmtm_h_balaclava_slit_blue: tmtm_h_balaclava_slit_base
    {
		scope=2;
        scopeArsenal=2;
		author="erem2k";

		displayName="Balaclava, Slit (Blue)";
		picture="\tmtm\pack\cup_facewear\data\ui\icon_tmtm_f_balaclava_slit_black_ca.paa";

		hiddenSelectionsTextures[] = {
			"\tmtm\pack\cup_facewear\data\tmtm_balaclava_slit_blue_co.paa"
		};

		class ItemInfo: ItemInfo
		{
            hiddenSelectionsTextures[] = {
                "\tmtm\pack\cup_facewear\data\tmtm_balaclava_slit_blue_co.paa"
            };
		};
    };

    class tmtm_h_balaclava_slit_loose_blue: tmtm_h_balaclava_slit_loose_base
    {
		scope=2;
        scopeArsenal=2;
		author="erem2k";

		displayName="Balaclava, Slit (Blue, Loose)";
		picture="\tmtm\pack\cup_facewear\data\ui\icon_tmtm_f_balaclava_slit_loose_blue_ca.paa";

		hiddenSelectionsTextures[] = {
			"\tmtm\pack\cup_facewear\data\tmtm_balaclava_slit_blue_co.paa"
		};

		class ItemInfo: ItemInfo
		{
            hiddenSelectionsTextures[] = {
                "\tmtm\pack\cup_facewear\data\tmtm_balaclava_slit_blue_co.paa"
            };
		};
    };

    class tmtm_h_balaclava_slit_brown: tmtm_h_balaclava_slit_base
    {
		scope=2;
        scopeArsenal=2;
		author="erem2k";

		displayName="Balaclava, Slit (Brown)";
		picture="\tmtm\pack\cup_facewear\data\ui\icon_tmtm_f_balaclava_slit_brown_ca.paa";

		hiddenSelectionsTextures[] = {
			"\tmtm\pack\cup_facewear\data\tmtm_balaclava_slit_brown_co.paa"
		};

		class ItemInfo: ItemInfo
		{
            hiddenSelectionsTextures[] = {
                "\tmtm\pack\cup_facewear\data\tmtm_balaclava_slit_brown_co.paa"
            };
		};
    };

    class tmtm_h_balaclava_slit_loose_brown: tmtm_h_balaclava_slit_loose_base
    {
		scope=2;
        scopeArsenal=2;
		author="erem2k";

		displayName="Balaclava, Slit (Brown, Loose)";
		picture="\tmtm\pack\cup_facewear\data\ui\icon_tmtm_f_balaclava_slit_brown_loose_ca.paa";

		hiddenSelectionsTextures[] = {
			"\tmtm\pack\cup_facewear\data\tmtm_balaclava_slit_brown_co.paa"
		};

		class ItemInfo: ItemInfo
		{
            hiddenSelectionsTextures[] = {
                "\tmtm\pack\cup_facewear\data\tmtm_balaclava_slit_brown_co.paa"
            };
		};
    };

    class tmtm_h_balaclava_slit_burgundy: tmtm_h_balaclava_slit_base
    {
		scope=2;
        scopeArsenal=2;
		author="erem2k";

		displayName="Balaclava, Slit (Burgundy)";
		picture="\tmtm\pack\cup_facewear\data\ui\icon_tmtm_f_balaclava_slit_burgundy_ca.paa";

		hiddenSelectionsTextures[] = {
			"\tmtm\pack\cup_facewear\data\tmtm_balaclava_slit_burgundy_co.paa"
		};

		class ItemInfo: ItemInfo
		{
            hiddenSelectionsTextures[] = {
                "\tmtm\pack\cup_facewear\data\tmtm_balaclava_slit_burgundy_co.paa"
            };
		};
    };

    class tmtm_h_balaclava_slit_loose_burgundy: tmtm_h_balaclava_slit_loose_base
    {
		scope=2;
        scopeArsenal=2;
		author="erem2k";

		displayName="Balaclava, Slit (Burgundy, Loose)";
		picture="\tmtm\pack\cup_facewear\data\ui\icon_tmtm_f_balaclava_slit_loose_burgundy_ca.paa";

		hiddenSelectionsTextures[] = {
			"\tmtm\pack\cup_facewear\data\tmtm_balaclava_slit_burgundy_co.paa"
		};

		class ItemInfo: ItemInfo
		{
            hiddenSelectionsTextures[] = {
                "\tmtm\pack\cup_facewear\data\tmtm_balaclava_slit_burgundy_co.paa"
            };
		};
    };

    class tmtm_h_balaclava_slit_dubokb: tmtm_h_balaclava_slit_base
    {
		scope=2;
        scopeArsenal=2;
		author="erem2k";

		displayName="Balaclava, Slit (Dubok Blue)";
		picture="\tmtm\pack\cup_facewear\data\ui\icon_tmtm_f_balaclava_slit_dubokb_ca.paa";

		hiddenSelectionsTextures[] = {
			"\tmtm\pack\cup_facewear\data\tmtm_balaclava_slit_dubokb_co.paa"
		};

		class ItemInfo: ItemInfo
		{
            hiddenSelectionsTextures[] = {
                "\tmtm\pack\cup_facewear\data\tmtm_balaclava_slit_dubokb_co.paa"
            };
		};
    };

    class tmtm_h_balaclava_slit_loose_dubokb: tmtm_h_balaclava_slit_loose_base
    {
		scope=2;
        scopeArsenal=2;
		author="erem2k";

		displayName="Balaclava, Slit (Dubok Blue, Loose)";
		picture="\tmtm\pack\cup_facewear\data\ui\icon_tmtm_f_balaclava_slit_loose_dubokb_ca.paa";

		hiddenSelectionsTextures[] = {
			"\tmtm\pack\cup_facewear\data\tmtm_balaclava_slit_dubokb_co.paa"
		};

		class ItemInfo: ItemInfo
		{
            hiddenSelectionsTextures[] = {
                "\tmtm\pack\cup_facewear\data\tmtm_balaclava_slit_dubokb_co.paa"
            };
		};
    };

    class tmtm_h_balaclava_slit_dubokgb: tmtm_h_balaclava_slit_base
    {
		scope=2;
        scopeArsenal=2;
		author="erem2k";

		displayName="Balaclava, Slit (Dubok Gray)";
		picture="\tmtm\pack\cup_facewear\data\ui\icon_tmtm_f_balaclava_slit_dubokgb_ca.paa";

		hiddenSelectionsTextures[] = {
			"\tmtm\pack\cup_facewear\data\tmtm_balaclava_slit_dubokgb_co.paa"
		};

		class ItemInfo: ItemInfo
		{
            hiddenSelectionsTextures[] = {
                "\tmtm\pack\cup_facewear\data\tmtm_balaclava_slit_dubokgb_co.paa"
            };
		};
    };

    class tmtm_h_balaclava_slit_loose_dubokgb: tmtm_h_balaclava_slit_loose_base
    {
		scope=2;
        scopeArsenal=2;
		author="erem2k";

		displayName="Balaclava, Slit (Dubok Gray, Loose)";
		picture="\tmtm\pack\cup_facewear\data\ui\icon_tmtm_f_balaclava_slit_loose_dubokgb_ca.paa";

		hiddenSelectionsTextures[] = {
			"\tmtm\pack\cup_facewear\data\tmtm_balaclava_slit_dubokgb_co.paa"
		};

		class ItemInfo: ItemInfo
		{
            hiddenSelectionsTextures[] = {
                "\tmtm\pack\cup_facewear\data\tmtm_balaclava_slit_dubokgb_co.paa"
            };
		};
    };

    class tmtm_h_balaclava_slit_gray: tmtm_h_balaclava_slit_base
    {
		scope=2;
        scopeArsenal=2;
		author="erem2k";

		displayName="Balaclava, Slit (Gray)";
		picture="\tmtm\pack\cup_facewear\data\ui\icon_tmtm_f_balaclava_slit_gray_ca.paa";

		hiddenSelectionsTextures[] = {
			"\tmtm\pack\cup_facewear\data\tmtm_balaclava_slit_gray_co.paa"
		};

		class ItemInfo: ItemInfo
		{
            hiddenSelectionsTextures[] = {
                "\tmtm\pack\cup_facewear\data\tmtm_balaclava_slit_gray_co.paa"
            };
		};
    };

    class tmtm_h_balaclava_slit_loose_gray: tmtm_h_balaclava_slit_loose_base
    {
		scope=2;
        scopeArsenal=2;
		author="erem2k";

		displayName="Balaclava, Slit (Gray, Loose)";
		picture="\tmtm\pack\cup_facewear\data\ui\icon_tmtm_f_balaclava_slit_loose_gray_ca.paa";

		hiddenSelectionsTextures[] = {
			"\tmtm\pack\cup_facewear\data\tmtm_balaclava_slit_gray_co.paa"
		};

		class ItemInfo: ItemInfo
		{
            hiddenSelectionsTextures[] = {
                "\tmtm\pack\cup_facewear\data\tmtm_balaclava_slit_gray_co.paa"
            };
		};
    };

    class tmtm_h_balaclava_slit_grayblue: tmtm_h_balaclava_slit_base
    {
		scope=2;
        scopeArsenal=2;
		author="erem2k";

		displayName="Balaclava, Slit (Gray-Blue)";
		picture="\tmtm\pack\cup_facewear\data\ui\icon_tmtm_f_balaclava_slit_grayblue_ca.paa";

		hiddenSelectionsTextures[] = {
			"\tmtm\pack\cup_facewear\data\tmtm_balaclava_slit_grayblue_co.paa"
		};

		class ItemInfo: ItemInfo
		{
            hiddenSelectionsTextures[] = {
                "\tmtm\pack\cup_facewear\data\tmtm_balaclava_slit_grayblue_co.paa"
            };
		};
    };

    class tmtm_h_balaclava_slit_loose_grayblue: tmtm_h_balaclava_slit_loose_base
    {
		scope=2;
        scopeArsenal=2;
		author="erem2k";

		displayName="Balaclava, Slit (Gray-Blue, Loose)";
		picture="\tmtm\pack\cup_facewear\data\ui\icon_tmtm_f_balaclava_slit_loose_grayblue_ca.paa";

		hiddenSelectionsTextures[] = {
			"\tmtm\pack\cup_facewear\data\tmtm_balaclava_slit_grayblue_co.paa"
		};

		class ItemInfo: ItemInfo
		{
            hiddenSelectionsTextures[] = {
                "\tmtm\pack\cup_facewear\data\tmtm_balaclava_slit_grayblue_co.paa"
            };
		};
    };

    class tmtm_h_balaclava_slit_grayred: tmtm_h_balaclava_slit_base
    {
		scope=2;
        scopeArsenal=2;
		author="erem2k";

		displayName="Balaclava, Slit (Gray-Red)";
		picture="\tmtm\pack\cup_facewear\data\ui\icon_tmtm_f_balaclava_slit_grayred_ca.paa";

		hiddenSelectionsTextures[] = {
			"\tmtm\pack\cup_facewear\data\tmtm_balaclava_slit_grayred_co.paa"
		};

		class ItemInfo: ItemInfo
		{
            hiddenSelectionsTextures[] = {
                "\tmtm\pack\cup_facewear\data\tmtm_balaclava_slit_grayred_co.paa"
            };
		};
    };

    class tmtm_h_balaclava_slit_loose_grayred: tmtm_h_balaclava_slit_loose_base
    {
		scope=2;
        scopeArsenal=2;
		author="erem2k";

		displayName="Balaclava, Slit (Gray-Red, Loose)";
		picture="\tmtm\pack\cup_facewear\data\ui\icon_tmtm_f_balaclava_slit_loose_grayred_ca.paa";

		hiddenSelectionsTextures[] = {
			"\tmtm\pack\cup_facewear\data\tmtm_balaclava_slit_grayred_co.paa"
		};

		class ItemInfo: ItemInfo
		{
            hiddenSelectionsTextures[] = {
                "\tmtm\pack\cup_facewear\data\tmtm_balaclava_slit_grayred_co.paa"
            };
		};
    };

    class tmtm_h_balaclava_slit_merlot: tmtm_h_balaclava_slit_base
    {
		scope=2;
        scopeArsenal=2;
		author="erem2k";

		displayName="Balaclava, Slit (Merlot)";
		picture="\tmtm\pack\cup_facewear\data\ui\icon_tmtm_f_balaclava_slit_merlot_ca.paa";

		hiddenSelectionsTextures[] = {
			"\tmtm\pack\cup_facewear\data\tmtm_balaclava_slit_merlot_co.paa"
		};

		class ItemInfo: ItemInfo
		{
            hiddenSelectionsTextures[] = {
                "\tmtm\pack\cup_facewear\data\tmtm_balaclava_slit_merlot_co.paa"
            };
		};
    };

    class tmtm_h_balaclava_slit_loose_merlot: tmtm_h_balaclava_slit_loose_base
    {
		scope=2;
        scopeArsenal=2;
		author="erem2k";

		displayName="Balaclava, Slit (Merlot, Loose)";
		picture="\tmtm\pack\cup_facewear\data\ui\icon_tmtm_f_balaclava_slit_loose_merlot_ca.paa";

		hiddenSelectionsTextures[] = {
			"\tmtm\pack\cup_facewear\data\tmtm_balaclava_slit_merlot_co.paa"
		};

		class ItemInfo: ItemInfo
		{
            hiddenSelectionsTextures[] = {
                "\tmtm\pack\cup_facewear\data\tmtm_balaclava_slit_merlot_co.paa"
            };
		};
    };

    class tmtm_h_balaclava_slit_olive: tmtm_h_balaclava_slit_base
    {
		scope=2;
        scopeArsenal=2;
		author="erem2k";

		displayName="Balaclava, Slit (Olive)";
		picture="\tmtm\pack\cup_facewear\data\ui\icon_tmtm_f_balaclava_slit_olive_ca.paa";

		hiddenSelectionsTextures[] = {
			"\tmtm\pack\cup_facewear\data\tmtm_balaclava_slit_olive_co.paa"
		};

		class ItemInfo: ItemInfo
		{
            hiddenSelectionsTextures[] = {
                "\tmtm\pack\cup_facewear\data\tmtm_balaclava_slit_olive_co.paa"
            };
		};
    };

    class tmtm_h_balaclava_slit_loose_olive: tmtm_h_balaclava_slit_loose_base
    {
		scope=2;
        scopeArsenal=2;
		author="erem2k";

		displayName="Balaclava, Slit (Olive, Loose)";
		picture="\tmtm\pack\cup_facewear\data\ui\icon_tmtm_f_balaclava_slit_loose_olive_ca.paa";

		hiddenSelectionsTextures[] = {
			"\tmtm\pack\cup_facewear\data\tmtm_balaclava_slit_olive_co.paa"
		};

		class ItemInfo: ItemInfo
		{
            hiddenSelectionsTextures[] = {
                "\tmtm\pack\cup_facewear\data\tmtm_balaclava_slit_olive_co.paa"
            };
		};
    };

    class tmtm_h_balaclava_slit_reedw: tmtm_h_balaclava_slit_base
    {
		scope=2;
        scopeArsenal=2;
		author="erem2k";

		displayName="Balaclava, Slit (Reed White)";
		picture="\tmtm\pack\cup_facewear\data\ui\icon_tmtm_f_balaclava_slit_reedw_ca.paa";

		hiddenSelectionsTextures[] = {
			"\tmtm\pack\cup_facewear\data\tmtm_balaclava_slit_reedw_co.paa"
		};

		class ItemInfo: ItemInfo
		{
            hiddenSelectionsTextures[] = {
                "\tmtm\pack\cup_facewear\data\tmtm_balaclava_slit_reedw_co.paa"
            };
		};
    };

    class tmtm_h_balaclava_slit_loose_reedw: tmtm_h_balaclava_slit_loose_base
    {
		scope=2;
        scopeArsenal=2;
		author="erem2k";

		displayName="Balaclava, Slit (Reed White, Loose)";
		picture="\tmtm\pack\cup_facewear\data\ui\icon_tmtm_f_balaclava_slit_loose_reedw_ca.paa";

		hiddenSelectionsTextures[] = {
			"\tmtm\pack\cup_facewear\data\tmtm_balaclava_slit_reedw_co.paa"
		};

		class ItemInfo: ItemInfo
		{
            hiddenSelectionsTextures[] = {
                "\tmtm\pack\cup_facewear\data\tmtm_balaclava_slit_reedw_co.paa"
            };
		};
    };
};