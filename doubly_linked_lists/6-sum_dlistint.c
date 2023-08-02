#include <stdio.h>
#include "lists.h"
/**
 * sum_dlistint - nom de la fonction
 * Description: return the sum of alle the values of the list
 * @head: head given
 * Return: return
*/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;
	int sum;

	ptr = head;
	sum = 0;


	if (head == NULL)
	return (0);

	while (ptr != NULL)
	{
		sum = sum + ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
