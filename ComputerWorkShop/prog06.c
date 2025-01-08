// input in array and find max, min

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

    int max = dabba[0];
    int min = dabba[0];

    for (i = 0; i < n; i++)
    {
        if (dabba[i] > max)
        {
            max = dabba[i];
        }
        if (dabba[i] < min)
        {
            min = dabba[i];
        }
    }
    printf("\nMax: %d\nMin: %d\n\n", max, min);
    return 0;
}
