//

#include<stdio.h>

int main()
{
    int a = 10;
    int *p = &a;
    
    printf("\nValue of a : %d", a);
    printf("\nValue of pointer p : %p", p);
    printf("\nMemory Address of a : %p", &a);
    printf("\nDereferenced p : %d\n", *p);
    return 0;
}
