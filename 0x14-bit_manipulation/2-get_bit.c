#include "main.h"
/**
 * get_bit - see description
 * Description: get the bit of an index
 * @n: input parameter for get_bit
 * @index: inout parameter for get_bit
 * Return: bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int max = 0x01;

	max <<= index;
	if (max == 0)
		return (-1);
	if ((n & max))
		return (1);
	else
		return (0);
}
