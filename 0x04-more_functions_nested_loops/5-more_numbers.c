#include "main.h"
/**
 * more_numbers - check description
 * Description: prints 0 to 14 10 times
 * Return: nothing
 */
void more_numbers(void)
{
	int i = '0';
	int j = '0';

	for (; i <= '9'; i++)
	{
		for (; j <= '13'; j++)
		{
			if (j > 9)
				_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
		}
		_putchar('\n');
	}
}
