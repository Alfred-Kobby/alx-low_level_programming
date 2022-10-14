#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 1 (Success)
 */
int main(void)
{
	char ch = 'a';
	char CH = 'A';

	while (ch <= 'z')
	{
		printf("%c", ch);
		ch++;
	}
	while (CH <= 'Z')
	{
		printf("%c", CH);
		CH++;
	}
	printf("\n");
	return (0);
}
