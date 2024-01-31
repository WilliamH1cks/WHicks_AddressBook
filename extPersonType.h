#pragma once
#include <iostream>
#include "personType.h"
#include "dateType.h"
#include "addressType.h"
using namespace std;

class extPersonType : public personType
{
	private:
		addressType address;
		dateType birthdate;
		string phoneNumber;
		string relationship;
	public:
		//Precond: A given string representing a phone number is given
		//Postcond: Sets the phone number variable.
		void setPhoneNumber(string);

		//Fecthes the phone number
		string getPhoneNumber();

		//Precond: A given string representing the relationship status with the addressbook's writer is given
		//Postcond: Said string is sets the relatonship variable IF it is "Friend", "Family", or "Business". Otherwise it will default to None 
		void setRelationship(string);

		// Fetches the relationship status
		string getRelationship();

		// Fetches the birthmonth from the birthday, likely for future sorting
		int getBirthMonth();

		// Prints the entry, in order of name, address, phone number (if available), birthday, relationship (if available), and birth month
		void print();

		//extPersonType constructor: First two strings are sent as firstName and lastName from personType; the first three integers represent the birthdate, using the dateType class;
		//							 the next three strings and last integer are the address; the final two strings are the phone number and relationship label, respectfully.
		extPersonType(string = "", string = "", int = 1, int = 1, int = 1900, string = "", string = "", string = "XX", int = 10000, string = "None", string = "None");

};

