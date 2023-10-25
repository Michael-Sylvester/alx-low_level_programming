#include "main.h"
/**
 * _pow_recursion - a function that x to the power of y
 * @x :base number
 * @y : exponential
 * Return: the result of x to the power y
 */
int _pow_recursion(int x, int y)
{
int pow = x;
if (y < 0)
return (-1);
else if (y == 0)
return (1);
else
pow *= _pow_recursion(x, y - 1);

return (pow);
}
