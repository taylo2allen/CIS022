#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main ()
{
	string after_comma1, after_comma2, after_comma3;
	string filename;

	cout << "This program will let the user choose a filename.\nThen, it will show the first word following each of the\nfirst three commas in the file.\nFor example use the filename: Input_Data.txt" << endl;
	cout << endl << "Please enter your desired filename." << endl;

	cin >> filename;
	ifstream inData;

	inData.open(filename);

	inData.ignore(200, ','); //ignore at the least 200 characters up to a ","
	inData >> after_comma1;
	cout << endl << after_comma1 << endl;

	inData.ignore(200, ',');
	inData >> after_comma2;
	cout << endl << after_comma2 << endl;

	inData.ignore(200, ',');
	inData >> after_comma3;
	cout << endl << after_comma3 << endl << endl;

	inData.close();
	
	system("pause");

	return 0;
}
