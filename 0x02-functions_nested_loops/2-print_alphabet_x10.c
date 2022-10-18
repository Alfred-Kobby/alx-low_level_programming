#include "main.h"
/**
 * print_alphabet - Check description
 * Description: It prints the alphabet in lowercase fallowed by a new line 10 times
 */
void print_alphabet_x10(void)
{
	char i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
	}
}
