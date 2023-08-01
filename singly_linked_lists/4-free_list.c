#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * free_list - fonctun name
 * Description: libère la liste
 * @head: noeud de tête
*/

void free_list(list_t *head)
{
	list_t *ptr;

	if (head == NULL)
	return;

	while (head != NULL)
	{
		ptr = head->next;
		free(head->str);
		free(head);
		head = ptr;
	}
}
