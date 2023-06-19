#include "main.h"

/**
 * _islower -  a function that checks for lowercase character
 * @c:  argument to be checked
 * Return: 1(if the character is lowercase)
 * and 0 othewise
 */

int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
