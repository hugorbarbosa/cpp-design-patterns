# Building

This guide provides detailed instructions to build the project, namely how to compile it, run examples, enable optional code quality tools and generate documentation.

## Table of contents

- [Requirements](#requirements)
    - [Using Docker](#using-docker)
- [Basic build](#basic-build)
- [Running the examples](#running-the-examples)
- [Coding style and format](#coding-style-and-format)
- [Code static analysis](#code-static-analysis)
- [Source code documentation](#source-code-documentation)

## Requirements

These tools are required to configure and build the project:

- CMake >= 3.21.
- C++ compiler: this project can be successfully built using the following compilers (it might also succeed using another one):
    - Clang 18.1.3.
    - GCC 13.3.0.
    - Microsoft Visual C++ 2022 / Build Tools 19.43.34808.0.
- Git.

The following are the code quality tools used by the project (only required for developers contributing to the project or working on internal tooling):

- Clang-format: code formatting.
- Clang-tidy: code static analysis.
- Doxygen: generation of documentation.

### Using Docker

There is a Docker image available in this project that contains all the dependencies to build the project, as well as the development tools. This allows to quickly use the project without installing any tool in the local machine.

The instructions to use the docker image can be found [here](./docker/README.md).

## Basic build

For Debug build, using the standard CMake configure and build commands:

```sh
$ cd <project-directory>
$ cmake -S . -B ./build-debug -DCMAKE_BUILD_TYPE=Debug
$ cmake --build ./build-debug -j 4
```

This project supports CMake Presets ([CMakePresets.json](./CMakePresets.json)), which specifies some common configuration options to facilitate the building of the project and the sharing of these settings with the developers/users.

The previous standard CMake commands can be replaced by the equivalent CMake Preset commands to configure and build the project, using the GCC compiler in this case but there are more compiler options available in the CMake presets of this project (build directory is automatically created using presets, being its name specified in the `CMakePresets.json` file):

```sh
$ cd <project-directory>
$ cmake --preset debug-gcc
$ cmake --build --preset debug-gcc
```

For Release build, using the standard CMake commands:

```sh
$ cd <project-directory>
$ cmake -S . -B ./build-release -DCMAKE_BUILD_TYPE=Release
$ cmake --build ./build-release -j 4
```

CMake Preset equivalent:

```sh
$ cd <project-directory>
$ cmake --preset release-gcc
$ cmake --build --preset release-gcc
```

To list all the CMake configuration presets available for this project:

```sh
$ cd <project-directory>
$ cmake --list-presets=configure
$ cmake --list-presets=build
$ cmake --list-presets=test
```

## Running the examples

After compiling the project, an executable file is created for each design pattern, and can be run using the following command, where `<design_pattern>` corresponds to the executable file name of each design pattern (note that some configuration generators (e.g., Visual Studio) may add a configuration folder (e.g., Debug) in the path):

```sh
$ cd <build-directory>
$ ./bin/<config>/<design_pattern>
```

## Coding style and format

This projects follows my [C++ coding style guide](https://github.com/hugorbarbosa/cpp-coding-style-guide), and to ensure consistency, clang-format is used to check the format of the code.

Using the standard CMake commands:

```sh
$ cd <project-directory>
$ mkdir build-clang-format
$ cd build-clang-format
$ cmake .. -DCPPDPAT_ENABLE_CLANG_FORMAT=ON
$ cmake --build . --target clang_format
```

CMake Preset equivalent:

```sh
$ cd <project-directory>
$ cmake --preset clang-format
$ cmake --build --preset clang-format
```

This target uses clang-format to verify the format of the code, and creates a report file in the `build-clang-format` directory (used build directory in this example), named as `clang-format-report.log`.

The build succeeds only if the source files are formatted accordingly to the [configuration](./.clang-format) file. The project source files to be verified are configured through CMake.

## Code static analysis

The project is prepared to execute code static analysis with clang-tidy.

Using the standard CMake commands:

```sh
$ cd <project-directory>
$ mkdir build-clang-tidy
$ cd build-clang-tidy
$ cmake .. -DCMAKE_BUILD_TYPE=Debug -DCPPDPAT_ENABLE_CLANG_TIDY=ON -DCMAKE_C_COMPILER=clang -DCMAKE_CXX_COMPILER=clang++
$ cmake --build . --target clang_tidy
```

CMake Preset equivalent:

```sh
$ cd <project-directory>
$ cmake --preset clang-tidy
$ cmake --build --preset clang-tidy
```

This target runs clang-tidy and generates a report with the results of the code static analysis, named as `clang-tidy-report.log` and placed inside of the build directory (`build-clang-tidy` in this example).

The build succeeds only if no issues are found during the code static analysis, which utilizes the list of checks provided in the respective [configuration](./.clang-tidy) file. The project source files to be analyzed are configured through CMake.

## Source code documentation

Doxygen is used to generate documentation from source code in this project.

Using the standard CMake commands:

```sh
$ cd <project-directory>
$ mkdir build-doxygen
$ cd build-doxygen
$ cmake .. -DCPPDPAT_ENABLE_DOXYGEN=ON
$ cmake --build . --target doxygen
```

CMake Preset equivalent:

```sh
$ cd <project-directory>
$ cmake --preset doxygen
$ cmake --build --preset doxygen
```

This target generates documentation from the source files using doxygen, in the `build-doxygen` directory (used build directory in this example), which can be accessed from `html/index.html`. Furthermore, a report file named as `doxygen-report.log` is also created in this build directory.

This target only succeeds if the source files are correctly documented. The doxygen [configuration](./doxygen/Doxyfile.in) file in this project is prepared to be automatically configured through CMake, namely the source files from which documentation should be generated, as well as other parameters related to the project.
