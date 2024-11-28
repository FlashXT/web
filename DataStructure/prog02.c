// wap to swap 2 integers using these meth.
// 1. with 3rd var.
// 2. without 3rd var.
// 3. with bitwise XOR operation.

#include <stdio.h>
int a, b, x, y, c, d;

// with 3rd var:
void swapWithVar()
{
    int temp;
    printf("\nSwap With Var...\n");
    printf("Enter value of A: ");
    scanf("%d", &a);
    printf("Enter value of B: ");
    scanf("%d", &b);
    printf("You Entered\nA : %d\nB : %d", a, b);

    temp = a;
    a = b;
    b = temp;

    printf("\nNew Values after Swapping\nA : %d\nB : %d\n", a, b);
}

// without var:
void swapNoVar()
{
    printf("\nSwap Without Var...\n");
    printf("Enter value of X: ");
    scanf("%d", &x);
    printf("Enter value of Y: ");
    scanf("%d", &y);
    printf("You Entered\nA : %d\nB : %d", x, y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("\nNew Values after Swapping\nX : %d\nY : %d", x, y);
}

// with XOR
void swapXOR()
{
    printf("\nSwap With XOR...\n");
    printf("Enter value of C: ");
    scanf("%d", &c);
    printf("Enter value of D: ");
    scanf("%d", &d);
    printf("You Entered\nC : %d\nD : %d", c, d);
    c=c^d;
    d=c^d;
    c=c^d;
    printf("\nNew Values after Swapping\nC : %d\nD : %d", c, d);
}

int main()
{
    swapWithVar();
    swapNoVar();
    swapXOR();
    return 0;
}
