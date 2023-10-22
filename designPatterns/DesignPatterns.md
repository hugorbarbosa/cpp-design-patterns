# Design Patterns

## Table of contents

- [Introduction](#introduction)
- [Creational patterns](#creational-patterns)
- [Structural patterns](#structural-patterns)
- [Behavioral patterns](#behavioral-patterns)
- [Other patterns](#other-patterns)

## Introduction

A software design pattern is a general reusable solution to a commonly occurring problem within a given context in software design. It is not a finished design solution that can be transformed into source code directly, but it is a description or template for how to solve a problem that can be used in many different situations.

Software design patterns are formalized best practices that a programmer can use to solve common problems when designing an application or system. Note that using a design pattern doesn't mean necessarily a good design, because inappropriate use of patterns may unnecessarily increase the complexity of a given simple problem.

The software design patterns gained popularity in computer science after the book "Design Patterns: Elements of Reusable Object-Oriented Software" was published in 1994, by the authors Erich Gamma, Richard Helm, Ralph Johnson and John Vlissides. These four authors are often referred to as the Gang of Four (GoF).

This book conceptualized 23 design patterns, commonly called the "classic" or the "GoF" design patterns, divided into 3 categories:

- Creational patterns.
- Structural patterns.
- Behavioral patterns.

There are additional design patterns that were not collected in the "GoF" book, and they are listed in this guide in the "Other patterns" section.

## Creational patterns

The Creational patterns offer the capability to create objects based on a required criterion and in a controlled way. This category includes the following patterns:

- [Abstract Factory](./AbstractFactory/AbstractFactory.md)
- [Builder](./Builder/Builder.md)
- [Factory Method](./FactoryMethod/FactoryMethod.md)
- [Prototype](./Prototype/Prototype.md)
- [Singleton](./Singleton/Singleton.md)

## Structural patterns

The Structural patterns demonstrate how different classes and objects can be organized to form larger structures and provide new functionality. This category includes the following patterns:

- [Adapter](./Adapter/Adapter.md)
- [Bridge](./Bridge/Bridge.md)
- [Composite](./Composite/Composite.md)
- [Decorator](./Decorator/Decorator.md)
- [Facade](./Facade/Facade.md)
- [Flyweight](./Flyweight/Flyweight.md)
- [Proxy](./Proxy/Proxy.md)

## Behavioral patterns

The Behavioral patterns are about identifying common communication patterns between objects and realizing these patterns. This category includes the following patterns:

- [Chain of Responsibility](./ChainOfResponsibility/ChainOfResponsibility.md)
- [Command](./Command/Command.md)
- [Interpreter](./Interpreter/Interpreter.md)
- [Iterator](./Iterator/Iterator.md)
- [Mediator](./Mediator/Mediator.md)
- [Memento](./Memento/Memento.md)
- [Observer](./Observer/Observer.md)
- [State](./State/State.md)
- [Strategy](./Strategy/Strategy.md)
- [Template Method](./TemplateMethod/TemplateMethod.md)
- [Visitor](./Visitor/Visitor.md)

## Other patterns

This section includes design patterns that were not described in the "GoF" book, and includes the following patterns:

- [Curiously Recurring Template Pattern (CRTP)](./CRTP/CRTP.md)
- [External Polymorphism](./ExternalPolymorphism/ExternalPolymorphism.md)
- [Null Object](./NullObject/NullObject.md)
- [Type Erasure](./TypeErasure/TypeErasure.md)
