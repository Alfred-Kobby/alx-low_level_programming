#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - see decription
 * Description: a struct for dog
 * @name: name of dog
 * @age: age of dog
 * @owner: who is the owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif /* _DOG_H */
