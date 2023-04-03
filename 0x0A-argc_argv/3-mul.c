#include <stdio.h>
#include "main.h"

/**
 * main - multiplies 2 numbers and prints the result
 * @argc: number of arguments
 * @argv: array of arguments
 * @a: input
 * @b: input
 */

int main(int argc, char *argv[], int a, int b)
{
	int result;
	if (argc < 2)
	{
		printf("Error")
		return (1);
	}
	else
	{
		result = a * b;
		printf("%d\n", result);
	}
}
