#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - fonction
 * Descrption: print a struc dog
 * @d: d
*/
void print_dog(struct dog *d)
{
	if (d == NULL)
	return;

	printf("Name: %s\n", (d->name != NULL ? d->name : "(nil)"));

	if (d->age > 0)
	printf("Age: %g\n", d->age);

	else
	printf("Age: (nil)");

	printf("Owner: %s\n", (d->owner != NULL ? d->owner : "(nil)"));
}
