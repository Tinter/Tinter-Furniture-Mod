class CfgPatches
{
	class furniture_mod
	{
		// Meta information for editor
		name = "Tinter Furniture";
		author = "Tinter";
		url = "https://github.com/Tinter/Tinter-Furniture";

		// Minimum compatible version. When the game's version is lower, pop-up warning will appear when launching the game.
		requiredVersion = 1.60; 
		// Required addons, used for setting load order.
		// When any of the addons is missing, pop-up warning will appear when launching the game.
		requiredAddons[] = { "cba_main_a3" };
		// List of objects (CfgVehicles classes) contained in the addon. Important also for Zeus content (units and groups) unlocking.
		units[] = {};
		// List of weapons (CfgWeapons classes) contained in the addon.
		weapons[] = {};
	};
};
class CfgFunctions {
  #include "furniture\func.hpp"
};
