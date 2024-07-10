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
		picture="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Balaclava\data\ui\icon_RUS_Balaclava_Ratnik_ca.paa";

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
		picture="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Balaclava\data\ui\icon_RUS_Balaclava_Ratnik_ca.paa";

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
		picture="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Balaclava\data\ui\icon_RUS_Balaclava_Ratnik_ca.paa";

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
		picture="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Balaclava\data\ui\icon_RUS_Balaclava_Ratnik_ca.paa";

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

    class tmtm_h_balaclava_slit_blue: tmtm_h_balaclava_slit_base
    {
		scope=2;
        scopeArsenal=2;
		author="erem2k";

		displayName="Balaclava, Slit (Blue)";
		picture="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Balaclava\data\ui\icon_RUS_Balaclava_Ratnik_ca.paa";

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
		picture="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Balaclava\data\ui\icon_RUS_Balaclava_Ratnik_ca.paa";

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
		picture="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Balaclava\data\ui\icon_RUS_Balaclava_Ratnik_ca.paa";

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
		picture="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Balaclava\data\ui\icon_RUS_Balaclava_Ratnik_ca.paa";

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

    class tmtm_h_balaclava_slit_dubokgb: tmtm_h_balaclava_slit_base
    {
		scope=2;
        scopeArsenal=2;
		author="erem2k";

		displayName="Balaclava, Slit (Dubok Gray)";
		picture="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Balaclava\data\ui\icon_RUS_Balaclava_Ratnik_ca.paa";

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
		picture="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Balaclava\data\ui\icon_RUS_Balaclava_Ratnik_ca.paa";

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
		picture="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Balaclava\data\ui\icon_RUS_Balaclava_Ratnik_ca.paa";

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
		picture="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Balaclava\data\ui\icon_RUS_Balaclava_Ratnik_ca.paa";

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

    class tmtm_h_balaclava_slit_grayred: tmtm_h_balaclava_slit_base
    {
		scope=2;
        scopeArsenal=2;
		author="erem2k";

		displayName="Balaclava, Slit (Gray-Red)";
		picture="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Balaclava\data\ui\icon_RUS_Balaclava_Ratnik_ca.paa";

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
		picture="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Balaclava\data\ui\icon_RUS_Balaclava_Ratnik_ca.paa";

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

    class tmtm_h_balaclava_slit_olive: tmtm_h_balaclava_slit_base
    {
		scope=2;
        scopeArsenal=2;
		author="erem2k";

		displayName="Balaclava, Slit (Olive)";
		picture="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Balaclava\data\ui\icon_RUS_Balaclava_Ratnik_ca.paa";

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

		displayName="Balaclava, Slit (Gray, Loose)";
		picture="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Balaclava\data\ui\icon_RUS_Balaclava_Ratnik_ca.paa";

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
};