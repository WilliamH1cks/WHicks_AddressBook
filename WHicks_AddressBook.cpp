// WHicks_AddressBook.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include "extPersonType.h"

using namespace std;

int main()
{
    cout << "Testing default constructor ... " << endl;
    extPersonType defPerson;
    defPerson.print();
    cout << endl;

    cout << "Testing constructor with parameters ... " << endl;
    extPersonType person("George", "Smith", 4, 30, 1994, "145 South Street, Apt. 5", "Hampton", "VA", 23554, "757-444-5555", "Friend");
    person.print();
    cout << endl;

    cout << "Testing invalid relationship (Spouse) ... " << endl;
    person.setRelationship("Spouse");
    person.print();
    cout << endl;

    cout << "Testing valid relationship (Business) ... " << endl;
    person.setRelationship("Business");
    person.print();
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
