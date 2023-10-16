class CfgPatches
{
	class headgear
	{
		units[] = {};
		weapons[] = {
			"ludwig_gorro_saci",
		};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"A3_Characters_F",
			"A3_Data_F",
		};
	};
};

class CfgWeapons
{
	class ItemCore;
	class HeadgearItem;
	class ludwig_gorro_saci : ItemCore
	{
		author = "BRAF Team & Ludwig";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Saci's gorro";
		picture = "";
		model = "\braf\braf_halloween\addons\headgear\gorro_saci.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\braf\braf_halloween\addons\headgear\data\saci_co.paa"};
		class ItemInfo : HeadgearItem
		{
			mass = 40;
			uniformModel = "\braf\braf_halloween\addons\headgear\gorro_saci.p3d";
			modelSides[] = {0, 1, 2, 3, 4, 5, 6};
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"\braf\braf_halloween\addons\headgear\data\saci_co.paa"};
			subItems[] = {"Integrated_NVG_F"};

			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
};
