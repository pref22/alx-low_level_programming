#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
int largest;

if (a > b && b > c)
{
int largest = a;
}
else if (b > a && a > c)
{
int largest = b;
}
else
{
int largest = c;
}

return (largest);
}