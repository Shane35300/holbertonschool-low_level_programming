#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * delete_dnodeint_at_index - nom de la fonction
 * Description: delete a node
 * @head: head given
 * @index: index
 * Return: return
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr1;
	dlistint_t *ptr2;
	dlistint_t *ptr3;
	unsigned int i;

	if (*head == NULL)
	return (-1);

	ptr1 = *head;

	if (index == 0)
	{
		*head = ptr1->next;
		free(ptr1);
	}
	else
	{
		for (i = 0 ; i < index - 1 ; i++)
		{
			ptr1 = ptr1->next;

			if (ptr1->next == NULL)
			return (-1);
		}
		ptr2 = ptr1->next;
		ptr3 = ptr2->next;
		ptr1->next = ptr3;

		if (ptr3 != NULL)
		ptr3->prev = ptr1;

		free(ptr2);
	}
	return (1);
}
