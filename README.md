# Software design patterns with C++

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
- [Code static analysis](#code-static-analysis)
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
- [Clang-tidy](https://clang.llvm.org/extra/clang-tidy/) (optional): for code static analysis.

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

After compiling the project, an executable file is created for each project with a design pattern, and can be run using the following command (note that the executable may be located in a different directory, depending on the configuration generator):

TODO: Update.
```sh
$ ./src/Debug/<DesignPatternProject>
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

## Code static analysis

For code static analysis, it is used the [clang-tidy](https://clang.llvm.org/extra/clang-tidy/) tool. The correspondent script can be utilized to analyze the code:

```sh
$ cd <project-directory>
$ ./scripts/clang-tidy-check.sh
```

A report file is created in the `build-clang-tidy` directory.

## License

Licensed under the [MIT license](./LICENSE).
