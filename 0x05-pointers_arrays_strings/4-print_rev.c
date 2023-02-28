#include "main.h"
/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int word = 0;
	int letter;

	while (*s != '\0')
	{
		word++;
		s++;
	}
	s--;
	for (letter = word; letter > 0; letter--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}

