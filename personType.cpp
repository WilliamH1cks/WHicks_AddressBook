#include "personType.h"
#include <iostream>
using namespace std;

void personType::setFirstName(string name) { firstName = name; }
void personType::setLastName(string name) { lastName = name; }

string personType::getFirstName() { return firstName; }
string personType::getLastName() { return lastName; }

personType::personType(string first, string last)
{
	firstName = first;
	lastName = last;
}