#include "main.h"
/**
 * leet - convert tet to leet format
 * @s : pointer for string
 *
 * Return: nothing
 */
char *leet(char *s)
{
char *start = s;
int i, j;
char leet[10][2] = {
{'a', '4'}, {'A', '4'}, {'e', '3'}, {'E', '3'},
{'o', '0'}, {'O', '0'}, {'t', '7'}, {'T', '7'},
{'l', '1'}, {'L', '1'}
};

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; j < 10; j++)
{
if (s[i] == leet[j][0])
{
s[i] = leet[j][1];
break;
}
}
}

return (start);

}
