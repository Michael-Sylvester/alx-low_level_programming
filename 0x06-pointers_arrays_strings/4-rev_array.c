#include "main.h"
/**
 * reverse_array - blah blah
 * @a : array
 * @n : No of elements in array
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
int count = 0;
int first = *a;
int temp[1000];
a = a + (n - 1);

/*Copy all elements to the temp array in reverse  */
while (*a != first)
{
temp[count] = *a;
a--;
count++;
}
temp[count] = first;

/*input the reversed elements in temp into the destination array  */
count = 0;
while (count < n)
{
*a = temp[count];
a++;
count++;
}

}
