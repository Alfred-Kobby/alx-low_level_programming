#include "main.h"
/**
 * _strchr - see description
 * Description: locates a character in a string
 * @s: input parameter for _strchr function
 * @c: input parameter for _strchr
 * Return: pointer of result
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (c == *s)
			return (s);
		s++
	}
	if (c == *s)
		return (s);
	return (NULL);
}
