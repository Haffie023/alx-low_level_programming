#include<main.h>

/**
 * _strchr - a function that locates a character in a string
 * @c: the character to locate
 * @s: the string to locate the first occurence of c
 * Return: pointer to the first occurrence of the character c
 */
char *_strchr(char *s, char c);
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}