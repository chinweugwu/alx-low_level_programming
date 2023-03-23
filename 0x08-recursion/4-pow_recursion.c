#include "main.h"
/**
 * _pow_recursion - raises one value to another
 * @x: input
 * @y: input
 * Return: exponential value
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
	return (-1);
	}
	else
	{
	return (x * _pow_recursion(x, y - 1));
	}
}
