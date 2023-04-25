#include "main.h"

/**
 * print_times_table - print the n times table, stating with 0.
 * @n: The value of the times table to be printed.
 */
void print_times_table(int n)
{
	int num0, num1, num2;

	if (n >= 0 && n <= 15)
	{
		for (num0 = 0; num0 <= n; num0++)
		{
			_putchar('0');

			for (num1 = 1; num1 <= n; num1++)
			{
				_putchar(',');
				_putchar(' ');

				num2 = num0 * num1;

				if (num2 <= 99)
					_putchar(' ');
				if (num2 <= 9)
					_putchar(' ');

				if (num2 >= 100)
				{
					_putchar((num2 / 100) + '0');
					_putchar(((num2 / 10)) % 10 + '0');
				}
				else if (num2 <= 99 && num2 >= 10)
				{
					_putchar((num2 / 10) + '0');
				}
				_putchar((num2 % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
