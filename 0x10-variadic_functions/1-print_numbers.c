#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
* print_numbers - a function that prints numbers, followed by a new line.
* @separator: char separating numbers
* @n: number of arguments
* Return: nothing
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int count;
va_list args;
int next;

va_start(args, n);
for (count = 0; count < n; count++)
{
next = va_arg(args, int);
printf("%i", next);

if (separator != NULL && count < n - 1)
printf("%s ", separator);

}

printf("\n");
}
