#include <stdio.h>
#include "dog.h"

/**
 * init_dog - Initializes a struct dog
 * @d: Pointer to a struct dog to be initialized
 * @name: Pointer to a character (string) representing the dog's name
 * @age: Floating-point number representing the dog's age
 * @owner: Pointer to a character (string) representing the dog's owner's name
 *
 * Description: This function initializes a struct dog instance with the
 * provided name, age, and owner values.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	/* Check if the pointer to struct dog is not NULL */
	if (d != NULL)
	{
		/* Initialize the struct dog members */
		d->name  = name;
		d->age   = age;
		d->owner = owner;
	}
}
