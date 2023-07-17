#include <stdio.h>
#include <stdlib.h>
/**
 * free_dog - fonction
 * Descrption: free
 * @d: ptr
 * Return: retourne
*/
void free_dog(dog_t *d)
{
	free(my_dog->name);
	free(my_dog->owner);
	free(my_dog);
}
