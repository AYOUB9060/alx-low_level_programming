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
		(i <= 'z')
		{
			putchar(i);
			i++;
		}
	while
		(j <= 'Z')
		{
			putchar(j);
			j++;
		}
	putchar('\n');
	return (0);
}
