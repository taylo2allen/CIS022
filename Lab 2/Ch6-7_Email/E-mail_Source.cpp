#include <iostream>
#include <fstream>
#include <string>
using namespace std;

ifstream Mail_Input;
ofstream Address_Output;	
string Email;

int main()
{
	Mail_Input.open("mail.dat");
	Address_Output.open("addresses.txt");
	
	if (!Mail_Input)
	{

	cout << "Open the text file." << endl << endl;
	system("pause");
	return 1;

	}
	
	while (Mail_Input)
	{

	Mail_Input >> Email;
	if (Email.find('@') != string::npos)
	
	Address_Output << endl << Email << endl;
	
	//cout << "The email addresses have been copied to the file: addresses.txt." << endl << endl;
	}

	Mail_Input.close();
	Address_Output.close();
	
	system("pause");
	return 0;
	
}
