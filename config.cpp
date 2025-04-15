 class CfgPatches
{
	class OrxBag
	{
		units[]=
		{
			"OrxeiraBag_Green",
			"OrxeiraBag_Blue",
			"OrxeiraBag_Desert",
			"OrxeiraBag_Fall",
			"OrxeiraBag_Pink"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters",
			"DZ_Characters_Backpacks" 
		};
	};
};

class CfgVehicles
{
	class MountainBag_ColorBase;
	class OrxeiraBag_ColorBase: MountainBag_ColorBase
	{
		displayName="Orx Bag";
		descriptionShort="Orx bags were designed to be a one bag solution to your everyday bag needs. They may not be pretty, but they are functional and have even saved lives!";
		itemSize[]={6,8};
		itemsCargoSize[]={10,10};
		weight=3000;
		varWetMax=0;
	
	};

	class OrxeiraBag_Green: OrxeiraBag_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"OrxBag\data\orxeira_bag_green_co.paa",
			"OrxBag\data\orxeira_bag_green_co.paa",
			"OrxBag\data\orxeira_bag_green_co.paa"
		};
	};

	class OrxeiraBag_Blue: OrxeiraBag_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"OrxBag\data\orxeira_bag_blue_co.paa",
			"OrxBag\data\orxeira_bag_blue_co.paa",
			"OrxBag\data\orxeira_bag_blue_co.paa"
		};
	};

	class OrxeiraBag_Desert: OrxeiraBag_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"OrxBag\data\orxeira_bag_desert_co.paa",
			"OrxBag\data\orxeira_bag_desert_co.paa",
			"OrxBag\data\orxeira_bag_desert_co.paa"
		};
	};

	class OrxeiraBag_Fall: OrxeiraBag_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"OrxBag\data\orxeira_bag_fall_co.paa",
			"OrxBag\data\orxeira_bag_fall_co.paa",
			"OrxBag\data\orxeira_bag_fall_co.paa"
		};
	};
	class OrxeiraBag_Pink: OrxeiraBag_ColorBase
	{
		scope=2;
		itemsCargoSize[]={10,11};
		hiddenSelectionsTextures[]=
		{
			"OrxBag\data\orxeira_bag_pink_co.paa",
			"OrxBag\data\orxeira_bag_pink_co.paa",
			"OrxBag\data\orxeira_bag_pink_co.paa"
		};
	};

	
};