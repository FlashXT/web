// input in array and display

#include <stdio.h>

int main()
{
    int i, n;
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

    return 0;
}
