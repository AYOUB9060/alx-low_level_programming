#include <stdio.h>
/**
 * main - a program that prints all digit numbers of base 10
 * Return: 0(Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar("%d", i);
	putchar("\n");
	return (0);
}
