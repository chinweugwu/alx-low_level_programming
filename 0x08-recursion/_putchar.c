#include "main.h"
#include <unistd.h>
/**
 * _putchar - output the char c to stdout
 * @c: The character to be printed
 * Return: 1 on success
 * Onerror, -1 is returned and errno is appropriately set.
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
