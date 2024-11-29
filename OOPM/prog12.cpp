// wap to show concept of class with functon
// definition inside the class

#include <iostream>
using namespace std;

class area
{
    int side;
    int l, b;

public:
    void squareKaArea()
    {
        cout << "\nentr the side of sqaure in cm: ";
        cin >> side;
        cout << "\nArea of Square: " << side * side;
    }

    void reactangleKaArea()
    {
        cout << "\nentr the length of rectangle in cm: ";
        cin >> l;
        cout << "\nentr the breadth of rectangle in cm: ";
        cin >> b;
        cout << "\nArea of Rectangle: " << l * b;
    }
};

int main()
{
    area obj;
    obj.squareKaArea();
    obj.reactangleKaArea();
    return 0;
}
