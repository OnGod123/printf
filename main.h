#ifndef _MAIN_H
#define _MAIN_H_
#include <stddef.h>
#include <unistd.h>

int _printf(const char* format, ...);
int check_string_length(const char* string_char);
char* transform(unsigned int num, int base);
char _putchar(char c);
int positive_check(unsigned int num);
int check_hexadecimal_low(unsigned int num);
int hexadecimal_upper(unsigned int num);
int octal_check(unsigned int num);
int mem_address(int num);
int negative_int(int p);
int _printstr_len(const char *);
char* transform(unsigned int, int);
#endif
