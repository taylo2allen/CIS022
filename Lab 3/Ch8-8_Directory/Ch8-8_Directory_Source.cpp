#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

string checkName(string, string);

int main()
{
	string firstName;
	string lastName;
	do
	{
		cout << "Please enter the first and last name in this format " << endl;
		cout << "'Firstname Lastname' to search the phone directory if " << endl;
		cout << "you wish to quit type '0 0'" << endl << endl;
	
		cin >> firstName >> lastName;

		if ((firstName == "0") && (lastName == "0"))
		{
			return 0;
		}

		cout << endl << checkName(firstName, lastName) << endl << endl;
	}while (true);

}

string checkName(string firstName, string lastName)
{
	string dirFirst;
	string dirLast;
	string dirNumber;
	string prevdirFirst;
	string prevdirLast;
	ifstream numberDir;
	numberDir.open("Directory.txt");

	if (!numberDir)
    {
        cout << "Error File Didn't Open." << endl << endl;
    }

	do
	{
		if (firstName == dirFirst && lastName == dirLast)
		{
			return firstName + " " + lastName + "'s phone number is " + dirNumber + ".";
		}
				
		prevdirFirst = dirFirst;
		prevdirLast = dirLast;

		numberDir >> dirFirst >> dirLast >> dirNumber;

	}while((dirFirst != prevdirFirst) || (dirLast != prevdirLast));
	
	return "Sorry we couldn't find the name you input in the directory.";

	numberDir.close();

}