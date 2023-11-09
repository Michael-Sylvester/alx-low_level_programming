#include "3-calc.h"
#include <string.h>
#include <stdlib.h>
/**
* get_op_func - sellect the apropriate operation
* @s:  string representing function
*
* Return: nothing
*/
int (*get_op_func(char *s))(int, int)
{
int i = 0;
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};

while (ops[i].op != NULL)
{
if (strcmp(s, ops[i].op) == 0)
return (ops[i].f);

i++;
}

return (NULL);
}
