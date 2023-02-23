#include <stdio.h>
/**
 * main - Loop through alphabets yet again
 * Return: 0
 */

int main(void)
{
	char alps;

	for (alps = 'a'; alps <= 'z'; alps++)
	{
	putchar (alps);
	}
	for (alps = 'A'; alps <= 'Z'; alps++)
	{
	putchar(alps);
	}
	putchar('\n');
	return (0);
}
