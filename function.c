#include <stdio.h>
#include <stddef.h>
#include <unistd.h>

/**
*_putchar- puts a single character stdout
* @c:the variable to be printed
*
* Return:return character
**/
char _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * check_string_length - Calculates the length of a string.
 * @string_char: Pointer to the input string.
 *
 * Return: Length of the string (excluding the null terminator).
 */

size_t check_string_length(const char *string_char)
{

	size_t count = 0;

	while (*string_char != '\0')
	{
	count++;
	string_char++;
}

return (count);
}

/**
* transform-a function that changes from decimal to any base
* @num:the number to be converted
* @base:the base to be converted into
*
* Return: a character array
*/
char *transform(unsigned int num, int base)
{
	static char d[15];
	int k;
	int i = 0;
	int p;

	while (num != 0)
	{
	k = num % base;
	if (k > 9)
	{
	d[i] = (char)(k + 55);
	}
	else
	{
	d[i] = (char)(k + 48);
	}
	num = num / base;
	i++;
	}
	d[i] = '\0';

	for (p = i - 1; p >= 0; p--)
	{
	putchar(d[p]);
	}
	printf("\n");

	return (d);
}

/**
 * positive_check-Convert and print the unsigned integer as a string.
 * @num:The unsigned integer to be converted.
 * Return:The number of characters in the resulting string.
 */

int positive_check(unsigned int num)
{
	int j = 0;
	int char_length = 0;
	char *pointer;

	pointer = transform(num, 10);
	while (pointer[j] != '\0')
	{
	_putchar(pointer[j]);
	char_length++;
	j++;
	}

	return (char_length);
}

