// wap to implement operations in Binary Search Tree.

#include <stdio.h>
#include <stdlib.h>

typedef struct bst
{
    int data;
    struct bst *left, *right;
} node;

void insert(node *, node *);
void inorder(node *);
node *search(node *, int, node **);
void del(node **, int);

int main()
{
    int choice;
    char ans;
    int key;
    node *New, *root, *temp, *parent;
    node *get_node();
    root = NULL;

    printf("\nProgram For Binary Search Tree\n");

    do
    {
        printf("\n1. Create\n2. Search\n3. Delete\n4. Display\n5. Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            do
            {
                New = get_node();
                printf("\nEnter The Element: ");
                scanf("%d", &New->data);
                if (root == NULL)
                    root = New;
                else
                    insert(root, New);
                printf("\nDo u want to enter more elements?(y/n): ");
                scanf(" %c", &ans);
            } while (ans == 'y');
            break;

        case 2:
            printf("\nEnter The Element Which You Want To Search: ");
            scanf("%d", &key);
            temp = search(root, key, &parent);
            printf("\nParent of Node %d is %d", temp->data, parent->data);
            break;

        case 3:
            printf("\nEnter The Element U Want To Delete: ");
            scanf("%d", &key);
            del(&root, key);
            break;

        case 4:
            if (root == NULL)
                printf("\nTree is Not Created");
            else
            {
                printf("\nThe Tree is: ");
                inorder(root);
                printf("\n");
            }
            break;
        case 5:
            exit(0);
        }
    } while (choice <= 5);
    return 0;
}

node *get_node()
{
    node *temp;
    temp = (node *)malloc(sizeof(node));
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

void insert(node *root, node *New)
{
    if (New->data < root->data)
    {
        if (root->left == NULL)
            root->left = New;
        else
            insert(root->left, New);
    }
    if (New->data > root->data)
    {
        if (root->right == NULL)
            root->right = New;
        else
            insert(root->right, New);
    }
}

node *search(node *root, int key, node **parent)
{
    node *temp;
    temp = root;

    while (temp != NULL)
    {
        if (temp->data == key)
        {
            printf("\nThe %d Element is Present\n", temp->data);
            return temp;
        }
        *parent = temp;

        if (temp->data > key)
            temp = temp->left;
        else
            temp = temp->right;
    }
    return NULL;
}

void inorder(node *temp)
{
    if (temp != NULL)
    {
        inorder(temp->left);
        printf("%d ", temp->data);
        inorder(temp->right);
    }
}

void del(node **root, int key)
{
    node *temp, *parent, *temp_succ;
    temp = search(*root, key, &parent);

    if (temp == NULL)
    {
        printf("\nElement not found!\n");
        return;
    }

    if (temp->left != NULL && temp->right != NULL)
    {
        parent = temp;
        temp_succ = temp->right;

        while (temp_succ->left != NULL)
        {
            parent = temp_succ;
            temp_succ = temp_succ->left;
        }

        temp->data = temp_succ->data;

        if (parent->left == temp_succ)
        {
            parent->left = temp_succ->right;
        }
        else
        {
            parent->right = temp_succ->right;
        }
        free(temp_succ);
    }
    else
    {
        node *child = (temp->left != NULL) ? temp->left : temp->right;

        if (parent == NULL)
        {
            *root = child;
        }
        else if (parent->left == temp)
        {
            parent->left = child;
        }
        else
        {
            parent->right = child;
        }
        free(temp);
    }
    printf("\nNode deleted successfully!\n");
}
