#pragma once
#include <iostream>
#include "extPersonType.h"
using namespace std;

void extPersonType::setPhoneNumber(string newNum) { phoneNumber = newNum; }
void extPersonType::setRelationship(string newRel) { relationship = newRel; }

string extPersonType::getPhoneNumber() { return phoneNumber; }
string extPersonType::getRelationship() { return relationship; }

int extPersonType::getBirthMonth() { return birthdate.getMonth(); }

void extPersonType::print()
{
	cout << "sex" << endl;
}

extPersonType::extPersonType(string first, string last, int month, int day, int year, string addr, string hometown, string homestate, int zip, string number, string currentRelation):
	personType(first, last), address(addr, hometown, homestate, zip), birthdate(month, day, year)
{
	phoneNumber = number;
	relationship = currentRelation;
}
