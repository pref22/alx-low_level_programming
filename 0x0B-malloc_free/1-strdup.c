#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * _strdup - Duplicate to a new mwmory space location
  * @str: the string to be duplicated
  *
  * Return: 0
  */
char *_strdup(char *str)
{
	int a = 0, i = 1;
	char *s;

	if (str == NULL)
		return (NULL);

	while (str[i])
	{
		i++;
	}

	s = malloc((sizeof(char) * i) + 1);

	if (s == NULL)
		return (NULL);

	while (a < i)
	{
		s[a] = str[a];
		a++;
	}

	s[a] = '\0';
	return (s);
}
