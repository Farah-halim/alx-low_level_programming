#include "main.h"
/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int index ;
	unsigned int the_converted_number=0 ;

	if (!b)
		return(0);
	else
	{
		for(index=0; b[index];index++)

			if (b[index] < '0' || b[index] > '1')
			return (0);
		the_converted_number = 2 * the_converted_number + (b[index] - '0');
	}
	return (the_converted_number);
}
