# Example: Telemetry

This plugin example shows how to use `OnVehicleTelemetry` to gather vehicle telemetry and save it to a file for later processing.

## Usage

Edit `API_v1.json`, set `PluginPath` correctly and `VehiclePlugin.VehicleTelemetryPlugin` to `1`, for example:

```json
{
    "PluginPath": "C:\\Program Files (x86)\\Steam\\steamapps\\common\\eXpanSIM\\SDK\\Examples\\Release\\Telemetry\\Telemetry.dll",
    "PluginDebug": false,
    "VehicleControllerPlugin": 0,
    "VehiclePlugin": {
        "MainEnginePlugin": 0,
        "WheelHubPlugin": 0,
        "CatTrackHubPlugin": 0,
        "VehicleTelemetryPlugin": 1
    }
}
```

## Output

When active, the plugin writes to `Documents\eXpanSIM\Telemetry`. Each run will be saved to a separate subdirectory.
