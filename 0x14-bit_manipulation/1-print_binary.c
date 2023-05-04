#include "main.h"
/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int x = 0;
	unsigned long int num_ber = 1;
	
	num_ber <<= 63;
	if (n == 0)
		_putchar('0');

	while (num_ber > 0)
	{
		if ((n & num_ber) == 0 && x == 1)
			_putchar('0');

		if ((n & num_ber) != 0)
		{
			_putchar('1');
			x = 1;
		}

		num_ber = num_ber >> 1;
	}
}
