// Write a program to find both largest and smallest number in an array of integers.

#include <iostream>
using namespace std;

int main()
{
    int n = 10;
    int arr[n] = {3, 13, 4, 14, 5, 11, 15, 6, 5, 3};

    int largest = arr[0];
    int smallest = arr[0];

    for (int i = 0; i < 10; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }

    cout << "\nLargest: " << largest;
    cout << "\nSmallest: " << smallest << endl;
    return 0;
}
