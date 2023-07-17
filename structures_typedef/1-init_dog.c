#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - fonction
 * Descrption: initialise
 * @d: d
 * @name: name
 * @age: age
 * @owner: owner
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = (char *)malloc(strlen(name) + 1);

	if (d->name == NULL)
	{
		free(d->name);
		return;
	}
	strcpy(d->name, name);

	d->age = age;

	d->owner = (char *)malloc(strlen(owner) + 1);

	if (d->owner == NULL)
	{
		free(d->owner);
		return;
	}
	strcpy(d->owner, owner);
}
