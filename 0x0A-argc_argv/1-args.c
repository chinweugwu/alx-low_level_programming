#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed
 * @argc: number of args
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argv;
	print("%d\n", argc - 1);
	return (0);
}
