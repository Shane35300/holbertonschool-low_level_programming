#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - function
 * Description: print all the elements of a list
 * @h: pointer
 * Return: retourne le nbre de noeuds
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	dlistint_t *temp = (dlistint_t *)h;

	if (temp == NULL)
	return (0);

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		count++;
	}
	return (count);
}
