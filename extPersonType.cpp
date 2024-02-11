#pragma once
#include <iostream>
#include "extPersonType.h"
using namespace std;

void extPersonType::setPhoneNumber(string newNum) { phoneNumber = newNum; }
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
		cout << "Relationship: " << getRelationship() << endl << endl;
	}
	//cout << endl << "Birthmonth: " << getBirthMonth() << endl;
}

extPersonType::extPersonType(string first, string last, int month, int day, int year, string addr, string hometown, string homestate, int zip, string number, string currentRelation):
	personType(first, last), address(addr, hometown, homestate, zip), birthdate(month, day, year)
{
	phoneNumber = number;
	setRelationship(currentRelation);
}