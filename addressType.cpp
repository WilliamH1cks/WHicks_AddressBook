#include "addressType.h"
#include <iostream>
using namespace std;

void addressType::print()
{
	cout << getAddress() << endl;
	cout << getCity() << ", " << getState() << " " << getZipcode() << endl;
}

void addressType::setState(string newSt)
{
	if (newSt.length() == 2)
	{
		state = newSt;
	}
	else
	{
		cout << "The state abbriviation, \"" << newSt << "\", is invalid. Deafulting to the abbreviation \"XX\"..." << endl;
		state = "XX";
	}
}

void addressType::setZipcode(int zip)
{
	if (zip >= 11111 && zip <= 99999 || zip == 10000)
	{
		zipcode = zip;
		if (zip == 10000)
		{
			cout << "Okay look, you put in the default zipcode, which is out-of-range but its gonna be used anyway." << endl;
		}
	}
	else
	{
		cout << "The zipcode, " << zip << ", is invalid. Defaulting to zipcode 10000..." << endl;
		zipcode = 10000;
	}
}

void addressType::setAddress(string newAddr) { address = newAddr; }

void addressType::setCity(string newCity) { city = newCity; }

//constructor w/ parameters
addressType::addressType(string newAddr, string newCity, string newSt, int zip)
{
	address = newAddr;
	city = newCity;
	state = "XX";
	setState(newSt);
	zipcode = 10000;
	setZipcode(zip);
}

string addressType::getAddress() { return address; }

string addressType::getCity() { return city; }

string addressType::getState() { return state; }

int addressType::getZipcode() { return zipcode; }