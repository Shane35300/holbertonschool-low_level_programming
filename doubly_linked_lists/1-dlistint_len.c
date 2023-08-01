#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - function
 * Description: count the numbers of nodes
 * @h: pointer
 * Return: retourne le nbre de noeuds
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	dlistint_t *temp = (dlistint_t *)h;

	if (temp == NULL)
	return (0);

	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}
