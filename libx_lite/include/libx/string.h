/*
 * LibX-Lite - String Operations
 * Freestanding library for OS development
 * MIT License
 */

#ifndef LIBX_STRING_H
#define LIBX_STRING_H

#include <libx/types.h>

/* String length */
size_t strlen(const char *s);
size_t strnlen(const char *s, size_t maxlen);

/* String copy */
char *strcpy(char *dest, const char *src);
char *strncpy(char *dest, const char *src, size_t n);

/* String concatenation */
char *strcat(char *dest, const char *src);
char *strncat(char *dest, const char *src, size_t n);

/* String comparison */
int strcmp(const char *s1, const char *s2);
int strncmp(const char *s1, const char *s2, size_t n);

/* String search */
char *strchr(const char *s, int c);
char *strrchr(const char *s, int c);
char *strstr(const char *haystack, const char *needle);

/* Memory operations */
void *memcpy(void *dest, const void *src, size_t n);
void *memmove(void *dest, const void *src, size_t n);
void *memset(void *s, int c, size_t n);
int memcmp(const void *s1, const void *s2, size_t n);
void *memchr(const void *s, int c, size_t n);

/* Number conversion */
int atoi(const char *s);
char *itoa(int value, char *str, int base);

/* Character classification */
int isalpha(int c);
int isdigit(int c);
int isalnum(int c);
int isspace(int c);
int isupper(int c);
int islower(int c);
int isprint(int c);

/* Character conversion */
int toupper(int c);
int tolower(int c);

#endif /* LIBX_STRING_H */
