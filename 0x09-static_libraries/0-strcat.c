#include "main.h"
/**
 * _strcat - see description
 * Description: concat two strings
 * @dest: input parameter for _strcat function
 * @src: input parameter for src
 * Return: pointer of result
 */
char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return (temp);
}
