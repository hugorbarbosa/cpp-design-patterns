FROM ubuntu:24.04
ARG DEBIAN_FRONTEND=noninteractive

RUN echo "Updating repositories..."
RUN apt-get update -y && apt-get upgrade -y

RUN echo "Installing certificates..."
RUN apt-get install -y --no-install-recommends ca-certificates

RUN echo "Installing packages..."
RUN apt-get install -y --no-install-recommends \
    build-essential \
    clang \
    clang++ \
    clang-format \
    clang-tidy \
    cmake \
    doxygen \
    g++ \
    gcc \
    git \
    lcov \
    make
