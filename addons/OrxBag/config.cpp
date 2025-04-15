class CfgVehicles
{
	// Base class for Orxeira bags
	class MountainBag_ColorBase;
	class OrxeiraBag_ColorBase: MountainBag_ColorBase
	{
		displayName="Orxeira Bag";
		descriptionShort="Orxeira Bags were designed to be a one bag solution to your everyday bag needs. They may not be pretty, but they are functional and have even saved lives!";
		itemSize[]={6,8};
		itemsCargoSize[]={10,10};
		weight=3000;
		varWetMax=0;
	
	};

	// Include specific color and size variants
	#include "cfgbags/OrxeiraBag_Green.hpp"
	#include "cfgbags/OrxeiraBag_Blue.hpp"
	#include "cfgbags/OrxeiraBag_Desert.hpp"
	#include "cfgbags/OrxeiraBag_Fall.hpp"
	#include "cfgbags/OrxeiraBag_Pink.hpp"
};