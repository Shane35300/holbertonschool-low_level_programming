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
	list_t *temp = (list_t *)h;

	while (temp != NULL)
	{
		if (temp->str == NULL)
		{
			printf("[0] (nil)\n");
			temp = temp->next;
			count++;
		}
		printf("[%d] %s\n", temp->len, temp->str);
		temp = temp->next;
		count++;
	}

	return (count);
}
