#include "main.h"
/**
 * string_toupper - see description
 * Description: cpnverts string to upper case
 * @s: input parameter for string_toupper function
 * Return: pointer to result
 */
char *string_toupper(char *s)
{
	char *start = s;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			*s -= 32;
		s++;
	}
	return (start);
}
