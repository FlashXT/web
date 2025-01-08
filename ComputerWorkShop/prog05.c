// sum of given array

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

    int sum = 0;
    for (i = 0; i < n; i++)
    {
        sum += dabba[i];
    }
    printf("\nSum: %d\n\n", sum);
    return 0;
}
