#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
* add_dnodeint - fonction
* Description: ajout new node at the beginning
* @head: head node given
* @n: value given to the new node
* Return: return the adresse of the new node
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *ptr;

	ptr = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (ptr == NULL)
	return (NULL);

	ptr->n = n;
	ptr->prev = NULL;

	if (*head == NULL)
	{
		ptr->next = NULL;
		*head = ptr;
		return (*head);
	}
	else
	{
		ptr->next = *head;
		*head = ptr;
	}
	return (*head);
}
