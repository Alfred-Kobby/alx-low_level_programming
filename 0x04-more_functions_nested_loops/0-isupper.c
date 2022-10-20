#include<stdio.h>
#include "main.h"
/**
 * _isupper - check description
 * Description: return if its a upper case
 * @c: input parameter for _isupper
 * Return: return 1 or 0
 */
int _isupper(int c)
{
	char i;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (c == i)
			return (1);

	}
	return (0);
}
