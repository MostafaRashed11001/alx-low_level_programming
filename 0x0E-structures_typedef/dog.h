#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structure to represent information about a dog
 * @name: Pointer to a character (string) representing the dog's name
 * @age: Floating-point number representing the dog's age
 * @owner: Pointer to a character (string) representing the dog's owner's name
 *
 * Description: This structure defines the attributes for representing
 * information about a dog, including the dog's name, age, and owner's name.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/*  prototype of function that initialize a variable of type struct dog */
void init_dog(struct dog *d, char *name, float age, char *owner);

/*  prototpe of function that prints a struct dog */
void print_dog(struct dog *d);

/* Define a new type dog_t as a new name for the type struct dog */
typedef struct dog dog_t;

/* prototype of function that creates a new dog */
dog_t *new_dog(char *name, float age, char *owner);

/* prototype of function that frees dogs */
void free_dog(dog_t *d);

#endif /* DOG_H */
