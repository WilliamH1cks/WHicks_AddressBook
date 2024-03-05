#include "addressBookType.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void addressBookType::initEntry()
{
	ifstream inFile;
	string firstName, lastName;
	int month, day, year;
	string addr, city, state;
	int zip;
	string phone, relation;

	inFile.open("AddressBookData.txt");
	if (!inFile)
		cout << "Couldn't open file." << endl;

		//int recCount = 0;
	//cout << "Starting..." << endl << endl;
	while (inFile >> firstName)
	{
		inFile >> lastName >> month >> day >> year;
		inFile.ignore();
		getline(inFile, addr);
		getline(inFile, city);
		inFile >> state >> zip >> phone >> relation;



		//cout << firstName << " " << lastName << endl << month << "-" << day << "-" << year << endl << addr << ", " << city << ", " << state << endl << zip << endl;
		//cout << phone << endl << relation << endl;
		//cout << recCount << endl;

		extPersonType entry(firstName, lastName, month, day, year, addr, city, state, zip, phone, relation);
		//entry.print();

		addEntry(entry);

		//cout << "Entry #" << recCount << " done!" << endl << endl;
	}

	//length += recCount;

	//cout << "All Done!" << endl;

	inFile.close();
}

void addressBookType::createNewEntry()
{
	string firstName, lastName;
	int month, day, year;
	string addr, city, state;
	int zip;
	string phone, relation;

	cout << "Input name in the following format: FIRST LAST" << endl;
	cin >> firstName >> lastName;
	cout << endl << "Input birthday in the following format: MM DD YYYY" << endl;
	cin >> month >> day >> year;
	cin.ignore();

	cout << endl << "Input address and street" << endl;
	getline(cin, addr);

	cout << endl << "Input city" << endl;
	getline(cin, city);

	cout << endl << "Input state in two-letter initials (AL, AK, VA, etc.)" << endl;
	cin >> state;
	cout << endl << "Input zipcode" << endl;
	cin >> zip;
	cout << endl << "Input phone number, preferrably (but optionally) in ###-###-#### format" << endl;
	cin >> phone;
	cout << endl << "Input relationship as either Friend, Family, or Business" << endl;
	cin >> relation;

	extPersonType entry(firstName, lastName, month, day, year, addr, city, state, zip, phone, relation);
	entry.print();

	addEntry(entry);
}

void addressBookType::addEntry(extPersonType entry)
{
	insert(entry);
}

void addressBookType::findPerson(string lastFilter, string firstFilter)
{
	int results = 0;
	//for (int i = 0; i < length; i += 1)
	//	if (addressList[i].getLastName() == nameFilter)
	//	{
	//		results++;
	//		cout << "Result " << results << ":" << endl;
	//		addressList[i].print();
	//	}
	string nameFilter = lastFilter + " " + firstFilter;
	nodeType <extPersonType>* current;
	current = first;
	while (current != nullptr)
	{
		if (current->info.getFullName() == nameFilter)
		{
					results++;
					cout << "Result " << results << ":" << endl;
					current->info.print();
		}
		current = current->link;
	}
	cout << "Found " << results << " result(s)." << endl;
}

void addressBookType::findBirthdays(int birthMonth)
{
	int results = 0;
	//for (int i = 0; i < length; i += 1)
	//	if (addressList[i].getBirthMonth() == birthMonth)
	//	{
	//		results++;
	//		cout << "Result " << results << ":" << endl;
	//		addressList[i].print();
	//	}
	nodeType <extPersonType>* current = this->first;
	current = first;
	while (current != nullptr)
	{
		if (current->info.getBirthMonth() == birthMonth)
		{
			results++;
			cout << "Result " << results << ":" << endl;
			current->info.print();
		}
		current = current->link;
	}
	cout << "Found " << results << " result(s)." << endl;
}

void addressBookType::findRelations(string relationship)
{
	int results = 0;
	//for (int i = 0; i < length; i += 1)
	//	if (addressList[i].getRelationship() == relationship)
	//	{
	//		results++;
	//		cout << "Result " << results << ":" << endl;
	//		addressList[i].print();
	//	}
	nodeType <extPersonType>* current = this->first;
	current = first;
	while (current != nullptr)
	{
		if (current->info.getRelationship() == relationship)
		{
			results++;
			cout << "Result " << results << ":" << endl;
			current->info.print();
		}
		current = current->link;
	}
	cout << "Found " << results << " result(s)." << endl;
}

void addressBookType::print()
{
	//for (int i = 0; i < length; i += 1)
	//	addressList[i].print();
	nodeType <extPersonType>* current = this->first;
	while (current->link != nullptr)
	{
		current->info.print();
		current = current->link;
	}
}

//void addressBookType::sortEntries()
//{
//	int current = length - 1;
//	while (current > 0)
//	{
//		int index = current - 1;
//		while (index >= 0)
//		{
//			if (addressList[current].getLastName() < addressList[index].getLastName())
//			{
//				extPersonType temp = addressList[current];
//				addressList[current] = addressList[index];
//				addressList[index] = temp;
//			}
//			index--;
//		}
//		current--;
//	}
//	print();
//}

addressBookType::addressBookType(int maxSize)
{
	//length = 0;
	//maxLength = maxSize;
}

