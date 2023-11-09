#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
* main - a function that prints its opcode
*
* Return: nothing
*/
int main(void)
{
unsigned char *code = (unsigned char *)main;
int i;

for (i = 0; i < sizeof(main); i++)
printf("%02x", code[i]);

return (0);
}
