// WHicks_AddressBook.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "addressType.h"
using namespace std;
int main()
{
	cout << "Testing default constructor ... " << endl;
	addressType defAddress;
	defAddress.print();
	cout << endl;
	cout << "Testing constructor with parameters ... " << endl;
	addressType address("123 South Street", "Newport News", "VA", 23664);
	address.print();
	cout << endl;
	cout << "Testing invalid state (Virginia)... " << endl;
	address.setState("Virginia");
	address.print();
	cout << endl;
	cout << "Testing invalid zipcode (55555555)..." << endl;
	address.setZipcode(55555555);
	address.print();
	cout << endl;
	cout << "Testing valid address ..." << endl;
	address.setAddress("44 East Main Street");
	address.setCity("Hampton");
	address.setState("VA");
	address.setZipcode(23669);
	address.print();
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
