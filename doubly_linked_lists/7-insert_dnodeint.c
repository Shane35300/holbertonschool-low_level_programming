#include <stdio.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - nom de la fonction
 * Description: insert a node
 * @h: head given
 * @idx: index
 * @n: valeur
 * Return: return
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *ptr1;
	dlistint_t *ptr2;
	dlistint_t *ptr3;

	if (*h == NULL || idx == 0)
	{
		ptr1 = add_dnodeint(h, n);
		return (ptr1);
	}
	ptr1 = *h;
	ptr2 = *h;

	for (i = 0 ; i < idx - 1 ; i++)
	{
		ptr1 = ptr1->next;

		if (ptr1 == NULL)
		return (NULL);
	}
	ptr3 = ptr1->next;
	ptr1->next = NULL;
	ptr2 = add_dnodeint_end(&ptr2, n);
	for (i = 0 ; i < idx ; i++)
	{
		ptr2 = ptr2->next;
	}
	ptr2->next = ptr3;
	ptr3->prev = ptr2;
	return (ptr2);
}
