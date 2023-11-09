#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
* print_all - a function to print all arguments
* @format: the list of types of arguments in their order
* @
* Return: nothing
*/
void print_all(const char * const format, ...)
{
int write = 0;
int x;
char *string;
va_list words;

while (format == NULL)
return;

va_start(words, format);

x = 0;
while (*(format + x) != '\0')
{
switch (*(format + x))
{
case 'i':
printf("%i", va_arg(words, int));
write = 1;
break;
case 'c':
printf("%c", (char)va_arg(words, int));
write = 1;
break;
case 'f':
printf("%f", (float)va_arg(words, double));
write = 1;
break;
case 's':
string = va_arg(words, char *);
if (string == NULL)
string = "(nil)";

printf("%s", string);
write = 1;
break;
default:
write = 0;
break;
}
if ((*(format + x + 1) != '\0') && write)
printf(", ");

x++;
}

printf("\n");
}
