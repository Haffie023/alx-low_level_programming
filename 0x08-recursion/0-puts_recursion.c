#include "main.h"
/**
<<<<<<< HEAD
 * _puts_recursion - similar function as puts
 * @s: string
 * Return: Always 0
 */
void _puts_recursion(char *s)
{
	if *s == 0
	{
		putchar(*s);
		_puts_recursion(s + 1);

	}
	else 
		putchar('\n')
=======
 * _puts_recursion - function like puts();
 * @s: input
 * Return: Always 0 (Success)
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
>>>>>>> 4d8b61471a8385c7e896e4ed40550d197f19d016
}
