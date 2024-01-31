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
		void setPhoneNumber(string);
		string getPhoneNumber();
		void setRelationship(string);
		string getRelationship();
		int getBirthMonth();
		void print();
		extPersonType(string = "", string = "", int = 1, int = 1, int = 1900, string = "", string = "", string = "XX", int = 10000, string = "None", string = "None");

};

