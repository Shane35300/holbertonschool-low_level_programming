#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - fonction
 * Descrption: free
 * @d: ptr
 * Return: retourne
*/
void free_dog(dog_t *d)
{
	if (d == NULL)
	return;

	free(d->name);
	free(d->owner);
	free(d);
}
