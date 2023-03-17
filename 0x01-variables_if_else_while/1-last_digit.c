#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - a program that prints the last digit of number given
 * Return: 0(SUCCESS)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int o = n % 10;

	if (o > 5)
		printf("Last digit of %d is %d and is greater than 5", n, o);
	else if (o == 0)
		printf("Last digit of %d is %d and is 0", n, o);
	else if (o < 6 && o != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0", n, o);
	return (0);
}
