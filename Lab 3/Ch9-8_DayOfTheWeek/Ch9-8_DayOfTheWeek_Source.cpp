#include <iostream>
#include <iomanip>
using namespace std;
int month, day, year;
int a,y,m,JDN,d;

enum Day { Sun, Mon, Tues, Wed, Thrs, Fri, Sat};

bool IsValidDate(int, int, int);
void DayOfTheWeek (int&,int&,int&,int&,int&,int&,int&,int&);

int main ()
{
	do
	{
		cout << "Please enter the month, day, and year separated by a space." << endl << endl;
		cin >> month >> day >> year;
		
		DayOfTheWeek (month, day, year, a, y, m, JDN, d);
		
	}while(IsValidDate(month,day,year));
	{	
		cout << endl << "You entered an invalid date. Please enter a valid date: " << endl << endl;
		cin >> month >> day >> year;

		if (IsValidDate(month,day,year))
		{
			DayOfTheWeek (month, day, year, a, y, m, JDN, d);
		}

		system("pause");
	}
	
}

bool IsValidDate(int month, int day, int year)
{
	if ( (month < 1) || (month > 12) ) return false;
	if ( (day < 1) || (day > 31) ) return false;
}


void DayOfTheWeek (int& month,int& day,int& year,int& a,int& y,int& m,int& JDN,int& d)
{
	a = (14 - month)/12;
	y = year - a;
	m = month + (12 * a) - 2;
	JDN = ( day + y + (y / 4) - (y / 100) + (y / 400) + (31 * m)/12 );
	d = JDN % 7 ;

	switch (d)
	{
	case Sun:
		cout << endl << "The date falls on a Sunday" << endl << endl;
	break;
	case Mon:
		cout << endl << "The date falls on a Monday" << endl << endl;
	break;
	case Tues:
		cout << endl <<  "The date falls on a Tuesday" << endl << endl;
	break;
	case Wed:
		cout << endl << "The date falls on a Wednesday" << endl << endl;
	break;
	case Thrs:
		cout << endl << "The date falls on a Thursday" << endl << endl;
	break;
	case Fri:
		cout << endl << "The date falls on a Friday" << endl << endl;
	break;
	case Sat:
		cout << endl << "The date falls on a Saturday" << endl << endl;
	break;
	}

}