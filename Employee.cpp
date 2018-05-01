#include <iostream>
#include <string>
using namespace std;
#include "Employee.h"

int main()
{

	Employee employee1;
	Employee employee2;
	Employee employee3;

	employee1.setName(" Susan Meyers ");
	employee1.setIdNumber(47899);
	employee1.setDepartment(" Accounting ");
	employee1.setPosition(" Vice President ");

	employee2.setName(" Mark Jones ");
	employee2.setIdNumber(39119);
	employee2.setDepartment(" IT ");
	employee2.setPosition(" Programmer ");

	employee3.setName(" Joy Rogers ");
	employee3.setIdNumber(81774);
	employee3.setDepartment(" Manufactoring ");
	employee3.setPosition(" Engineer ");


	cout << "\nDisplaying Employee Information : " << endl;
	cout << "\nEmployee # 1 : " << endl;
	cout << "Name : " << employee1.getName() << endl;
	cout << "ID Number : " << employee1.getIdNumber() << endl;
	cout << "Department : " << employee1.getDepartment() << endl;
	cout << "Position : " << employee1.getPosition() << endl;

	cout << "\nEmployee # 2 : " << endl;
	cout << "Name : " << employee2.getName() << endl;
	cout << "ID Number : " << employee2.getIdNumber() << endl;
	cout << "Department : " << employee2.getDepartment() << endl;
	cout << "Position : " << employee2.getPosition() << endl;

	cout << "\nEmployee # 3 : " << endl;
	cout << "Name : " << employee3.getName() << endl;
	cout << "ID Number : " << employee3.getIdNumber() << endl;
	cout << "Department : " << employee3.getDepartment() << endl;
	cout << "Position : " << employee3.getPosition() << endl;

	system("pause");
	return 0;
}


