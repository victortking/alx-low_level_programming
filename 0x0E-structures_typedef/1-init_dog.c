#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes a struct variable
 * @d: initialized variable
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	       return;	

	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
