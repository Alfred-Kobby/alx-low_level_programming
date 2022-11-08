#include "main.h"
/**
 * _isalpha - Check description
 * Description: It prints 1 if parameter is a letter
 * @c: input parameter for _isletter function
 * Return: 1 if is lower or 0
 */
int _isalpha(int c)
{
	char i, u;
	int letter = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		for (u = 'A'; u <= 'Z'; u++)
		{
			if (i == c || u == c)
			{
				letter = 1;
			}
		}
	}
	return (letter);
}
