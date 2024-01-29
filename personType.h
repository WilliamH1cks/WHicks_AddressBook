#pragma once
#include <iostream>
using namespace std;

// Base class for extPersonType
// Allows to set and get the first or last name
// Default constructor sets both first and last name

class personType
{
	private:
		string firstName;
		string lastName;
	public:
		void setFirstName(string);
		string getFirstName();
		void setLastName(string);
		string getLastName();
		personType(string = "", string = "");
};

