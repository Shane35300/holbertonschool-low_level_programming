#include <stdio.h>
#include "lists.h"
/**
 * print_list - affiche une liste
 * Description: fonction ayant pour but d'afficher une liste
 * @h: pointeur de type struct
 * Return: renvoi le nbre de noeuds
*/
size_t print_list(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
			count++;
		}
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}

	return (count);
}
