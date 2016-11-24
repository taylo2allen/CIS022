
// C++ program two find number of days between two given dates
#include <iostream>
using namespace std;
int m_1, d_1, y_1;
int m_2, d_2, y_2;
char pause;
// A date has day 'd', month 'm' and year 'y'

bool IsValidDate(int , int , int, int);

// Driver program

struct Date
{
	int m, d, y;
};

// To store number of days in all months from January to Dec.
const int monthDays[12] = {31, 28, 31, 30, 31, 30,
						31, 31, 30, 31, 30, 31};

// This function counts number of leap years before the given date
int countLeapYears(Date d)
{
	int years = d.y;

	// Check if the current year needs to be considered
	// for the count of leap years or not
	if (d.m <= 2)
		years--;

	// An year is a leap year if it is a multiple of 4,
	// multiple of 400 and not a multiple of 100.
	return years / 4 - years / 100 + years / 400;
}

// This function returns number of days between two given dates
int getDifference(Date dt1, Date dt2)
{
	// COUNT TOTAL NUMBER OF DAYS BEFORE FIRST DATE 'dt1'

	// initialize count using years and day
	long int n1 = dt1.y*365 + dt1.d;

	// Add days for months in given date
	for (int i=0; i<dt1.m - 1; i++)
		n1 += monthDays[i];

	// Since every leap year is of 366 days,
	// Add a day for every leap year
	n1 += countLeapYears(dt1);


	// SIMILARLY, COUNT TOTAL NUMBER OF DAYS BEFORE 'dt2'

	long int n2 = dt2.y*365 + dt2.d;
	for (int i=0; i < dt2.m - 1; i++)
		n2 += monthDays[i];
	n2 += countLeapYears(dt2);

	// return difference between two counts
	return (n2 - n1);
}

bool IsValidDate(int m_1, int d_1, int m_2, int d_2)
{
	if ( (m_1 < 1) || (m_1 > 12) ) return false;
	if ( (d_1 < 1) || (d_1 > 31) ) return false;
	if ( (m_1 < 1) || (m_2 > 12) ) return false;
	if ( (d_2 < 1) || (d_2 > 31) ) return false;
}

int main()
{
	do
	{
		cout << "Enter the first date:" << endl << endl;
		cin >> m_1 >> d_1 >> y_1;
		cout << endl;
	
		cout << "Enter the second date:" << endl << endl;
		cin >> m_2 >> d_2 >> y_2;
		cout << endl;
		
		
			if (IsValidDate(m_1,d_1,m_2,d_2))
		{
			Date dt1 = {m_1, d_1, y_1};
			Date dt2 = {m_2, d_2, y_2};
			cout << endl << "Days between the dates : " << m_1 << "/" << d_1 << "/" << y_1 << " & " << m_2 << "/" << d_2 << "/" << y_2 << " is " << getDifference(dt1, dt2) << " days " << endl << endl;
		}

	}while(IsValidDate(m_1,d_1,m_2,d_2));
	{	
		cout << endl << "You entered an invalid date. Please enter a valid date: " << endl << endl;
		cout << "Enter the first date:" << endl << endl;
		cin >> m_1 >> d_1 >> y_1;
		cout << endl;
	
		cout << "Enter the second date:" << endl << endl;
		cin >> m_2 >> d_2 >> y_2;
		cout << endl;

		if (IsValidDate(m_1,d_1,m_2,d_2))
		{
			Date dt1 = {m_1, d_1, y_1};
			Date dt2 = {m_2, d_2, y_2};
			cout << endl << "Days between the dates : " << m_1 << "/" << d_1 << "/" << y_1 << " & " << m_2 << "/" << d_2 << "/" << y_2 << " is " << getDifference(dt1, dt2) << " days " << endl << endl;
		}
cout << "Press any key to continue..." ;
cin >> pause;
	//	system("pause");
	}
}