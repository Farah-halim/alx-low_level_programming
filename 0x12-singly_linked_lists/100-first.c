#include <stdio.h>

/**
 * before_main - WRITE A FUNCTIONS THAT PRINTS TWO LINES OF BEFORE MAIN().
 *
 * THE FUNCTION __attribute__ TAGGED AND IT WILL BE EXECUTED BEFORE MAIN()
 * THE FUNCTION PRINTS TWO LINES USING PRINTF()
 *
 */
void __attribute__ ((constructor)) before_main()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
