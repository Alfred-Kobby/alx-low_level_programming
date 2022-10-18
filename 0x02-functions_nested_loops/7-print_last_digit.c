#include "main.h"
/**
 * print_last_digit - Check description
 * Description: prints the last digit of a number
 * @c: input parameter for print_last_digit function
 * Return: return the last digit of a number
 */
int print_last_digit(int c)
{
	int n;

	if (c < 0)
		n = -1 * (c % 10);
	else
		n = c % 10;
	_putchar((n % 10) + '0');
	return (n % 10);
}

