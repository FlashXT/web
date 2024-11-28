// wap to perform Arithmatic Operations.

#include <stdio.h>

int main()
{
    int a, b, sum, subt, prod, div, mod;
    printf("\nEnter two int:\n");
    scanf("%d %d", &a, &b);

    sum = a + b;
    subt = a - b;
    prod = a * b;
    div = a / b;
    mod = a % b;

    printf("Sum: %d\n", sum);
    printf("Subtraction: %d\n", subt);
    printf("Product: %d\n", prod);
    printf("Division: %d\n", div);
    printf("Mod: %d\n", mod);
    return 0;
}
