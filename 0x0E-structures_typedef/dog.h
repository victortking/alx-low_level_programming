#ifndef DOG_H
#define DOG_H

/**
 * struct dog - stores members for a dog profile
 * @name: dogs's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Description: dog's info and owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

#endif /* DOG_H */
