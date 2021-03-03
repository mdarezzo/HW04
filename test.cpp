/* File: test.cpp */
// File to test the basic employee class

#include<iostream>
#include <string>
#include "employee.h"

using namespace std;

int main()
{
	//Employee
		//		e1(001, "Jones", "Booker", "T", 22),
		//		e2(002, "Hendrix", "Jimi", "NMI ", 14),
		//		e3(003, "Morrison", "Jim", "D", 03);

		//	e1.printEmployee();
		//	e2.printEmployee();

	SalariedEmployee
		e1(001, "Turner", "Timmy", "NMI", 15),
		e2(002, "Bob", "Billy", "J", 31);

	HourlyEmployee
		e3(003, "Me", "Mini", "M", 93),
		e4(004, "Powers", "Austin", "NMI", 12);



	e1.printEmployee();
	cout << "Monthly Salary: " << e1.calcSalary(.5, 40000) << "\n";
	e2.printEmployee();
	cout << "Monthly Salary: " << e2.calcSalary(1, 40000) << "\n";
	e3.printEmployee();
	cout << "Monthly Earnings: " << e3.calcEarnings(30, 20) << "\n";
	e4.printEmployee();
	cout << "Monthly Earnings: " << e4.calcEarnings(50, 20) << "\n";


	return 0;
}