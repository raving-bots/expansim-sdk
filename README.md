# eXpanSIM SDK

[eXpanSIM][1] is a universal vehicle simulator supporting VR. The training mode lets you learn (eco-)driving cars and trucks. Racing fans can test their skills in driving vehicles with realistic physics. It is also a modern research testbed for engineers, designers and AI specialists working on autonomous vehicles. You can find it on [Steam][1].

[1]: https://store.steampowered.com/app/1015370/eXpanSIM/

**IMPORTANT**: this is an early preview release of the plugins feature and the SDK. Everything is subject to change.

After installing eXpanSIM on Steam you can find the built SDK in the `<Steam directory>\steamapps\common\eXpanSIM\SDK` directory.
It's recommended to always use the SDK included with the simulator build. The GitHub repository is provided only for reference and might be out of date.

## Prerequisites

Building plugins with the current version of the SDK requires:

- Visual Studio 2017 15.9 or newer. Visual Studio 2019 might work but is not recommended at this time.
- C++17 support.
- Windows SDK 1809 (10.0.17763.0).

## Getting started

1. Run eXpanSIM at least once to create all of the configuration files. Close it afterwards.
2. Set `XSIM_SDK_PATH` environment variable to this folder.
3. Install the Visual Studio 2017 project template (see below).
4. Edit `Documents\eXpanSIM\Configs\vXX\API_vYY.json` (the version numbers might vary, use the highest one):
  1. Set `PluginPath` to the **absolute** path to your DLL. **IMPORTANT**: JSON strings support escapes, so paths must use a doubled backslash (`C:\\foo\\bar.dll`) or a forward slash (`C:/foo/bar.dll`).
  2. Set `PluginDebug` to `true` to make plugin loading more verbose.
  3. Set any of the `VehicleControllerPlugin`, `MainEnginePlugin`, `WheelHubPlugin`, `CatTrackHubPlugin` and `VehicleTelemetryPlugin` as needed.
5. Run eXpanSIM again. Your plugin should now be loaded.

The plugin switches (`VehicleControllerPlugin` etc.) can have the following values:
- When set to `0` (`None`), only the internal implementation of the component will be used.
- When set to `1` (`DllInherit`), the plugin function will be called after the internal implementation runs.
- When set to `2` (`DllReplace`), the plugin function will be called instead of the internal implementation.

Other values are related to networking and not implemented yet.

### ABI/API stability

Currently you need to rebuild your plugin after each SDK update. If your plugin fails to load with ABI mismatch errors, it needs to be updated.

### Troubleshooting and logging

Any plugin-related errors can be found in the simulator log file: `%LOCALAPPDATA%\eXpanSIM\Logs\Simulator.log`.

Every plugin gets a function pointer in `OnPluginLoad` that can be used to append to this logfile. Messages will be prefixed by the plugin name. **NOTE**: this function pointer must be discarded in `OnPluginUnload`.

The SDK contains a `Log(...)` and `SetLogSink(...)` functions that support formatting and can be used to easily log messages.

### Thread safety

Threading model will be clarified in the future. For now assume plugin-exported functions might be called at any time by any thread.

### Exceptions

Exceptions can be used within the plugins, but they must not cross the DLL boundary: all of the plugin exports must be marked `noexcept`. There is a `Protect(callable)` function available which catches and logs all unhandled exceptions and can be used like this:

```cpp
XSIM_EXPORT void OnVehicleDespawned() noexcept
{
	Protect([&]
	{
		// code that might throw
	});
}
```

If you don't catch an exception before it leaves the exported function, eXpanSIM will terminate.

### Pointers

All pointers you receive are valid only for the duration of your exported function. Make a copy of any data you want to hold on for longer.

### Plugin exports

Every plugin *must* export (the SDK takes care of this for you):

- `XSIM_EXPORT uint32_t GetABIVersion()` - must return `xsim::abi::Version` appropriate for the simulator build. Used to protect against ABI mismatches.
- `XSIM_EXPORT uint64_t GetABIChecksum()` - for ABI v0. Must return `xsim::abi::Checksum` appropriate for the simulator build. Used to protect against ABI mismatches.

Additionally several functions are called regardless of the plugin settings above (if they exist):

- `XSIM_EXPORT void OnPluginLoad(LogSinkFn)` - called after the plugin is loaded. The argument is a function that when called adds an UTF-16 encoded message to the main eXpanSIM log file (Simulator.log).
- `XSIM_EXPORT void OnPluginUnload()` - called before the plugin is unloaded (typically when simulator shuts down).
- `XSIM_EXPORT void OnVehicleSpawned(Ptr<const VehicleSetupInfo> vehicleSetup)` - called when a new vehicle setup is spawned.
- `XSIM_EXPORT void OnVehicleDespawned()` - called when the current vehicle setup is despawned.

The rest of the exports are dependent on the configuration file:

- `XSIM_EXPORT void CalculateCatTrackHub(...)` - called when `CatTrackHubPlugin` is configured.
- `XSIM_EXPORT void CalculateMotorEngine(...)` - called when `MainEnginePlugin` is configured.
- `XSIM_EXPORT void CalculateVehicleController(...)` - called when `VehicleControllerPlugin` is configured.
- `XSIM_EXPORT void CalculateWheelHub(...)` - called when `WheelHubPlugin` is configured.
- `XSIM_EXPORT void OnVehicleTelemetry(...)` - called when `VehicleTelemetryPlugin` is configured (you probably want `DllInherit` when using this).

Note: this list might not be comprehensive. The simulator is under heavy development, and new features are being implemented all the time.
Always check the SDK headers and the newest configuration file for an up-to-date list of available calls.

## Visual Studio 2017 project template

To use this template copy `VisualStudio\XSIM.VisualStudio.PluginTemplate.zip` to `Documents\Visual Studio 2017\Templates\ProjectTemplates`.
Make sure Visual Studio is closed, or restart it after copying the file.

Afterwards you should be able to find "eXpanSIM plugin" in the Visual C++ category.

## Examples

Early examples can be found in the `Examples` folder. Built DLLs are included with the simulator SDK.

- `Telemetry` - a sample plugin that exports vehicle telemetry to a CSV file.
