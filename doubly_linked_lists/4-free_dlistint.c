#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * free_dlistint - fonctun name
 * Description: libère la liste
 * @head: noeud de tête
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;

	if (head == NULL)
	return;

	while (head != NULL)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}
