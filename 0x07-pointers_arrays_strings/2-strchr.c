#include "main.h"
#include <stdio.h>

/**
 * _strchr - a function that locates a character in a string
 * @c: the character to locate
 * @s: the string to locate the first occurence of c
 * Return: pointer to the first occurrence of the character c
 */
char *_strchr(char *s, char c);
{
	int i;
	for (i = 0; 1 ; i++)
	{
		if (s[i] == c)
			return ((s + i));
		if (s[i] == 0)
			break;
	}
	return (NULL);
}
