#include "main.h"
/**
 * print_sign - Check description
 * Description: It prints 1,0,-1 if parameter is a positive,negative or zero
 * @c: input parameter for print_sign function
 * Return: 1, -1 or 0
 */
int print_sign(int c)
{
	int sign;

	if (c == 0)
	{
		sign = 0;
		_putchar('0');
	}
	else if (c < 0)
	{
		sign = -1;
		_putchar('-');
		_putchar('1');
	}
	else
	{
		sign = 1;
		_putchar('+');
		_putchar('1');
	}

	return (sign);
}
