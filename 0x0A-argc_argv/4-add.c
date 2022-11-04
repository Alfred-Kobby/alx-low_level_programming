#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - see description
 * Description: entry to main application
 * @argc: input parameter for main
 * @argv: input vector for main
 * Return: 1 if error or multiple of two numbers
 */
int main(int argc, char **argv)
{
	int num, result = 0, i;

	while (argc-- > 1)
	{
		for (i = 0; argv[argc][i]; i++)
		{
			if (!(isdigit(argv[argc][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		num = atoi(argv[argc]);
		result += num;
	}
	printf("%d\n", result);
	return (0);
}
