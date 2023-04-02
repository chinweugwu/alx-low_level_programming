#include <stdio.h>
#include "main.h"
/**
 * main - to list name of file using argc
 * @argc: input argument total number
 * @argv: array of input arguments
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{

	printf("%s\n", *argv);

	return (0);
}
