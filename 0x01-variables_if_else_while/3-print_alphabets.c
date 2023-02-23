#include <stdio.h>
/**
 * main - Loop through alphabets yet again
 * Return: 0
 */

int main(void)
{
	char alps[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{
	putchar(alps[i]);
	}
	putchar("\n");
	return (0);
}
