// wap to find cube of given range.

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i, n, result, sum=0;
    printf("enter range: ");
    scanf("%d", &n);

    for(i=1;i<=n;i++)
    {
        result=i*i*i;
        sum+=result;
        printf("\nCube of %d: %d", i, result);
    }
    printf("\nSum: %d", sum);
    return 0;
}
