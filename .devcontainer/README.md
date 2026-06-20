# Development container

This guide contains instructions for using the development container of this project, as well as for building and running its Docker image.

## Table of contents

- [Using the Development Container](#using-the-development-container)
- [Using the Docker image](#using-the-docker-image)

## Using the Development Container

A development container (or dev container for short) allows the usage of a container as a full-featured development environment. It can be used to run an application or to separate tools, libraries or runtimes needed for working with a codebase.

The [devcontainer.json](devcontainer.json) file contains the required metadata and settings to configure the dev container of this project.

For more details about how to use and develop inside the container, please refer to your IDE/Editor documentation.

## Using the Docker image

The dev container is configured to use this [Dockerfile](Dockerfile), which includes all the dependencies required to build the project, along with the necessary development tools. While the recommended approach is to use the dev container, the same Dockerfile can also be used independently to build and run the project's Docker image using standard Docker commands. This allows developers to work with the project in an isolated and reproducible environment without relying on a specific IDE or dev container integration.

To build the Docker image, use the following commands:

```sh
$ cd <project-directory>
$ cd .devcontainer
$ docker build . -t cpp-design-patterns
```

Then, run the Docker image creating a container and mounting the project:

```sh
$ docker run -it --name my-container -v <path-to-project-directory>:/workspace cpp-design-patterns
```

The project will be available in the `/workspace` directory inside the container.
