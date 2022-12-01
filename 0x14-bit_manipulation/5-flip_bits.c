#include "main.h"
/**
 * flip_bits - see description
 * Description: returns the number of bits to flip
 * @n: input parameter for flip_bits
 * @m: inout parameter for flip_bits
 * Return: unsigned int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bits = 0;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}
	return (bits);
}
