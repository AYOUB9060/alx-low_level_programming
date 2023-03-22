#include <stdio.h>

/**
 * main - finds the sum of even-valued terms in the Fibonacci
 * Return: 0 (Success)
 */

int main(void)
{
	unsigned long int prev = 1, curr = 2, sum = 0;

	while (curr <= 4000000)
	{
		if (curr % 2 == 0)
		{
			sum += curr;
		}
		unsigned long int next = prev + curr;

		prev = curr;
		curr = next;
	}
	printf("%lu\n", sum);
	return (0);
}
