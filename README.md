# Software design patterns in C++

This is still **work in progress**.

This project describes and implements software design patterns using Modern C++.

## Table of contents

- [Documentation](#documentation)
- [Project structure](#project-structure)
- [Requirements](#requirements)
- [Compilation](#compilation)
- [Running](#running)
- [Doxygen documentation](#doxygen-documentation)
- [Code formatting](#code-formatting)
- [License](#license)

## Documentation

The following documentation is available in the [`docs`](./docs) directory:

- SOLID principles.
- Unified Modeling Language (UML) basics.
- Listing and description of software design patterns.

## Project structure

This project is structured in the following directories:

- `docs`: project documentation.
- `doxygen`: configuration used to build doxygen documentation.
- `scripts`: useful scripts.
- `src`: source code of the project.

## Requirements

These tools need to be installed on the system:

- [CMake](https://cmake.org/): system to manage the build process.
- C++ compiler: for software compilation (examples: Microsoft Visual C++, GCC and Clang).
- [Doxygen](https://doxygen.nl/) (optional): for generation of documentation from source code.
- [Clang-format](https://clang.llvm.org/docs/ClangFormat.html) (optional): for code formatting.

## Compilation

The following commands can be utilized to configure the project (example for Debug configuration):

```sh
$ cd <project-directory>
$ mkdir build-debug
$ cd build-debug
$ cmake .. -DCMAKE_BUILD_TYPE=Debug
```

To compile the software, use the CMake build command:

```sh
$ cmake --build . -j 4
```

## Running

After compiling the project, an executable file is created for each design pattern, and can be run using the following command, where `DesignPatternExe` corresponds to the executable file of each design pattern (note that some configuration generators (e.g., Visual Studio) may add a configuration folder (e.g., Debug) in the path, represented with `<config>`):

```sh
$ ./bin/<config>/DesignPatternExe
```

## Doxygen documentation

The [doxygen](https://doxygen.nl/) tool is used to generate documentation from source code. The correspondent script generates the doxygen documentation, using the following commands:

```sh
$ cd <project-directory>
$ ./scripts/doxygen-doc-gen.sh
```

The documentation is created and can be accessed in `build-doxygen/html/index.html`. Also, a report file is created in the `build-doxygen` directory.

## Code formatting

The format of the code can be checked with [clang-format](https://clang.llvm.org/docs/ClangFormat.html), using the correspondent script:

```sh
$ cd <project-directory>
$ ./scripts/clang-format-check.sh
```

A report file is created in the `build-clang-format` directory.

## License

Licensed under the [MIT license](./LICENSE).
