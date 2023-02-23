#include <stdio.h>
/**
 * main - Print hexadecimal numbers
 * Return: 0
 */
int main(void)
{
	int i;
	char alp;

	for (i = 0; i < 10; i++)
	{
	putchar(i + '0');
	}
	for (alp = 'a'; alp <= 'f'; alp++)
	{
	putchar(alp);
	}
	putchar('\n');
	return (0);
}
