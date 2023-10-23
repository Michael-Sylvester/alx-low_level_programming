#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - sprint sum of the 2 diagonals of a 2d array
 * @a : pointer to head of the array
 * @size : number of elements of the array
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
int col = 0;
int row = 0;
int revcol = size - 1;
int sum1 = 0;
int sum2 = 0;

while (row < size)
{
while (col < size)
{
sum1 += a[row * size + col];
sum2 += a[row * size + revcol];

row++;
col++;
revcol--;
}
}
printf("%d, %d\n", sum1, sum2);
}
