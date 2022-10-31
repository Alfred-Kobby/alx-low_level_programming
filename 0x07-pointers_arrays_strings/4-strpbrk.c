#include "main.h"
/**
 * _strpbrk - see description
 * Description: searches a string of any set of bytes
 * @s: input parameter for _strpbrk function
 * @accept: input parameter for _strpbrk
 * Return: pointer of result
 */
char *_strpbrk(char *s, char *accept)
{
	char *start = accept;

	while (*s)
	{
		while (*accept)
		{
			if (*accept == *s)
				return (s);
			accept++;
		}
		accept = start;
		s++;
	}
	return (NULL);
}
