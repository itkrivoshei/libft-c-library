# Libft C Library

Archived 42 School / School 21 project implementing a custom C library with common standard-library functions and linked-list utilities.

## Overview

Libft is an early C programming project focused on rebuilding commonly used C standard-library functions from scratch.

The project demonstrates low-level programming fundamentals, manual memory management, string handling, linked-list operations, and Makefile-based compilation.

## Features

- Custom implementations of common C library functions
- String manipulation utilities
- Memory manipulation utilities
- Character-checking functions
- Output helper functions
- Linked-list utilities
- Static library build with Makefile

## Function Categories

- Character checks: `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`
- String functions: `ft_strlen`, `ft_strcpy`, `ft_strdup`, `ft_strcmp`, `ft_strjoin`, `ft_strsplit`
- Memory functions: `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memalloc`
- Output functions: `ft_putchar`, `ft_putstr`, `ft_putendl`, `ft_putnbr`
- Linked-list functions: `ft_lstnew`, `ft_lstadd`, `ft_lstdel`, `ft_lstiter`, `ft_lstmap`

## Project Structure

    .
    ├── Makefile
    ├── libft.h
    ├── ft_*.c
    ├── author
    ├── LICENSE
    └── README.md

## Build

To compile the static library:

    make

This generates:

    libft.a

To remove object files:

    make clean

To remove object files and the compiled library:

    make fclean

To rebuild the project:

    make re

## Usage

Include the main header file in your C source files:

    #include "libft.h"

Compile your program with the generated static library:

    gcc main.c libft.a -o program

## Skills Demonstrated

- C programming
- Manual memory management
- String and memory manipulation
- Linked-list implementation
- Static library creation
- Makefile usage
- Low-level programming fundamentals

## Status

This repository is archived and kept public as part of my early engineering background from 42 School / School 21.

It is not actively maintained.

## License

This project is licensed under the GPL-3.0 License. See the LICENSE file for details.
