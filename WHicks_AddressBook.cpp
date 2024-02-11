// WHicks_AddressBook.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include <fstream>
#include <string>
#include "addressBookType.h"

using namespace std;

int showMenu(addressBookType);
void search(addressBookType);

int main()
{
	addressBookType addrBook;
	addrBook.initEntry();

	//addrBook.print();
	int loopBreak = 0;
	while (loopBreak!= 4) 
		loopBreak = showMenu(addrBook);

	return 0;
}

//Precond: None
//Postcond: Returns user selection and perform desired outcome from printing the entire list, seaching for
//			entries, sorting the list, or quitting
int showMenu(addressBookType addrBook)
{
	//1. Print entire list
	//2. Search
	////a. By name
	////b. By birthday
	////c. By relation
	//3. Sort
	//4. Quit
	cout << "Main Menu:" << endl
		<< "1: Print the entire address book" << endl
		<< "2: Search via last name, birth month, or relationship status" << endl
		<< "3: Sort the list" << endl
		<< "4: Quit the program" << endl;
	int userInput = 0;
	cin >> userInput;
	if (userInput > 4 || userInput < 0)
	{
		cout << endl << "Invalid Option. Please select a different option." << endl;
		return 0;
	}
	else
	{
		if (userInput == 1)
		{
			addrBook.print();
			return userInput;
		}
		if (userInput == 2)
			search(addrBook);
		if (userInput == 3)
			addrBook.sortEntries();
		if (userInput == 4)
			cout << "Quitting..." << endl;
	}
	return userInput;
}

void search(addressBookType addrBook)
{
	cout << "1: Search by last name" << endl
		<< "2: Search by birth month" << endl
		<< "3: Search by relationship" << endl
		<< "4: Return to Main Menu" << endl;
		int userInput = 0;
	cin >> userInput;
	if (userInput > 4 || userInput < 0)
	{
		cout << endl << "Invalid Option. Please select a different option." << endl;
		return;
	}
	else
	{
		if (userInput == 1)
		{
			string name;
			cout << "Enter the last name to search for: ";
			cin >> name;
			addrBook.findPerson(name);
		}
		if (userInput == 2)
		{
			int month = 0;
			cout << "Enter the birth month to search for: ";
			cin >> month;
			while (month > 12 || month < 1)
			{
				cout << endl << "Invalid motnh. Please try again: ";
				cin >> month;
			}
			addrBook.findBirthdays(month);
		}
		if (userInput == 3)
		{
			string relation;
			cout << "Enter the relationship to search for: ";
			cin >> relation;
			while (relation != "Friend" && relation != "Family" && relation != "Business")
			{
				cout << "Invalid entry. Check the spelling and casing." << endl;
				cout << "NOTE: Only \"Friend\", \"Family\", or \"Business\" are allowed relationships." << endl;
				cout << "Reponse: ";
				cin >> relation;
			}
			addrBook.findRelations(relation);
		}
		if (userInput == 4)
			cout << "Returning to main menu..." << endl;
	}
	return;
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
