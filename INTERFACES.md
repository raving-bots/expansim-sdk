# Stable interfaces

| Interface                          | Header to include                                      | JSON configuration field   |
|------------------------------------|--------------------------------------------------------|----------------------------|
| `xsim::IPluginNotifySpawnV1`       | [`<xsim/generated/IPluginNotifySpawnV1.hpp>`][2]       | n/a                        |
| `xsim::IPluginTelemetryV1`         | [`<xsim/generated/IPluginTelemetryV1.hpp>`][3]         | `VehicleV1.TelemetryV1`    |
| `xsim::IPluginDashboardV1`         | [`<xsim/generated/IPluginDashboardV1.hpp>`][4]         | `VehicleV1.DashboardV1`    |
| `xsim::IPluginMotorEngineV1`       | [`<xsim/generated/IPluginMotorEngineV1.hpp>`][5]       | `VehicleV1.MotorEngineV1`  |
| `xsim::IPluginTransmissionV1`      | [`<xsim/generated/IPluginTransmissionV1.hpp>`][6]      | `VehicleV1.TransmissionV1` |
| `xsim::IPluginWheelHubV1`          | [`<xsim/generated/IPluginWheelHubV1.hpp>`][7]          | `VehicleV1.WheelHubV1`     |
| `xsim::IPluginCatTrackHubV1`       | [`<xsim/generated/IPluginCatTrackHubV1.hpp>`][8]       | `VehicleV1.CatTrackHubV1`  |
| `xsim::IPluginVehicleControllerV1` | [`<xsim/generated/IPluginVehicleControllerV1.hpp>`][9] | `VehicleControllerV1`      |
| `xsim::IPluginSimInfoV1`           | [`<xsim/generated/IPluginSimInfoV1.hpp>`][10]          | n/a                        |

# Unstable interfaces

**WARNING:** these will likely change over time, and plugins that implement them will require frequent rebuilding.

| Interface                                  | Header to include                                               | JSON configuration field   |
|--------------------------------------------|-----------------------------------------------------------------|----------------------------|
| `xsim::unstable::IPluginNotifySpawn`       | [`<xsim/generated/IPluginNotifySpawn.unstable.hpp>`][100]       | n/a                        |
| `xsim::unstable::IPluginTelemetry`         | [`<xsim/generated/IPluginTelemetry.unstable.hpp>`][101]         | `VehicleV1.TelemetryV1`    |
| `xsim::unstable::IPluginDashboard`         | [`<xsim/generated/IPluginDashboard.unstable.hpp>`][102]         | `VehicleV1.DashboardV1`    |
| `xsim::unstable::IPluginMotorEngine`       | [`<xsim/generated/IPluginMotorEngine.unstable.hpp>`][103]       | `VehicleV1.MotorEngineV1`  |
| `xsim::unstable::IPluginTransmission`      | [`<xsim/generated/IPluginTransmission.unstable.hpp>`][104]      | `VehicleV1.TransmissionV1` |
| `xsim::unstable::IPluginWheelHub`          | [`<xsim/generated/IPluginWheelHub.unstable.hpp>`][105]          | `VehicleV1.WheelHubV1`     |
| `xsim::unstable::IPluginCatTrackHub`       | [`<xsim/generated/IPluginCatTrackHub.unstable.hpp>`][106]       | `VehicleV1.CatTrackHubV1`  |
| `xsim::unstable::IPluginVehicleController` | [`<xsim/generated/IPluginVehicleController.unstable.hpp>`][107] | `VehicleControllerV1`      |
| `xsim::unstable::IPluginSimInfo`           | [`<xsim/generated/IPluginSimInfo.unstable.hpp>`][108]           | n/a                        |

[2]: xsim/generated/IPluginNotifySpawnV1.hpp
[3]: xsim/generated/IPluginTelemetryV1.hpp
[4]: xsim/generated/IPluginDashboardV1.hpp
[5]: xsim/generated/IPluginMotorEngineV1.hpp
[6]: xsim/generated/IPluginTransmissionV1.hpp
[7]: xsim/generated/IPluginWheelHubV1.hpp
[8]: xsim/generated/IPluginCatTrackHubV1.hpp
[9]: xsim/generated/IPluginVehicleControllerV1.hpp
[10]: xsim/generated/IPluginSimInfoV1.hpp

[100]: xsim/generated/IPluginNotifySpawn.unstable.hpp
[101]: xsim/generated/IPluginTelemetry.unstable.hpp
[102]: xsim/generated/IPluginDashboard.unstable.hpp
[103]: xsim/generated/IPluginMotorEngine.unstable.hpp
[104]: xsim/generated/IPluginTransmission.unstable.hpp
[105]: xsim/generated/IPluginWheelHub.unstable.hpp
[106]: xsim/generated/IPluginCatTrackHub.unstable.hpp
[107]: xsim/generated/IPluginVehicleController.unstable.hpp
[108]: xsim/generated/IPluginSimInfo.unstable.hpp
