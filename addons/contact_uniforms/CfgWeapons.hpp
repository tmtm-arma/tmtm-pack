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
		hiddenSelectionsTextures[] = {"\tmtm\pack\contact_uniforms\Data\tmtm_granit_partizanAlt_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass="tmtm_granit_partizanAlt";
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
		hiddenSelectionsTextures[] = {"\tmtm\pack\contact_uniforms\Data\tmtm_granit_partizanAutumnAlt_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass="tmtm_granit_partizanAutumnAlt";
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
		hiddenSelectionsTextures[] = {"\tmtm\pack\contact_uniforms\Data\tmtm_granit_winterM81_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass="tmtm_granit_winterM81";
			uniformModel="-";
			containerClass="Supply40";
			mass=40;
		};
	};
};