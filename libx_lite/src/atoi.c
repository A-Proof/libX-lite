/*
 * LibX-Lite - Number Conversion
 * MIT License
 */

#include <libx/string.h>

int atoi(const char *s) {
    int result = 0;
    int sign = 1;
    
    while (isspace(*s)) s++;
    
    if (*s == '-') {
        sign = -1;
        s++;
    } else if (*s == '+') {
        s++;
    }
    
    while (isdigit(*s)) {
        result = result * 10 + (*s - '0');
        s++;
    }
    
    return sign * result;
}

char *itoa(int value, char *str, int base) {
    char *p = str;
    char *p1, *p2;
    unsigned int uvalue;
    int negative = 0;
    
    if (base < 2 || base > 36) {
        *str = '\0';
        return str;
    }
    
    if (value < 0 && base == 10) {
        negative = 1;
        uvalue = (unsigned int)(-value);
    } else {
        uvalue = (unsigned int)value;
    }
    
    do {
        int digit = uvalue % base;
        *p++ = (digit < 10) ? '0' + digit : 'a' + digit - 10;
        uvalue /= base;
    } while (uvalue);
    
    if (negative) *p++ = '-';
    
    *p = '\0';
    
    /* Reverse string */
    p1 = str;
    p2 = p - 1;
    while (p1 < p2) {
        char tmp = *p1;
        *p1++ = *p2;
        *p2-- = tmp;
    }
    
    return str;
}
