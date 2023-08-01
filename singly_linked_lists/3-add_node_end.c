#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - ajout element à la fin
 * Description: ajout element à la fin
 * @head: pointeur de type struct
 * @str: string to copy
 * Return: renvoi le nbre de noeuds
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;
	list_t *temp;


	newNode = (list_t *)malloc(sizeof(list_t));

	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->str = strdup(str);

	if (newNode->str == NULL)
	return (NULL);

	newNode->len = strlen(str);
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	temp = *head;

	while (temp->next != NULL)
	temp = temp->next;

	temp->next = newNode;

	return (*head);
}
