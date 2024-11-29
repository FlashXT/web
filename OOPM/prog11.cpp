// wap to show concept of class with functon
// definition outside the class

#include <iostream>
using namespace std;

class company
{
	int employeeID;
	int employeeSalary;
	string employeeName;
	string employeeAddress;

	public:
		void getEmployeeID();
		void getEmployeeSalary();
		void getEmployeeName();
		void getEmployeeAddress();
		void displayData();
};

void company::getEmployeeID()
{
	cout << "\nEnter your Employee ID: ";
	cin >> employeeID;
	cout<<endl;
}

void company::getEmployeeSalary()
{
	cout << "\nEnter your Employee Salary: ";
	cin>>employeeSalary;
	cout<<endl;
}

void company::getEmployeeName()
{
	cout<<"\nEnter Employee Name: ";
	getline(cin, employeeName);
	cout<<endl;
}

void company::getEmployeeAddress()
{
	cout<<"\nEnter Employee Address: ";
	cin.ignore();
	getline(cin, employeeAddress);
	cout<<endl;
}

void company::displayData()
{
	cout<<"\n\n>> Your Data <<";
	cout<<"\nEmployee Name : "<<employeeName;
	cout<<"\nEmployee ID : "<<employeeID;
	cout<<"\nEmployee Salary : "<<employeeSalary;
	cout<<"\nEmployee Address : "<<employeeAddress;
}

int main()
{
	company employee1;
	employee1.getEmployeeName();
	employee1.getEmployeeID();
	employee1.getEmployeeSalary();
	employee1.getEmployeeAddress();
	employee1.displayData();
	return 0;
}
