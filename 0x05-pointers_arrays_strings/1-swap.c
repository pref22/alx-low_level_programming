#include "main.h"
/**
 * swap_int - Swaps the values of two integers
 *
 * @a: An interger to swap
 * @b: Another integer to swap
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}