#include "main.h"

/**
 * is_prime_number - returns prime number confirmation value, either 0 or 1
 * @n : accused prime number suspect
 * Return: 0 if innocent, 1 if guilty of being a prime number
 */

int is_prime_number(int n)
{
	int i = 1;

	if (n % i == 0)
	{
	return (0);
	}
	else if (n == i)
	{
	return (1);
	}
	else
	{
	i++;
	return (is_prime_number(n - 1));
	}
}
