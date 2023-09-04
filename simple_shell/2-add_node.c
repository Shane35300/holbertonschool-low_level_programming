#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - compte le nbre d'éléments
 * Description: compte les elements
 * @head: pointeur de type struct
 * @str: string to copy
 * Return: renvoi le nbre de noeuds
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;


	newNode = (list_t *)malloc(sizeof(list_t));

	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->str = strdup(str);

	if (newNode->str == NULL)
	return (NULL);

	newNode->len = strlen(str);

	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
