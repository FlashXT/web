// find max , min in 3 variables

#include<stdio.h>

void max(int, int, int);
void min(int, int, int);

int main()
{
    int a, b, c;
    printf("\nEnter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    max(a, b, c);
    min(a, b, c);
    return 0;
}

void max(int a, int b, int c)
{
    if(a>b && a>c) printf("\nMax Value: %d", a);
    else if (b>c && b>a) printf("\nMax Value: %d", b);
    else printf("\nMax Value: %d", c);
}

void min(int a, int b, int c)
{
    if(a<b && a<c) printf("\nMin Value: %d", a);
    else if (b<c && b<a) printf("\nMin Value: %d", b);
    else printf("\nMin Value: %d", c);
}
