#ifndef LIST_H
#define LIST_H
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);
{
	dlistint_t *ptr1
	dlistint_t *ptr2
	dlistint_t *ptr3
	int i = 0;
	ptr2 = head;

	while i < int(index)
	{
		ptr2 = ptr2->next
	}
	ptr1 = ptr2->prev;
	ptr3 = ptr2->next;

	ptr1->next = ptr3
	ptr3->prev = ptr1
	free(ptr2)

}
#endif /* LIST_H */
