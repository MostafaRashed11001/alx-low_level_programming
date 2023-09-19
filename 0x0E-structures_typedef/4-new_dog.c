#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Creates a new struct dog
 * @name: Pointer to a character (string) representing the dog's name
 * @age: Floating-point number representing the dog's age
 * @owner: Pointer to a character (string) representing the dog owner's name
 *
 * Description: This function creates a new struct dog, allocates memory for
 * copies of the name and owner strings, and returns a pointer to the new dog.
 * If memory allocation fails, it returns NULL.
 *
 * Return: Pointer to the newly created struct dog
 * or NULL if memory allocation fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_Dog;
	char *newName, *newOwner;
	int namelen = 0, ownerlen = 0, i;

	/* Calculate the lengths of name and owner strings */
	while (name[namelen] != '\0')
		namelen++;
	while (owner[ownerlen] != '\0')
		ownerlen++;
	/* Allocate memory for the new dog struct */
	new_Dog = malloc(sizeof(dog_t));

	if (new_Dog == NULL)
		return (NULL);
	/* Allocate memory for copies of name and owner strings */
	newName = malloc(namelen + 1);
	newOwner = malloc(ownerlen + 1);

	if (newName == NULL || newOwner == NULL)
	{
		free(new_Dog);
		free(newName);
		free(newOwner);
		return (NULL);
	}
	/* Copy name and owner into the allocated memory */
	for (i = 0; i <= namelen; i++)
		newName[i] = name[i];
	for (i = 0; i <= ownerlen; i++)
		newOwner[i] = owner[i];
	/* Initialize the new dog */
	new_Dog->name = newName;
	new_Dog->age = age;
	new_Dog->owner = newOwner;

	return (new_Dog);
}
