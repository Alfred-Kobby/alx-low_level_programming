#include "main.h"
/**
 * _islower - Check description
 * Description: It prints 1 if parameter is a lower case
 * @c: input parameter for _islower function
 * Return: 1 if is lower or 0
 */
int _islower(int c)
{
	char i;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
		{
			lower = 1;
		}
	}
	return (lower);
}
