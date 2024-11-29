// Write a program to print Fibonacci series upto n number of term( Fibonacci series: 0,1,1,2,3,5,8,13, 21,… )

#include <iostream>
using namespace std;

void fibonacci(int n)
{
    int a = 0, b = 1;

    if (n <= 0)
    {
        cout << "enter positive integer" << endl;
        return;
    }
    else if (n == 1)
    {
        cout << a << endl;
        return;
    }
    cout << a << ", " << b;

    for (int i = 3; i <= n; i++)
    {
        int newTerm = a + b;
        cout << ", " << newTerm;
        a = b;
        b = newTerm;
    }
    cout << endl;
}

int main()
{
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;
    fibonacci(n);
    return 0;
}