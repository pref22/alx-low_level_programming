#include "main.h"

/**
 * _memcpy - Copies memory area
 * @dest: The memory pointer to copy @src into
 * @src: The source buffer to copy characters from
 * @n: The number of bytes to copy from
 * Return: A pointer to the destination buffer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
	{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
