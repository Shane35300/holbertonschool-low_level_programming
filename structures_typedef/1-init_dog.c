#include <stdio.h>
#include <string.h>
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
	strcpy(d->name, "Poppy");
	d->age = 3.5;
	strcpy(d->owner, "Bob");
}
