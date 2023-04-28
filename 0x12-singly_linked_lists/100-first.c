#include<stdio.h>

void my_Startup(void) __attribute__((constructor));

/**
 * my_constructor - executes before main()
 *
 * Return: void
 */

void my_Startup(void)
{
   printf("You're beat! and yet, you must allow,\n");
   printf("I bore my house upon my back!\n");
}
