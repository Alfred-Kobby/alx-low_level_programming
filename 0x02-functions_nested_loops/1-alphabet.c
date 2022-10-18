#include "main.h"
/**
 * main - Entry point
 * Return: Always 1 (Success)
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(word[i]);
	_putchar('\n');
	return (0);
}
