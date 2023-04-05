#include "main.h"
/**
 * _strlen_recursion - prints the length of a string
 * @s:the string
 * Returns:l length of string as an int
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		if (*s == '\0')
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
