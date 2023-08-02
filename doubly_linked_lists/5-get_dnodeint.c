#include <stdio.h>
#include "lists.h"
/**
 * get_dnodeint_at_index - nom de la fonction
 * Description: return the nth node of a linked list
 * @head: head given
 * @index: nth node
 * Return: return
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr;
	unsigned int i;

	ptr = head;
	i = 0;


	if (head == NULL)
	return (NULL);

	while (i < index)
	{
		ptr = ptr->next;
		i++;
	}
	if (ptr == NULL)
	{
		printf("(nil)");
		return (NULL);
	}

	else
	return (ptr);
}
