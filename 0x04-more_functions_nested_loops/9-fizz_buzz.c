#include "main.h"
#include <stdio.h>
/**
 * main - blah blah
 * no parameters
 *
 * Return: nothing
 */
void main(void)
{
for (int num = 1; num <= 100; num++)
{
if (num % 3 == 0 && num % 5 == 0)
printf("FizzBuzz ");
else if (num % 3 == 0)
printf("Fizz ");
else if (num % 5 == 0)
printf("Buzz ");
else if (num == 100)
printf("%d", num);
else
printf("%d ", num);
}
putchar('\n');
}
