# Software design patterns in C++

This is still **work in progress**.

This project describes and implements software design patterns using Modern C++.

## Table of contents

- [Project structure](#project-structure)
- [Requirements](#requirements)
- [Compilation](#compilation)
- [Running](#running)
- [License](#license)
- [References](#references)

## Project structure

This project is structured as follows:

- [SOLID principles](./solid): description of the SOLID design principles.
- [Unified Modeling Language (UML) basics](./uml): brief presentation of the UML language and examples of UML diagrams.
- [Design patterns](./designPatterns): presentation of the classic and other software design patterns, as well as examples implemented in C++.

## Requirements

These tools need to be installed on the system for compilation of this project:

- CMake: system to manage the build process.
- C++ compiler: for software compilation (examples: Microsoft Visual C++ (MSVC), GCC and Clang).

## Compilation

The following commands can be utilized to configure the project (example for the Debug build type):

```sh
$ cd <project-directory>
$ mkdir build
$ cd build
$ cmake .. -DCMAKE_BUILD_TYPE=Debug
```

To compile the software, use the CMake build command:

```sh
$ cmake --build . -j 4
```

## Running

After compiling the project, an executable file is created for each design pattern, and can be run using the following command, where `<DesignPatternExe>` corresponds to the executable file of each design pattern, e.g., `Strategy` (note that some configuration generators (e.g., Visual Studio) may add a configuration folder (e.g., Debug) in the path, represented with `[config]` in the command):

```sh
$ cd build
$ ./bin/[config]/<DesignPatternExe>
```

## License

Licensed under the [MIT license](./LICENSE).

## References

- Klaus Iglberger, *C++ Software Design: Design Principles and Patterns for High-Quality Software*.
- Dmitri Nesteruk, *Design Patterns in Modern C++20: Reusable Approaches for Object-Oriented Software Design*.
- Robert C. Martin, *Clean Architecture: A Craftsman's Guide to Software Structure and Design*.
