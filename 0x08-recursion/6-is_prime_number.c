#include "main.h"
int is_divisible(int num, int div);

/**
 *is_prime_number - fucntion checking for prime numbers
 *@n: input integer
 *Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);

	if (n <= 3)
		return (1);

	return (is_divisible(n, div));
}
/**
 * is_divisible - check if divisible
 * @num: integer
 * @div: result
 * Return:1 if divisible, 0 if otherwise
 */
int is_divisible(int num, int div)
{
	if (num % div == 0)
		return (0);

	if (div == num / 2)
		return (1);

	return (is_divisible(num, div + 1));
}
