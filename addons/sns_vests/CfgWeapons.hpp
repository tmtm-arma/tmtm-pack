class CfgWeapons
{
	class VestItem;
	class Vest_Camo_Base;

	class tmtm_v_pasgt_base: Vest_Camo_Base
	{
        scope=0;
        scopeArsenal=0;

		model="\simc_uaf_81\suitpack_pasgt.p3d";

		hiddenSelections[]= {
			"camo",
			"ifak"
		};

		class ItemInfo: VestItem
		{
			uniformModel="\simc_uaf_81\vest_pasgt.p3d";
			hiddenSelections[]= {
				"camo",
				"ifak"
			};

			hiddenSelectionsTextures[]= {
				"",
				""
			};

			containerClass="Supply40";
			mass=70;

			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=12;
					passThrough=0.5;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=12;
					passThrough=0.5;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=12;
					passThrough=0.5;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.5;
				};
			};
		};
	};

    class tmtm_v_pasgt_alt_base: tmtm_v_pasgt_base
    {
        scope=0;
        scopeArsenal=0;

		class ItemInfo: ItemInfo
		{
			uniformModel="\simc_uaf_81\vest_pasgt_sluit.p3d";
			hiddenSelections[]= {
				"camo",
				"ifak"
			};
			containerClass="Supply40";
			mass=85;
		};
    };
    class tmtm_v_pasgt_ep_base: tmtm_v_pasgt_base
    {
        scope=0;
        scopeArsenal=0;

		class ItemInfo: ItemInfo
		{
			containerClass="Supply150";
			mass=85;
		};
    };

    class tmtm_v_pasgt_cpd_ameba: tmtm_v_pasgt_base
    {
		scope=2;
        scopeArsenal=2;
        
        author="089, erem2k";

		displayname="CPD PASGT (Ameba)";
		picture="\tmtm\pack\sns_vests\data\ui\icon_tmtm_v_pasgt_cpd_ameba_ca.paa";

		hiddenSelectionsTextures[]= {
			"\tmtm\pack\sns_vests\data\tmtm_v_pasgt_cpd_ameba_co.paa",
			""
		};
    };
    class tmtm_v_pasgt_cpd_ameba_alt: tmtm_v_pasgt_alt_base
    {
		scope=2;
        scopeArsenal=2;
        
        author="089, erem2k";

		displayname="CPD PASGT (Ameba)";
		picture="\tmtm\pack\sns_vests\data\ui\icon_tmtm_v_pasgt_cpd_ameba_ca.paa";

		hiddenSelectionsTextures[]= {
			"\tmtm\pack\sns_vests\data\tmtm_v_pasgt_cpd_ameba_co.paa",
			""
		};
    };
    class tmtm_v_pasgt_cpd_ameba_ep: tmtm_v_pasgt_ep_base
    {
		scope=2;
        scopeArsenal=0;
        
        author="089, erem2k";

		displayName="CPD PASGT (Ameba, Extra Pockets)";
		picture="\tmtm\pack\sns_vests\data\ui\icon_tmtm_v_pasgt_cpd_ameba_ca.paa";

		hiddenSelectionsTextures[]= {
			"\tmtm\pack\sns_vests\data\tmtm_v_pasgt_cpd_ameba_co.paa",
			""
		};
    };
    class tmtm_v_pasgt_cpd_black: tmtm_v_pasgt_base
    {
		scope=2;
        scopeArsenal=2;
        
        author="089, erem2k";

		displayName="CPD PASGT (Black)";
		picture="\tmtm\pack\sns_vests\data\ui\icon_tmtm_v_pasgt_cpd_black_ca.paa";

		hiddenSelectionsTextures[]= {
			"\tmtm\pack\sns_vests\data\tmtm_v_pasgt_cpd_black_co.paa",
			""
		};
    };
    class tmtm_v_pasgt_cpd_black_alt: tmtm_v_pasgt_alt_base
    {
		scope=2;
        scopeArsenal=2;
        
        author="089, erem2k";

		displayName="CPD PASGT (Black)";
		picture="\tmtm\pack\sns_vests\data\ui\icon_tmtm_v_pasgt_cpd_black_ca.paa";

		hiddenSelectionsTextures[]= {
			"\tmtm\pack\sns_vests\data\tmtm_v_pasgt_cpd_black_co.paa",
			""
		};
    };
    class tmtm_v_pasgt_cpd_black_ep: tmtm_v_pasgt_ep_base
    {
		scope=2;
        scopeArsenal=0;
        
        author="089, erem2k";

		displayName="CPD PASGT (Black, Extra Pockets)";
		picture="\tmtm\pack\sns_vests\data\ui\icon_tmtm_v_pasgt_cpd_black_ca.paa";

		hiddenSelectionsTextures[]= {
			"\tmtm\pack\sns_vests\data\tmtm_v_pasgt_cpd_black_co.paa",
			""
		};
    };
    class tmtm_v_pasgt_cpd_dubokgb: tmtm_v_pasgt_base
    {
		scope=2;
        scopeArsenal=2;
        
        author="089, erem2k";

		displayName="CPD PASGT (Dubok Gray)";
		picture="\tmtm\pack\sns_vests\data\ui\icon_tmtm_v_pasgt_cpd_dubokgb_co.paa";

		hiddenSelectionsTextures[]= {
			"\tmtm\pack\sns_vests\data\tmtm_v_pasgt_cpd_dubokgb_co.paa",
			""
		};
    };
    class tmtm_v_pasgt_cpd_dubokgb_alt: tmtm_v_pasgt_alt_base
    {
		scope=2;
        scopeArsenal=2;
        
        author="089, erem2k";

		displayName="CPD PASGT (Dubok Gray)";
		picture="\tmtm\pack\sns_vests\data\ui\icon_tmtm_v_pasgt_cpd_dubokgb_co.paa";

		hiddenSelectionsTextures[]= {
			"\tmtm\pack\sns_vests\data\tmtm_v_pasgt_cpd_dubokgb_co.paa",
			""
		};
    };
    class tmtm_v_pasgt_cpd_dubokgb_ep: tmtm_v_pasgt_ep_base
    {
		scope=2;
        scopeArsenal=0;
        
        author="089, erem2k";

		displayName="CPD PASGT (Dubok Gray, Extra Pockets)";
		picture="\tmtm\pack\sns_vests\data\ui\icon_tmtm_v_pasgt_cpd_dubokgb_co.paa";

		hiddenSelectionsTextures[]= {
			"\tmtm\pack\sns_vests\data\tmtm_v_pasgt_cpd_dubokgb_co.paa",
			""
		};
    };
    class tmtm_v_pasgt_cpd_olive: tmtm_v_pasgt_base
    {
		scope=2;
        scopeArsenal=2;
        
        author="089, erem2k";

		displayName="CPD PASGT (Olive)";
		picture="\tmtm\pack\sns_vests\data\ui\icon_tmtm_v_pasgt_cpd_olive_co.paa";

		hiddenSelectionsTextures[]= {
			"\tmtm\pack\sns_vests\data\tmtm_v_pasgt_cpd_olive_co.paa",
			""
		};
    };
    class tmtm_v_pasgt_cpd_olive_alt: tmtm_v_pasgt_alt_base
    {
		scope=2;
        scopeArsenal=2;
        
        author="089, erem2k";

		displayName="CPD PASGT (Olive)";
		picture="\tmtm\pack\sns_vests\data\ui\icon_tmtm_v_pasgt_cpd_olive_co.paa";

		hiddenSelectionsTextures[]= {
			"\tmtm\pack\sns_vests\data\tmtm_v_pasgt_cpd_olive_co.paa",
			""
		};
    };
    class tmtm_v_pasgt_cpd_olive_ep: tmtm_v_pasgt_ep_base
    {
		scope=2;
        scopeArsenal=0;
        
        author="089, erem2k";

		displayName="CPD PASGT (Olive, Extra Pockets)";
		picture="\tmtm\pack\sns_vests\data\ui\icon_tmtm_v_pasgt_cpd_olive_co.paa";

		hiddenSelectionsTextures[]= {
			"\tmtm\pack\sns_vests\data\tmtm_v_pasgt_cpd_olive_co.paa",
			""
		};
    };
};