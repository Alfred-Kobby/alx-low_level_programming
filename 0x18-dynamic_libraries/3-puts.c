#include "main.h"
/**
 * _puts - see description
 * Description: prints to sdout
 * @str: input parameter for _puts function
 * Return: nothing
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
