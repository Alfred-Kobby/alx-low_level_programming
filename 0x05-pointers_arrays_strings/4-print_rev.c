#include "main.h"
/**
 * print_rev - see description
 * Description: prints to sdout in reverse
 * @s: input parameter for print_rev function
 * Return: nothing
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	while (i)
	{
		_putchar(s[--i]);
	}
	_putchar('\n');
}
