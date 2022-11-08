#include "main.h"
/**
 * _strcmp - see description
 * Description: compares two strings
 * @s1: input parameter for _strcmp function
 * @s2: input parameter for _strcmp
 * Return: pointer of result
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
