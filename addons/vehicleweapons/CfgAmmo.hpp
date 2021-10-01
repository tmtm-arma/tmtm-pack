class SensorTemplateIR;
class SensorTemplateLaser;

class CfgAmmo {
	// Base classes
	class MissileBase;
	class M_127mm_Firefist_AT: MissileBase {
		class Components;
	};
	
	class TMTM_M_127mm_Firefist_LG_AT: M_127mm_Firefist_AT {
		// Wire guiding seems to bug out the indirect fire capability
		//manualControl = 1;
		
		lockType = 0;
		autoSeekTarget = 1;
		lockSeekRadius = 100;
		cameraViewAvailable = 1;
		//maxControlRange = 4500;
		
		weaponLockSystem = "2 + 4 + 16";
		missileLockCone = 25; // 4
		missileKeepLockedCone = 180; // 90
		missileLockMaxDistance = 6000; // 4500
		//missileLockMinDistance = 65;
		//missileLockMaxSpeed = 41.6667;
		
		//maxSpeed = 200;
		//typicalSpeed = 170;
		//thrustTime = 6;
		//thrust = 40;
		
		class TopDown
		{
			ascendHeight = 250; // 160
			descendDistance = 300; // 160
			minDistance = 300; // 150
			ascendAngle = 30; // 30
		};
		
		class Components: Components {
			class SensorsManagerComponent {
				class Components {
					class IRSensorComponent: SensorTemplateIR {
						class AirTarget {
							minRange = 500;
							maxRange = 4500;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget {
							minRange = 500;
							maxRange = 4500;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						maxTrackableSpeed = 41.6667;
						angleRangeHorizontal = 3.3;
						angleRangeVertical = 2;
						maxTrackableATL = 50;
					};
					
					class LaserSensorComponent: SensorTemplateLaser {
						class AirTarget {
							minRange = 500;
							maxRange = 6000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget {
							minRange = 500;
							maxRange = 6000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						maxTrackableSpeed = 35;
						angleRangeHorizontal = 40;
						angleRangeVertical = 25;
					};
				};
			};
		};
	};
};