#include "main.h"

int recursion(int n, int x);
/**
 * is_prime_number - a function that calls a recursive
 * function to check for prime numbers
 * @n : the number whos prime number we want
 *
 * Return: the return value of the recursiv function
 */
int is_prime_number(int n)
{
if (n < 2)
return (-1);

return (recursion(n, n / 2));
}

/**
 * recursion -  a function that returns 1 if the input
 * integer is a prime number, otherwise return 0
 * @n : the number being checked if its prime
 * @x : used to check for number of devisors
 * Return: 1 or 0
 */
int recursion(int n, int x)
{
if (n % x == 0)
return (-1);
else if (n % x != 0 && x > 1)
return (recursion(n, x - 1));
}
