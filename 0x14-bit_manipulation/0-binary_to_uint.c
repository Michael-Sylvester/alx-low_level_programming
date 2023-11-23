#include "main.h"

/**
 * update_pos - calculates the number to be multiplied by each position
 * @pos: the current position in the conversion
 * @
 * Return: 2 raised to the power pos
 */
unsigned int update_pos(int pos)
{
	int count = 0;
	unsigned int ans = 1;
	while (count < pos)
		{
		 ans *= 2;
		 count++;
		}
	return (ans);
}

/**
 * binary_to_uint - converts binary string to unsigned int
 * @b: the binary number string
 * @
 * Return: the converted int or 0 if bad 
 */
unsigned int binary_to_uint(const char *b)
{
	int pos = 0;
	unsigned int sum = 0;
	int count = 0;
	
	if(b == NULL || *b == '\0')
		return (0);
	
	while (*b != '\0')
	{
		if (*b == '1' || *b == '0')
		{
			b++;
			count++;
		}
			else
				return (0);
			
	}
	b--;

	while (count > 0 )
		{
			sum += update_pos(pos) * (*b -'0');
			b--;
			pos++;
			count--;
		}

	return (sum);
}
