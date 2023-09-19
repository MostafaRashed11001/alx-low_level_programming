#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees memory allocated for a struct dog
 * @d: Pointer to a struct dog
 *
 * Description: This function frees the memory allocated for a struct dog,
 * including the dynamically allocated memory for the name and owner fields.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		/* Free the memory for the name */
		free(d->name);

		/* Free the memory for the owner */
		free(d->owner);

		/* Free the memory for the struct dog itself */
		free(d);
	}
}
