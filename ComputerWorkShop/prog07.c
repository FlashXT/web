// input in array and display : duplicate elements

#include <stdio.h>

int main()
{
    int i, n, count = 0;
    printf("Enter Array size: ");
    scanf("%d", &n);
    int dabba[n];

    for (i = 0; i < n; i++)
    {
        printf("Enter element %d : ", i + 1);
        scanf("%d", &dabba[i]);
    }
    printf("\nArray Created: ");

    for (i = 0; i < n; i++)
    {
        printf("%d  ", dabba[i]);
    }
    printf("\n");

    printf("\nDuplicate Elements: ");
    for (i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (dabba[i] == dabba[j])
            {
                printf("%d   ", dabba[i]);
                count++;
            }
        }
    }
    if (!count)
        printf("Duplicate elements not found.\n\n");
    return 0;
}
