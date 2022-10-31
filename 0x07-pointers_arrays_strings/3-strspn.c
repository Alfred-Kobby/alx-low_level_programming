#include "main.h"
/**
 * _strspn - see description
 * Description: finds the lenght of a prefix substring
 * @s: input parameter for _strspn function
 * @accept: input parameter for _strspn
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				bytes++;
				break;
			}
			else if (accept[index + 1] == '\0')
				return (bytes);
		}
		s++;
	}
	return (bytes);
}
