#include "main.h"
/**
 * rev_string - see description
 * Description: prints to string in reverse
 * @s: input parameter for rev_string function
 * Return: nothing
 */
void rev_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	while (i)
	{
		_putchar(s[--i]);
	}
}
