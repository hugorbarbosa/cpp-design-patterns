# SOLID principles

## Table of contents

- [Introduction](#introduction)
- [SRP: The Single Responsibility Principle](#srp-the-single-responsibility-principle)
- [OCP: The Open-Closed Principle](#ocp-the-open-closed-principle)
- [LSP: The Liskov Substitution Principle](#lsp-the-liskov-substitution-principle)
- [ISP: The Interface Segregation Principle](#isp-the-interface-segregation-principle)
- [DIP: The Dependency Inversion Principle](#dip-the-dependency-inversion-principle)

## Introduction

[SOLID](https://en.wikipedia.org/wiki/SOLID) is an acronym of five design principles, to make the software more understandable, maintainable and extendable (flexible). They were conceptualized by Robert C. Martin.

The SOLID design principles are:

- SRP: The Single Responsibility Principle.
- OCP: The Open-Closed Principle.
- LSP: The Liskov Substitution Principle.
- ISP: The Interface Segregation Principle.
- DIP: The Dependency Inversion Principle.

## SRP: The Single Responsibility Principle

The SRP states that:

> *"A class should have only one reason to change."*

This principle defines a responsibility as a reason to change, and concludes that a class or module should have only one responsibility, and therefore only one reason to be changed. Keeping a class focused on a single concern makes the class more robust and easier to understand, test and change in the future.

## OCP: The Open-Closed Principle

The OCP states that:

> *"Software entities (classes, modules, functions, etc.) should be open for extension but closed for modification."*

This principle defines that we should be able to extend a software entity (open for extension), but the extension should be possible by just adding new code, without modifying the existing code (closed for modification).

It has become popularly redefined to refer to the use of abstract interfaces, where the implementations can be changed and multiple implementations can be created and polymorphically replaced for each other. The use of interfaces is recommended to allow different implementations instead of superclasses that introduce tight coupling if the subclasses depend on the implementation details of their base class.

The interface specifications are not modified and can be reused through inheritance, so the existing interface is closed to modifications and new implementations must, at a minimum, implement that interface. The main advantage is that an interface adds a level of abstraction which allows loose coupling.

## LSP: The Liskov Substitution Principle

The LSP states that:

> *"Functions that use pointers or references to base classes must be able to use objects of derived classes without knowing it."*

This principle was initially introduced by Barbara Liskov and Jeannette Wing as follows:

> *"Let f(x) be a property provable about objects of x of type T. Then f(y) should be true for objects y of type S where S is a subtype of T."*

This principle defines that derived classes in a program can be substituted for their base classes without altering any of the desirable properties of that program (e.g. correctness).

## ISP: The Interface Segregation Principle

The ISP states that:

> *"Clients should not be forced to depend upon interfaces that they do not use."*

This principle defines that no code should be forced to depend on methods it does not use, which means that larger interfaces should be split into smaller and more specific ones. With this, clients (derived classes) only need to know the methods that are of interest to them. Additional functionality should not be added to an existing interface by adding new methods; instead, a new interface should be created, and a class can implement multiple interfaces if needed.

The interface segregation intends to keep a system decoupled and thus easier to refactor, change and redeploy.

## DIP: The Dependency Inversion Principle

The DIP states that:

> *"Depend upon abstractions, not concretions."*

This principle defines that the high-level modules must not depend on the low-level modules, but they should depend on abstractions. It is a specific methodology for loosely coupling software modules, and consists of the following:

- High-level modules should not depend on low-level modules. Both should depend on abstractions (e.g., interfaces).
- Abstractions should not depend on details. Details (concrete implementations) should depend on abstractions.
