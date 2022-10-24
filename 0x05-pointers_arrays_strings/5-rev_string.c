#include "main.h"
/**
 * rev_string - see description
 * Description: prints to string in reverse
 * @s: input parameter for rev_string function
 * Return: nothing
 */
void rev_string(char *s)
{
	int len = 0, i = 0;
	char aux;

	while (s[len] != '\0')
		len++;
	while (i < len--)
	{
		aux = s[i];
		s[i++] = s[len];
		s[len] = aux;
	}
}
