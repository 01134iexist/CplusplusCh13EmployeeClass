#pragma once
#include <iostream>
#include <string>
using namespace std;


class Employee
{
private:
	string name;
	int idNumber;
	string department;
	string position;
public:
	//constructors
	Employee(string n, int id, string dep, string pos) {
		name = n;
		idNumber = id;
		department = dep;
		position = pos;
	}

	Employee(string n, int id) {
		name = n;
		idNumber = id;
		department = "";
		position = "";
	}

	//default constructor
	Employee() {
		name = "";
		idNumber = 0;
		department = "";
		position = "";
	}

	//mutators
	void setName(string n) {
		name = n;
	}
	void setIdNumber(int i) {
		idNumber = i;
	}
	void setDepartment(string d) {
		department = d;
	}
	void setPosition(string p) {
		position = p;
	}

	//accessors
	string getName() const {
		return name;
	}
	int getIdNumber() const {
		return idNumber;
	}
	string getDepartment() const {
		return department;
	}
	string getPosition() const {
		return position;
	}
 };
