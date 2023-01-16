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
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}
	return ('\0');
}
