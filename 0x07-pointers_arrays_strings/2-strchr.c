#include "main.h"

/**
 * _strchr - a function that locates a character in a string
 * @c: the character to locate
 * @s: the string to locate the first occurence of c
 * Return: pointer to the first occurrence of the character c
 */
char *_strchr(char *s, char c);
{

	char *s;
	char *c;

	c = _strchr(s, 'l');

	if (c != NULL)
	{
		printf("%s\n", c);
	}
	return (0);
}
