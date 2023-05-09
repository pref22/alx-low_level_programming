#include "main.h"

/**
 * infinite_add - A function that adds two numbers
 * @n1: The first number to be added
 * @n2: The second number to be added
 * @r: Char type pointer argument
 * @size_r: int type argument
 * desc: adds two numbers from string
 * Return: sum of two intergers
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int count, count2;

while (n1[count] != '\0')
count++;
while (n2[count2] != '\0')
count2++;

*r = *(r + size_r);
while (n1[count] > 0 || n1[count2] > 0)
{
if (n1[count] + n2[count2] > 0)
*r = n1[count - 1] + n2[count2 - 1] + 1;
else
*r = n1[count] + n2[count2];
count--;
count2--;
}
return (r);
}
