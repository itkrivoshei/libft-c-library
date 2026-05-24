# Libft C Library

[![Build](https://img.shields.io/github/actions/workflow/status/itkrivoshei/libft-c-library/build.yml?branch=master&style=flat-square)](https://github.com/itkrivoshei/libft-c-library/actions/workflows/build.yml)
[![License: GPL-3.0](https://img.shields.io/badge/License-GPL--3.0-blue.svg?style=flat-square)](LICENSE)
![C](https://img.shields.io/badge/C-Static%20Library-555555?style=flat-square)

A small C static library implementing common standard-library-style functions and linked-list utilities.

## Stack

- C
- Makefile
- GCC-compatible compiler

## Scope

The library includes custom implementations for:

- character checks
- string utilities
- memory utilities
- output helpers
- linked-list operations

The project builds a static archive:

```txt
libft.a
```

## Requirements

- `make`
- `gcc` or another compatible C compiler
- `ar`
- `ranlib`

## Build

```bash
make
```

## Clean

Remove object files:

```bash
make clean
```

Remove object files and the static library:

```bash
make fclean
```

Rebuild from a clean state:

```bash
make re
```

## Verify

Run the same build lifecycle used by CI:

```bash
make fclean
make
test -f libft.a
make clean
! find . -name '*.o' -print -quit | grep -q .
make re
test -f libft.a
```

## Usage

Include the header:

```c
#include "libft.h"
```

Compile a program with the static library:

```bash
gcc main.c libft.a -o program
```

## Project structure

```txt
.
├── .github/workflows/build.yml
├── Makefile
├── libft.h
├── ft_*.c
├── author
├── LICENSE
└── README.md
```

## License

This project is licensed under the [GPL-3.0 License](LICENSE).
