#include "main.h"

/**
 * is_prime_number - returns prime number confirmation value, either 0 or 1
 * @n : accused prime number suspect
 * Return: 0 if innocent, 1 if guilty of being a prime number
 */

int is_prime_number(int n)
{
	int i;

	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
		return (0);
		}
		else
		{
		return (1);
		}
	}
}
