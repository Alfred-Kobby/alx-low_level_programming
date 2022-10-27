#include "main.h"
/**
 * reverse_array - see description
 * Description: print in reverse the content of the array
 * @a: input parameter for reverse_array function
 * @n: input paramter for reverse_array
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int aux;

	while (i < n--)
	{
		aux = a[i];
		a[i++] = a[n];
		a[n] = aux;
	}
}
