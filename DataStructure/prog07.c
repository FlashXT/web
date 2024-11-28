// wap to find smallest and largest element in an array.

#include<stdio.h>

int main()
{
    int n, i;
    printf("\nEnter no. of elements: ");
    scanf("%d", &n);
    int box[n];

    for(i=0;i<n;i++)
    {
        printf("\nEnter element %d : ", i+1);
        scanf("%d", &box[i]);
    }

    int small = box[0];
    int large = box[0];

    for(i=0; i<n; i++)
    {
        if(box[i] > large) large = box[i];
        if(box[i]<small) small=box[i];
    }

    printf("\nLargest Element: %d", large);
    printf("\nSmallest Element: %d", small);
    printf("\n");
    return 0;
}
