#include "function_pointers.h"
#include <stddef.h>
/**
* print_name - a function that prints a name
* @name: name to be printed
* @f: function pointer for printing
* Return: nothing
*/
void print_name(char *name, void (*f)(char *))
{
f(name);

}
