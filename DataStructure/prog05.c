// wap to add nodes to linked list.

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct LinkedList
{
    struct Node *head;
};

void addNode(struct LinkedList *list, int value)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    if (list->head == NULL)
    {
        list->head = newNode;
        return;
    }

    struct Node *current = list->head;

    while (current->next != NULL)
    {
        current = current->next;
    }
    current->next = newNode;
}

int main()
{
    struct LinkedList list;
    list.head = NULL;
    addNode(&list, 5);
    addNode(&list, 10);
    addNode(&list, 15);

    struct Node *current = list.head;

    while (current != NULL)
    {
        printf("%d  ", current->data);
        current = current->next;
    }

    printf("\n");
    return 0;
}
