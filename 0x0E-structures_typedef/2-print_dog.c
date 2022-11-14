#include "dog.h"
#include <stdlib.h>
/**
 * print_dog - see decription
 * Description: print struct dog
 * @d: paramter of init_dog
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	if (d == null)
		printf("nil");
	else
	{
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	}
}
