// wap to read n numbers of values in an array and display it  in reverse order.

#include<stdio.h>

int main()
{
    int n, i;
    printf("\nEnter no. of elements: ");
    scanf("%d", &n);
    int bucket[n];

    for(i=0;i<n;i++)
    {
        printf("Enter element %d : ", i+1);
        scanf("%d", &bucket[i]);
    }

    printf("\nGiven Array: \n");
    for(i=0;i<n;i++)
    {
        printf("%d ", bucket[i]);
    }

    printf("\nReversed Array:\n");
    for(i=n-1;i>=0;i--)
    {
        printf("%d ", bucket[i]);
    }
    return 0;
}
