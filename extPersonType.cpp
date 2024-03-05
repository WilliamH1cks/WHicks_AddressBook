#pragma once
#include <iostream>
#include "extPersonType.h"
using namespace std;

void extPersonType::setPhoneNumber(string newNum) { phoneNumber = newNum; }
void extPersonType::setFullName(string last, string first) { 
	setFirstName(first);
	setLastName(last);
	key = last + " " + first;
}
void extPersonType::setRelationship(string newRel) { 
	if (newRel == "Friend" || newRel == "Family" || newRel == "Business")
	{
		relationship = newRel;
	}
	else
	{
		//cout << "[Invalid relationship. Leaving field blank.]" << endl;
		relationship = "None";
	}
}

string extPersonType::getPhoneNumber() { return phoneNumber; }
string extPersonType::getRelationship() { return relationship; }
string extPersonType::getFullName() { return key; }

int extPersonType::getBirthMonth() { return birthdate.getMonth(); }

void extPersonType::print()
{
	cout << ("Name: ");
	personType::print();
	address.print();
	if (getPhoneNumber() != "None")
	{
		cout << ("Phone Number: ") << getPhoneNumber() << endl;
	}
	cout << ("Birthday: ");
	birthdate.print();
	if (getRelationship() != "None")
	{
		cout << "Relationship: " << getRelationship() << endl;
	}
	cout << endl;
}

extPersonType::extPersonType(string first, string last, int month, int day, int year, string addr, string hometown, string homestate, int zip, string number, string currentRelation):
	personType(first, last), address(addr, hometown, homestate, zip), birthdate(month, day, year)
{
	phoneNumber = number;
	setRelationship(currentRelation);
}

bool extPersonType::operator== (const extPersonType right) const
{
	return (key == right.key);
}

bool extPersonType::operator!= (const extPersonType right) const
{
	return (key != right.key);
}

bool extPersonType::operator>= (const extPersonType right) const
{
	return (key >= right.key);
}

int extPersonType::getBirthDate() { return birthdate.getDay(); }
int extPersonType::getBirthYear() { return birthdate.getYear(); }

string extPersonType::getAddress() { return address.getAddress(); }
string extPersonType::getCity() { return address.getCity(); }
string extPersonType::getState() { return address.getState(); }
int extPersonType::getZipcode() { return address.getZipcode(); }