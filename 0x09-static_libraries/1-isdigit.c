#include "main.h"
/**
 * _isdigit - check description
 * Description: return if its a digit
 * @c: input parameter for _isdigit
 * Return: return 1 or 0
 */
int _isdigit(int c)
{
	char i = '0';
	int isdigit = 0;

	for (; i <= '9'; i++)
	{
		if (c == i)
		{
			isdigit = 1;
			break;
		}
	}
	return (isdigit);
}
