#include "main.h"
#include <stdarg.h>

/**
 * _printf - Custom printf function with limited format specifiers
 * @format: The format string containing the text and format specifiers
 * @...: Additional arguments corresponding to format specifiers
 *
 * Return: The total number of characters printed
 */
int _printf(const char *format, ...)
{
int j = 0; 
int len_ofchar = 0;
va_list args_list;

va_start(args_list, format); 

while (format[j] != '\0')
{
char _char = format[j];

if (_char != '%')
{
_putchar(_char); 
len_ofchar++;
}
else
{
j++;

if (format[j] == '\0')
break;

if (format[j] == 'c')
{
int c = va_arg(args_list, int);
_putchar(c);
len_ofchar++;
}
else if (format[j] == 's')
{
const char *s = va_arg(args_list, const char *);
len_ofchar += _printstr_len(s); 
}
else if (format[j] == 'd' || format[j] == 'i')
{
int num = va_arg(args_list, int);
len_ofchar += negative_int(num); 
}
            
else
{
_putchar('%');
_putchar(format[j]);
len_ofchar += 2;
}
}
j++;
}

va_end(args_list);
return len_ofchar;
}

