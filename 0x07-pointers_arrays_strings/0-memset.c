#include "main.h"
/**
 * _memset - function that fills memory with a constant byte
 * @s: first value
 * @b: the second value
 * @n: the third value
 * Return: pointer memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
	s[i] = b;
	i++;
	}

	return (s);
}
