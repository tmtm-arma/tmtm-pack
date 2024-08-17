class CfgVehicles
{
	class SoldierEB;
	class SoldierWB;
	class SoldierGB;
	
	class O_Soldier_base_F : SoldierEB
	{
		class HitPoints;
	};

	class B_Soldier_base_F : SoldierWB 
	{
		class HitPoints;
	};

	class I_Soldier_base_F : SoldierGB
	{
		class HitPoints;
	};

	#include "include/ACU/CfgVehicles.hpp"
	#include "include/M88/CfgVehicles.hpp"
	#include "include/maskhalat/CfgVehicles.hpp"
	#include "include/Nomex/CfgVehicles.hpp"
	#include "include/VKPO/CfgVehicles.hpp"
};
