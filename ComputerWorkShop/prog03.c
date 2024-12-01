// table of specific range

#include <stdio.h>

int main()
{
    int number, multiple, result;
    printf("enter a number: ");
    scanf("%d", &number);
    printf("enter table range: ");
    scanf("%d", &multiple);

    printf("Table of %d till %d multiple:\n",number, multiple);

    for(int i=1; i<=multiple; i++)
    {
        result = number * i;
        printf("%d * %d = %d\n",number, i, result);
    }

    return 0;
}
