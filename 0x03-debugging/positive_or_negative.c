#include "main.h"

/**
 * positive_or_negative - a program that prints whether the variable n is positive or negetive
 * @i: number to be checked
 * Return: 0(Success)
 */

positive_or_negative(i)
{
	if (i > 0)
		printf("%d is positive", i);
	else if (i < 0)
		printf("%d is negative", i);
	else
		printf("%d is zero", i);
	printf("\n");
	retuen (0);
}
