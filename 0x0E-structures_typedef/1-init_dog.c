#include "main.h"
/**
 * init_dog - see decription
 * Description: initialize struct dog
 * @d: paramter of init_dog
 * @name: parameter of init_dog
 * @age: parameter of init_dog
 * @owner: parameter of init_dog
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
