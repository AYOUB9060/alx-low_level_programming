#include "main.h"

/**
 * print_alphabet - printing the alphabets in lowercase followed by a new line
 * Return: no return value
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
