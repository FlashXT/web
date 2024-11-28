// wap to find average of n nums using array.

#include<stdio.h>

int main()
{
    int n, i;
    float sum=0, avg;
    printf("\nEnter no. of elements: ");
    scanf("%d", &n);
    int dabba[n];

    for(i=0;i<n;i++)
    {
        printf("\nEnter element %d : ", i+1);
        scanf("%d", &dabba[i]);
        sum+=dabba[i];
    }

    float t=n;
    avg=sum/t;
    printf("\nAverage of given Array: %f\n", avg);
    return 0;
}
