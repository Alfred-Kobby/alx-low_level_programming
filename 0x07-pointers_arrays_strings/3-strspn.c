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
	int count = 0, flag;
	char *start = accept;

	while (*s)
	{
		flag = 0;
		while (*accept)
		{
			if (*accept == *s)
			{
				count++;
				flag = 1;
				break;
			}
			accept++;
		}
		s++;
		accept = start;
		if (flag == 0)
			break;
	}
	return (count);
}
