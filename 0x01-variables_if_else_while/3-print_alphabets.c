#include <stdio.h>
/**
 * main - a program that prints both lowercase and uppercase alphabet
 * Return: 0(Success)
 */
int main(void)
{
	char i;
	char j;

	i = 'a';
	j = 'A';
	while
		(i <= 'a')
		{
			putchar(i);
			i++
		}
	putchar('\n');
	while
		(j <= 'Z')
		{
			putchar(j);
			j++;
		}
	putchar('\n');
	return (0);
}
