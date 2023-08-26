# Software design patterns in C++

This is still **work in progress**.

This project describes and implements software design patterns using Modern C++.

## Table of contents

- [Documentation](#documentation)
- [Project structure](#project-structure)
- [Requirements](#requirements)
- [Compilation](#compilation)
- [Running](#running)
- [License](#license)

## Documentation

The following documentation is available in the [`docs`](./docs) directory:

- [SOLID principles](./solid/SOLID_principles.md)
- [Unified Modeling Language basics](./uml/UML_basics.md)
- [Design patterns](./design_patterns/Design_Patterns.md)
- SOLID principles.
- Unified Modeling Language (UML) basics.
- Listing and description of software design patterns.

## Project structure

This project is structured in the following directories:

- `docs`: project documentation.
- `src`: source code of the project.

## Requirements

These tools need to be installed on the system:

- CMake: system to manage the build process.
- C++ compiler: for software compilation (examples: Microsoft Visual C++, GCC and Clang).

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

## License

Licensed under the [MIT license](./LICENSE).
