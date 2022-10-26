#include "main.h"
/**
 * _strncat - see description
 * Description: concat two strings with only n of second string
 * @dest: input parameter for _strcat function
 * @src: input parameter for _strncat
 * @n: input paramter for _strncat
 * Return: nothing
 */
char *_strncat(char *dest, char *src, int n)
{
	char *out = dest;
	int i = 0;

	while (*dest)
		*dest++;
	while (i < n)
	{
		*dest++ = *src++;
		i++;
	}
	*dest = '\0';
	return (out);
}
