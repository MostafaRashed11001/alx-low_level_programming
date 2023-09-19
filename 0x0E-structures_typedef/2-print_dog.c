#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints information about a struct dog
 * @d: Pointer to a struct dog
 *
 * Description: This function prints the information about a struct dog
 * including its name, age, and owner. If any of these fields is NULL,
 * "(nil)" is printed as a placeholder.
 */
void print_dog(struct dog *d)
{
	/* Check if the dog pointer is not NULL */
	if (d != NULL)
	{
		/* Print the dog's name or "(nil)" if it's NULL */
		printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");

		/* Print the dog's age */
		printf("Age: %f\n", (d->age >= 0) ? d->age : 0.0);

		/* Print the dog's owner or "(nil)" if it's NULL */
		printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
	}
}
