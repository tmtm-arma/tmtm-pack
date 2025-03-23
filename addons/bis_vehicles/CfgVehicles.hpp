class CfgVehicles {
	// Base classes
	class Helicopter_Base_F;
	class Helicopter_Base_H;
	class Plane_Base_F;


	// AMV-7 Marshall textures
	class Wheeled_APC_F;
	class APC_Wheeled_01_base_F: Wheeled_APC_F {
		class TextureSources {
			class tmtmpack_uaf_olive {
				displayName = "UAF (Olive)";
				author = "erem2k";
				textures[] = {
					"\tmtm\pack\bis_vehicles\Data\tmtm_apc_wheeled_01_body_uaf_co.paa",
					"\tmtm\pack\bis_vehicles\Data\tmtm_apc_wheeled_01_adds_uaf_co.paa",
					"\tmtm\pack\bis_vehicles\Data\tmtm_apc_wheeled_01_tows_uaf_co.paa",
					"\A3\Armor_F\Data\camonet_AAF_FIA_green_CO.paa",
					"\tmtm\pack\bis_vehicles\Data\tmtm_apc_wheeled_01_cage_uaf_co.paa"
				};
				factions[] = {};
			};
		};
	};


	// MH-9 Hummingbird textures
	class Heli_Light_01_base_F;
	class Heli_Light_01_unarmed_base_F;
	class B_Heli_Light_01_F: Heli_Light_01_unarmed_base_F {
		class textureSources {
			class tmtmpack_green {
				displayName = "Green";
				author = "Bohemia Interactive";
				textures[] = {"\A3\Air_F\Heli_Light_01\Data\Heli_Light_01_ext_Blufor_CO.paa"};
				factions[] = {};
			};
			class tmtmpack_black {
				displayName = "Black";
				author = "Bohemia Interactive";
				textures[] = {"\A3\Air_F\Heli_Light_01\Data\Heli_Light_01_ext_ion_CO.paa"};
				factions[] = {};
			};
			class tmtmpack_aaf {
				displayName = "AAF";
				author = "Bohemia Interactive";
				textures[] = {"\A3\Air_F\Heli_Light_01\Data\Heli_Light_01_ext_indp_CO.paa"};
				factions[] = {};
			};
		};
	};

	class Heli_Light_01_armed_base_F: Heli_Light_01_base_F {
		class textureSources {
			class tmtmpack_green {
				displayName = "Green";
				author = "Bohemia Interactive";
				textures[] = {"\A3\Air_F\Heli_Light_01\Data\Heli_Light_01_ext_Blufor_CO.paa"};
				factions[] = {};
			};
			class tmtmpack_black {
				displayName = "Black";
				author = "Bohemia Interactive";
				textures[] = {"\A3\Air_F\Heli_Light_01\Data\Heli_Light_01_ext_ion_CO.paa"};
				factions[] = {};
			};
			class tmtmpack_aaf {
				displayName = "AAF";
				author = "Bohemia Interactive";
				textures[] = {"\A3\Air_F\Heli_Light_01\Data\Heli_Light_01_ext_indp_CO.paa"};
				factions[] = {};
			};
		};
	};


	// AH-99 Blackfoot textures
	class Heli_Attack_01_base_F: Helicopter_Base_F {
		class textureSources {
			class tmtmpack_nato {
				displayName = "NATO";
				author = "Bohemia Interactive";
				textures[] = {"\A3\Air_F_Beta\heli_attack_01\data\heli_attack_01_co.paa"};
				factions[] = {};
			};
			class tmtmpack_green {
				displayName = "Green";
				author = "Bohemia Interactive";
				textures[] = {"\A3\Air_F\Heli_Light_02\Data\heli_light_02_common_co.paa"};
				factions[] = {};
			};
		};
	};


	// Po-30 Orca textures
	class Heli_Light_02_base_F: Helicopter_Base_F {
		class textureSources {
			class Blue {
				factions[] = {};
			};
			class tmtmpack_aaf {
				displayName = "AAF";
				author = "Bohemia Interactive";
				textures[] = {"\A3\Air_F\Heli_Light_02\Data\heli_light_02_ext_indp_co.paa"};
				factions[] = {};
			};
		};
	};


	// CH-49/EH302 Textures
	class Heli_Transport_02_base_F: Helicopter_Base_H {
		class textureSources {
			class ION {
				factions[] = {};
			};
			class Dahoman {
				factions[] = {};
			};
		};
	};


	// A-143 Buzzard
	class Plane_Fighter_03_base_F: Plane_Base_F {
		class textureSources {
			class Hex {
				factions[] = {};
			};
			class Green {
				factions[] = {};
			};
			class Grey {
				factions[] = {};
			};
		};
	};


	// Zamak MRL
	class Truck_02_base_F;
	class Truck_02_MRL_base_F: Truck_02_base_F {
		class textureSources {
			class Opfor {
				factions[] = {};
			};
			class GreenHex {
				factions[] = {};
			};
		};
	};


	// Tempest
	class Truck_03_base_F;
	class O_Truck_03_transport_F: Truck_03_base_F
	{
		class TextureSources
		{
			class tmtmpack_fia
			{
				displayName = "FIA";
				author = "erem2k";
				textures[] = {
					"\tmtm\pack\bis_vehicles\Data\tmtm_truck_03_ext01_fia_co.paa",
					"\tmtm\pack\bis_vehicles\Data\tmtm_truck_03_ext02_fia_co.paa",
					"\tmtm\pack\bis_vehicles\Data\tmtm_truck_03_cargo_fia_co.paa"
				};
				factions[] = {};
			};

			class tmtmpack_green
			{
				displayName = "Generic, Green";
				author = "erem2k";
				textures[] = {
					"\tmtm\pack\bis_vehicles\Data\tmtm_truck_03_ext01_green_co.paa",
					"\tmtm\pack\bis_vehicles\Data\tmtm_truck_03_ext02_green_co.paa",
					"\tmtm\pack\bis_vehicles\Data\tmtm_truck_03_cargo_green_co.paa"
				};
				factions[] = {};
			};

			class tmtmpack_wblack
			{
				displayName = "Generic, Winter Black";
				author = "erem2k";
				textures[] = {
					"\tmtm\pack\bis_vehicles\Data\tmtm_truck_03_ext01_wblack_co.paa",
					"\tmtm\pack\bis_vehicles\Data\tmtm_truck_03_ext02_wblack_co.paa",
					"\tmtm\pack\bis_vehicles\Data\tmtm_truck_03_cargo_wblack_co.paa"
				};
				factions[] = {};
			};

			class tmtmpack_wgreen
			{
				displayName = "Generic, Winter Green";
				author = "erem2k";
				textures[] = {
					"\tmtm\pack\bis_vehicles\Data\tmtm_truck_03_ext01_wgreen_co.paa",
					"\tmtm\pack\bis_vehicles\Data\tmtm_truck_03_ext02_wgreen_co.paa",
					"\tmtm\pack\bis_vehicles\Data\tmtm_truck_03_cargo_wgreen_co.paa"
				};
				factions[] = {};
			};

			class tmtmpack_wgrey
			{
				displayName = "Generic, Winter Grey";
				author = "erem2k";
				textures[] = {
					"\tmtm\pack\bis_vehicles\Data\tmtm_truck_03_ext01_wgrey_co.paa",
					"\tmtm\pack\bis_vehicles\Data\tmtm_truck_03_ext02_wgrey_co.paa",
					"\tmtm\pack\bis_vehicles\Data\tmtm_truck_03_cargo_wgrey_co.paa"
				};
				factions[] = {};
			};
		};
	};

	class O_Truck_03_covered_F: Truck_03_base_F
	{
		class TextureSources
		{
			class tmtmpack_green
			{
				displayName = "Generic, Green";
				author = "erem2k";
				textures[] = {
					"\tmtm\pack\bis_vehicles\Data\tmtm_truck_03_ext01_green_co.paa",
					"\tmtm\pack\bis_vehicles\Data\tmtm_truck_03_ext02_green_co.paa",
					"\tmtm\pack\bis_vehicles\Data\tmtm_truck_03_cargo_green_co.paa",
					"\tmtm\pack\bis_vehicles\Data\tmtm_truck_03_cover_green_co.paa"
				};
				factions[] = {};
			};

			class tmtmpack_wblack
			{
				displayName = "Generic, Winter Black";
				author = "erem2k";
				textures[] = {
					"\tmtm\pack\bis_vehicles\Data\tmtm_truck_03_ext01_wblack_co.paa",
					"\tmtm\pack\bis_vehicles\Data\tmtm_truck_03_ext02_wblack_co.paa",
					"\tmtm\pack\bis_vehicles\Data\tmtm_truck_03_cargo_wblack_co.paa",
					"\tmtm\pack\bis_vehicles\Data\tmtm_truck_03_cover_wblack_co.paa"
				};
				factions[] = {};
			};

			class tmtmpack_wgreen
			{
				displayName = "Generic, Winter Green";
				author = "erem2k";
				textures[] = {
					"\tmtm\pack\bis_vehicles\Data\tmtm_truck_03_ext01_wgreen_co.paa",
					"\tmtm\pack\bis_vehicles\Data\tmtm_truck_03_ext02_wgreen_co.paa",
					"\tmtm\pack\bis_vehicles\Data\tmtm_truck_03_cargo_wgreen_co.paa",
					"\tmtm\pack\bis_vehicles\Data\tmtm_truck_03_cover_wgreen_co.paa"
				};
				factions[] = {};
			};

			class tmtmpack_wgrey
			{
				displayName = "Generic, Winter Grey";
				author = "erem2k";
				textures[] = {
					"\tmtm\pack\bis_vehicles\Data\tmtm_truck_03_ext01_wgrey_co.paa",
					"\tmtm\pack\bis_vehicles\Data\tmtm_truck_03_ext02_wgrey_co.paa",
					"\tmtm\pack\bis_vehicles\Data\tmtm_truck_03_cargo_wgrey_co.paa",
					"\tmtm\pack\bis_vehicles\Data\tmtm_truck_03_cover_wgrey_co.paa"
				};
				factions[] = {};
			};
		};
	};

	class O_Truck_03_repair_F: Truck_03_base_F
	{
		class TextureSources
		{
			class tmtmpack_green
			{
				displayName = "Generic, Green";
				author = "erem2k";
				textures[] = {
					"\tmtm\pack\bis_vehicles\Data\tmtm_truck_03_ext01_green_co.paa",
					"\tmtm\pack\bis_vehicles\Data\tmtm_truck_03_ext02_green_co.paa",
					"\tmtm\pack\bis_vehicles\Data\tmtm_truck_03_repair_green_co.paa"
				};
				factions[] = {};
			};

			class tmtmpack_wblack
			{
				displayName = "Generic, Winter Black";
				author = "erem2k";
				textures[] = {
					"\tmtm\pack\bis_vehicles\Data\tmtm_truck_03_ext01_wblack_co.paa",
					"\tmtm\pack\bis_vehicles\Data\tmtm_truck_03_ext02_wblack_co.paa",
					"\tmtm\pack\bis_vehicles\Data\tmtm_truck_03_repair_wblack_co.paa"
				};
				factions[] = {};
			};

			class tmtmpack_wgreen
			{
				displayName = "Generic, Winter Green";
				author = "erem2k";
				textures[] = {
					"\tmtm\pack\bis_vehicles\Data\tmtm_truck_03_ext01_wgreen_co.paa",
					"\tmtm\pack\bis_vehicles\Data\tmtm_truck_03_ext02_wgreen_co.paa",
					"\tmtm\pack\bis_vehicles\Data\tmtm_truck_03_repair_wgreen_co.paa"
				};
				factions[] = {};
			};

			class tmtmpack_wgrey
			{
				displayName = "Generic, Winter Grey";
				author = "erem2k";
				textures[] = {
					"\tmtm\pack\bis_vehicles\Data\tmtm_truck_03_ext01_wgrey_co.paa",
					"\tmtm\pack\bis_vehicles\Data\tmtm_truck_03_ext02_wgrey_co.paa",
					"\tmtm\pack\bis_vehicles\Data\tmtm_truck_03_repair_wgrey_co.paa"
				};
				factions[] = {};
			};
		};
	};

	class O_Truck_03_ammo_F: Truck_03_base_F
	{
		class TextureSources
		{
			class tmtmpack_fia
			{
				displayName = "FIA";
				author = "erem2k";
				textures[] = {
					"\tmtm\pack\bis_vehicles\Data\tmtm_truck_03_ext01_fia_co.paa",
					"\tmtm\pack\bis_vehicles\Data\tmtm_truck_03_ext02_fia_co.paa",
					"\tmtm\pack\bis_vehicles\Data\tmtm_truck_03_cargo_fia_co.paa",
					"\A3\Structures_F\Data\Metal\Containers\Containers_02_set_CO.paa"
				};
				factions[] = {};
			};

			class tmtmpack_green
			{
				displayName = "Generic, Green";
				author = "erem2k";
				textures[] = {
					"\tmtm\pack\bis_vehicles\Data\tmtm_truck_03_ext01_green_co.paa",
					"\tmtm\pack\bis_vehicles\Data\tmtm_truck_03_ext02_green_co.paa",
					"\tmtm\pack\bis_vehicles\Data\tmtm_truck_03_cargo_green_co.paa",
					"\A3\Structures_F\Data\Metal\Containers\Containers_02_set_CO.paa"
				};
				factions[] = {};
			};

			class tmtmpack_wblack
			{
				displayName = "Generic, Winter Black";
				author = "erem2k";
				textures[] = {
					"\tmtm\pack\bis_vehicles\Data\tmtm_truck_03_ext01_wblack_co.paa",
					"\tmtm\pack\bis_vehicles\Data\tmtm_truck_03_ext02_wblack_co.paa",
					"\tmtm\pack\bis_vehicles\Data\tmtm_truck_03_cargo_wblack_co.paa",
					"\A3\Structures_F\Data\Metal\Containers\Containers_02_set_CO.paa"
				};
				factions[] = {};
			};

			class tmtmpack_wgreen
			{
				displayName = "Generic, Winter Green";
				author = "erem2k";
				textures[] = {
					"\tmtm\pack\bis_vehicles\Data\tmtm_truck_03_ext01_wgreen_co.paa",
					"\tmtm\pack\bis_vehicles\Data\tmtm_truck_03_ext02_wgreen_co.paa",
					"\tmtm\pack\bis_vehicles\Data\tmtm_truck_03_cargo_wgreen_co.paa",
					"\A3\Structures_F\Data\Metal\Containers\Containers_02_set_CO.paa"
				};
				factions[] = {};
			};

			class tmtmpack_wgrey
			{
				displayName = "Generic, Winter Grey";
				author = "erem2k";
				textures[] = {
					"\tmtm\pack\bis_vehicles\Data\tmtm_truck_03_ext01_wgrey_co.paa",
					"\tmtm\pack\bis_vehicles\Data\tmtm_truck_03_ext02_wgrey_co.paa",
					"\tmtm\pack\bis_vehicles\Data\tmtm_truck_03_cargo_wgrey_co.paa",
					"\A3\Structures_F\Data\Metal\Containers\Containers_02_set_CO.paa"
				};
				factions[] = {};
			};
		};
	};

	class O_Truck_03_fuel_F: Truck_03_base_F
	{
		class TextureSources
		{
			class tmtmpack_fia
			{
				displayName = "FIA";
				author = "erem2k";
				textures[] = {
					"\tmtm\pack\bis_vehicles\Data\tmtm_truck_03_ext01_fia_co.paa",
					"\tmtm\pack\bis_vehicles\Data\tmtm_truck_03_ext02_fia_co.paa",
					"\tmtm\pack\bis_vehicles\Data\tmtm_truck_03_fuel_fia_co.paa"
				};
				factions[] = {};
			};

			class tmtmpack_green
			{
				displayName = "Generic, Green";
				author = "erem2k";
				textures[] = {
					"\tmtm\pack\bis_vehicles\Data\tmtm_truck_03_ext01_green_co.paa",
					"\tmtm\pack\bis_vehicles\Data\tmtm_truck_03_ext02_green_co.paa",
					"\tmtm\pack\bis_vehicles\Data\tmtm_truck_03_fuel_green_co.paa"
				};
				factions[] = {};
			};

			class tmtmpack_wblack
			{
				displayName = "Generic, Winter Black";
				author = "erem2k";
				textures[] = {
					"\tmtm\pack\bis_vehicles\Data\tmtm_truck_03_ext01_wblack_co.paa",
					"\tmtm\pack\bis_vehicles\Data\tmtm_truck_03_ext02_wblack_co.paa",
					"\tmtm\pack\bis_vehicles\Data\tmtm_truck_03_fuel_wblack_co.paa"
				};
				factions[] = {};
			};

			class tmtmpack_wgreen
			{
				displayName = "Generic, Winter Green";
				author = "erem2k";
				textures[] = {
					"\tmtm\pack\bis_vehicles\Data\tmtm_truck_03_ext01_wgreen_co.paa",
					"\tmtm\pack\bis_vehicles\Data\tmtm_truck_03_ext02_wgreen_co.paa",
					"\tmtm\pack\bis_vehicles\Data\tmtm_truck_03_fuel_wgreen_co.paa"
				};
				factions[] = {};
			};

			class tmtmpack_wgrey
			{
				displayName = "Generic, Winter Grey";
				author = "erem2k";
				textures[] = {
					"\tmtm\pack\bis_vehicles\Data\tmtm_truck_03_ext01_wgrey_co.paa",
					"\tmtm\pack\bis_vehicles\Data\tmtm_truck_03_ext02_wgrey_co.paa",
					"\tmtm\pack\bis_vehicles\Data\tmtm_truck_03_fuel_wgrey_co.paa"
				};
				factions[] = {};
			};
		};
	};

	class O_Truck_03_medical_F: Truck_03_base_F
	{
		class TextureSources
		{
			class tmtmpack_green
			{
				displayName = "Generic, Green";
				author = "erem2k";
				textures[] = {
					"\tmtm\pack\bis_vehicles\Data\tmtm_truck_03_ext01_green_co.paa",
					"\tmtm\pack\bis_vehicles\Data\tmtm_truck_03_ext02_green_co.paa",
					"\tmtm\pack\bis_vehicles\Data\tmtm_truck_03_cargo_green_co.paa",
					"\tmtm\pack\bis_vehicles\Data\tmtm_truck_03_cover_green_co.paa"
				};
				factions[] = {};
			};

			class tmtmpack_wblack
			{
				displayName = "Generic, Winter Black";
				author = "erem2k";
				textures[] = {
					"\tmtm\pack\bis_vehicles\Data\tmtm_truck_03_ext01_wblack_co.paa",
					"\tmtm\pack\bis_vehicles\Data\tmtm_truck_03_ext02_wblack_co.paa",
					"\tmtm\pack\bis_vehicles\Data\tmtm_truck_03_cargo_wblack_co.paa",
					"\tmtm\pack\bis_vehicles\Data\tmtm_truck_03_cover_wblack_co.paa"
				};
				factions[] = {};
			};

			class tmtmpack_wgreen
			{
				displayName = "Generic, Winter Green";
				author = "erem2k";
				textures[] = {
					"\tmtm\pack\bis_vehicles\Data\tmtm_truck_03_ext01_wgreen_co.paa",
					"\tmtm\pack\bis_vehicles\Data\tmtm_truck_03_ext02_wgreen_co.paa",
					"\tmtm\pack\bis_vehicles\Data\tmtm_truck_03_cargo_wgreen_co.paa",
					"\tmtm\pack\bis_vehicles\Data\tmtm_truck_03_cover_wgreen_co.paa"
				};
				factions[] = {};
			};

			class tmtmpack_wgrey
			{
				displayName = "Generic, Winter Grey";
				author = "erem2k";
				textures[] = {
					"\tmtm\pack\bis_vehicles\Data\tmtm_truck_03_ext01_wgrey_co.paa",
					"\tmtm\pack\bis_vehicles\Data\tmtm_truck_03_ext02_wgrey_co.paa",
					"\tmtm\pack\bis_vehicles\Data\tmtm_truck_03_cargo_wgrey_co.paa",
					"\tmtm\pack\bis_vehicles\Data\tmtm_truck_03_cover_wgrey_co.paa"
				};
				factions[] = {};
			};
		};
	};

	class O_Truck_03_device_F: Truck_03_base_F
	{
		class TextureSources
		{
			class tmtmpack_fia
			{
				displayName = "FIA";
				author = "erem2k";
				textures[] = {
					"\tmtm\pack\bis_vehicles\Data\tmtm_truck_03_ext01_fia_co.paa",
					"\tmtm\pack\bis_vehicles\Data\tmtm_truck_03_ext02_fia_co.paa",
					"\tmtm\pack\bis_vehicles\Data\tmtm_truck_03_cargo_fia_co.paa",
					"\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_02_CO.paa",
					"\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_03_CO.paa"
				};
				factions[] = {};
			};

			class tmtmpack_green
			{
				displayName = "Generic, Green";
				author = "erem2k";
				textures[] = {
					"\tmtm\pack\bis_vehicles\Data\tmtm_truck_03_ext01_green_co.paa",
					"\tmtm\pack\bis_vehicles\Data\tmtm_truck_03_ext02_green_co.paa",
					"\tmtm\pack\bis_vehicles\Data\tmtm_truck_03_cargo_green_co.paa",
					"\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_02_CO.paa",
					"\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_03_CO.paa"
				};
				factions[] = {};
			};

			class tmtmpack_wblack
			{
				displayName = "Generic, Winter Black";
				author = "erem2k";
				textures[] = {
					"\tmtm\pack\bis_vehicles\Data\tmtm_truck_03_ext01_wblack_co.paa",
					"\tmtm\pack\bis_vehicles\Data\tmtm_truck_03_ext02_wblack_co.paa",
					"\tmtm\pack\bis_vehicles\Data\tmtm_truck_03_cargo_wblack_co.paa",
					"\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_02_CO.paa",
					"\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_03_CO.paa"
				};
				factions[] = {};
			};

			class tmtmpack_wgreen
			{
				displayName = "Generic, Winter Green";
				author = "erem2k";
				textures[] = {
					"\tmtm\pack\bis_vehicles\Data\tmtm_truck_03_ext01_wgreen_co.paa",
					"\tmtm\pack\bis_vehicles\Data\tmtm_truck_03_ext02_wgreen_co.paa",
					"\tmtm\pack\bis_vehicles\Data\tmtm_truck_03_cargo_wgreen_co.paa",
					"\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_02_CO.paa",
					"\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_03_CO.paa"
				};
				factions[] = {};
			};

			class tmtmpack_wgrey
			{
				displayName = "Generic, Winter Grey";
				author = "erem2k";
				textures[] = {
					"\tmtm\pack\bis_vehicles\Data\tmtm_truck_03_ext01_wgrey_co.paa",
					"\tmtm\pack\bis_vehicles\Data\tmtm_truck_03_ext02_wgrey_co.paa",
					"\tmtm\pack\bis_vehicles\Data\tmtm_truck_03_cargo_wgrey_co.paa",
					"\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_02_CO.paa",
					"\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_03_CO.paa"
				};
				factions[] = {};
			};
		};
	};

	// Strider
	class MRAP_03_base_F;
	class TMTM_B_MRAP_03_F: MRAP_03_base_F {
		author = "Bohemia Interactive & TMTM";
		_generalMacro = "TMTM_B_MRAP_03_F";
		scope = 2;
		crew = "B_Soldier_F";
		typicalCargo[] = {"B_Soldier_lite_F"};
		side = 1;
		faction = "BLU_F";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\I_MRAP_03_F.jpg"; // TODO: Add editor preview

		// NATO Strider Texture
		hiddenSelectionsTextures[] = {
			"\A3\soft_f_beta\MRAP_03\Data\mrap_03_ext_co.paa",
			"\a3\data_f\vehicles\turret_co.paa"
		};

		// From I_MRAP_03_F
		class SimpleObject {
			eden = 1;
			animate[] = {{"damagehide", 0}, {"damagehidevez", 0}, {"damagehidehlaven", 0}, {"wheel_1_1_destruct", 0}, {"wheel_1_2_destruct", 0}, {"wheel_1_3_destruct", 0}, {"wheel_1_4_destruct", 0}, {"wheel_2_1_destruct", 0}, {"wheel_2_2_destruct", 0}, {"wheel_2_3_destruct", 0}, {"wheel_2_4_destruct", 0}, {"wheel_1_1_destruct_unhide", 0}, {"wheel_1_2_destruct_unhide", 0}, {"wheel_1_3_destruct_unhide", 0}, {"wheel_1_4_destruct_unhide", 0}, {"wheel_2_1_destruct_unhide", 0}, {"wheel_2_2_destruct_unhide", 0}, {"wheel_2_3_destruct_unhide", 0}, {"wheel_2_4_destruct_unhide", 0}, {"wheel_1_3_damage", 0}, {"wheel_1_4_damage", 0}, {"wheel_2_3_damage", 0}, {"wheel_2_4_damage", 0}, {"wheel_1_3_damper_damage_backanim", 0}, {"wheel_1_4_damper_damage_backanim", 0}, {"wheel_2_3_damper_damage_backanim", 0}, {"wheel_2_4_damper_damage_backanim", 0}, {"glass1_destruct", 0}, {"glass2_destruct", 0}, {"glass3_destruct", 0}, {"glass4_destruct", 0}, {"glass5_destruct", 0}, {"glass6_destruct", 0}, {"wheel_1_1", 0}, {"wheel_2_1", 0}, {"wheel_1_2", 0}, {"wheel_2_2", 0}, {"daylights", 0}, {"pedal_thrust", 0}, {"pedal_brake", 0}, {"wheel_1_1_damage", 0}, {"wheel_1_2_damage", 0}, {"wheel_2_1_damage", 0}, {"wheel_2_2_damage", 0}, {"wheel_1_1_damper_damage_backanim", 0}, {"wheel_1_2_damper_damage_backanim", 0}, {"wheel_2_1_damper_damage_backanim", 0}, {"wheel_2_2_damper_damage_backanim", 0}, {"vehicletransported_antenna_hide", 0}, {"drivingwheel", 0}, {"steering_1_1", 0}, {"steering_2_1", 0}, {"indicatorspeed", 0}, {"indicatorrpm", 0}, {"fuel", 1}, {"reverse_light", 1}, {"gear_lever", 1}, {"gear_lever2", 1}, {"engineoff", 0}, {"startup", 0}, {"tyre_pressure_r1", 2853}, {"tyre_pressure_r2", 2853}, {"tyre_pressure_g1", 2853}, {"tyre_pressure_r3", 2853}, {"obsturret", 0}, {"obsgun", 0}, {"obselevation", 0}, {"wheel_1_1_damper", 0}, {"wheel_2_1_damper", 0}, {"wheel_1_2_damper", 0}, {"wheel_2_2_damper", 0}, {"door_lf", 0}, {"door_rf", 0}};
			hide[] = {"clan", "zasleh", "light_l", "light_r", "zadni svetlo", "brzdove svetlo", "podsvit pristroju", "poskozeni"};
			verticalOffset = 1.604;
			verticalOffsetWorld = -0.228;
			init = "''";
		};

		// From Hunter MRAP
		class TransportMagazines
		{
			class _xx_30Rnd_65x39_caseless_mag
			{
				magazine = "30Rnd_65x39_caseless_mag";
				count = 16;
			};
			class _xx_100Rnd_65x39_caseless_mag
			{
				magazine = "100Rnd_65x39_caseless_mag";
				count = 6;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 10;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 10;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine = "1Rnd_Smoke_Grenade_shell";
				count = 4;
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell
			{
				magazine = "1Rnd_SmokeGreen_Grenade_shell";
				count = 4;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine = "1Rnd_SmokeOrange_Grenade_shell";
				count = 4;
			};
			class _xx_1Rnd_SmokeBlue_Grenade_shell
			{
				magazine = "1Rnd_SmokeBlue_Grenade_shell";
				count = 4;
			};
			class _xx_16Rnd_9x21_Mag
			{
				magazine = "16Rnd_9x21_Mag";
				count = 12;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 4;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 4;
			};
			class _xx_SmokeShellOrange
			{
				magazine = "SmokeShellOrange";
				count = 4;
			};
			class _xx_SmokeShellBlue
			{
				magazine = "SmokeShellBlue";
				count = 4;
			};
			class _xx_NLAW_F
			{
				magazine = "NLAW_F";
				count = 2;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 10;
			};
		};
		class TransportWeapons
		{
			class _xx_arifle_MX_F
			{
				weapon = "arifle_MX_F";
				count = 2;
			};
		};
	};

	// Strider HMG
	class MRAP_03_hmg_base_F;
	class TMTM_B_MRAP_03_hmg_F: MRAP_03_hmg_base_F {
		author = "Bohemia Interactive & TMTM";
		_generalMacro = "TMTM_B_MRAP_03_hmg_F";
		scope = 2;
		crew = "B_Soldier_F";
		typicalCargo[] = {"B_Soldier_lite_F"};
		side = 1;
		faction = "BLU_F";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\I_MRAP_03_hmg_F.jpg";

		// From I_MRAP_03_hmg_F
		class SimpleObject {
			eden = 1;
			animate[] = {{"damagehide", 0}, {"damagehidevez", 0}, {"damagehidehlaven", 0}, {"wheel_1_1_destruct", 0}, {"wheel_1_2_destruct", 0}, {"wheel_1_3_destruct", 0}, {"wheel_1_4_destruct", 0}, {"wheel_2_1_destruct", 0}, {"wheel_2_2_destruct", 0}, {"wheel_2_3_destruct", 0}, {"wheel_2_4_destruct", 0}, {"wheel_1_1_destruct_unhide", 0}, {"wheel_1_2_destruct_unhide", 0}, {"wheel_1_3_destruct_unhide", 0}, {"wheel_1_4_destruct_unhide", 0}, {"wheel_2_1_destruct_unhide", 0}, {"wheel_2_2_destruct_unhide", 0}, {"wheel_2_3_destruct_unhide", 0}, {"wheel_2_4_destruct_unhide", 0}, {"wheel_1_3_damage", 0}, {"wheel_1_4_damage", 0}, {"wheel_2_3_damage", 0}, {"wheel_2_4_damage", 0}, {"wheel_1_3_damper_damage_backanim", 0}, {"wheel_1_4_damper_damage_backanim", 0}, {"wheel_2_3_damper_damage_backanim", 0}, {"wheel_2_4_damper_damage_backanim", 0}, {"glass1_destruct", 0}, {"glass2_destruct", 0}, {"glass3_destruct", 0}, {"glass4_destruct", 0}, {"glass5_destruct", 0}, {"glass6_destruct", 0}, {"wheel_1_1", 0}, {"wheel_2_1", 0}, {"wheel_1_2", 0}, {"wheel_2_2", 0}, {"daylights", 0}, {"pedal_thrust", 0}, {"pedal_brake", 0}, {"wheel_1_1_damage", 0}, {"wheel_1_2_damage", 0}, {"wheel_2_1_damage", 0}, {"wheel_2_2_damage", 0}, {"wheel_1_1_damper_damage_backanim", 0}, {"wheel_1_2_damper_damage_backanim", 0}, {"wheel_2_1_damper_damage_backanim", 0}, {"wheel_2_2_damper_damage_backanim", 0}, {"vehicletransported_antenna_hide", 0}, {"drivingwheel", 0}, {"steering_1_1", 0}, {"steering_2_1", 0}, {"indicatorspeed", 0}, {"indicatorrpm", 0}, {"fuel", 1}, {"reverse_light", 1}, {"gear_lever", 1}, {"gear_lever2", 1}, {"engineoff", 0}, {"startup", 0}, {"tyre_pressure_r1", 2858.26}, {"tyre_pressure_r2", 2858.26}, {"tyre_pressure_g1", 2858.26}, {"tyre_pressure_r3", 2858.26}, {"obsturret", 0}, {"obsgun", 0}, {"obselevation", 0}, {"wheel_1_1_damper", 0}, {"wheel_2_1_damper", 0}, {"wheel_1_2_damper", 0}, {"wheel_2_2_damper", 0}, {"door_lf", 0}, {"door_rf", 0}, {"mainturret", 0}, {"maingun", 0}, {"joystick_gunner_x", 0}, {"joystick_gunner_y", 0}, {"turret_indicator", 0}, {"mg_muzzle", 0}, {"zaslehrot", 504}};
			hide[] = {"clan", "zasleh", "light_l", "light_r", "zadni svetlo", "brzdove svetlo", "podsvit pristroju", "poskozeni"};
			verticalOffset = 2.3;
			verticalOffsetWorld = -0.149;
			init = "''";
		};

		// From Hunter MRAP
		class TransportMagazines
		{
			class _xx_30Rnd_65x39_caseless_mag
			{
				magazine = "30Rnd_65x39_caseless_mag";
				count = 16;
			};
			class _xx_100Rnd_65x39_caseless_mag
			{
				magazine = "100Rnd_65x39_caseless_mag";
				count = 6;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 10;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 10;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine = "1Rnd_Smoke_Grenade_shell";
				count = 4;
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell
			{
				magazine = "1Rnd_SmokeGreen_Grenade_shell";
				count = 4;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine = "1Rnd_SmokeOrange_Grenade_shell";
				count = 4;
			};
			class _xx_1Rnd_SmokeBlue_Grenade_shell
			{
				magazine = "1Rnd_SmokeBlue_Grenade_shell";
				count = 4;
			};
			class _xx_16Rnd_9x21_Mag
			{
				magazine = "16Rnd_9x21_Mag";
				count = 12;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 4;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 4;
			};
			class _xx_SmokeShellOrange
			{
				magazine = "SmokeShellOrange";
				count = 4;
			};
			class _xx_SmokeShellBlue
			{
				magazine = "SmokeShellBlue";
				count = 4;
			};
			class _xx_NLAW_F
			{
				magazine = "NLAW_F";
				count = 2;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 10;
			};
		};
		class TransportWeapons
		{
			class _xx_arifle_MX_F
			{
				weapon = "arifle_MX_F";
				count = 2;
			};
		};
	};

	// Strider GMG
	class MRAP_03_gmg_base_F;
	class TMTM_B_MRAP_03_gmg_F: MRAP_03_gmg_base_F {
		author = "Bohemia Interactive & TMTM";
		_generalMacro = "TMTM_B_MRAP_03_gmg_F";
		scope = 2;
		crew = "B_Soldier_F";
		typicalCargo[] = {"B_Soldier_lite_F"};
		side = 1;
		faction = "BLU_F";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\I_MRAP_03_gmg_F.jpg";

		// From I_MRAP_03_gmg_F
		class SimpleObject {
			eden = 1;
			animate[] = {{"damagehide", 0}, {"damagehidevez", 0}, {"damagehidehlaven", 0}, {"wheel_1_1_destruct", 0}, {"wheel_1_2_destruct", 0}, {"wheel_1_3_destruct", 0}, {"wheel_1_4_destruct", 0}, {"wheel_2_1_destruct", 0}, {"wheel_2_2_destruct", 0}, {"wheel_2_3_destruct", 0}, {"wheel_2_4_destruct", 0}, {"wheel_1_1_destruct_unhide", 0}, {"wheel_1_2_destruct_unhide", 0}, {"wheel_1_3_destruct_unhide", 0}, {"wheel_1_4_destruct_unhide", 0}, {"wheel_2_1_destruct_unhide", 0}, {"wheel_2_2_destruct_unhide", 0}, {"wheel_2_3_destruct_unhide", 0}, {"wheel_2_4_destruct_unhide", 0}, {"wheel_1_3_damage", 0}, {"wheel_1_4_damage", 0}, {"wheel_2_3_damage", 0}, {"wheel_2_4_damage", 0}, {"wheel_1_3_damper_damage_backanim", 0}, {"wheel_1_4_damper_damage_backanim", 0}, {"wheel_2_3_damper_damage_backanim", 0}, {"wheel_2_4_damper_damage_backanim", 0}, {"glass1_destruct", 0}, {"glass2_destruct", 0}, {"glass3_destruct", 0}, {"glass4_destruct", 0}, {"glass5_destruct", 0}, {"glass6_destruct", 0}, {"wheel_1_1", 0}, {"wheel_2_1", 0}, {"wheel_1_2", 0}, {"wheel_2_2", 0}, {"daylights", 0}, {"pedal_thrust", 0}, {"pedal_brake", 0}, {"wheel_1_1_damage", 0}, {"wheel_1_2_damage", 0}, {"wheel_2_1_damage", 0}, {"wheel_2_2_damage", 0}, {"wheel_1_1_damper_damage_backanim", 0}, {"wheel_1_2_damper_damage_backanim", 0}, {"wheel_2_1_damper_damage_backanim", 0}, {"wheel_2_2_damper_damage_backanim", 0}, {"vehicletransported_antenna_hide", 0}, {"drivingwheel", 0}, {"steering_1_1", 0}, {"steering_2_1", 0}, {"indicatorspeed", 0}, {"indicatorrpm", 0}, {"fuel", 1}, {"reverse_light", 1}, {"gear_lever", 1}, {"gear_lever2", 1}, {"engineoff", 0}, {"startup", 0}, {"tyre_pressure_r1", 2855.63}, {"tyre_pressure_r2", 2855.63}, {"tyre_pressure_g1", 2855.63}, {"tyre_pressure_r3", 2855.63}, {"obsturret", 0}, {"obsgun", 0}, {"obselevation", 0}, {"wheel_1_1_damper", 0}, {"wheel_2_1_damper", 0}, {"wheel_1_2_damper", 0}, {"wheel_2_2_damper", 0}, {"door_lf", 0}, {"door_rf", 0}, {"mainturret", 0}, {"maingun", 0}, {"joystick_gunner_x", 0}, {"joystick_gunner_y", 0}, {"turret_indicator", 0}, {"gmg_muzzle", 0}, {"zaslehrot", 223}};
			hide[] = {"clan", "zasleh", "light_l", "light_r", "zadni svetlo", "brzdove svetlo", "podsvit pristroju", "poskozeni"};
			verticalOffset = 2.303;
			verticalOffsetWorld = -0.146;
			init = "''";
		};

		// From Hunter MRAP
		class TransportMagazines
		{
			class _xx_30Rnd_65x39_caseless_mag
			{
				magazine = "30Rnd_65x39_caseless_mag";
				count = 16;
			};
			class _xx_100Rnd_65x39_caseless_mag
			{
				magazine = "100Rnd_65x39_caseless_mag";
				count = 6;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 10;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 10;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine = "1Rnd_Smoke_Grenade_shell";
				count = 4;
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell
			{
				magazine = "1Rnd_SmokeGreen_Grenade_shell";
				count = 4;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine = "1Rnd_SmokeOrange_Grenade_shell";
				count = 4;
			};
			class _xx_1Rnd_SmokeBlue_Grenade_shell
			{
				magazine = "1Rnd_SmokeBlue_Grenade_shell";
				count = 4;
			};
			class _xx_16Rnd_9x21_Mag
			{
				magazine = "16Rnd_9x21_Mag";
				count = 12;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 4;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 4;
			};
			class _xx_SmokeShellOrange
			{
				magazine = "SmokeShellOrange";
				count = 4;
			};
			class _xx_SmokeShellBlue
			{
				magazine = "SmokeShellBlue";
				count = 4;
			};
			class _xx_NLAW_F
			{
				magazine = "NLAW_F";
				count = 2;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 10;
			};
		};
		class TransportWeapons
		{
			class _xx_arifle_MX_F
			{
				weapon = "arifle_MX_F";
				count = 2;
			};
		};
	};


	// AFV-4 Gorgon
	class APC_Wheeled_03_base_F: Wheeled_APC_F {
		class textureSources {
			class tmtmpack_nato {
				displayName = "NATO";
				author = "Bohemia Interactive";
				textures[] = {
					"A3\Armor_F_Gamma\APC_Wheeled_03\Data\apc_wheeled_03_ext_co.paa",
					"A3\Armor_F_Gamma\APC_Wheeled_03\Data\apc_wheeled_03_ext2_co.paa",
					"A3\Armor_F_Gamma\APC_Wheeled_03\Data\rcws30_co.paa",
					"A3\Armor_F_Gamma\APC_Wheeled_03\Data\apc_wheeled_03_ext_alpha_co.paa",
					"A3\Armor_F\Data\camonet_AAF_FIA_desert_CO.paa",
					"A3\armor_f\data\cage_sand_co.paa"
				};
				factions[] = {"BLU_F"};
			};
		};
	};

	class B_APC_Wheeled_03_cannon_F;
	class TMTM_B_APC_Wheeled_03_F: B_APC_Wheeled_03_cannon_F {
		author = "Bohemia Interactive & TMTM";
		_generalMacro = "TMTM_B_APC_Wheeled_03_F";
		scope = 2;
		side = 1;
		faction = "BLU_F";
		//editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\I_MRAP_03_F.jpg"; // TODO: Add editor preview

		hiddenSelectionsTextures[] = {
			"A3\Armor_F_Gamma\APC_Wheeled_03\Data\apc_wheeled_03_ext_co.paa",
			"A3\Armor_F_Gamma\APC_Wheeled_03\Data\apc_wheeled_03_ext2_co.paa",
			"A3\Armor_F_Gamma\APC_Wheeled_03\Data\rcws30_co.paa",
			"A3\Armor_F_Gamma\APC_Wheeled_03\Data\apc_wheeled_03_ext_alpha_co.paa",
			"A3\Armor_F\Data\camonet_AAF_FIA_desert_CO.paa",
			"A3\armor_f\data\cage_sand_co.paa"
		};
		textureList[] = {"tmtmpack_nato",1};

		// From Marshall APC
		class TransportMagazines {
			class _xx_30Rnd_65x39_caseless_mag
			{
				magazine = "30Rnd_65x39_caseless_mag";
				count = 12;
			};
			class _xx_100Rnd_65x39_caseless_mag
			{
				magazine = "100Rnd_65x39_caseless_mag";
				count = 6;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 6;
			};
			class _xx_MiniGrenade
			{
				magazine = "MiniGrenade";
				count = 6;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 6;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine = "1Rnd_Smoke_Grenade_shell";
				count = 3;
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell
			{
				magazine = "1Rnd_SmokeGreen_Grenade_shell";
				count = 3;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine = "1Rnd_SmokeOrange_Grenade_shell";
				count = 3;
			};
			class _xx_1Rnd_SmokeBlue_Grenade_shell
			{
				magazine = "1Rnd_SmokeBlue_Grenade_shell";
				count = 3;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 8;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 8;
			};
			class _xx_SmokeShellOrange
			{
				magazine = "SmokeShellOrange";
				count = 8;
			};
			class _xx_SmokeShellBlue
			{
				magazine = "SmokeShellBlue";
				count = 8;
			};
			class _xx_NLAW_F
			{
				magazine = "NLAW_F";
				count = 5;
			};
			class _xx_Titan_AT
			{
				magazine = "Titan_AT";
				count = 2;
			};
			class _xx_Titan_AP
			{
				magazine = "Titan_AP";
				count = 2;
			};
			class _xx_Titan_AA
			{
				magazine = "Titan_AA";
				count = 2;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 10;
			};
		};
		class TransportWeapons
		{
			class _xx_arifle_MX_F
			{
				weapon = "arifle_MX_F";
				count = 2;
			};
		};
	};
};
