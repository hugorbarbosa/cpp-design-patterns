# Building

This guide provides detailed instructions to build the project, namely how to compile it, run examples, enable optional code quality tools and generate documentation.

## Table of contents

- [Requirements](#requirements)
    - [Using Docker](#using-docker)
- [Basic build](#basic-build)
- [Running the examples](#running-the-examples)
- [Coding style and format](#coding-style-and-format)
- [Code static analysis](#code-static-analysis)
- [Sanitizers](#sanitizers)
    - [Address sanitizer](#address-sanitizer)
    - [Leak sanitizer](#leak-sanitizer)
    - [Memory sanitizer](#memory-sanitizer)
    - [Thread sanitizer](#thread-sanitizer)
    - [Undefined behavior sanitizer](#undefined-behavior-sanitizer)
- [Source code documentation](#source-code-documentation)
- [CMake coding style and format](#cmake-coding-style-and-format)

## Requirements

This project uses `git submodules`, so it is necessary to update them using the following command:

```sh
git submodule update --init --recursive
```

These tools are required to configure and build the project:

- CMake >= 3.28.
- C++ compiler: this project can be successfully built using the following compilers (it might also succeed using another):
    - Clang 18.1.3.
    - GCC 13.3.0.
    - Microsoft Visual C++ 2022 / Build Tools 19.43.34808.0.
- Git.

The following are the code quality tools used by the project (only required for developers contributing to the project or working on internal tooling):

- Clang-format: code formatting.
- Clang-tidy: code static analysis.
- Doxygen: generation of documentation.
- cmake-format: CMake code formatting.
- cmake-lint: CMake code linting.

### Using Docker

There is a Docker image available in this project that contains all the dependencies to build the project, as well as the development tools. This allows to quickly use the project without installing any tool in the local machine.

The instructions to use the docker image can be found [here](./docker/README.md).

## Basic build

For Debug build, using the standard CMake configure and build commands:

```sh
$ cd <project-directory>
$ cmake -S . -B ./build-debug -DCMAKE_BUILD_TYPE=Debug
$ cmake --build ./build-debug -j 8
```

This project supports CMake Presets ([CMakePresets.json](./CMakePresets.json)), which specifies some common configuration options to facilitate the building of the project and the sharing of these settings with the developers/users.

The previous standard CMake commands can be replaced by the equivalent CMake Preset commands to configure and build the project, using the GCC compiler in this case but there are more compiler options available in the CMake presets of this project (build directory is automatically created using presets, being its name specified in the `CMakePresets.json` file):

```sh
$ cd <project-directory>
$ cmake --preset debug-gcc
$ cmake --build --preset debug-gcc
```

For Release build, using the respective CMake Preset:

```sh
$ cd <project-directory>
$ cmake --preset release-gcc
$ cmake --build --preset release-gcc
```

To list all the CMake configuration presets available for this project:

```sh
$ cmake --list-presets=configure
$ cmake --list-presets=build
$ cmake --list-presets=test
```

## Running the examples

After compiling the project, an executable file is created for each design pattern, and can be run using the following command, where `<design_pattern>` corresponds to the executable file name of the respective design pattern (note that some configuration generators (e.g., Visual Studio) may add a configuration folder (e.g., Debug) to the path):

```sh
$ cd <build-directory>
$ ./bin/<config>/<design_pattern>
```

## Coding style and format

This projects follows my [C++ coding style guide](https://github.com/hugorbarbosa/cpp-coding-style-guide), and to ensure consistency, clang-format is used to format the code.

Using the respective CMake Preset:

```sh
$ cmake --preset clang-format
$ # To just check the files without modifying them.
$ cmake --build --preset clang-format-check
$ # To format the files.
$ cmake --build --preset clang-format-apply
```

These targets use clang-format to verify/apply the desired format of the code, and creates a report file in the respective build directory, named as `clang_format_report.log`.

The build succeeds only if the source files are formatted accordingly to the [configuration](.clang-format) file. The project source files to be verified are configured through CMake.

## Code static analysis

The project is prepared to execute code static analysis with clang-tidy. Using the respective CMake Preset:

```sh
$ cmake --preset clang-tidy
$ cmake --build --preset clang-tidy
```

This target runs clang-tidy and generates a report with the results of the code static analysis in the respective build directory, named as `clang_tidy_report.log`.

The build succeeds only if no issues are found during the code static analysis, which utilizes the list of checks provided in the respective [configuration](.clang-tidy) file. The project source files to be analyzed are configured through CMake.

## Sanitizers

Sanitizers are tools integrated into modern compilers that are able to catch many types of issues, such as memory errors, undefined behavior or thread race conditions.

This project is prepared to easily enable the sanitizers described below. If a sanitizer detects an issue, a diagnostic report is logged containing detailed information.

### Address sanitizer

Using the respective CMake Preset:

```sh
$ cmake --preset sanitizer-address
$ cmake --build --preset sanitizer-address
$ ctest --preset sanitizer-address
```

### Leak sanitizer

Using the respective CMake Preset:

```sh
$ cmake --preset sanitizer-leak
$ cmake --build --preset sanitizer-leak
$ ctest --preset sanitizer-leak
```

### Memory sanitizer

Using the respective CMake Preset:

```sh
$ cmake --preset sanitizer-memory
$ cmake --build --preset sanitizer-memory
$ ctest --preset sanitizer-memory
```

### Thread sanitizer

Using the respective CMake Preset:

```sh
$ cmake --preset sanitizer-thread
$ cmake --build --preset sanitizer-thread
$ ctest --preset sanitizer-thread
```

### Undefined behavior sanitizer

Using the respective CMake Preset:

```sh
$ cmake --preset sanitizer-undefined
$ cmake --build --preset sanitizer-undefined
$ ctest --preset sanitizer-undefined
```

## Source code documentation

Doxygen is used to generate documentation from source code in this project. Using the respective CMake Preset:

```sh
$ cmake --preset doxygen
$ cmake --build --preset doxygen
```

This target generates documentation from the source files using doxygen, in the respective build directory, which can be accessed from `doxygen/html/index.html`. Furthermore, a report file named as `doxygen_report.log` is also created in the build directory.

This target only succeeds if the source files are correctly documented. The doxygen [configuration](./doxygen/Doxyfile.in) file in this project is prepared to be automatically configured through CMake, namely the source files from which documentation should be generated, as well as other parameters related to the project.

## CMake coding style and format

This projects follows my [CMake coding style guide](https://github.com/hugorbarbosa/cmake-style-guide), and to ensure consistency, cmake-format and cmake-lint are used to format and check the CMake code.

Using the respective CMake Preset for cmake-format:

```sh
$ cmake --preset cmake-format
$ # To just check the files without modifying them.
$ cmake --build --preset cmake-format-check
$ # To format the files.
$ cmake --build --preset cmake-format-apply
```

These targets use cmake-format to verify/apply the desired format of the CMake code, and create a report file in the respective build directory, named as `cmake_format_report.log`.

Regarding cmake-lint, using the respective CMake Preset:

```sh
$ cmake --preset cmake-lint
$ cmake --build --preset cmake-lint
```

The target uses cmake-lint to verify the desired lint options of the CMake code, and creates a report file in the respective build directory, named as `cmake_lint_report.log`.

The builds for the cmake-format and cmake-lint targets succeed only if the CMake files are formatted accordingly to the [configuration](.cmake-format.py) file. The CMake files to be verified are configured through CMake.
