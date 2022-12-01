#include "main.h"
/**
 * set_bit - see description
 * Description: set the bit of an index
 * @n: input parameter for set_bit
 * @index: inout parameter for set_bit
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n ^= (1 << index);
	return (1);
}
