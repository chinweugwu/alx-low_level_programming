#include <stdio.h>
/**
 * main - Print alphabets in reverse
 * Return: 0
 */
int main(void)
{
	char alps;

	for (alps = 'z'; alps >= 'a'; alps--)
	{
	putchar(alps);
	}
	putchar('\n');
	return (0);
}
