#include "main.h"

/**
 * char_check - Prints a character and returns the length of 1.
 * @c: The character to be printed.
 *
 * Return: Always returns 1.
 */
int char_check(int c)
{
int len_of_char = 1;

_putchar(c);
return (len_of_char);
}

/**
 * printstr_len - Prints a string and returns its length.
 * @string: The string to be printed.
 *
 * Return: The length of the string.
 */
int _printstr_len(const char *string)
{
int j = 0;
int char_len = 0;

for (j = 0; string[j] != '\0'; j++)
{
_putchar(string[j]);
char_len++;
}

return (char_len);
}

/**
 * negative_int- convert to the negative
 * @p: The integer to be converted.
 * Return: The number of characters in the resulting string.
 */
int negative_int(int p)
{
int i = 0;
int char_length = 0;
char *num_strings;

if (p < 0)
{
p = -1 * p;
_putchar('-');
char_length += 1;
}

num_strings = transform(p, 10);
for (i = 0; num_strings[i] != '\0'; i++)
{
_putchar(num_strings[i]);
char_length++;
}

return (char_length);
}

