#include "main.h"

/**
 * print_triangle - Prints a triangle, using the character #.
 * @size: The size of the triangle.
 */
void print_triangle(int size)
{
	int hash, ind;

	if (size > 0)
	{
		for (hash = 1; hash <= size; hash++)
		{
			for (ind = size - hash; ind > 0; ind--)
				_putchar(' ');

			for (ind = 0; ind < hash; ind++)
				_putchar('#');

			if (hash == size)
				continue;

			_putchar('\n');
		}
	}
	_putchar('\n');
}
