#include <iostream>
using namespace std; 

//Date class declaration 
class Date
{
private: 
	int month; 
	int day; 
	int year; 
public: 
	void setMonth(int); 
	void setDay(int); 
	void setYear(int); 
	int getMonth() const; 
	int getDay() const; 
	int getYear() const; 
};

void Date::setMonth(int m)
{
	month = m; 
}

void Date::setDay(int d)
{
	day = d; 
}

void Date::setYear(int y)
{
	year = y; 
}

int Date::getMonth() const
{
	return month; 
}

int Date::getDay() const
{
	return day; 
}

int Date::getYear() const
{
	return year; 
}


int main()
{
	Date currentDate; //instance of a class

	int Month, Day, Year; //local variables to set the date

	//Get the Date's day, month and year from the user. 
	cout << "This program will display the date of a\n";
	cout << "current date. What is the today? (Enter day)";
	cin >> Day;
	cout << "What month is today? ";
	cin >> Month;
	cout << "What year is today? "; 
	cin >> Year; 

	//Store the day, month and year of the Date 
	//in the currentDate object.
	currentDate.setDay(Day); 
	currentDate.setMonth(Month); 
	currentDate.setYear(Year);

	//Display the Date's data. 
	cout << "Here is the Date's data:\n";
	cout << "Day: " << currentDate.getDay() << endl;
	cout << "Month: " << currentDate.getMonth() << endl;
	cout << "Year: " << currentDate.getYear() << endl;
	cout << "Date: " << currentDate.getMonth() << "/"
					 << currentDate.getDay() << "/"
				     << currentDate.getYear() << endl;

	return 0; 
}