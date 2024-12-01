// wap to search an element in the array using  Linear Search

#include <stdio.h>

int main()
{
    int i, item, n;
    printf("\nEnter Array size: ");
    scanf("%d", &n);
    int dabba[n];

    for (i = 0; i < n; i++)
    {
        printf("Enter element: ");
        scanf("%d", &dabba[i]);
    }

    printf("\nEnter item to search: ");
    scanf("%d", &item);
    for (i = 0; i <= n; i++)
    {
        if (item == dabba[i])
        {
            printf("\nItem found at location %d", i + 1);
            break;
        }
    }
    if (i > n)
        printf("\nItem does not exist.");
    return 0;
}
