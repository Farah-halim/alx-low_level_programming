#include "main.h"
/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be printed in binary.
 */
void print_binary(unsigned long int n)
{
	int return_num = 0;
	int convert;

	if (n == 0)
		_putchar('0');

	for (convert = ((sizeof(n) * 8) - 1); convert >= 0; convert--)
	{
		 if (return_num == 1)
                        _putchar('0');
		 
		 else if ((n >> convert) & 1)
		 {
			return_num = 1;
			_putchar('1');
		 }
	}
}
