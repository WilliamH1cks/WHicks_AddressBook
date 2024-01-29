#include "dateType.h"
#include <iostream>
using namespace std;

dateType::dateType(int month, int day, int year)
{
	dMonth = month;
	dDay = day;
	dYear = year;
}

void dateType::print()
{
	cout << getMonth() << "-" << getDay() << "-" << getYear() << endl;
}

void dateType::setDate(int month, int day, int year)
{
	if ((year >= 1900) && (month >= 1 && month <= 12) && (day >= 1 && day <= monthNumDays(month, year)))
	{
		dYear = year;
		dMonth = month;
		dDay = day;
	}
	else
	{
		cout << "Invalid Date - resetting to default date of 1-1-1900" << endl;
		setDate(1, 1, 1900);
	}
}

bool dateType::isLeapYear(int year)
{
	//if (year % 4 == 0)
	//{
	//	if (year % 100 == 0)
	//	{
	//		if (year % 400 == 0)
	//		{
	//			return true;
	//		}
	//		else
	//		{
	//			return false;
	//		}
	//	}
	//	else
	//	{
	//		return true;
	//	}
	//}
	//else
	//{
	//	return false;
	//}
	return ((year % 100 == year % 400 == 0) || year % 4 == 0);
}

int dateType::monthNumDays(int month, int year)
{
	int monLength[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if (isLeapYear(year))
	{
		monLength[1] = 29;
	}

	return monLength[month - 1];
}

int dateType::getDay() { return dDay; }

int dateType::getMonth() { return dMonth; }

int dateType::getYear() { return dYear; }