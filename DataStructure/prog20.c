// wap to implement quick sort method to arrange a list of integers in ascending order.

#include <stdio.h>
#define MAX 10

void swap(int *m, int *n)
{
    int temp;
    temp = *m;
    *m = *n;
    *n = temp;
}

int getKeyPosition(int x, int y)
{
    return ((x + y) / 2);
}

void quickSort(int list[], int m, int n)
{
    int key, i, j, k;

    if (m < n)
    {
        k = getKeyPosition(m, n);
        swap(&list[m], &list[n]);
        key = list[m];
        i = m + 1;
        j = n;

        while (i <= j)
        {
            while ((i <= n) && (list[i] <= key))
                i++;
            while ((j >= m) && (list[j] > key))
                j--;
            if (i < j)
                swap(&list[i], &list[j]);
        }
        swap(&list[m], &list[j]);
        quickSort(list, m, j - 1);
        quickSort(list, j + 1, n);
    }
}

void readData(int list[], int n)
{
    int j;
    printf("\nEnter the elements...\n");
    for (j = 0; j < n; j++)
    {
        printf("enter value %d :  ", j + 1);
        scanf("%d", &list[j]);
    }
}

void printData(int list[], int n)
{
    int j;
    for (j = 0; j < n; j++)
    {
        printf("%d\t", list[j]);
    }
}

int main()
{
    int list[MAX], num;
    printf("\nEnter the number of elements max(10): ");
    scanf("%d", &num);
    readData(list, num);
    printf("\n\nElements in the list before sorting are:\n");
    printData(list, num);
    quickSort(list, 0, num-1);
    printf("\n\nElements in the list after sorting are:\n");
    printData(list, num);
    return 0;
}
