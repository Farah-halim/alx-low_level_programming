#include "main.h"

/**
 * print_alphabet - a function that prints the alphabet,
 * in lowecase followed by a new line
 * Return: void
 */

void print_alphabet(void)
{
	char alphabet = "a";
	while (alphabet <= "z")
	{
		_putchar(alphabet);
		alphabet ++ ;
	
	}

	_putchar('\n');
}
