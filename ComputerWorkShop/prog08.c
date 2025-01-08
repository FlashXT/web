// functions

#include <stdio.h>

void sum()
{
    float a, b, c;
    printf("\nPerforming Sum");
    printf("\nEnter values of a & b: ");
    scanf("%f %f", &a, &b);
    c = a + b;
    printf("Sum: %f\n", c);
}

void div()
{
    float d, e, f;
    printf("\n\nPerforming Division");
    printf("\nEnter values of d & e: ");
    scanf("%f %f", &d, &e);
    f = d / e;
    printf("Sum: %f\n", f);
}

void sub()
{
    float g, h, i;
    printf("\n\nPerforming Subtraction");
    printf("\nEnter values of g & h: ");
    scanf("%f %f", &g, &h);
    i = g - h;
    printf("Sum: %f\n", i);
}

int main()
{
    sum();
    div();
    sub();
    return 0;
}
