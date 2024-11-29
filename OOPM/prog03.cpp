// Write a program to swap two number using third variable.

#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x, y;
    cout << "\nentr two intgrs : \n";
    cin >> x >> y;
    swap(x, y);
    cout << "\nswapped x : " << x;
    cout << "\nswapped y : " << y;
    return 0;
}
