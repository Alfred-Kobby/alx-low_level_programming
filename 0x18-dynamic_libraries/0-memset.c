#include "main.h"
/**
 * _memset - see description
 * Description:fills memory with constant byte
 * @s: input parameter for _memset function
 * @b: input parameter for _memset
 * @n: input parameter for _memset
 * Return: pointer of result
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *start = s;

	while (n--)
	{
		*s = b;
		s++;
	}
	return (start);
}
