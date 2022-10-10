#include "dog.h"
#include "stdlib.h"
#include "string.h"

/**
 * new_dog - dog
 * @name: gfhf
 * @age: bfgg
 * @owner: gfhhyyg
 * Return: newdog
 */
dog_t *new_dog(char *name, float age, char *owner)
{

	dog_t *ptr = malloc(sizeof(dog_t));

	if (ptr == NULL)
		return (NULL);
	ptr->name = strdup(name);
	ptr->age = age;
	ptr->owner = strdup(owner);
	return (ptr);
}
