class CfgWeapons
{
    class V_Simc_vest_pasgt;
    class V_Simc_vest_pasgt_sluit;

    class tmtm_v_pasgt_base: V_Simc_vest_pasgt
    {
        scope=0;
        scopeArsenal=0;

		hiddenSelections[]= {
			"camo",
			"ifak"
		};

		class ItemInfo: ItemInfo
		{
			uniformModel="\simc_uaf_81\vest_pasgt.p3d";
			hiddenSelections[]= {
				"camo",
				"ifak"
			};

			containerClass="Supply40";
			mass=70;
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
		picture="\simc_uaf_81_preview\icons\vest_pasgt_od3_ca.paa";

		hiddenSelectionsTextures[]= {
			"\tmtm\pack\sns_vests\data\tmtm_pasgt_cpd_ameba_co.paa",
			""
		};
    };
    class tmtm_v_pasgt_cpd_ameba_alt: tmtm_v_pasgt_alt_base
    {
		scope=2;
        scopeArsenal=2;
        
        author="089, erem2k";

		displayname="CPD PASGT (Ameba)";
		picture="\simc_uaf_81_preview\icons\vest_pasgt_od3_ca.paa";

		hiddenSelectionsTextures[]= {
			"\tmtm\pack\sns_vests\data\tmtm_pasgt_cpd_ameba_co.paa",
			""
		};
    };
    class tmtm_v_pasgt_cpd_ameba_ep: tmtm_v_pasgt_ep_base
    {
		scope=2;
        scopeArsenal=0;
        
        author="089, erem2k";

		displayname="CPD PASGT (Ameba, Extra Pockets)";
		picture="\simc_uaf_81_preview\icons\vest_pasgt_od3_ca.paa";

		hiddenSelectionsTextures[]= {
			"\tmtm\pack\sns_vests\data\tmtm_pasgt_cpd_ameba_co.paa",
			""
		};
    };
    class tmtm_v_pasgt_cpd_black: tmtm_v_pasgt_base
    {
		scope=2;
        scopeArsenal=2;
        
        author="089, erem2k";

		displayname="CPD PASGT (Black)";
		picture="\simc_uaf_81_preview\icons\vest_pasgt_od3_ca.paa";

		hiddenSelectionsTextures[]= {
			"\tmtm\pack\sns_vests\data\tmtm_pasgt_cpd_black_co.paa",
			""
		};
    };
    class tmtm_v_pasgt_cpd_black_alt: tmtm_v_pasgt_alt_base
    {
		scope=2;
        scopeArsenal=2;
        
        author="089, erem2k";

		displayname="CPD PASGT (Black)";
		picture="\simc_uaf_81_preview\icons\vest_pasgt_od3_ca.paa";

		hiddenSelectionsTextures[]= {
			"\tmtm\pack\sns_vests\data\tmtm_pasgt_cpd_black_co.paa",
			""
		};
    };
    class tmtm_v_pasgt_cpd_black_ep: tmtm_v_pasgt_ep_base
    {
		scope=2;
        scopeArsenal=0;
        
        author="089, erem2k";

		displayname="CPD PASGT (Black, Extra Pockets)";
		picture="\simc_uaf_81_preview\icons\vest_pasgt_od3_ca.paa";

		hiddenSelectionsTextures[]= {
			"\tmtm\pack\sns_vests\data\tmtm_pasgt_cpd_black_co.paa",
			""
		};
    };
    class tmtm_v_pasgt_cpd_dubokgb: tmtm_v_pasgt_base
    {
		scope=2;
        scopeArsenal=2;
        
        author="089, erem2k";

		displayname="CPD PASGT (Dubok Gray)";
		picture="\simc_uaf_81_preview\icons\vest_pasgt_od3_ca.paa";

		hiddenSelectionsTextures[]= {
			"\tmtm\pack\sns_vests\data\tmtm_pasgt_cpd_dubokgb_co.paa",
			""
		};
    };
    class tmtm_v_pasgt_cpd_dubokgb_alt: tmtm_v_pasgt_alt_base
    {
		scope=2;
        scopeArsenal=2;
        
        author="089, erem2k";

		displayname="CPD PASGT (Dubok Gray)";
		picture="\simc_uaf_81_preview\icons\vest_pasgt_od3_ca.paa";

		hiddenSelectionsTextures[]= {
			"\tmtm\pack\sns_vests\data\tmtm_pasgt_cpd_dubokgb_co.paa",
			""
		};
    };
    class tmtm_v_pasgt_cpd_dubokgb_ep: tmtm_v_pasgt_ep_base
    {
		scope=2;
        scopeArsenal=0;
        
        author="089, erem2k";

		displayname="CPD PASGT (Dubok Gray, Extra Pockets)";
		picture="\simc_uaf_81_preview\icons\vest_pasgt_od3_ca.paa";

		hiddenSelectionsTextures[]= {
			"\tmtm\pack\sns_vests\data\tmtm_pasgt_cpd_dubokgb_co.paa",
			""
		};
    };
    class tmtm_v_pasgt_cpd_olive: tmtm_v_pasgt_base
    {
		scope=2;
        scopeArsenal=2;
        
        author="089, erem2k";

		displayname="CPD PASGT (Olive)";
		picture="\simc_uaf_81_preview\icons\vest_pasgt_od3_ca.paa";

		hiddenSelectionsTextures[]= {
			"\tmtm\pack\sns_vests\data\tmtm_pasgt_cpd_olive_co.paa",
			""
		};
    };
    class tmtm_v_pasgt_cpd_olive_alt: tmtm_v_pasgt_alt_base
    {
		scope=2;
        scopeArsenal=2;
        
        author="089, erem2k";

		displayname="CPD PASGT (Olive)";
		picture="\simc_uaf_81_preview\icons\vest_pasgt_od3_ca.paa";

		hiddenSelectionsTextures[]= {
			"\tmtm\pack\sns_vests\data\tmtm_pasgt_cpd_olive_co.paa",
			""
		};
    };
    class tmtm_v_pasgt_cpd_olive_ep: tmtm_v_pasgt_ep_base
    {
		scope=2;
        scopeArsenal=0;
        
        author="089, erem2k";

		displayname="CPD PASGT (Olive, Extra Pockets)";
		picture="\simc_uaf_81_preview\icons\vest_pasgt_od3_ca.paa";

		hiddenSelectionsTextures[]= {
			"\tmtm\pack\sns_vests\data\tmtm_pasgt_cpd_olive_co.paa",
			""
		};
    };
};