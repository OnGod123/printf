#include <stdio.h>
#include "main.h"
char *transform(unsigned int num, int base);

/**
 * check_hexadecimal_low- it check whether it is hexadecimal
 * @num:the number to be converted
 *
 * Return: length
 */

int check_hexadecimal_low(unsigned int num)
{
	int j = 0;
	int hex_len = 0;
	char *pointer;

	pointer = transform(num, 16);

	for (j = 0; pointer[j] != '\0'; j++)
	{
	_putchar(pointer[j]);
	hex_len++;
	}

	return (hex_len);
}

/**
 * hexadecimal_upper - convert to hexadecimal and check len
 * num: the number to be convered
 *
 * Return: return len
 */

int hexadecimal_upper(unsigned int num)
{
	int j = 0;
	int hexa_len = 0;
	char *pointer;

	pointer = transform(num, 16);

	while (pointer[j] != '\0')
	{
	_putchar(pointer[j]);
	hexa_len++;
	j++;
	}

	return (hexa_len);
}

/**
 * octal_check - Convert and print the unsigned integer in octal format.
 * @num: The unsigned integer to be converted.
 * Return: The number of octal digits printed.
 */

int octal_check(unsigned int num)
{
	int j = 0;
	int octal_len = 0;
	char *pointer;

	pointer = transform(num, 8);
	while (pointer[j] != '\0')
	{
	_putchar(pointer[j]);
	octal_len++;
}

	return (octal_len);
}

/**
 * mem_address - Convert and print the integer as memory address.
 * @num: The integer to be converted.
 * Return: The number of characters in the memory address representation.
 */

int mem_address(int num)
{
	int j = 0;
	int char_length = 0;
	char *pointer;

	pointer = transform(num, 10);
	while (pointer[j] != '\0')
	{
	_putchar(pointer[j]);
	char_length++;
	}

	return (char_length);
}

