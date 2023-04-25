#include <stdio.h>

/**
 * main - Lists all the natural numbers below 1024 (excluded)
 * that multiples of 3 0r 5.
 *
 * Return: Always 0.
 */
int main(void)
{
	int p, sum = 0;

for (p = 0; p < 1024; p++)
{
if ((p % 3) == 0 || (p % 5) == 0)
sum += p;
}

printf("%d\n", sum);

return (0);
}
