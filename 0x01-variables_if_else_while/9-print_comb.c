#include <stdio.h>
/**
 * main - Print digits with spaces
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i <= 10; i++)
	{
	if (i != 9)
	{
	putchar(i + '0');
	putchar(',');
	putchar(' ');
	}
	else if (i == 9)
	{
	putchar(i + '0');
	}
	}
	return (0);
}
