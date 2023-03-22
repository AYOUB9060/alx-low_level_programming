#include <stdio.h>

/**
 * main - print the first 50 Fibonacci numbers
 * Return: 0(Success)
 */

int main(void)
{
	int i;
	unsigned long int t1, t2, nextTerm;

	t1 = 0;
	t2 = 1;
	
	for (i = 1; i <= 50; i++)
	{
		printf("%lu", t2);

		if (i != 50)
		{
			printf(", ");
		}
		nextTerm = t1 + t2;
		t1 = t2;
		t2 = nextTerm;
	}
	printf("\n");
	return (0);
}
