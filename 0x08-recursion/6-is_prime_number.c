#include "main.h"

int actual_prime(int n, int i);
/**
 * is_prime_number - checks if the input integer is a prime number
 * @n: number to evaluate
 * Return: 1 if n is a prime number, otherwise 0
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	if (n == 2)
		return (1);
	if (n % 2 == 0)
		return (0);
	return (actual_prime(n, 3));
}
/**
 * actual_prime - calculates if n is prime recursively
 * @n: number to evaluate
 * @i: iterator
 * Return: 1 if n is prime, 0 if not
 */
int actual_prime(int n, int i)
{
	if (n % i == 0)
		return (0);
	if (i * i > n)
		return (1);
	return (actual_prime(n, i + 2));
}
