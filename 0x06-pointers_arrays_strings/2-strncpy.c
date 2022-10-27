#include "main.h"
/**
 * _strncpy - see description
 * Description: copy n bytes of src to dests
 * @dest: input parameter for _strcat function
 * @src: input parameter for _strncpy
 * @n: input paramter for _strncpy
 * Return: pointer of reulting result
 */
char *_strncpy(char *dest, char *src, int n)
{
	int srclen = 0, i = 0;
	char *temp = dest, *start = src;

	while (*src)
	{
		srclen++;
		src++;
	}
	srclen++;
	if (n > srclen)
		n = srclen;
	src = start;
	for (; i < n; i++)
		*dest++ = *src++;
	return (temp);
}
