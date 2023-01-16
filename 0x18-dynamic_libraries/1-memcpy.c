#include "main.h"
/**
 * _memcpy - see description
 * Description: copies n byte of src to dest
 * @src: input parameter for _memcpy function
 * @dest: input parameter for _memcpy
 * @n: input parameter for _memcpy
 * Return: pointer of result
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *start = dest;

	while (n--)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (start);
}
