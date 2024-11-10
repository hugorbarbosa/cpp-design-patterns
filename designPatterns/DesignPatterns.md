# Design Patterns

## Table of contents

- [Introduction](#introduction)
- [Design patterns catalog](#design-patterns-catalog)
    - [Creational patterns](#creational-patterns)
    - [Structural patterns](#structural-patterns)
    - [Behavioral patterns](#behavioral-patterns)
    - [Other patterns](#other-patterns)

## Introduction

The software design patterns gained popularity with the book "Design Patterns: Elements of Reusable Object-Oriented Software" was published in 1994, by the authors Erich Gamma, Richard Helm, Ralph Johnson and John Vlissides. These four authors are often referred to as "the Gang of Four" (GoF).

Although we have been hearing about design patterns for some time and the importance they are recognized for, there is still some lack of knowledge or misconceptions regarding their use. In that regard, it is essential to understand what a design pattern really is and how to use it correctly.

A software design pattern is a general reusable solution to a commonly occurring problem within a given context in software design. It is not a finished design solution that can be transformed into source code directly, but it is a description or template for how to solve a problem that can be used in many different situations. A design pattern can be characterized by the following elements:

- **Name**: a design pattern has a name and this is a fundamental property, because it allows a more precise communication, as it makes it easier and faster to convey the idea of ​​what type of solution is being proposed for a given problem.
- **Intent**: a design pattern has an intent, i.e., a goal and a plan for structuring the code to solve a problem.
- **Abstraction**: a design pattern provides some sort of abstraction (base class, template, etc). It is always concerned with managing the interaction between the different entities in a software, with the aim of reducing dependencies between them, decoupling these pieces of code and enabling design for change and extension.
- **Proven to work**: a design pattern has been proven to work over the years, being a solution that has only emerged as a pattern after it has been demonstrated several times that it works.

In addition, it is also relevant to mention that using a design pattern doesn't mean necessarily a good design, because inappropriate use of patterns may unnecessarily increase the complexity of a given simple problem. Thus, the use of a design pattern should not be considered as a goal and as a guarantee for achieving high-quality software. Instead, a design pattern is a mean to achieve a goal and to improve the code quality, reducing the dependencies and creating a better code structure. That's why it is very important to understand the intent and properties of each design pattern, so that the design patterns can be properly used and applied wisely.

## Design patterns catalog

The book "Design Patterns: Elements of Reusable Object-Oriented Software" conceptualized 23 design patterns, commonly called the "classic" or the "GoF" design patterns, divided into 3 categories:

- Creational patterns.
- Structural patterns.
- Behavioral patterns.

There are additional design patterns that were not collected in the "GoF" book, and they are listed in this guide in the "Other patterns" section.

### Creational patterns

The Creational patterns offer the capability to create objects based on a required criterion and in a controlled way. This category includes the following patterns and intents:

- [Abstract Factory](./AbstractFactory/AbstractFactory.md): provide an interface for creating *families* of related or dependent objects without specifying their concrete classes.
- [Builder](./Builder/Builder.md): separate the construction of a complex object from its representation, allowing the same construction process to create different representations.
- [Factory Method](./FactoryMethod/FactoryMethod.md): define an interface for creating a *single* object, but let subclasses decide which class to instantiate. Factory Method lets a class defer instantiation to subclasses.
- [Prototype](./Prototype/Prototype.md): specify the kind of objects to create using a prototypical instance, and create new objects by copying this prototype.
- [Singleton](./Singleton/Singleton.md): ensure a class has only one instance, and provide a global point of access to it.

### Structural patterns

The Structural patterns demonstrate how different classes and objects can be organized to form larger structures and provide new functionality. This category includes the following patterns and intents:

- [Adapter](./Adapter/Adapter.md): convert the interface of a class into another interface clients expect. An adapter lets classes work together that couldn't otherwise because of incompatible interfaces.
- [Bridge](./Bridge/Bridge.md): decouple an abstraction from its implementation allowing the two to vary independently.
- [Composite](./Composite/Composite.md): compose objects into tree structures to represent part-whole hierarchies. Composite lets clients treat individual objects and compositions of objects uniformly.
- [Decorator](./Decorator/Decorator.md): attach additional responsibilities to an object dynamically keeping the same interface. Decorators provide a flexible alternative to subclassing for extending functionality.
- [Facade](./Facade/Facade.md): provide a unified interface to a set of interfaces in a subsystem. Facade defines a higher-level interface that makes the subsystem easier to use.
- [Flyweight](./Flyweight/Flyweight.md): use sharing to support large numbers of similar objects efficiently.
- [Proxy](./Proxy/Proxy.md): provide a surrogate or placeholder for another object to control access to it.

### Behavioral patterns

The Behavioral patterns are about identifying common communication patterns between objects and realizing these patterns. This category includes the following patterns:

- [Chain of Responsibility](./ChainOfResponsibility/ChainOfResponsibility.md): avoid coupling the sender of a request to its receiver by giving more than one object a chance to handle the request. Chain the receiving objects and pass the request along the chain until an object handles it.
- [Command](./Command/Command.md): encapsule a request as an object, thereby letting you parameterize clients with different requests, queue or log requests, and support undoable operations.
- [Interpreter](./Interpreter/Interpreter.md): given a language, define a representation for its grammar along with an interpreter that uses the representation to interpret sentences in the language.
- [Iterator](./Iterator/Iterator.md): provide a way to access the elements of an aggregate object sequentially without exposing its underlying representation.
- [Mediator](./Mediator/Mediator.md): define an object that encapsulates how a set of objects interact. Mediator promotes loose coupling by keeping objects from referring to each other explicitly, and it lets you vary their interaction independently.
- [Memento](./Memento/Memento.md): without violating encapsulation, capture and externalize an object's internal state so that the object can be restored to this state later.
- [Observer](./Observer/Observer.md): define a one-to-many dependency between objects so that when one object changes state, all its dependents are notified and updated automatically.
- [State](./State/State.md): allow an object to alter its behavior when its internal state changes. The object will appear to change its class.
- [Strategy](./Strategy/Strategy.md): define a family of algorithms, encapsulate each one, and make them interchangeable. Strategy allows the algorithm to vary independently from the clients that use it.
- [Template Method](./TemplateMethod/TemplateMethod.md): define the skeleton of an algorithm in an operation, deferring some steps to subclasses. Template Method lets subclasses redefine certain steps of an algorithm without changing the algorithm's structure.
- [Visitor](./Visitor/Visitor.md): represent an operation to be performed on the elements of an object structure. Visitor lets you define a new operation without changing the classes of the elements on which it operates.

### Other patterns

This section includes design patterns that were not described in the "GoF" book, and includes the following patterns:

- [Curiously Recurring Template Pattern (CRTP)](./CRTP/CRTP.md): define a compile-time abstraction for a family of related types.
- [External Polymorphism](./ExternalPolymorphism/ExternalPolymorphism.md): allow classes unrelated by inheritance and/or having no virtual methods to be treated polymorphically. These unrelated classes can be treated in a common manner by software that uses them.
- [Type Erasure](./TypeErasure/TypeErasure.md): provide a value-based, non-intrusive abstraction for an extendable set of unrelated, potentially non-polymorphic types with the same semantic behavior.
