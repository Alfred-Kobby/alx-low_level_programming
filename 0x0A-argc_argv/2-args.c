#include <stdio.h>
#include <stdlib.h>
/**
 * main - see description
 * Description: entry to main application
 * @argc: input parameter for main
 * @argv: input vector for main
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
