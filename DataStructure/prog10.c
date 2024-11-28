// Tower of Hanoi

#include<stdio.h>

void towers(int num, char, char, char);

int main()
{
    int num;
    printf("Enter number of Disks : ");
    scanf("%d", &num);
    printf("Sequence of moves involved in Tower of Hanoi are:\n");
    towers(num, 'A', 'C', 'B');
    printf("\n");
    return 0;
}

void towers(int num, char fromRod, char toRod, char auxRod)
{
    if (num == 1)
    {
        printf("\nMove disk 1 from Rod %c to Rod %c", fromRod, toRod);
        return;
    }

    towers(num - 1, fromRod, auxRod, toRod);
    printf("\nMove disk %d from Rod %c to Rod %c", num, fromRod, toRod);
    towers(num - 1, auxRod, toRod, fromRod);
}
