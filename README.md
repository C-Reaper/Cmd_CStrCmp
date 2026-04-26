# Project README

## Overview
- This project is a simple C program that demonstrates the usage of a library (`CStrCmp`) for comparing strings and generating differences.

## Features
- String comparison functionality.
- Generation of differences between two sets of strings.
- Writing differences to files.
- Reading differences from files.

## Project Structure
### Prerequisites
- C/C++ Compiler (GCC, Clang)
- Make utility
- Standard development tools

## Build & Run
- **Build Process:**
  ```bash
  cd <Project>
  make -f Makefile.(os) all
  ```
  Replace `(os)` with `linux`, `windows`, `wine`, or `web` depending on the target platform.
  
  - For a clean rebuild:
    ```bash
    make -f Makefile.(os) clean
    make -f Makefile.(os) all
    ```

- **Execution:**
  - To execute the built program:
    ```bash
    make -f Makefile.(os) exe
    ```
  
  - For debugging (if applicable):
    ```bash
    make -f Makefile.(os) debug
    ```
    
  - For WebAssembly, run with `wasmtime`:
    ```bash
    wasmtime build/Main.wasm
    ```

- **Clean Build:**
  ```bash
  make -f Makefile.(os) clean
  ```

This README provides a clear overview of the project's structure and how to build and execute it on different platforms.