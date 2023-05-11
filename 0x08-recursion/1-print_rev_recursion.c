#include "main.h"

/**
 * _print_rev_recursion - function that prints a string in rev
 * @s: Pointer to string
 * Return: returns void
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
