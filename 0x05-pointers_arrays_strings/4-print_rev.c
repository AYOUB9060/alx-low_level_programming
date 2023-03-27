#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: string to be reversed
 * Return: void
 */

void print_rev(char *s)
{
	int leng = 0;
	int out;

	while (*s != '\0')
	{
		leng++;
		s++;
	}
	s--;
	for (out = leng; out > 0; out--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
