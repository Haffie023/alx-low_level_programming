#include "main.h"

/**
 * _puts_recursion - function like puts
 * @s: the string
 * Return: always 0
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar('\n');
		return;
	}
	else
		_putchar(*s);
		_puts_recursion(s + 1);

}
