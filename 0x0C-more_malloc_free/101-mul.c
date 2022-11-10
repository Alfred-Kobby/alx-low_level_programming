#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - see description
 * Description: program that multiplies 2 numbers
 * @argc: input parameter for main
 * @argv: input parameter for array_range
 * Return: integer
 */
int main(int argc, char **argv)
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		result = num1 * num2;
		printf("%d\n", result);
		return (0);
	}
}
