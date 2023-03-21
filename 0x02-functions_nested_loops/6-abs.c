#include "main.h"

/**
 * _abs - a function that computes the absolute value of an integer
 * @d: the integer to be computing
 * Return: the absolute value of the integer
 */

int _abs(int d)
{
	if (d < 0)
		return (-d);
	else
		return (d);
}
