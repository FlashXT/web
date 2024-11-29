#include <iostream>
using namespace std;

class student
{
protected:
    int rollno;
public:
    void getrollno();
    void showrollno();
};

void student::getrollno()
{
    cout<<"enter Roll no: ";
    cin>>rollno;
}

void student::showrollno()
{
    cout<<"Roll no: "<< rollno<<endl;
}

class test : public student
{
protected:
    int H, M, E;
public:
    void getmarks();
    void showmarks();
};

void test::getmarks()
{
    cout << "enter marks of hindi: ";
    cin >> H;
    cout << "\n enter marks of maths: ";
    cin >> M;
    cout << "enter marks of english: ";
    cin >> E;
}

void test::showmarks()
{
    cout << "Marks of various subjects are:" << H << M << E;
}

class Result : public test
{
protected:
    int total;
public:
    void display();
};

void Result::display()
{
    getrollno();
    getmarks();
    total = H + M + E;
    cout << "Total =" << total;
    showrollno();
    showmarks();
}

int main()
{
    Result obj;
    obj.getrollno();
    obj.showrollno();
    obj.display();
}
