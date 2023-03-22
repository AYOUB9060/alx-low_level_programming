#include <stdio.h>
/**
 * main - print the first 98 Fibonacci numbers
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	unsigned int a = 1, b = 2, c;

	printf("%u, %u", a, b);

	for (i = 2; a + b < 4000000; i++)
	{
		c = a + b;
		printf(", %u", c);
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
