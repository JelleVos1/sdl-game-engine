[![Wase Engine logo banner](http://wase-engine.com/img/banner.png)](https://wase-engine.com/)

[![Website badge](https://img.shields.io/website?up_message=online&url=https%3A%2F%2Fwase-engine.com%2F)](https://wase-engine.com/)
[![Discord badge](https://img.shields.io/discord/864845724444393472?label=discord)](https://discord.gg/2RBMMxMJ7R)
[![Mit License badge](https://img.shields.io/github/license/wase-engine/wase-engine)](https://github.com/Wase-Engine/wase-engine/blob/master/LICENSE)
[![Issues badge](https://img.shields.io/github/issues/Wase-Engine/wase-engine)](https://github.com/Wase-Engine/wase-engine/issues)
![Lines badge](https://img.shields.io/tokei/lines/github/Wase-Engine/wase-engine)
![Stars badge](https://img.shields.io/github/stars/Wase-Engine/wase-engine?style=social)

Wase Engine is an open source 2d game library made with C++17. Wase Engine can be used to create all kinds of 2d games. The main goal for Wase Engine is to give you the tools you need for creating games while keeping as much control as possible.


## Setting up Wase Engine

You can choose to build Wase Engine yourself from the source code or you can download the pre-build libraries on our [website](https://wase-engine.com/).

### Requirements:
- OpenGL
- GLFW
- spdlog

**CMake**
```
mkdir build
cd build
cmake .. -DCMAKE_BUILD_TYPE=Debug
cmake build .
```

To include tests add `-D enable_test=1` to the `cmake ..` command. To change the build type to Release change `CMAKE_BUILD_TYPE=Debug` to `Release`

## Included dependencies
- OpenGL loader: [GLEW](http://glew.sourceforge.net/)
- Window and input system: [GLFW](https://www.glfw.org/)
- Logging: [spdlog](https://github.com/gabime/spdlog)

## Compatible platforms
- Windows
- Linux
- MacOS

## Documentation
You can head over to the [documentation](https://wase-engine.com/documentation) for more information about Wase Engine. In the [documentation](https://wase-engine.com/documentation) there is a detailed description about how Wase Engine works.

## Contributing
If you want to contribute to Wase Engine you can head over to the [contributing](https://github.com/Wase-Engine/wase-engine/blob/master/CONTRIBUTING.md) page for more information.
