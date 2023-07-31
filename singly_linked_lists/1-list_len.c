#include <stdio.h>
#include "lists.h"
/**
 * list_len - compte le nbre d'éléments
 * Description: compte les elements
 * @h: pointeur de type struct
 * Return: renvoi le nbre de noeuds
*/
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
