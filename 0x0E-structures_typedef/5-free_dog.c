#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - see decription
 * Description: freees dog
 * @d: paramter of init_dog
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	if (d->name != NULL)
		free(d->name);
	if (d->owner != NULL)
		free(d->owner);
	free(d);
}
