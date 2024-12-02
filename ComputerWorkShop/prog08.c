// functions

#include <stdio.h>

void sum()
{
    int a, b, c;
    printf("\nPerforming Sum\n");
    printf("\nEnter values of a & b:\n");
    scanf("%d %d", &a, &b);
    c = a + b;
    printf("\nSum: %d", c);
}

void div()
{
    int d, e, f;
    printf("\nPerforming Division\n");
    printf("\nEnter values of d & e:\n");
    scanf("%d %d", &d, &e);
    f = d / e;
    printf("\nSum: %d", f);
}

void sub()
{
    int g, h, i;
    printf("\nPerforming Subtraction");
    printf("\nEnter values of g & h:\n");
    scanf("%d %d", &g, &h);
    i = g - h;
    printf("\nSum: %d", i);
}

int main()
{
    sum();
    div();
    sub();
    return 0;
}
