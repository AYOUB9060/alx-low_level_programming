#include <stdio.h>

/**
 * main - print the first 50 Fibonacci numbers
 * Return: 0(Success)
 */

int main(void)
{
	int i;
	unsigned long int t1, t2, nextTerm;

	t1 = 1;
	t2 = 2;

	printf("%lu, %lu", t1, t2);

	for (i = 3; i <= 50; i++)
	{
		nextTerm = t1 + t2;
		t1 = t2;
		t2 = nextTerm;
		printf(", %lu", nextTerm);
	}
	printf("\n");
	return (0);
}
