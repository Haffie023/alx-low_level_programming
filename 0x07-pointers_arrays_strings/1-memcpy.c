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
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src [i];
	}
	return (dest);
}
