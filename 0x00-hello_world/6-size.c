#include <stdio.h>

/**
 * main - a program that prints the size of types depending on the computer
 * Return: 0(Succeess)
 */

int main(void)
{
	char c;
	int i;
	long int d;
	long long int t;
	float f;

	printf("size of char: %lu byte (s)\n", (unsigned long)sizeof(c));
	printf("size of int: %lu byte (s)\n", (unsigned long)sizeof(i));
	printf("size of long int: %lu byte (s)", (unsigned long)sizeof(d));
	printf("size of long long int: %lu byte (s)", (unsigned long)sizeof(t));
	printf("size of float: %lu byte (s)", (unsigned long)sizeof(f));
	return (0);
}
