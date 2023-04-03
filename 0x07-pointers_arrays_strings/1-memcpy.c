#include "main.h"

/**
 * _memcpy - a function that copies a memory area
 * @n: area size
 * @src: memory source
 * @dest: memory destination
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n);
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
