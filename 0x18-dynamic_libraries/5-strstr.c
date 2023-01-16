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
	int index;

	if (*needle == 0)
		return (haystack);
	while (*haystack)
	{
		index = 0;
		if (haystack[index] == needle[index])
		{
			do {
				if (needle[index + 1] == '\0')
					return (haystack);
				index++;
			} while (haystack[index] == needle[index]);
		}
		haystack++;
	}
	return ('\0');
}
