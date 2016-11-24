#include <iostream>
#include <string>
#include <cstdio> //for getchar()

using namespace std;

bool isPalin(string& palin);
string cleanUp(string& palin);

int main()
{
	string palin;
	
	// get input
	cout << "Please enter a possible palindrome: " << endl << endl;
	getline(cin, palin);

	// run isPalin

	// output result
	if (isPalin(palin)) //if (isPalin= true)
		cout << endl << "The string '" << palin << "' is a palindrome!";
	else
		cout << endl << "The string '" << palin << "' is not a palindrome!";
		
	getchar();
	return 0;
}

// create the function to test palindrome
bool isPalin (string& palin) //bool isPalin (string palin)
{

	cleanUp(palin);

	int length = palin.length();
	for (int i = 0; i < length/2; i++)
		if (palin[i] != palin[length - 1 - i])
			return false;

	return true;
}

// remove whitespace, punctuation, and capitalization
string cleanUp (string &palin)
{
	int length = palin.length();
	for (int i = 0; i < length; i++)
		if (ispunct(palin[i]) || palin[i] == ' ')
		{
			palin.erase(i,1);
			i--;
		}
	length = palin.length();
	for (int i = 0; i < length; i++)
		palin[i] = tolower(palin[i]);
	return palin;
}