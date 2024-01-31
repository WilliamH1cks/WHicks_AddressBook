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
		//Prints the name in full
		void print();

		//Precond: a string is given
		//Postcond: the first name is set
		void setFirstName(string);

		//Fetches the first name
		string getFirstName();

		//Precond: a string is given
		//Postcond: the last name is set
		void setLastName(string);

		//Fetches the last name
		string getLastName();

		//personType constructor
		personType(string = "", string = "");
};

