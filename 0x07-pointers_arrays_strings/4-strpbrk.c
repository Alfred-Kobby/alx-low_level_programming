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
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}
		s++;
	}
	return ('\0');
}
