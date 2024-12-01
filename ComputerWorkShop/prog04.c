#include <stdio.h>
#include<stdlib.h>

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
    printf("\nSum: %d", sum);

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
    printf("\nMax: %d\nMin: %d\n", max, min);

    int count = 0;
    printf("\nDuplicate Elements: ");
    for (i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (dabba[i] == dabba[j])
            {
                printf("%d, ", dabba[i]);
                count++;
            }
        }
    }
    if (!count)
        printf("Duplicate elements not found.\n\n");
    return 0;
}
