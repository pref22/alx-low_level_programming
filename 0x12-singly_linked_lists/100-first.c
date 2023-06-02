#include <stdio.h>

/**
 * bfrmain - prints a string before the main function is executed
 *
 * Return: No return
 */

void __attribute__ ((constructor)) bfrmain()
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
}
