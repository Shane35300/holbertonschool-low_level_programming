#ifndef HEADER_H
#define HEADER_H
// Définition de la structure du nœud de la liste
struct Node {
    int data;
    struct Node *next;
};

void append(struct Node **head, int newData);
void displayList(struct Node *head);
void freeList(struct Node *head);

#endif /* HEADER_H */
