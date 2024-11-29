// Write a program to do arithmetic operations (Addition, Subtraction, Multiplication, division) using switch case.

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    char opr;

    cout << "\nArithmetic Operations...\n";
    cout << "enter first integer/float value: ";
    cin >> a;
    cout << "enter operator like +-*/%  : ";
    cin >> opr;
    cout << "enter second integer/float value: ";
    cin >> b;

    switch (opr)
    {
    case '+':
        cout << "Result: " << a + b << endl;
        break;
    case '-':
        cout << "Result: " << a - b << endl;
        break;
    case '*':
        cout << "Result: " << a * b << endl;
        break;
    case '/':
        if(b!=0)
        {
            cout << "Result: " << a / b << endl;
        }
        else
        {
            cout << "undefined / infinity" << endl;
        }
        break;
    case '%':
        cout << "Result: " << a % b << endl;
        break;
    default:
        cout << "\nEnter correct operator...";
        break;
    }
    return main();
}
