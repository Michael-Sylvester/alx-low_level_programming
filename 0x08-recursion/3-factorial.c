#include "main.h"
/**
 * factorial -  a function that returns the factorial of a given number.
 * @n : number whose factorial we want
 *
 * Return: nothing
 */
int factorial(int n)
{
int fact = n;
if (n < 0)
return (-1);
else if (n == 0)
return (1);
else
fact *=  factorial(n - 1);

return (fact);
}
