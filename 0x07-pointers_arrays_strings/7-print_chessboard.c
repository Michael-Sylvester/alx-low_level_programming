#include "main.h"
/**
 * print_chessboard - Print out the details of a chess board
 * @a : an array of pointers for the rows of the board
 *
 * Return: nothing
 */
void print_chessboard(char (*a)[8])
{
int col = 0;
int row = 0;


while (row < 8)
{
while (col < 8)
{
_putchar(a[row][col]);
col++;
}
_putchar('\n');
col = 0;
row++;
}
}
