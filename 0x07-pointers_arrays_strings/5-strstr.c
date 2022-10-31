#include "main.h"
/**
 * _strstr - see description
 * Description: locates a substring
 * @haystack: input parameter for _strstr function
 * @needle: input parameter for _strstr
 * Return: pointer of result
 */
char *_strstr(char *haystack, char *needle)
{
	char *startn = needle, *starth = haystack;

	while (*haystack)
	{
		starth = haystack;
		needle = startn;
		while (*haystack == *needle)
		{
			haystack++;
			needle++;
		}
		if (*needle == '\0')
			return (haystack);
		haystack = starth + 1;
	}
	return (NULL);
}
