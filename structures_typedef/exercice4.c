#include <stdio.h>
#include "dog.h"
#include <string.h>
#include <stdlib.h>

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *pointeur;

	if (name == NULL || owner == NULL)
	return (NULL);

	pointeur = malloc(sizeof(dog_t));

	if (pointeur == NULL)
	{
		free(pointeur);
		return (NULL);
	}
	pointeur->name = (char *)malloc(strlen(name));

	if (pointeur->name == NULL)
	{
		free(pointeur->name);
		return (NULL);
	}
	strcpy(pointeur->name, name);

	pointeur->age = age;

	pointeur->owner = (char *)malloc(strlen(owner));

	if (pointeur->owner == NULL)
	{
		free(pointeur->owner);
		return (NULL);
	}
	strcpy(pointeur->owner, owner);

	return (pointeur);
}
