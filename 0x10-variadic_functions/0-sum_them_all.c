#include "variadic_functions.h"
#include <stdarg.h>
/**
* sum_them_all - a function that returns the sum of all its parameters.
* @n: number of parameters
*
* Return: nothing
*/
int sum_them_all(const unsigned int n, ...)
{
int count = 0;
int sum = 0;
va_list args;

if (n == 0)
return (0);

va_start(args, n);

for (count = 0; count < n; count++)
{
sum += va_arg(args, int);
}
va_end(args);

return (sum);
}
