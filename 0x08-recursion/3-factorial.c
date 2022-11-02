#include "main.h"
/**
 * factorial - see description
 * Description:calculates the factorial of a given number
 * @n: input parameter for factorial
 * Return: return the facotial of a number
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
