#include "main.h"
/**
 * _puts_recursion - see description
 * Description: prints string with recurssion
 * @s: input parameter for puts_recursion
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
