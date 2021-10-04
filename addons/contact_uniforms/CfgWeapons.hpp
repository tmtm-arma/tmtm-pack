class CfgWeapons
{
	class ItemCore;
	class UniformItem;
	class Uniform_Base;
	class Item_Base_F;
	
	class tmtm_u_granit_base: Uniform_Base
	{
		scope=0;
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		DLC = "Enoch";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_granit_3cd: tmtm_u_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Granit (DCU)";
		picture = "\tmtm\pack\contact_uniforms\Data\UI\tmtm_icon_granit_dcu_ca.paa";
		hiddenSelectionsTextures[] = {"\tmtm\pack\contact_uniforms\Data\tmtm_granit_3cd_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass="tmtm_granit_3cd";
			uniformModel="-";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_granit_6cd: tmtm_u_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Granit (DBDU)";
		picture = "\tmtm\pack\contact_uniforms\Data\UI\tmtm_icon_granit_dbdu_ca.paa";
		hiddenSelectionsTextures[] = {"\tmtm\pack\contact_uniforms\Data\tmtm_granit_6cd_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass="tmtm_granit_6cd";
			uniformModel="-";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_granit_afghan: tmtm_u_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Granit (Afghan)";
		picture = "\tmtm\pack\contact_uniforms\Data\UI\tmtm_icon_granit_afghan_ca.paa";
		hiddenSelectionsTextures[] = {"\tmtm\pack\contact_uniforms\Data\tmtm_granit_afghan_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass="tmtm_granit_afghan";
			uniformModel="-";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_granit_atacsAu: tmtm_u_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Granit (ATACS AU)";
		picture = "\tmtm\pack\contact_uniforms\Data\UI\tmtm_icon_granit_atacsAu_ca.paa";
		hiddenSelectionsTextures[] = {"\tmtm\pack\contact_uniforms\Data\tmtm_granit_atacsAu_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass="tmtm_granit_atacsAu";
			uniformModel="-";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_granit_atacsAuBlack: tmtm_u_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Granit (ATACS AU/Black)";
		picture = "\tmtm\pack\contact_uniforms\Data\UI\tmtm_icon_granit_atacsAuBlack_ca.paa";
		hiddenSelectionsTextures[] = {"\tmtm\pack\contact_uniforms\Data\tmtm_granit_atacsAuBlack_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass="tmtm_granit_atacsAuBlack";
			uniformModel="-";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_granit_atacsAuRanger: tmtm_u_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Granit (ATACS AU/Ranger)";
		picture = "\tmtm\pack\contact_uniforms\Data\UI\tmtm_icon_granit_atacsAuRanger_ca.paa";
		hiddenSelectionsTextures[] = {"\tmtm\pack\contact_uniforms\Data\tmtm_granit_atacsAuRanger_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass="tmtm_granit_atacsAuRanger";
			uniformModel="-";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_granit_atacsFg: tmtm_u_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Granit (ATACS FG)";
		picture = "\tmtm\pack\contact_uniforms\Data\UI\tmtm_icon_granit_atacsFg_ca.paa";
		hiddenSelectionsTextures[] = {"\tmtm\pack\contact_uniforms\Data\tmtm_granit_atacsFg_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass="tmtm_granit_atacsFg";
			uniformModel="-";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_granit_atacsFgBlack: tmtm_u_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Granit (ATACS FG/Black)";
		picture = "\tmtm\pack\contact_uniforms\Data\UI\tmtm_icon_granit_AtacsFgBlack_ca.paa";
		hiddenSelectionsTextures[] = {"\tmtm\pack\contact_uniforms\Data\tmtm_granit_atacsFgBlack_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass="tmtm_granit_atacsFgBlack";
			uniformModel="-";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_granit_atacsFgRanger: tmtm_u_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Granit (ATACS FG/Ranger)";
		picture = "\tmtm\pack\contact_uniforms\Data\UI\tmtm_icon_granit_atacsFgRanger_ca.paa";
		hiddenSelectionsTextures[] = {"\tmtm\pack\contact_uniforms\Data\tmtm_granit_atacsFgRanger_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass="tmtm_granit_atacsFgRanger";
			uniformModel="-";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_granit_black3cd: tmtm_u_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Granit (Black/DCU)";
		picture = "\tmtm\pack\contact_uniforms\Data\UI\tmtm_icon_granit_blackDcu_ca.paa";
		hiddenSelectionsTextures[] = {"\tmtm\pack\contact_uniforms\Data\tmtm_granit_black3cd_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass="tmtm_granit_black3cd";
			uniformModel="-";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_granit_blackKhaki: tmtm_u_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Granit (Black/Khaki)";
		picture = "\tmtm\pack\contact_uniforms\Data\UI\tmtm_icon_granit_blackTan_ca.paa";
		hiddenSelectionsTextures[] = {"\tmtm\pack\contact_uniforms\Data\tmtm_granit_blackKhaki_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass="tmtm_granit_blackKhaki";
			uniformModel="-";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_granit_blackM81: tmtm_u_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Granit (Black/M81)";
		picture = "\tmtm\pack\contact_uniforms\Data\UI\tmtm_icon_granit_blackM81_ca.paa";
		hiddenSelectionsTextures[] = {"\tmtm\pack\contact_uniforms\Data\tmtm_granit_blackM81_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass="tmtm_granit_blackM81";
			uniformModel="-";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_granit_blackMulticam: tmtm_u_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Granit (Black/Multicam)";
		picture = "\tmtm\pack\contact_uniforms\Data\UI\tmtm_icon_granit_blackMcam_ca.paa";
		hiddenSelectionsTextures[] = {"\tmtm\pack\contact_uniforms\Data\tmtm_granit_blackMulticam_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass="tmtm_granit_blackMulticam";
			uniformModel="-";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_granit_blue: tmtm_u_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Granit (Blue)";
		picture = "\tmtm\pack\contact_uniforms\Data\UI\tmtm_icon_granit_blueBlack_ca.paa";
		hiddenSelectionsTextures[] = {"\tmtm\pack\contact_uniforms\Data\tmtm_granit_blue_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass="tmtm_granit_blue";
			uniformModel="-";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_granit_blue3cd: tmtm_u_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Granit (Blue/DCU)";
		picture = "\tmtm\pack\contact_uniforms\Data\UI\tmtm_icon_granit_blueDcu_ca.paa";
		hiddenSelectionsTextures[] = {"\tmtm\pack\contact_uniforms\Data\tmtm_granit_blue3cd_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass="tmtm_granit_blue3cd";
			uniformModel="-";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_granit_blueAlt: tmtm_u_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Granit (Blue Alt)";
		picture = "\tmtm\pack\contact_uniforms\Data\UI\tmtm_icon_granit_blueBlackAlt_ca.paa";
		hiddenSelectionsTextures[] = {"\tmtm\pack\contact_uniforms\Data\tmtm_granit_blueAlt_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass="tmtm_granit_blueAlt";
			uniformModel="-";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_granit_blueKhaki: tmtm_u_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Granit (Blue/Khaki)";
		picture = "\tmtm\pack\contact_uniforms\Data\UI\tmtm_icon_granit_blueTan_ca.paa";
		hiddenSelectionsTextures[] = {"\tmtm\pack\contact_uniforms\Data\tmtm_granit_blueKhaki_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass="tmtm_granit_blueKhaki";
			uniformModel="-";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_granit_blueM81: tmtm_u_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Granit (Blue/M81)";
		picture = "\tmtm\pack\contact_uniforms\Data\UI\tmtm_icon_granit_blueM81_ca.paa";
		hiddenSelectionsTextures[] = {"\tmtm\pack\contact_uniforms\Data\tmtm_granit_blueM81_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass="tmtm_granit_blueM81";
			uniformModel="-";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_granit_blueMulticam: tmtm_u_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Granit (Blue/Multicam)";
		picture = "\tmtm\pack\contact_uniforms\Data\UI\tmtm_icon_granit_blueMcam_ca.paa";
		hiddenSelectionsTextures[] = {"\tmtm\pack\contact_uniforms\Data\tmtm_granit_blueMulticam_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass="tmtm_granit_blueMulticam";
			uniformModel="-";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_granit_brown3cd: tmtm_u_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Granit (Brown/DCU)";
		picture = "\tmtm\pack\contact_uniforms\Data\UI\tmtm_icon_granit_brownDcu_ca.paa";
		hiddenSelectionsTextures[] = {"\tmtm\pack\contact_uniforms\Data\tmtm_granit_brown3cd_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass="tmtm_granit_brown3cd";
			uniformModel="-";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_granit_brownKhaki: tmtm_u_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Granit (Brown/Khaki)";
		picture = "\tmtm\pack\contact_uniforms\Data\UI\tmtm_icon_granit_brownTan_ca.paa";
		hiddenSelectionsTextures[] = {"\tmtm\pack\contact_uniforms\Data\tmtm_granit_brownKhaki_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass="tmtm_granit_brownKhaki";
			uniformModel="-";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_granit_brownM81: tmtm_u_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Granit (Brown/M81)";
		picture = "\tmtm\pack\contact_uniforms\Data\UI\tmtm_icon_granit_brownM81_ca.paa";
		hiddenSelectionsTextures[] = {"\tmtm\pack\contact_uniforms\Data\tmtm_granit_brownM81_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass="tmtm_granit_brownM81";
			uniformModel="-";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_granit_brownMulticam: tmtm_u_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Granit (Brown/Multicam)";
		picture = "\tmtm\pack\contact_uniforms\Data\UI\tmtm_icon_granit_brownMcam_ca.paa";
		hiddenSelectionsTextures[] = {"\tmtm\pack\contact_uniforms\Data\tmtm_granit_brownMulticam_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass="tmtm_granit_brownMulticam";
			uniformModel="-";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_granit_cbrn: tmtm_u_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Granit (CBRN)";
		picture = "\tmtm\pack\contact_uniforms\Data\UI\tmtm_icon_granit_cbrnYellow_ca.paa";
		hiddenSelectionsTextures[] = {"\tmtm\pack\contact_uniforms\Data\tmtm_granit_cbrn_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass="tmtm_granit_cbrn";
			uniformModel="-";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_granit_cbrnBlack: tmtm_u_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Granit (CBRN Black)";
		picture = "\tmtm\pack\contact_uniforms\Data\UI\tmtm_icon_granit_cbrn_ca.paa";
		hiddenSelectionsTextures[] = {"\tmtm\pack\contact_uniforms\Data\tmtm_granit_cbrnBlack_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass="tmtm_granit_cbrnBlack";
			uniformModel="-";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_granit_cbrnBlackAlt: tmtm_u_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Granit (CBRN Black Alt)";
		picture = "\tmtm\pack\contact_uniforms\Data\UI\tmtm_icon_granit_cbrnAlt_ca.paa";
		hiddenSelectionsTextures[] = {"\tmtm\pack\contact_uniforms\Data\tmtm_granit_cbrnBlackAlt_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass="tmtm_granit_cbrnBlackAlt";
			uniformModel="-";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_granit_flecktarn: tmtm_u_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Granit (Flecktarn)";
		picture = "\tmtm\pack\contact_uniforms\Data\UI\tmtm_icon_granit_flecktarn_ca.paa";
		hiddenSelectionsTextures[] = {"\tmtm\pack\contact_uniforms\Data\tmtm_granit_flecktarn_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass="tmtm_granit_flecktarn";
			uniformModel="-";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_granit_flecktarnAlt: tmtm_u_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Granit (Flecktarn Alt)";
		picture = "\tmtm\pack\contact_uniforms\Data\UI\tmtm_icon_granit_flecktarnAlt_ca.paa";
		hiddenSelectionsTextures[] = {"\tmtm\pack\contact_uniforms\Data\tmtm_granit_flecktarnAlt_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass="tmtm_granit_flecktarnAlt";
			uniformModel="-";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_granit_green3cd: tmtm_u_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Granit (Green/DCU)";
		picture = "\tmtm\pack\contact_uniforms\Data\UI\tmtm_icon_granit_greenDcu_ca.paa";
		hiddenSelectionsTextures[] = {"\tmtm\pack\contact_uniforms\Data\tmtm_granit_green3cd_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass="tmtm_granit_green3cd";
			uniformModel="-";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_granit_greenKhaki: tmtm_u_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Granit (Green/Khaki)";
		picture = "\tmtm\pack\contact_uniforms\Data\UI\tmtm_icon_granit_greenTan_ca.paa";
		hiddenSelectionsTextures[] = {"\tmtm\pack\contact_uniforms\Data\tmtm_granit_greenKhaki_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass="tmtm_granit_greenKhaki";
			uniformModel="-";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_granit_greenM81: tmtm_u_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Granit (Green/M81)";
		picture = "\tmtm\pack\contact_uniforms\Data\UI\tmtm_icon_granit_greenM81_ca.paa";
		hiddenSelectionsTextures[] = {"\tmtm\pack\contact_uniforms\Data\tmtm_granit_greenM81_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass="tmtm_granit_greenM81";
			uniformModel="-";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_granit_greenMulticam: tmtm_u_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Granit (Green/Multicam)";
		picture = "\tmtm\pack\contact_uniforms\Data\UI\tmtm_icon_granit_greenMcam_ca.paa";
		hiddenSelectionsTextures[] = {"\tmtm\pack\contact_uniforms\Data\tmtm_granit_greenMulticam_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass="tmtm_granit_greenMulticam";
			uniformModel="-";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_granit_grey: tmtm_u_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Granit (Grey)";
		picture = "\tmtm\pack\contact_uniforms\Data\UI\tmtm_icon_granit_grey_ca.paa";
		hiddenSelectionsTextures[] = {"\tmtm\pack\contact_uniforms\Data\tmtm_granit_grey_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass="tmtm_granit_grey";
			uniformModel="-";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_granit_klmk: tmtm_u_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Granit (KLMK)";
		picture = "\tmtm\pack\contact_uniforms\Data\UI\tmtm_icon_granit_klmk_ca.paa";
		hiddenSelectionsTextures[] = {"\tmtm\pack\contact_uniforms\Data\tmtm_granit_klmk_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass="tmtm_granit_klmk";
			uniformModel="-";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_granit_klmkAlt: tmtm_u_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Granit (KLMK Alt)";
		picture = "\tmtm\pack\contact_uniforms\Data\UI\tmtm_icon_granit_klmkAlt_ca.paa";
		hiddenSelectionsTextures[] = {"\tmtm\pack\contact_uniforms\Data\tmtm_granit_klmkAlt_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass="tmtm_granit_klmkAlt";
			uniformModel="-";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_granit_klmkReverse: tmtm_u_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Granit (KLMK Reverse)";
		picture = "\tmtm\pack\contact_uniforms\Data\UI\tmtm_icon_granit_klmkReverse_ca.paa";
		hiddenSelectionsTextures[] = {"\tmtm\pack\contact_uniforms\Data\tmtm_granit_klmkReverse_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass="tmtm_granit_klmkReverse";
			uniformModel="-";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_granit_klmkReverseAlt: tmtm_u_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Granit (KLMK Reverse Alt)";
		picture = "\tmtm\pack\contact_uniforms\Data\UI\tmtm_icon_granit_klmkReverseAlt_ca.paa";
		hiddenSelectionsTextures[] = {"\tmtm\pack\contact_uniforms\Data\tmtm_granit_klmkReverseAlt_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass="tmtm_granit_klmkReverseAlt";
			uniformModel="-";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_granit_m81: tmtm_u_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Granit (M81)";
		picture = "\tmtm\pack\contact_uniforms\Data\UI\tmtm_icon_granit_m81_ca.paa";
		hiddenSelectionsTextures[] = {"\tmtm\pack\contact_uniforms\Data\tmtm_granit_m81_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass="tmtm_granit_m81";
			uniformModel="-";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_granit_m81Winter: tmtm_u_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Granit (M81/Winter)";
		picture = "\tmtm\pack\contact_uniforms\Data\UI\tmtm_icon_granit_m81White_ca.paa";
		hiddenSelectionsTextures[] = {"\tmtm\pack\contact_uniforms\Data\tmtm_granit_m81Winter_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass="tmtm_granit_m81Winter";
			uniformModel="-";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_granit_night3cd: tmtm_u_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Granit (Night/DCU)";
		picture = "\tmtm\pack\contact_uniforms\Data\UI\tmtm_icon_granit_nightDcu_ca.paa";
		hiddenSelectionsTextures[] = {"\tmtm\pack\contact_uniforms\Data\tmtm_granit_night3cd_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass="tmtm_granit_night3cd";
			uniformModel="-";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_granit_night6cd: tmtm_u_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Granit (Night/DBDU)";
		picture = "\tmtm\pack\contact_uniforms\Data\UI\tmtm_icon_granit_nightDbdu_ca.paa";
		hiddenSelectionsTextures[] = {"\tmtm\pack\contact_uniforms\Data\tmtm_granit_night6cd_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass="tmtm_granit_night6cd";
			uniformModel="-";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_granit_nightM81: tmtm_u_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Granit (Night/M81)";
		picture = "\tmtm\pack\contact_uniforms\Data\UI\tmtm_icon_granit_nightM81_ca.paa";
		hiddenSelectionsTextures[] = {"\tmtm\pack\contact_uniforms\Data\tmtm_granit_nightM81_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass="tmtm_granit_nightM81";
			uniformModel="-";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_granit_olive3cd: tmtm_u_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Granit (Olive/DCU)";
		picture = "\tmtm\pack\contact_uniforms\Data\UI\tmtm_icon_granit_oliveDcu_ca.paa";
		hiddenSelectionsTextures[] = {"\tmtm\pack\contact_uniforms\Data\tmtm_granit_olive3cd_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass="tmtm_granit_olive3cd";
			uniformModel="-";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_granit_oliveKhaki: tmtm_u_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Granit (Olive/Khaki)";
		picture = "\tmtm\pack\contact_uniforms\Data\UI\tmtm_icon_granit_oliveTan_ca.paa";
		hiddenSelectionsTextures[] = {"\tmtm\pack\contact_uniforms\Data\tmtm_granit_oliveKhaki_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass="tmtm_granit_oliveKhaki";
			uniformModel="-";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_granit_oliveM81: tmtm_u_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Granit (Olive/M81)";
		picture = "\tmtm\pack\contact_uniforms\Data\UI\tmtm_icon_granit_oliveM81_ca.paa";
		hiddenSelectionsTextures[] = {"\tmtm\pack\contact_uniforms\Data\tmtm_granit_oliveM81_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass="tmtm_granit_oliveM81";
			uniformModel="-";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_granit_oliveMulticam: tmtm_u_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Granit (Olive/Multicam)";
		picture = "\tmtm\pack\contact_uniforms\Data\UI\tmtm_icon_granit_oliveMcam_ca.paa";
		hiddenSelectionsTextures[] = {"\tmtm\pack\contact_uniforms\Data\tmtm_granit_oliveMulticam_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass="tmtm_granit_oliveMulticam";
			uniformModel="-";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_granit_partizan: tmtm_u_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Granit (Partizan)";
		picture = "\tmtm\pack\contact_uniforms\Data\UI\tmtm_icon_granit_partizan_ca.paa";
		hiddenSelectionsTextures[] = {"\tmtm\pack\contact_uniforms\Data\tmtm_granit_partizan_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass="tmtm_granit_partizan";
			uniformModel="-";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_granit_partizanAlt: tmtm_u_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Granit (Partizan Alt)";
		picture = "\tmtm\pack\contact_uniforms\Data\UI\tmtm_icon_granit_partizanAlt_ca.paa";
		hiddenSelectionsTextures[] = {"\tmtm\pack\contact_uniforms\Data\tmtm_granit_partizanAlt_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass="tmtm_granit_partizanAlt";
			uniformModel="-";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_granit_partizanAltWinter: tmtm_u_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Granit (Partizan Alt/Winter)";
		picture = "\tmtm\pack\contact_uniforms\Data\UI\tmtm_icon_granit_partizanAltWinter_ca.paa";
		hiddenSelectionsTextures[] = {"\tmtm\pack\contact_uniforms\Data\tmtm_granit_partizanAltWinter_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass="tmtm_granit_partizanAltWinter";
			uniformModel="-";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_granit_partizanAutumn: tmtm_u_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Granit (Partizan Autumn)";
		picture = "\tmtm\pack\contact_uniforms\Data\UI\tmtm_icon_granit_partizanAutumn_ca.paa";
		hiddenSelectionsTextures[] = {"\tmtm\pack\contact_uniforms\Data\tmtm_granit_partizanAutumn_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass="tmtm_granit_partizanAutumn";
			uniformModel="-";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_granit_partizanAutumnAlt: tmtm_u_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Granit (Partizan Autumn Alt)";
		picture = "\tmtm\pack\contact_uniforms\Data\UI\tmtm_icon_granit_partizanAutumnAlt_ca.paa";
		hiddenSelectionsTextures[] = {"\tmtm\pack\contact_uniforms\Data\tmtm_granit_partizanAutumnAlt_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass="tmtm_granit_partizanAutumnAlt";
			uniformModel="-";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_granit_partizanAutumnAltWinter: tmtm_u_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Granit (Partizan Autumn Alt/Winter)";
		picture = "\tmtm\pack\contact_uniforms\Data\UI\tmtm_icon_granit_partizanAutumnAltWinter_ca.paa";
		hiddenSelectionsTextures[] = {"\tmtm\pack\contact_uniforms\Data\tmtm_granit_partizanAutumnAltWinter_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass="tmtm_granit_partizanAutumnAltWinter";
			uniformModel="-";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_granit_winterM81: tmtm_u_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Granit (Winter/M81)";
		picture = "\tmtm\pack\contact_uniforms\Data\UI\tmtm_icon_granit_whiteM81_ca.paa";
		hiddenSelectionsTextures[] = {"\tmtm\pack\contact_uniforms\Data\tmtm_granit_winterM81_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass="tmtm_granit_winterM81";
			uniformModel="-";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_granit_winterEmr: tmtm_u_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Granit (Winter/EMR)";
		picture = "\tmtm\pack\contact_uniforms\Data\UI\tmtm_icon_granit_winterEmr_ca.paa";
		hiddenSelectionsTextures[] = {"\tmtm\pack\contact_uniforms\Data\tmtm_granit_winterEmr_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass="tmtm_granit_winterEmr";
			uniformModel="-";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_granit_winterIzlomAlt: tmtm_u_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Granit (Winter/Izlom Alt)";
		picture = "\tmtm\pack\contact_uniforms\Data\UI\tmtm_icon_granit_winterIzlomAlt_ca.paa";
		hiddenSelectionsTextures[] = {"\tmtm\pack\contact_uniforms\Data\tmtm_granit_winterIzlomAlt_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass="tmtm_granit_winterIzlomAlt";
			uniformModel="-";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_granit_winterKamysh: tmtm_u_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Granit (Winter/Kamysh)";
		picture = "\tmtm\pack\contact_uniforms\Data\UI\tmtm_icon_granit_winterKamysh_ca.paa";
		hiddenSelectionsTextures[] = {"\tmtm\pack\contact_uniforms\Data\tmtm_granit_winterKamysh_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass="tmtm_granit_winter";
			uniformModel="-";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_granit_winterKamyshAlt: tmtm_u_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Granit (Winter/Kamysh Alt)";
		picture = "\tmtm\pack\contact_uniforms\Data\UI\tmtm_icon_granit_winterKamyshAlt_ca.paa";
		hiddenSelectionsTextures[] = {"\tmtm\pack\contact_uniforms\Data\tmtm_granit_winterKamyshAlt_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass="tmtm_granit_winterKamyshAlt";
			uniformModel="-";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_granit_winterKamyshFull: tmtm_u_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Granit (Winter/Kamysh Full)";
		picture = "\tmtm\pack\contact_uniforms\Data\UI\tmtm_icon_granit_winterKamyshFull_ca.paa";
		hiddenSelectionsTextures[] = {"\tmtm\pack\contact_uniforms\Data\tmtm_granit_winterKamyshFull_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass="tmtm_granit_winterKamyshFull";
			uniformModel="-";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_granit_winterPartizanAlt: tmtm_u_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Granit (Winter/Partizan Alt)";
		picture = "\tmtm\pack\contact_uniforms\Data\UI\tmtm_icon_granit_winterPartizanAlt_ca.paa";
		hiddenSelectionsTextures[] = {"\tmtm\pack\contact_uniforms\Data\tmtm_granit_winterPartizanAlt_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass="tmtm_granit_winterPartizanAlt";
			uniformModel="-";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_granit_winterSkolAlt: tmtm_u_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Granit (Winter/Skol Alt)";
		picture = "\tmtm\pack\contact_uniforms\Data\UI\tmtm_icon_granit_winterSkolAlt_ca.paa";
		hiddenSelectionsTextures[] = {"\tmtm\pack\contact_uniforms\Data\tmtm_granit_winterSkolAlt_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass="tmtm_granit_winterSkolAlt";
			uniformModel="-";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_granit_emr: tmtm_u_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Granit (EMR)";
		picture = "\tmtm\pack\contact_uniforms\Data\UI\tmtm_icon_granit_emr_ca.paa";
		hiddenSelectionsTextures[] = {"\tmtm\pack\contact_uniforms\Data\tmtm_granit_emr_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass="tmtm_granit_emr";
			uniformModel="-";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_granit_emrAlt: tmtm_u_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Granit (EMR Alt)";
		picture = "\tmtm\pack\contact_uniforms\Data\UI\tmtm_icon_granit_emrAlt_ca.paa";
		hiddenSelectionsTextures[] = {"\tmtm\pack\contact_uniforms\Data\tmtm_granit_emrAlt_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass="tmtm_granit_";
			uniformModel="-";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_granit_emrFull: tmtm_u_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Granit (EMR Full)";
		picture = "\tmtm\pack\contact_uniforms\Data\UI\tmtm_icon_granit_emrFull_ca.paa";
		hiddenSelectionsTextures[] = {"\tmtm\pack\contact_uniforms\Data\tmtm_granit_emrFull_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass="tmtm_granit_emrFull";
			uniformModel="-";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_granit_emrWinter: tmtm_u_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Granit (EMR/Winter)";
		picture = "\tmtm\pack\contact_uniforms\Data\UI\tmtm_icon_granit_emrWinter_ca.paa";
		hiddenSelectionsTextures[] = {"\tmtm\pack\contact_uniforms\Data\tmtm_granit_emrWinter_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass="tmtm_granit_emrWinter";
			uniformModel="-";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_granit_surpat: tmtm_u_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Granit (SURPAT)";
		picture = "\tmtm\pack\contact_uniforms\Data\UI\tmtm_icon_granit_surpat_ca.paa";
		hiddenSelectionsTextures[] = {"\tmtm\pack\contact_uniforms\Data\tmtm_granit_surpat_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass="tmtm_granit_surpat";
			uniformModel="-";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_granit_surpatAlt: tmtm_u_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Granit (SURPAT Alt)";
		picture = "\tmtm\pack\contact_uniforms\Data\UI\tmtm_icon_granit_surpatAlt_ca.paa";
		hiddenSelectionsTextures[] = {"\tmtm\pack\contact_uniforms\Data\tmtm_granit_surpatAlt_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass="tmtm_granit_surpatAlt";
			uniformModel="-";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_granit_surpatFull: tmtm_u_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Granit (SURPAT Full)";
		picture = "\tmtm\pack\contact_uniforms\Data\UI\tmtm_icon_granit_surpatFull_ca.paa";
		hiddenSelectionsTextures[] = {"\tmtm\pack\contact_uniforms\Data\tmtm_granit_surpatFull_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass="tmtm_granit_surpatFull";
			uniformModel="-";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_granit_kamysh: tmtm_u_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Granit (Kamysh)";
		picture = "\tmtm\pack\contact_uniforms\Data\UI\tmtm_icon_granit_kamysh_ca.paa";
		hiddenSelectionsTextures[] = {"\tmtm\pack\contact_uniforms\Data\tmtm_granit_kamysh_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass="tmtm_granit_kamysh";
			uniformModel="-";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_granit_kamyshAlt: tmtm_u_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Granit (Kamysh Alt)";
		picture = "\tmtm\pack\contact_uniforms\Data\UI\tmtm_icon_granit_kamyshAlt_ca.paa";
		hiddenSelectionsTextures[] = {"\tmtm\pack\contact_uniforms\Data\tmtm_granit_kamyshAlt_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass="tmtm_granit_kamyshAlt";
			uniformModel="-";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_granit_kamyshFull: tmtm_u_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Granit (Kamysh Full)";
		picture = "\tmtm\pack\contact_uniforms\Data\UI\tmtm_icon_granit_kamyshFull_ca.paa";
		hiddenSelectionsTextures[] = {"\tmtm\pack\contact_uniforms\Data\tmtm_granit_kamyshFull_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass="tmtm_granit_kamyshFull";
			uniformModel="-";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_granit_kamyshWinter: tmtm_u_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Granit (Kamysh/Winter)";
		picture = "\tmtm\pack\contact_uniforms\Data\UI\tmtm_icon_granit_kamyshWinter_ca.paa";
		hiddenSelectionsTextures[] = {"\tmtm\pack\contact_uniforms\Data\tmtm_granit_kamyshWinter_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass="tmtm_granit_kamyshWinter";
			uniformModel="-";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_granit_kamyshAltWinter: tmtm_u_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Granit (Kamysh Alt/Winter)";
		picture = "\tmtm\pack\contact_uniforms\Data\UI\tmtm_icon_granit_kamyshAltWinter_ca.paa";
		hiddenSelectionsTextures[] = {"\tmtm\pack\contact_uniforms\Data\tmtm_granit_kamyshAltWinter_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass="tmtm_granit_kamyshAltWinter";
			uniformModel="-";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_granit_kamyshFullWinter: tmtm_u_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Granit (Kamysh Full/Winter)";
		picture = "\tmtm\pack\contact_uniforms\Data\UI\tmtm_icon_granit_kamyshFullWinter_ca.paa";
		hiddenSelectionsTextures[] = {"\tmtm\pack\contact_uniforms\Data\tmtm_granit_kamyshFullWinter_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass="tmtm_granit_kamyshFullWinter";
			uniformModel="-";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_granit_skol: tmtm_u_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Granit (Skol)";
		picture = "\tmtm\pack\contact_uniforms\Data\UI\tmtm_icon_granit_skol_ca.paa";
		hiddenSelectionsTextures[] = {"\tmtm\pack\contact_uniforms\Data\tmtm_granit_skol_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass="tmtm_granit_skol";
			uniformModel="-";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_granit_skolAlt: tmtm_u_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Granit (Skol Alt)";
		picture = "\tmtm\pack\contact_uniforms\Data\UI\tmtm_icon_granit_skolAlt_ca.paa";
		hiddenSelectionsTextures[] = {"\tmtm\pack\contact_uniforms\Data\tmtm_granit_skolAlt_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass="tmtm_granit_skolAlt";
			uniformModel="-";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_granit_skolAltWinter: tmtm_u_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Granit (Skol Alt/Winter)";
		picture = "\tmtm\pack\contact_uniforms\Data\UI\tmtm_icon_granit_skolAltWinter_ca.paa";
		hiddenSelectionsTextures[] = {"\tmtm\pack\contact_uniforms\Data\tmtm_granit_skolAltWinter_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass="tmtm_granit_skolAltWinter";
			uniformModel="-";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_granit_izlom: tmtm_u_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Granit (Izlom)";
		picture = "\tmtm\pack\contact_uniforms\Data\UI\tmtm_icon_granit_izlom_ca.paa";
		hiddenSelectionsTextures[] = {"\tmtm\pack\contact_uniforms\Data\tmtm_granit_izlom_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass="tmtm_granit_izlom";
			uniformModel="-";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_granit_izlomAlt: tmtm_u_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Granit (Izlom Alt)";
		picture = "\tmtm\pack\contact_uniforms\Data\UI\tmtm_icon_granit_izlomAlt_ca.paa";
		hiddenSelectionsTextures[] = {"\tmtm\pack\contact_uniforms\Data\tmtm_granit_izlomAlt_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass="tmtm_granit_izlomAlt";
			uniformModel="-";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_granit_izlomAltWinter: tmtm_u_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Granit (Izlom Alt/Winter)";
		picture = "\tmtm\pack\contact_uniforms\Data\UI\tmtm_icon_granit_izlomAltWinter_ca.paa";
		hiddenSelectionsTextures[] = {"\tmtm\pack\contact_uniforms\Data\tmtm_granit_izlomAltWinter_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass="tmtm_granit_izlomAltWinter";
			uniformModel="-";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_granit_white: tmtm_u_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Granit (White)";
		picture = "\tmtm\pack\contact_uniforms\Data\UI\tmtm_icon_granit_white_ca.paa";
		hiddenSelectionsTextures[] = {"\tmtm\pack\contact_uniforms\Data\tmtm_granit_white_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass="tmtm_granit_white";
			uniformModel="-";
			containerClass="Supply40";
			mass=40;
		};
	};
	class tmtm_u_granit_natoWinter: tmtm_u_granit_base
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;
		displayName="Granit (NATO Winter)";
		picture = "\tmtm\pack\contact_uniforms\Data\UI\tmtm_icon_granit_natoWinter_ca.paa";
		hiddenSelectionsTextures[] = {"\tmtm\pack\contact_uniforms\Data\tmtm_granit_natoWinter_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass="tmtm_granit_natoWinter";
			uniformModel="-";
			containerClass="Supply40";
			mass=40;
		};
	};
};