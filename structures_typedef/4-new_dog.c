#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - fonction
 * Descrption: initialise
 * @name: name
 * @age: age
 * @owner: owner
 * Return: retourne
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = (dog_t *)malloc(sizeof(dog_t));

	if (new_dog == NULL)
	return (NULL);

	new_dog->name = (char *)malloc(sizeof(char) * strlen(name) + 1);

	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	strcpy(new_dog->name, name);

	new_dog->owner = (char *)malloc(sizeof(char) * strlen(owner) + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	strcpy(new_dog->owner, owner);

	new_dog->age = age;

	return (new_dog);
}
