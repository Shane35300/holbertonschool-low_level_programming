#include <stdio.h>
#include <stdlib.h>
#include "header.h"
#include <stdio.h>

// Fonction pour ajouter un nouvel élément à la liste
void append(struct Node **head, int newData) {
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Erreur : Impossible d'allouer de la mémoire pour le nouvel élément.\n");
        exit(1);
    }

    newNode->data = newData;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
    } else {
        struct Node *current = *head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newNode;
    }
}

// Fonction pour afficher les éléments de la liste
void displayList(struct Node *head) {
    printf("Liste chaînée : ");
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

// Fonction pour libérer la mémoire allouée pour la liste
void freeList(struct Node *head) {
    struct Node *current = head;
    struct Node *nextNode;
    while (current != NULL) {
        nextNode = current->next;
        free(current);
        current = nextNode;
    }
}
