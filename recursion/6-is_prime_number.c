#include "main.h"

/**
 * prime2 - func2
 * @a: same num
 * @b: num
 *
 * Return: 1
 */
int prime2(int a, int b)
{
	if (a == b)
		return (1);
	else if (a % b == 0)
		return (0);
	return (prime2(a, b + 1));
}
/**
 * is_prime_number - func
 * @n: Num
 *
 * Return: 1
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime2(n, 2));
}
