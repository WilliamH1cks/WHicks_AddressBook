#pragma once
#include <iostream>
#include "extPersonType.h"
using namespace std;

class addressBookType
{
	private:
		extPersonType addressList[500];
		int length;
		int maxLength;
	public:
		//Precond: Information relating to an address book entry is entered
		//Postcond: Said information is entered into an extPersonType object and entered into the address book
		void initEntry(string);

		//Precond: A pre-created, initialized extPersonType object representing an entry
		//Postcond: Checks the array if there is room for a new entry; then adds a new entry
		void addEntry(extPersonType);

		//Precond: Takes in a last name
		//Postcond: Shows entries with the given last name
		void findPerson(string);

		//Precond: Takes in a month number
		//Postcond: Shows all entries with the matching birth month
		void findBirthdays(int);

		//Precond: Takes in a given relationship
		//Postcond: Shows results with given relationships
		void findRelations(string);

		//Prints the entire address book
		void print();

		//Sorts the entries in alphabetical order last name
		void sortEntries();

		//Constructor
		addressBookType(int = 500);
};

