// functions

#include <stdio.h>

void sum()
{
    float a, b, c;
    printf("\n\nPerforming Sum");
    printf("\nEnter values of a & b:\n");
    scanf("%f %f", &a, &b);
    c = a + b;
    printf("\nSum: %f", c);
}

void div()
{
    float d, e, f;
    printf("\n\nPerforming Division");
    printf("\nEnter values of d & e:\n");
    scanf("%f %f", &d, &e);
    f = d / e;
    printf("\nSum: %f", f);
}

void sub()
{
    float g, h, i;
    printf("\n\nPerforming Subtraction");
    printf("\nEnter values of g & h:\n");
    scanf("%f %f", &g, &h);
    i = g - h;
    printf("\nSum: %f", i);
}

int main()
{
    sum();
    div();
    sub();
    return 0;
}
