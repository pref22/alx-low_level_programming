#include "main.h"
/**
  *helperFunction - Returns 0 or 1.
  *@num: The number being checked.
  *@i: Possible factor of the number.
  *
  *Return: 0 if not prime, 1 if prime.
  */
int helperFunction(int num, int i)
{
	if (i < num)
	{
		if (num % i == 0)
		{
			return (0);
		}
		else
		{
			return (helperFunction(num, i + 1));
		}
	}
	else
	{
		return (1);
	}
}

/**
  *is_prime_number - Checks if number is prime or not.
  *@n: The number to be checked.
  *
  *Return: 1 if number is prime
  *0 if number is not prime
  */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (helperFunction(n, 2));
	}
}
