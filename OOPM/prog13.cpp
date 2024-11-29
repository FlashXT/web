// Write a program to show static data member and static member functions.

#include <iostream>
using namespace std;

class Family
{
    string name;
    int age;
    string gender;
    static int totalMembers;

public:
    void setData()
    {
        cout <<"Enter new member details.\n";
        cout << "name: ";
        cin >> name;
        cout << "age: ";
        cin >> age;
        cout << "gender: ";
        cin >> gender;
        cout<<"New Member Added."<<endl;
        totalMembers++;
    }

    void showData()
    {
        cout << "\nName: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Gender: " << gender << endl;
    }

    static void getTotalMem()
    {
        cout << "Total Members in this Family: " << totalMembers << endl;
    }
};

Family parent1, parent2, child1, child2;
int Family::totalMembers = 0;

int main()
{
    cout << "\n~ Family Database ~\n" << endl;
    parent1.setData();
    parent2.setData();
    child1.setData();
    child2.setData();

    Family::getTotalMem();

    cout << "Data Saved." << endl;
    parent1.showData();
    parent2.showData();
    child1.showData();
    child2.showData();
    return 0;
}
