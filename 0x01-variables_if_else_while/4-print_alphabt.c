#include <stdio.h>
/**
 * main - Miss some letters of the alphabet intentionally
 * Return: 0
 */
int main(void)
{
	char alps;

	for (alps = 'a'; alps <= 'z'; alps++)
	{
		if (alps == 'e' || alps == 'q')
		{
		alps++;
		}
		else
		{
		putchar(alps);
		}
	}
	putchar('\n');
	return (0);
}
