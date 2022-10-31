#include "main.h"
/**
 * _strpbrk - see description
 * Description: searches string of any byte
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
