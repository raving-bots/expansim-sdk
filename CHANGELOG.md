This document only describes major changes to the SDK.

# b1225+ (2020-10-16)

- ABI v0 support has been removed. Plugins must be ported to the new framework.
- Free functions have been replaced by an interface-based framework. See [INTERFACES.md](INTERFACES.md).
- To make plugin deployment easier, the DLL is now loaded automatically from several paths, and the configuration
  file is loaded from the same directory as the plugin. See [README.md](README.md) for details.
- The installation path is now recorded in registry (separately for Steam and enterprise builds).
