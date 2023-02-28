#include "main.h"
/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int word = 0;
	int t = 0;
	char *y = str;
	int les;

	while (*y != '\0')
	{
		y++;
		word++;
	}
	t = word - 1;
	for (les = 0 ; les <= t ; les++)
	{
		if (les % 2 == 0)
	{
		_putchar(str[les]);
	}
	}
	_putchar('\n');
}
