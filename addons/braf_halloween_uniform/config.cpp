class CfgPatches
{
    class braf_halloween_uniform
    {
        author = "BRAF Team & Ludwing";
        units[] = {"braf_characters_army_vehicle_saci"};
        weapons[] = {"braf_characters_army_uniform_saci"};
        requiredVersion = 0.1;
        requiredAddons[] = {
            "A3_Characters_F",
            "braf_characters_army",
        };
    };
};

class CfgVehicles
{
    class braf_army_under;
    class braf_characters_army_vehicle_saci : braf_army_under
    {
        author = "BRAF Team & Ludwing";
        model = "\braf\braf_characters_army_saci\braf_saci.p3d";
        displayName = "O SACI";
        uniformClass = "braf_characters_army_uniform_saci";
    };
};

class CfgWeapons
{
    class braf_army_naked_uniform
    {
        class ItemInfo;
    };
    class braf_characters_army_uniform_saci : braf_army_naked_uniform
    {
        author = "BRAF Team & Ludwing";
        model = "\braf\braf_characters_army_saci\braf_saci.p3d";
        displayName = "O SACI";
        class ItemInfo : ItemInfo
        {
            uniformClass = "braf_characters_army_vehicle_saci";
        };
    };
};
