<p align="center">
    <img src="https://user-images.githubusercontent.com/102881479/215298013-ff93daf3-6f0c-4226-9474-65b280e579fe.png">
</p>

<p align="center">
    <img src="https://img.shields.io/badge/OS-Linux-blue" alt="OS">
    <img src="https://img.shields.io/badge/Language-C%20%7C%20C%2B%2B-blue.svg" alt="Language">
    <img src="https://img.shields.io/badge/Grade-110%2F100-brightgreen.svg" alt="Grade">
    <img src="https://img.shields.io/badge/Status-Completed-brightgreen.svg" alt="Status">
</p>


## Introduction

This project is pretty straightforward. It asks students to recode `printf()` in order to make them learn about how a **variadic function** works. It also aims to make students think about how they are going to implement the project. After all, the key to a successful `ft_printf` is a well-structured and extensible code.

Inside the folder [`ft-printf-studies`](https://github.com/ygor-sena/42cursus-ft-printf/blob/main/ft-printf-studies/ft_printf_studies.c) there is a file that test all the possible combinations of `printf` flags.

## Implemented features

#### Mandatory

- ✅ The function has to implement the following conversions: `cspdiuxX%`

| Conversion | Description |
|:----|:-----|
| `c`  | Prints a single character. |
| `s`  | Prints a string (as defined by the common C convention). |
| `p`  | The `void *` pointer argument has to be printed in hexadecimal format. |
| `d`  | Prints a decimal (base 10) number. |
| `i`  | Prints an integer in base 10. |
| `u`  | Prints an unsigned decimal (base 10) number. |
| `x`  | Prints a number in hexadecimal (base 16) lowercase format. |
| `X`  | Prints a number in hexadecimal (base 16) uppercase format. |
| `%`  | Prints a percent sign. |

#### Bonus 1

- ❌ Manage any combination of the following flags: `-0.` and the field minimum width under all conversions.

| Flag | Description |
|:----|:-----|
| `-`  | Left aligns the argument passed. |
| `0`  | Add '0' as a padding character in numeric conversions (single space is default). |
| `.`  | Precision definition, followed by a number. |

#### Bonus 2

- ✅ Manage all the following flags: `# +` (Yes, one of them is a space).

| Flag | Description |
|:----|:-----|
| `' '`  | Adds a single space (`' '`) in the front of positive numeric conversions. |
| `#`  | Adds the corresponding prefix in front of `x` and `X` conversions. |
| `+`  | Adds a plus sign (`+`) in the front of positive numeric conversions. |


## How to use the project

Run `make` or `make bonus` if you compile the mandatory project or the bonus project respectively.

After that, to use the `ft_printf()` in your project it's necessary to include the library `libftprintf.a` and the header as follows:

```c
#include "ft_printf.h" 
```

If you want to include the bonus version, use:

```c
#include "ft_printf_bonus.h" 
```

Don't forget to add the following flags when compiling your project:

```bash
gcc ... -lftprintf -L path/to/libftprintf.a -I path/to/libftprintf.h
```

## References

- [Criando Funções Com Número Variável De Argumentos Em C](https://daemoniolabs.wordpress.com/tag/como-utilizar-va_start-va_arg-va_end-e-va_list/) by [Daemonio Labs](https://daemoniolabs.wordpress.com/).

- [Formatted output](https://www.gnu.org/software/libc/manual/html_node/Formatted-Output.html) in _12. Input/Output on Streams_ by [The GNU C Library Reference Manual](https://www.gnu.org/software/libc/manual/2.36/html_mono/libc.html).
- COLTON, Don. [Secrets of “printf”](https://www.studocu.com/en-us/document/florida-institute-of-technology/ae-comp-techniques/secrets-of-printf/3918181). Brigham Young University Hawaii, 2014.
- [C++ Documentation of printf()](https://cplusplus.com/reference/cstdio/printf/) by [cplusplus.com](https://cplusplus.com/reference/).
- [ft_printf_tester](https://github.com/paulo-santana/ft_printf_tester.git) by [Paulo Santana](https://github.com/paulo-santana).
