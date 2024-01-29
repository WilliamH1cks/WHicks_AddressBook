#pragma once
#include <iostream>
using namespace std;

class dateType
{
	private:
		//Year, month, and day variables
		int dYear;
		int dMonth;
		int dDay;
	public:
		//Precond: day, month, year values are given
		//Postcond: Respective month, day, year variables are set
		void setDate(int, int, int);

		//Fetches month, day, and year variables respectively
		int getDay();
		int getMonth();
		int getYear();

		//Precond: A date fully fleshed out
		//Postcond: The Year is printed in MM-DD-YYYY format
		void print();

		//Precond: A year is fed through
		//Postcond: A boolean value on if said year is a leap year (true = yes)
		bool isLeapYear(int);

		//Constructor
		dateType(int = 1, int = 1, int = 1900);

		//Precond: A month and year is fed through
		//Postcond: The number of days in the current month is returned. The year is used in determining
		//          the number of days in February, which may result in inaccurate answers if neglected.
		int monthNumDays(int, int);
};

