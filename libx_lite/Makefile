# LibX-Lite Makefile
# Freestanding library for OS development
# MIT License

CROSS_COMPILE ?= aarch64-elf-
CC = $(CROSS_COMPILE)gcc
AR = $(CROSS_COMPILE)ar

CFLAGS = -march=armv8-a -ffreestanding -nostdlib -fno-builtin
CFLAGS += -Wall -Wextra -O2
CFLAGS += -I./include

SRC = src/string.c src/strcmp.c src/mem.c src/ctype.c src/atoi.c
OBJ = $(SRC:.c=.o)

.PHONY: all clean

all: libx.a

libx.a: $(OBJ)
	$(AR) rcs $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) libx.a
