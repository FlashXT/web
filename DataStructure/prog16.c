// wap to search an element in the array using  binary Search

#include <stdio.h>
int main()
{
    int c, first, last, middle, n, search;
    printf("Enter Array size: ");
    scanf("%d", &n);
    int dabba[n];
    for (c = 0; c < n; c++)
    {
        printf("Enter element: ");
        scanf("%d", &dabba[c]);
    }
    printf("\nEnter value to find: ");
    scanf("%d", &search);
    first = 0;
    last = n - 1;
    middle = (first + last) / 2;
    
    while (first <= last)
    {
        if (dabba[middle] < search)
        {
            first = middle + 1;
        }
        else if (dabba[middle] == search)
        {
            printf("\n%d found at location %d.\n", search, middle + 1);
            break;
        }
        else
        {
            last = middle - 1;
        }
        middle = (first + last) / 2;
    }
    if (first > last)
    {
        printf("\nNot found! %d is not present in the list.\n", search);
    }
    return 0;
}
