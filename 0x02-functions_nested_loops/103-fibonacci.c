#include <stdio.h>

/**
 * main - finds the sum of even-valued terms in the Fibonacci
 * Return: 0 (Success)
 */

int main(void)
{
	unsigned long t1 = 0, t2 = 1, sum;
	float totalSum;

	while(1)
	{
		sum = t1 + t2;

		if ( sum > 4000000)
			break;

		if ((sum % 2) == 0)
		       totalSum += sum;
		t1 = t2;
		t2 = sum;	
	}
	printf("%.0f\n", totalSum);

	return (0);
}
