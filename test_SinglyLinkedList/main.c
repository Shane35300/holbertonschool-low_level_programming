#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main()
{
    struct Node *head = NULL;

    // Ajout de quelques éléments à la liste
    append(&head, 10);
    append(&head, 20);
    append(&head, 30);
	append(&head, 69);

    // Affichage des éléments de la liste
    displayList(head);

    // Libération de la mémoire allouée pour la liste
    freeList(head);

    return 0;
}
