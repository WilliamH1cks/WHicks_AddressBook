#pragma once
#include <iostream>
using namespace std;

class addressType
{
	private:
		string address = "";
		string city = "";
		string state = "XX";
		int zipcode = 10000;
	public:
		void print();

		//Precond - given state, city, address, and zipcode values
		//Postcond - new addressType object is created with new and/or valid values
		addressType(string = "(Your address)", string = "(Your city, county, or town)", string = "XX", int = 10000);

		//gets individual variables from an addressType object
		string getAddress();
		string getCity();
		string getState();
		int getZipcode();

		// setAddress
		//Precond - Given value is an address
		//Postcond - Given value is set as the new address
		void setAddress(string);

		// setCity
		//Precond - Given value is city, county, and/or town name
		//Postcond - Sets city value to new given value
		void setCity(string);

		// setCity
		//Precond - 2-letter state abbreivation supplied for state value
		//Postcond - Sets state variable as either new state value given 
		//			 or, if not a 2-letter abbreviation, the default XX value
		void setState(string);

		// setZipcode
		// Precond - integer between 11111 and 99999 given for new zipcode value
		// Postcond - New value set as zipcode (if outside of range, default value of 10000 is given)
		void setZipcode(int);

};

