#include "main.h"

int recursion(int n, int x);
/**
 * _sqrt_recursion - a function for finding squre roots
 * @n : the number whos square root me want
 *
 * Return: nothing
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);

if (n == 0 || n == 1)
return (n);

return (recursion(n, 2));
}

/**
 * recursion - a function that returns the natural square root of a number.
 * @n : the number whos square root me want
 * @x : the current guess for the square root
 * Return: the square root of n
 */
int recursion(int n, int x)
{
if ((x * x) == n)
return (x);
else if ((x * x) < n)
return (recursion(n, x + 1));
else
return (-1);
}
