class CfgVehicles {
	// Base classes
	class Helicopter_Base_F;
	class Plane_Base_F;
	
	// AMV-7 Marshall textures
	class APC_Wheeled_01_base_F;
	class APC_Wheeled_01_base_F: Wheeled_APC_F {
		class TextureSources {
			class tmtmpack_uaf_olive {
				displayName = "UAF (Olive)";
				autor = "erem2k";
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
	// Tempest
	class Truck_03_base_F;
	class O_Truck_03_transport_F: Truck_03_base_F {
		class TextureSources {
			class tmtmpack_fia {
				displayName = "FIA";
				autor = "erem2k";
				textures[] = {
					"\tmtm\pack\bis_vehicles\Data\tmtm_truck_03_ext01_fia_co.paa",
					"\tmtm\pack\bis_vehicles\Data\tmtm_truck_03_ext02_fia_co.paa",
					"\tmtm\pack\bis_vehicles\Data\tmtm_truck_03_cargo_fia_co.paa"
				};
				factions[] = {};
			};
		};
	};
	class O_Truck_03_ammo_F: Truck_03_base_F {
		class TextureSources {
			class tmtmpack_fia {
				displayName = "FIA";
				autor = "erem2k";
				textures[] = {
					"\tmtm\pack\bis_vehicles\Data\tmtm_truck_03_ext01_fia_co.paa",
					"\tmtm\pack\bis_vehicles\Data\tmtm_truck_03_ext02_fia_co.paa",
					"\tmtm\pack\bis_vehicles\Data\tmtm_truck_03_cargo_fia_co.paa",
					"\A3\Structures_F\Data\Metal\Containers\Containers_02_set_CO.paa"
				};
				factions[] = {};
			};
		};
	};
	class O_Truck_03_fuel_F: Truck_03_base_F {
		class TextureSources {
			class tmtmpack_fia {
				displayName = "FIA";
				autor = "erem2k";
				textures[] = {
					"\tmtm\pack\bis_vehicles\Data\tmtm_truck_03_ext01_fia_co.paa",
					"\tmtm\pack\bis_vehicles\Data\tmtm_truck_03_ext02_fia_co.paa",
					"\tmtm\pack\bis_vehicles\Data\tmtm_truck_03_fuel_fia_co.paa"
				};
				factions[] = {};
			};
		};
	};
};