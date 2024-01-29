// WHicks_AddressBook.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include "dateType.h"
using namespace std;
// Program to verify that the modified dateType class is working correctly
int main()
{
	cout << "Testing default constructor ... ";
	dateType defDate;
	defDate.print();
	cout << endl;
	cout << "Testing constructor with parameters ... ";
	dateType date(2, 29, 2016);
	date.print();
	cout << endl;
	cout << "Setting date with invalid year (1000) ... ";
	date.setDate(2, 29, 1000);
	date.print();
	cout << endl;
	cout << "Setting date with invalid month (13) ... ";
	date.setDate(13, 29, 2016);
	date.print();
	cout << endl;
	cout << "Setting date with invalid day (4, 31) ... ";
	date.setDate(4, 31, 2016);
	date.print();
	cout << endl;
	cout << "Setting invalid date: Feb 29, 2015 ... ";
	date.setDate(2, 29, 2015);
	date.print();
	cout << endl;
	cout << "Setting valid date: Feb 28, 2015 ... ";
	date.setDate(2, 28, 2015);
	date.print();
	cout << endl;
	cout << "Setting valid date (August 15, 2016) ... ";
	date.setDate(8, 15, 2016);
	date.print();
	cout << endl;

	cout << "Test Extra ";
	date.setDate(2, 29, 2000);
	date.print();
	cout << endl;
	date.setDate(2, 29, 1900);
	date.print();
	cout << endl;
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
