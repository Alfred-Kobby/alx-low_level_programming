#include "main.h"
/**
 * _strlen_recursion - see description
 * Description:calculates string lenght
 * @s: input parameter for _strlen_recursion
 * Return: return the lenght of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (_strlen_recursion(s) + 1);
}
