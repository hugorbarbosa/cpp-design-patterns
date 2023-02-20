# SOLID principles

## Table of contents

- [Introduction](#introduction)
- [Single-responsibility principle](#single-responsibility-principle)
- [Open-closed principle](#open-closed-principle)
- [Liskov substitution principle](#liskov-substitution-principle)
- [Interface segregation principle](#interface-segregation-principle)
- [Dependency inversion principle](#dependency-inversion-principle)

## Introduction

[SOLID](https://en.wikipedia.org/wiki/SOLID) is a mnemonic acronym for five design principles, to make the software designs more understandable, maintainable and extendable (flexible). They were conceptualized by Robert C. Martin.

The SOLID design principles are:

- **S**ingle-responsibility principle.
- **O**pen-closed principle.
- **L**iskov substitution principle.
- **I**nterface segregation principle.
- **D**ependency inversion principle.

## Single-responsibility principle

The Single-responsibility principle states that:
> *"A class should have only one reason to change."*

This principle defines a responsibility as a reason to change, and concludes that a class or module should have one, and only one, reason to be changed (e.g. rewritten). The importance of keeping a class focused on a single concern is that it makes the class more robust and easier to understand, test and change in the future.

## Open-closed principle

The Open-closed principle states that:
> *"Software entities (classes, modules, functions, etc.) should be open for extension, but closed for modification."*

This principle defines that a software entity should allow its behaviour to be extended (add new functionalities) without modifying its source code. It has become popularly redefined to refer to the use of abstract interfaces, where the implementations can be changed and multiple implementations can be created and polymorphically replaced for each other.

The use of interfaces is recommended to allow different implementations instead of superclasses that introduce tight coupling if the subclasses depend on the implementation details of their base class.

The interface specifications are not modified and can be reused through inheritance, so the existing interface is closed to modifications and new implementations must, at a minimum, implement that interface. The main advantage is that an interface adds a level of abstraction which allows loose coupling.

## Liskov substitution principle

The Liskov substitution principle states that:
> *"Functions that use pointers or references to base classes must be able to use objects of derived classes without knowing it."*

This principle was initially introduced by Barbara Liskov and Jeannette Wing as follows:
> *"Let f(x) be a property provable about objects of x of type T. Then f(y) should be true for objects y of type S where S is a subtype of T."*

This principle defines that derived classes in a program can be substituted for their base classes without altering any of the desirable properties of that program (e.g. correctness).

## Interface segregation principle

The Interface segregation principle states that:
> *"Clients should not be forced to depend upon interfaces that they do not use."*

This principle defines that no code should be forced to depend on methods it does not use, which means that larger interfaces should be split into smaller and more specific ones. With this, clients (derived classes) only need to know the methods that are of interest to them. Additional functionality should not be added to an existing interface by adding new methods; instead, a new interface should be created, and a class can implement multiple interfaces if needed.

The interface segregation intends to keep a system decoupled and thus easier to refactor, change and redeploy.

## Dependency inversion principle

The Dependency inversion principle states that:
> *"Depend upon abstractions, not concretions."*

This principle defines that the high-level module must not depend on the low-level module, but they should depend on abstractions. It is a specific methodology for loosely coupling software modules, and consists of the following:

- High-level modules should not depend on low-level modules. Both should depend on abstractions (e.g., interfaces).
- Abstractions should not depend on details. Details (concrete implementations) should depend on abstractions.
