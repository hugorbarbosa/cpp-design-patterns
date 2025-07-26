# Software Design: SOLID Principles and Design Patterns in C++

This project includes my study related to the topic of Software Design, particularly the importance of software design for the quality of a project, the SOLID design principles and software design patterns.

Design pattern implementation examples are also available in this project using Modern C++.

## Table of contents

- [Motivation](#motivation)
- [Project structure](#project-structure)
- [Building](#building)
- [License](#license)
- [References](#references)

## Motivation

"**Soft**ware", as the name implies, must be ***soft***, which means that it must be easy to change and extend, and that is the expectation for any software project. That's why it is called *software* in comparison to *hardware*, which is difficult to change. Indeed, one constant in software development is **change**, therefore it is expected that software is easily adapted to the ever-changing requirements. However, in reality, this expectation is often difficult to achieve.

High-quality software is software that is easy to **change**, easy to **extend**, and easy to **test**. But, developing high-quality software is hard, very hard. The design of the software should be able to solve the current problem but also general enough to address future problems and requirements. It is also important to avoid redesign, or at least minimize it, but a reusable and flexible design is difficult to get it right the first time.

***What is the core problem of adaptable software and software development in general?***

The answer is: **Dependencies**.

> "Dependency is the key problem in software development at all scales." (Kent Beck, *Test-Driven Development: By Example*)

This formulation is so true. Indeed, the problem is always about dealing with the connections and relationships between classes and modules. In software, different pieces of code need to work together, and this interaction can create some form of coupling. These artificial dependencies make software harder to change, read, test, and maintain. Thus, the software must be developed in a way that keeps these artificial dependencies at a minimum.

***How to break these dependencies?***

The answer is: **Software design**.

> "The goal of software architecture is to minimize the human resources required to build and maintain the required system." (Robert C. Martin, *Clean Architecture*)

Architecture and design are the tools to minimize the dependencies and reduce the complexity via abstractions.

> "Software design is the art of managing interdependencies between software components. It aims at minimizing artificial (technical) dependencies and introduces the necessary abstractions and compromises." (Klaus Iglberger, *C++ Software Design*)

Software design is an art, the art of managing **dependencies** and **abstractions**, trying to minimize dependencies via abstractions and making the software more flexible, easier to change, extend and test.

While the C++ language features and new standards are important, since they provide functionalities that can help us developing better and more readable code, they are not crucial for the success of a software project. Of course, the implementation details matter, but the design and the structure of the code matter even more. It is the structure that is ultimately responsible for the maintenance and scalability of the software project: easier to change, extend, reuse and test the code.

> "The design plays a much more central role in the success of a project than any feature could ever do. Good software is not primarily about the proper use of any feature; rather it is about solid architecture and design. Good software design can tolerate some bad implementation decisions, but bad software design cannot be saved by the heroic use of features (old or new) alone." (Klaus Iglberger, *C++ Software Design*)

Software design is essential and can be considered the foundation of the success of a software project, so it matters from the very beginning of the project, and it is a continuous effort. Therefore, every software developer should pay attention to the structure of the code, to keep the code easy to **change**, easy to **extend**, and easy to **test**.

***How can we keep the software easy to change, extend and test?***

The answer is: **SOLID principles** and **Design patterns**.

This project addresses both of these topics.

## Project structure

This project is structured as follows:

- [SOLID principles](./solid/solid_principles.md): description of the SOLID design principles.
- [Design patterns](./design_patterns/design_patterns.md): presentation of software design patterns, as well as examples implemented in C++.

**Note:** This project uses UML diagrams. For more details about UML, please consult this [guide](https://github.com/hugorbarbosa/tutorials/blob/main/uml_basics/uml_basics.md).

## Building

This project uses CMake as its build system, with support for CMake Presets to simplify configuration and building.

For detailed build instructions, including how to build the project, run examples, enable optional code quality tools (code format, static analysis, etc) and generate documentation, please see the [Building guide](BUILDING.md).

## License

Licensed under the [MIT license](./LICENSE).

## References

- Literature:
    - Klaus Iglberger, *C++ Software Design: Design Principles and Patterns for High-Quality Software*, O'Reilly Media, 1st ed., 2022.
    - Erich Gamma, Richard Helm, Ralph Johnson and John Vlissides, *Design Patterns: Elements of Reusable Object-Oriented Software*, Addison-Wesley Professional, 1st ed., 1994.
    - Dmitri Nesteruk, *Design Patterns in Modern C++20: Reusable Approaches for Object-Oriented Software Design*, Apress, 2nd ed., 2021.
    - Robert C. Martin, *Clean Architecture: A Craftsman's Guide to Software Structure and Design*, Pearson, 1st ed., 2017.
- Conferences:
    - Klaus Iglberger, *[Breaking Dependencies: The Path to High-Quality Software](https://www.youtube.com/watch?v=B4s381OrjWo)*, Meeting C++ 2022.
    - Klaus Iglberger, *[Breaking Dependencies: The SOLID Principles](https://www.youtube.com/watch?v=Ntraj80qN2k)*, CppCon 2020.
    - Klaus Iglberger, *[Back to Basics: Designing Classes (part 1 of 2)](https://www.youtube.com/watch?v=motLOioLJfg)*, CppCon 2021.
    - Klaus Iglberger, *[Back to Basics: Designing Classes (part 2 of 2)](https://www.youtube.com/watch?v=O65lEiYkkbc)*, CppCon 2021.
- Websites:
    - Wikipedia, ["Software"](https://en.wikipedia.org/wiki/Software), Retrieved 2024/10/06.
    - Wikipedia, ["Software design pattern"](https://en.wikipedia.org/wiki/Software_design_pattern), Retrieved 2024/10/06.
    - Wikipedia, ["SOLID"](https://en.wikipedia.org/wiki/SOLID), Retrieved 2024/10/06.
    - Wikipedia, ["Unified Modeling Language"](https://en.wikipedia.org/wiki/Unified_Modeling_Language), Retrieved 2024/10/06.
