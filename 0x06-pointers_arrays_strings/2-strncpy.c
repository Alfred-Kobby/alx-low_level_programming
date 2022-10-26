#include "main.h"
/**
 * _strncpy - see description
 * Description: copy n bytes of src to dests
 * @dest: input parameter for _strcat function
 * @src: input parameter for _strncpy
 * @n: input paramter for _strncpy
 * Return: pointer of reulting result
 */
void _strncpy(char *dest, char *src, int n)
{
	int index = 0, src_len = 0;

	while (src[index++])
		src_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];
	for (index = src_len; index < n; index++)
		dest[index] = '\0';
	return (dest);
}
