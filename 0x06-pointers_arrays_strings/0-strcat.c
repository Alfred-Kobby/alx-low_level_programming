#include "main.h"
/**
 * _strcat - see description
 * Description: concat two strings
 * @dest: input parameter for _strcat function
 * @src: input parameter for src
 * Return: nothing
 */
void _strcat(char *dest, char *src)
{
	int i, j, z;
	char *out;

	i = 0;
	j = 0;
	z = 0;
	while (dest[i] != '\0')
	{
		out[z] = dest[i];
		i++;
		z++;
	}
	while (src[j] != '\0')
	{
		out[z] = src[j];
		j++;
		z++;
	}
	out[z + 1] = '\0';
	return (out);
}
