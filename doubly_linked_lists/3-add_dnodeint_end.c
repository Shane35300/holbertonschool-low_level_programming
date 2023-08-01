#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
* add_dnodeint_end - fonction
* Description: ajout new node at the end
* @head: head node given
* @n: value given to the new node
* Return: return the adresse of the new node
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr;
	dlistint_t *deffileur;

	ptr = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (ptr == NULL)
	return (NULL);

	ptr->n = n;
	ptr->next = NULL;

	if (*head == NULL)
	{
		ptr->prev = NULL;
		*head = ptr;
		return (ptr);
	}
	else
	{
		deffileur = *head;

		while (deffileur->next != NULL)
		{
			deffileur = deffileur->next;
		}
		deffileur->next = ptr;
		ptr->prev = deffileur;
	}
	return (*head);
}
