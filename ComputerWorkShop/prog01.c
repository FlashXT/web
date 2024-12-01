// wap to print natural numbers and sum of natural numbers

#include <stdio.h>

int main()
{
    int n, i, sum=0;
    printf("\nEnter the range of natural numbers: ");
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("\nwarning: Enter only natural numbers\n");
    }
    else
    {
        printf("\nNumbers: ");

        for(i=1;i<=n;i++)
        {
            printf("%d  ", i);
            sum+=i;
        }
    }
    // sum = n * (n + 1) / 2; // another sum formula
    printf("\nSum: %d\n", sum);
    return 0;
}
