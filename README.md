<div align="center">

# Libft C Library

Static C library with standard-library-style functions, memory helpers, string utilities, output helpers, and linked-list operations.

[![Build](https://img.shields.io/github/actions/workflow/status/itkrivoshei/libft-c-library/build.yml?branch=main&style=for-the-badge&label=build&logo=githubactions&logoColor=white)](https://github.com/itkrivoshei/libft-c-library/actions/workflows/build.yml)
[![CodeQL](https://img.shields.io/github/actions/workflow/status/itkrivoshei/libft-c-library/codeql.yml?branch=main&style=for-the-badge&label=codeql&logo=github&logoColor=white)](https://github.com/itkrivoshei/libft-c-library/actions/workflows/codeql.yml)
[![C](https://img.shields.io/badge/C-static%20library-555?style=for-the-badge&logo=c&logoColor=white)](libft.h)
[![Make](https://img.shields.io/badge/Make-libft.a-427819?style=for-the-badge&logo=gnu&logoColor=white)](Makefile)
[![License](https://img.shields.io/github/license/itkrivoshei/libft-c-library?style=for-the-badge)](LICENSE)

</div>

## API Surface

| Group | Examples |
| --- | --- |
| Character checks | `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isprint` |
| String utilities | `ft_strlen`, `ft_strdup`, `ft_strjoin`, `ft_strsplit`, `ft_strtrim` |
| Memory utilities | `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memalloc` |
| Output helpers | `ft_putchar`, `ft_putstr`, `ft_putendl`, `ft_putnbr` |
| File-descriptor output | `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd` |
| Linked lists | `ft_lstnew`, `ft_lstadd`, `ft_lstdel`, `ft_lstiter`, `ft_lstmap` |

Header: [`libft.h`](libft.h)

## Build

```bash
git clone https://github.com/itkrivoshei/libft-c-library.git
cd libft-c-library
make
```

The build creates:

```text
libft.a
```

## Use In Another Program

```c
#include "libft.h"
```

```bash
gcc main.c libft.a -o program
```

## Maintenance Commands

| Command | Purpose |
| --- | --- |
| `make clean` | Remove object files |
| `make fclean` | Remove object files and `libft.a` |
| `make re` | Clean and rebuild |

CI runs a full build, cleans object files, and rebuilds the static archive.

## License

[GPL-3.0](LICENSE)
