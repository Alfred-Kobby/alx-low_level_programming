#include "main.h"
/**
 * _strncat - see description
 * Description: concat two strings with only n of second string
 * @dest: input parameter for _strcat function
 * @src: input parameter for _strncat
 * @n: input paramter for _strncat
 * Return: pointer to result
 */
char *_strncat(char *dest, char *src, int n)
{
	int srclen = 0, i = 0;
	char *temp = dest, *start = src;

	while (*src)
	{
		srclen++;
		src++;
	}
	while (*dest)
		dest++;
	if (n > srclen)
		n = srclen;
	src = start;
	for (; i < n; i++)
		*dest++ = *src++;
	*dest = '\0';
	return (temp);
}
