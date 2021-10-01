class DefaultVehicleSystemsDisplayManagerLeft;
class DefaultVehicleSystemsDisplayManagerRight;
class SensorTemplateLaser;
class SensorTemplateDataLink;

class CfgVehicles {
	// Base classes
	/*class Tank_F;
	
	class LT_01_base_F: Tank_F {
		class Turrets;
	};
	class LT_01_AT_base_F: LT_01_base_F {
		class Turrets: Turrets {
			class MainTurret;
		};
	};
	class I_LT_01_AT_F: LT_01_AT_base_F {
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				class Components;
			};
		};
		class Components;
		class AnimationSources;
	};*/
	class Tank;
	class Tank_F: Tank {
		class Turrets;
	};
	class LT_01_base_F: Tank_F {
		class Turrets: Turrets {
			class MainTurret;
		};
	};
	class LT_01_AT_base_F: LT_01_base_F {
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				class Components;
			};
		};
		class Components;
		class AnimationSources;
	};
	
	class I_LT_01_AT_F: LT_01_AT_base_F {};
	
	class TMTM_I_LT_01_ATLG_F: I_LT_01_AT_F {
		author = "TMTM";
		displayName = "AWC 311 SuperNyx (AT)";
		
		radarType = 2;
		// Enable datalink by default
		reportRemoteTargets = 1;
		reportOwnPosition = 1;
		receiveRemoteTargets = 1;
		
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				weapons[] = {"SmokeLauncher", "HMG_127", "TMTM_missiles_firefist_lg"};
				magazines[] = {
					"SmokeLauncherMag",
					"TMTM_2Rnd_127mm_Firefist_LG_missiles",
					"TMTM_2Rnd_127mm_Firefist_LG_missiles",
					"TMTM_2Rnd_127mm_Firefist_LG_missiles",
					"100Rnd_127x99_mag_Tracer_Red",
					"100Rnd_127x99_mag_Tracer_Red",
					"100Rnd_127x99_mag_Tracer_Red",
					"100Rnd_127x99_mag_Tracer_Red"
				};
				
				class Components {
					class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft {
						class Components: Components {
							class VehicleMissileDisplay {
								componentType = "TransportFeedDisplayComponent";
								source = "Missile";
							};
							class SensorDisplay {
								componentType = "SensorsDisplayComponent";
								range[] = {8000, 4000, 2000, 1000};
								resource = "RscCustomInfoSensors";
							};
							class VehicleDriverDisplay {
								componentType = "TransportFeedDisplayComponent";
								source = "Driver";
							};
						};
					};
					class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight {
						defaultDisplay = "SensorDisplay";
						class Components: Components {
							class VehicleMissileDisplay {
								componentType = "TransportFeedDisplayComponent";
								source = "Missile";
							};
							class SensorDisplay {
								componentType = "SensorsDisplayComponent";
								range[] = {8000, 4000, 2000, 1000};
								resource = "RscCustomInfoSensors";
							};
							class VehicleDriverDisplay {
								componentType = "TransportFeedDisplayComponent";
								source = "Driver";
							};
						};
					};
				};
			};
		};
		
		class Components: Components {
			class SensorManagerComponent {
				class Components {
					class LaserSensorComponent: SensorTemplateLaser {
						animDirection = "mainturret";
					};
					class DataLinkSensorComponent: SensorTemplateDataLink {};
				};
			};
		};
		
		class AnimationSources: AnimationSources {
			class Missiles_revolving {
				source = "revolving";
				weapon = "TMTM_missiles_firefist_lg";
			};
			class Missiles_reloadMagazine {
				source = "reloadMagazine";
				weapon = "TMTM_missiles_firefist_lg";
			};
		};
		/*
		Rhino Base
		
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class LaserSensorComponent: SensorTemplateLaser
					{
						animDirection = "mainTurret";
					};
					class DataLinkSensorComponent: SensorTemplateDataLink
					{
					};
				};
			};
		};
		*/
		
		/*
		Nyx Base
		
		class Components: Components
		{
			class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
			{
				class Components: Components
				{
					class VehicleCommanderDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "Commander";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
			{
				class Components: Components
				{
					class VehicleCommanderDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "Commander";
					};
				};
			};
		};
		*/
		
		/*
		Nyx Radar
		
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange = 8000;
							maxRange = 8000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 4000;
							maxRange = 4000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						typeRecognitionDistance = 4000;
						angleRangeHorizontal = 360;
						angleRangeVertical = 100;
						aimDown = -45;
						maxTrackableSpeed = 694.444;
					};
					class DataLinkSensorComponent: SensorTemplateDataLink
					{
					};
				};
			};
		};
		*/
	};
};