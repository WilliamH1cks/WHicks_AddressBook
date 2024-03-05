#pragma once
#include <iostream>
#include "extPersonType.h"
#include "orderedLinkedList.h"
using namespace std;

class addressBookType:public orderedLinkedList<extPersonType>
{
	public:
		//Precond: Information relating to an address book entry is entered
		//Postcond: Said information is entered into an extPersonType object and entered into the address book
		void initEntry();

		//Precond: A pre-created, initialized extPersonType object representing an entry
		//Postcond: Adds the new entry into the linked list, which represents the address book.
		void addEntry(extPersonType);

		//Precond: Takes in a last and first name
		//Postcond: Shows entries with the given name (Usually only one)
		void findPerson(string, string);

		//Precond: Takes in a month number
		//Postcond: Shows all entries with the matching birth month
		void findBirthdays(int);

		//Precond: Takes in a given relationship
		//Postcond: Shows results with given relationships
		void findRelations(string);

		//Prints the entire address book
		void print();

		//Constructor
		addressBookType();

		//Precond: User chooses the option to add an entry
		//Postcond: A new extPersonType is created and inserted into the linked list
		void createNewEntry();

		//Precond: User terminates program or wishes to save progress
		//Postcond: The file is saved into AddressBookData.txt
		void saveFile();

		//Precond: User chooses the option to delete an entry and an entry to delete
		//Postcond: The extPersonType associated with the given choice is deleted.
		void deleteEntry();
};

