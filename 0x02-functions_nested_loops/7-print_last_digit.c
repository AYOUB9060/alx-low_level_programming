#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @i: the parameter that the function will work on
 * Return: the last digit of i
 */

int print_last_digit(int i)
{
	int l;

	l = i % 10;
	if (i < 0)
		l = -l;
	_putchar(l + '0');
	return (l);
}
