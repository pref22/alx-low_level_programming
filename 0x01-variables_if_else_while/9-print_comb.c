#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Return: Alwayx 0
 */
int main(void)
{
int n;

for (n = 48; n < 58; n++)
{
	putchar(n);
if (n != 57)
{
	putchar(',');
	putchar(' ');
}
	putchar('\n');
}
return (0);
}
