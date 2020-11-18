# Example: Telemetry

This plugin example shows how to use `xsim::IPluginNotifySpawnV1`, `xsim::IPluginTelemetryV1`, and `xsim::IPluginDashboardV1`
to gather vehicle telemetry and save it to a file for later processing.

## Usage

Copy `Telemetry.json` and `Telemetry.dll` to `Documents\eXpanSIM\Plugins`.

When active, the plugin writes to `Documents\eXpanSIM\Telemetry`. Each run will be saved to a separate subdirectory.
