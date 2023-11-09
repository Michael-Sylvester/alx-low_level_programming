#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
* print_strings - a function that prints strings, followed by a new line.
* @separator: char separating strings
* @n: number of arguments
* Return: nothing
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int count;
va_list args;
char *next;

va_start(args, n);
for (count = 0; count < n; count++)
{
next = va_arg(args, char *);
if (next == NULL)
next = "(nil)";

printf("%s", next);

if (separator != NULL && count < n - 1)
printf("%s", separator);

}

printf("\n");
}
