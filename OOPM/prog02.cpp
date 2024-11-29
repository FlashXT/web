// Write a program to read three numbers and print the largest of given three number.

#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "\nenter first number : ";
    cin >> a;
    cout << "\nenter second number : ";
    cin >> b;
    cout << "\nenter third number : ";
    cin >> c;
    if (a > b && a > c)
    {
        cout << "\ngreater is A: " << a;
    }
    else if (b > a && b > c)
    {
        cout << "\ngreater is B: " << b;
    }
    else
    {
        cout << "\ngreater is C: " << c;
    }
    return 0;
}

// end
