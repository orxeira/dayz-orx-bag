class CfgPatches
{
    class OrxBag
    {
        name = "Orxeira Bags";
        units[] =
        {
            "OrxeiraBag_Green",
            "OrxeiraBag_Blue",
            "OrxeiraBag_Desert",
            "OrxeiraBag_Fall",
            "OrxeiraBag_Pink"
        };
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "DZ_Characters",               // Required mod for characters
            "DZ_Characters_Backpacks",     // Required mod for backpacks
            "CommunityFramework"           // Optional, based on whether you use it
        };
    };
};

class CfgMods
{
    class OrxeiraBagMod
    {
        dir = "OrxBag";
        picture = "";
        action = "";
        hideName = 0;
        hidePicture = 0;
        name = "Orxeira Bags";
        credits = "Orxeira";
        author = "Orxeira";
        version = "1.0";
        type = "mod";
    };
};