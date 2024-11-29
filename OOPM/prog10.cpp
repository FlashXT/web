// Write a program to show dynamic array allocation.

#include <iostream>
using namespace std;

int main()
{
    int x;
    cout<<"enter size of array: ";
    cin>>x;

    int* dynamicArray = new int[x];
    if(dynamicArray == nullptr)
    {
        cout<<"Memory Allocation failed !"<<endl;
        return 1;
    }
    cout<<"enter "<<x<<" elements: "<<endl;

    for(int i=0;i<x;++i)
    {
        cin>>dynamicArray[i];
    }

    cout<<"you entered:"<<endl;
    
    for(int i=0; i<x; ++i)
    {
        cout<<dynamicArray[i]<<endl;
    }
    cout<<endl;
    delete[] dynamicArray;
    return 0;
}
