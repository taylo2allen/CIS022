#include <iostream>
#include <string>
using namespace std;

string FirstName, MiddleName, LastName, OutputName;

int main ()
{
	cout << "Enter your name in this format Last, First Middle." << endl << endl;

	cin >> LastName >> FirstName >> MiddleName; //receiving the input Last name 

	LastName = LastName.substr(0, LastName.length() -1);

	cout << endl << FirstName << " " << MiddleName << " " << LastName << endl << endl;

	system("pause");

	return 0;
}
