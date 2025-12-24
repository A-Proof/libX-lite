# LibX-Lite

A lightweight freestanding C library for OS development on ARM64.

## Overview

LibX-Lite is a minimal, open-source freestanding library designed for bare-metal 
and OS kernel development. It provides essential functionality without requiring 
any standard C library or operating system support.

## Features

- **Zero dependencies** - No libc, no OS required
- **ARM64 optimized** - Designed for AArch64 architecture
- **Minimal footprint** - Only essential functions included
- **MIT Licensed** - Free for any use

## Included Functions

### String Operations
- `strlen`, `strnlen`, `strcpy`, `strncpy`, `strcat`
- `strcmp`, `strncmp`, `strchr`, `strstr`
- `memcpy`, `memset`, `memcmp`, `memmove`

### Character Classification
- `isalpha`, `isdigit`, `isspace`, `isupper`, `islower`
- `toupper`, `tolower`

### Number Conversion
- `atoi`, `itoa`

## Usage

```c
#include <libx/types.h>
#include <libx/string.h>

void kernel_main(void) {
    char buf[64];
    strcpy(buf, "Hello, OS World!");
    int len = strlen(buf);
}
```

## Building

```bash
make CROSS_COMPILE=aarch64-elf-
```

## License

MIT License - See LICENSE file

## Credits

Derived from Aurora OS LibX library.
