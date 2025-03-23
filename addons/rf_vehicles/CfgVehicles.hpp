class CfgVehicles
{
	class Offroad_01_unarmed_base_F;
	class Pickup_01_base_rf: Offroad_01_unarmed_base_F
	{
		class TextureSources
		{
			class tmtm_wblack
			{
				displayName="Generic, Winter Black";
				author="erem2k";
				textures[]= {
					"\tmtm\pack\rf_vehicles\data\tmtm_pickup_01_ext_wblack_co.paa",
					"\lxRF\vehicles_rf\pickup_01\Data\pickup_01_adds_white_tank_co.paa",
					"\lxrf\vehicles_rf\pickup_01\data\pickup_01_ext2_co.paa",
					"\lxrf\vehicles_rf\pickup_01\data\pickup_01_AAT_olive_co.paa",
					"\lxrf\vehicles_rf\pickup_01\data\pickup_01_launcher_black_co.paa",
					"\lxRF\vehicles_rf\pickup_01\Data\pickup_01_service_white_co.paa"
				};
				factions[]={};
			};

			class tmtm_wgrey
			{
				displayName="Generic, Winter Grey";
				author="erem2k";
				textures[]= {
					"\tmtm\pack\rf_vehicles\data\tmtm_pickup_01_ext_wgrey_co.paa",
					"\lxRF\vehicles_rf\pickup_01\Data\pickup_01_adds_white_tank_co.paa",
					"\lxrf\vehicles_rf\pickup_01\data\pickup_01_ext2_co.paa",
					"\lxrf\vehicles_rf\pickup_01\data\pickup_01_AAT_olive_co.paa",
					"\lxrf\vehicles_rf\pickup_01\data\pickup_01_launcher_black_co.paa",
					"\lxRF\vehicles_rf\pickup_01\Data\pickup_01_service_white_co.paa"
				};
				factions[]={};
			};

			class tmtm_wgreen
			{
				displayName="Generic, Winter Green";
				author="erem2k";
				textures[]= {
					"\tmtm\pack\rf_vehicles\data\tmtm_pickup_01_ext_wgreen_co.paa",
					"\lxRF\vehicles_rf\pickup_01\Data\pickup_01_adds_white_tank_co.paa",
					"\lxrf\vehicles_rf\pickup_01\data\pickup_01_ext2_co.paa",
					"\lxrf\vehicles_rf\pickup_01\data\pickup_01_AAT_olive_co.paa",
					"\lxrf\vehicles_rf\pickup_01\data\pickup_01_launcher_co.paa",
					"\lxRF\vehicles_rf\pickup_01\Data\pickup_01_service_white_co.paa"
				};
				factions[]={};
			};
		};
	};

	class Pickup_01_aat_base_rf;

	class Pickup_01_Rocket_base_rf: Pickup_01_aat_base_rf
	{
		class TextureSources
		{
			class tmtm_wblack
			{
				displayName="Generic, Winter Black";
				author="erem2k";
				textures[]= {
					"\tmtm\pack\rf_vehicles\data\tmtm_pickup_01_ext_wblack_co.paa",
					"\lxRF\vehicles_rf\pickup_01\Data\pickup_01_adds_white_tank_co.paa",
					"\lxrf\vehicles_rf\pickup_01\data\pickup_01_ext2_co.paa",
					"lxrf\weapons_rf\dynamicloadout\data\missile_tratnyr_gray_co.paa",
					"\lxRF\vehicles_rf\pickup_01\Data\pickup_01_service_white_co.paa"
				};
				factions[]={};
			};

			class tmtm_wgrey
			{
				displayName="Generic, Winter Grey";
				author="erem2k";
				textures[]= {
					"\tmtm\pack\rf_vehicles\data\tmtm_pickup_01_ext_wgrey_co.paa",
					"\lxRF\vehicles_rf\pickup_01\Data\pickup_01_adds_white_tank_co.paa",
					"\lxrf\vehicles_rf\pickup_01\data\pickup_01_ext2_co.paa",
					"lxrf\weapons_rf\dynamicloadout\data\missile_tratnyr_gray_co.paa",
					"\lxRF\vehicles_rf\pickup_01\Data\pickup_01_service_white_co.paa"
				};
				factions[]={};
			};

			class tmtm_wgreen
			{
				displayName="Generic, Winter Green";
				author="erem2k";
				textures[]= {
					"\tmtm\pack\rf_vehicles\data\tmtm_pickup_01_ext_wgreen_co.paa",
					"\lxRF\vehicles_rf\pickup_01\Data\pickup_01_adds_white_tank_co.paa",
					"\lxrf\vehicles_rf\pickup_01\data\pickup_01_ext2_co.paa",
					"lxrf\weapons_rf\dynamicloadout\data\missile_tratnyr_gray_co.paa",
					"\lxRF\vehicles_rf\pickup_01\Data\pickup_01_service_white_co.paa"
				};
				factions[]={};
			};
		};
	};

	class Pickup_01_rcws_base_rf: Pickup_01_aat_base_rf
	{
		class TextureSources
		{
			class tmtm_wblack
			{
				displayName="Generic, Winter Black";
				author="erem2k";
				textures[]= {
					"\tmtm\pack\rf_vehicles\data\tmtm_pickup_01_ext_wblack_co.paa",
					"\lxRF\vehicles_rf\pickup_01\Data\pickup_01_adds_white_tank_co.paa",
					"\lxrf\vehicles_rf\pickup_01\data\pickup_01_ext2_co.paa",
					"lxrf\vehicles_rf\pickup_01\Data\RCWS\rcws_black_co.paa",
					"\lxRF\vehicles_rf\pickup_01\Data\pickup_01_service_white_co.paa"
				};

				materials[]=
				{
					"lxrf\vehicles_rf\pickup_01\Data\pickup_01_ext.rvmat",
					"lxrf\vehicles_rf\pickup_01\Data\pickup_01_adds.rvmat",
					"lxrf\vehicles_rf\pickup_01\Data\pickup_01_ext2.rvmat",
					"lxrf\vehicles_rf\pickup_01\Data\RCWS\rcws.rvmat",
					"lxrf\vehicles_rf\pickup_01\Data\pickup_01_service.rvmat"
				};

				factions[]={};
			};

			class tmtm_wgrey
			{
				displayName="Generic, Winter Grey";
				author="erem2k";
				textures[]= {
					"\tmtm\pack\rf_vehicles\data\tmtm_pickup_01_ext_wgrey_co.paa",
					"\lxRF\vehicles_rf\pickup_01\Data\pickup_01_adds_white_tank_co.paa",
					"\lxrf\vehicles_rf\pickup_01\data\pickup_01_ext2_co.paa",
					"lxrf\vehicles_rf\pickup_01\Data\RCWS\rcws_black_co.paa",
					"\lxRF\vehicles_rf\pickup_01\Data\pickup_01_service_white_co.paa"
				};

				materials[]=
				{
					"lxrf\vehicles_rf\pickup_01\Data\pickup_01_ext.rvmat",
					"lxrf\vehicles_rf\pickup_01\Data\pickup_01_adds.rvmat",
					"lxrf\vehicles_rf\pickup_01\Data\pickup_01_ext2.rvmat",
					"lxrf\vehicles_rf\pickup_01\Data\RCWS\rcws.rvmat",
					"lxrf\vehicles_rf\pickup_01\Data\pickup_01_service.rvmat"
				};

				factions[]={};
			};

			class tmtm_wgreen
			{
				displayName="Generic, Winter Green";
				author="erem2k";
				textures[]= {
					"\tmtm\pack\rf_vehicles\data\tmtm_pickup_01_ext_wgreen_co.paa",
					"\lxRF\vehicles_rf\pickup_01\Data\pickup_01_adds_white_tank_co.paa",
					"lxrf\vehicles_rf\pickup_01\Data\RCWS\rcws_black_co.paa",
					"lxrf\weapons_rf\dynamicloadout\data\missile_tratnyr_gray_co.paa",
					"\lxRF\vehicles_rf\pickup_01\Data\pickup_01_service_white_co.paa"
				};

				materials[]=
				{
					"lxrf\vehicles_rf\pickup_01\Data\pickup_01_ext.rvmat",
					"lxrf\vehicles_rf\pickup_01\Data\pickup_01_adds.rvmat",
					"lxrf\vehicles_rf\pickup_01\Data\pickup_01_ext2.rvmat",
					"lxrf\vehicles_rf\pickup_01\Data\RCWS\rcws.rvmat",
					"lxrf\vehicles_rf\pickup_01\Data\pickup_01_service.rvmat"
				};

				factions[]={};
			};
		};
	};
};
