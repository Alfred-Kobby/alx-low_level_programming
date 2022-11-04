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
	if (argv[0])
		printf("%d\n", argc - 1);
	return (0);
}
