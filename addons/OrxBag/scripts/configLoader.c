void LoadBagConfig()
{
    // Assuming CF mod or your script has a method to load JSON
    string configPath = "$profile:OrxeiraBagMod/config.json";
    JsonFileLoader jsonLoader = new JsonFileLoader();
    
    // Load the JSON file
    ref JsonData jsonData = jsonLoader.Load(configPath);
    if (jsonData != NULL)
    {
        // Iterate through the JSON and apply it to the bags
        foreach (string bagKey, ref JsonBagData bagConfig : jsonData.bags)
        {
            ApplyBagConfig(bagKey, bagConfig);
        }
    }
    else
    {
        Print("Failed to load config.json for Orxeira bags.");
    }
}

void ApplyBagConfig(string bagKey, JsonBagData bagConfig)
{
    if (bagKey == "OrxeiraBag_Green")
    {
        OrxeiraBag_Green.displayName = bagConfig.name;
        OrxeiraBag_Green.descriptionShort = bagConfig.description;
        OrxeiraBag_Green.itemsCargoSize = bagConfig.cargo;
    }
    // Repeat for other bags
}

class JsonBagData
{
    string name;
    string description;
    array<int> cargo;
}

class JsonFileLoader
{
    // Placeholder for CF or custom JSON loading logic
    ref JsonData Load(string filePath)
    {
        // Implement JSON loading logic (or use CF's method here)
        // This method should return a reference to JsonData (or similar)
        return new JsonData(); // Just a placeholder, adapt this part
    }
}