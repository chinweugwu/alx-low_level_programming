#include <stdio.h>
/**
 * main - print single digits handicapped
 * Return: 0
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
	putchar(num + '0');
	}
	putchar('\n');
}
