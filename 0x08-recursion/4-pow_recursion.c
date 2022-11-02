#include "main.h"
/**
 * _pow_recursion - see description
 * Description:calculates the power of x to y
 * @x: input parameter for _pow_recursion
 * @y: input parameter for _pow_recursion
 * Return: return the x to the power y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y == 1)
	{
		return (x);
	}
	return (x *= _pow_recursion(x, y - 1));
}
