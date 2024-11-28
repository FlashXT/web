// wap to delete an element from different conditions.
// 1. Beginning.
// 2. End.
// 3. Specified Position.

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void insertAtBeginning(struct Node **head, int value)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = *head;
    *head = newNode;
}

void deleteAtBeginning(struct Node **head)
{
    if (*head == NULL)
    {
        printf("\nLinked List is Already Empty.");
        return;
    }

    struct Node *temp = *head;
    *head = (*head)->next;
    free(temp);
}

void deleteAtEnd(struct Node **head)
{
    if (*head == NULL)
    {
        printf("\nLinked List is Already Empty.");
        return;
    }

    struct Node *temp = *head;
    struct Node *prev = NULL;

    while (temp->next != NULL)
    {
        prev = temp;
        temp = temp->next;
    }

    if (prev == NULL)
    {
        *head = NULL;
    }
    else
    {
        prev->next = NULL;
    }
    free(temp);
}

void deleteAtPosition(struct Node **head, int position)
{
    if (*head == NULL)
    {
        printf("\nLinked List is Already Empty.");
        return;
    }

    struct Node *temp = *head;
    struct Node *prev = NULL;

    int i;
    if (position == 1)
    {
        *head = temp->next;
        free(temp);
        return;
    }

    for (i = 1; temp != NULL && i < position; i++)
    {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL)
    {
        printf("\nInvalid Position.");
        return;
    }
    prev->next = temp->next;
    free(temp);
}

void displayList(struct Node *head)
{
    struct Node *temp = head;

    while (temp != NULL)
    {
        printf("%d  ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main()
{
    struct Node *head = NULL;

    insertAtBeginning(&head, 3);
    insertAtBeginning(&head, 2);
    insertAtBeginning(&head, 1);
    insertAtBeginning(&head, 4);
    insertAtBeginning(&head, 6);
    insertAtBeginning(&head, 8);
    insertAtBeginning(&head, 7);

    printf("\nLinked List:\n");
    displayList(head);

    deleteAtBeginning(&head);
    printf("\nLinked List after Deleting at the Beginning:\n");
    displayList(head);

    deleteAtEnd(&head);
    printf("\nLinked List after Deleting at the End:\n");
    displayList(head);

    deleteAtPosition(&head, 2);
    printf("\nLinked List after deleting at a specific position:\n");
    displayList(head);
    printf("\n");
    return 0;
}
