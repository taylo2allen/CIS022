#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void displayChar(string&,char&,int&,int&);

int main()
{
	string stringInput;
	char Letter;
	int Length;
	int LetterPosition;
	
	cout << "Please type the word to be converted into IACO:" << endl << endl;
	cin >> stringInput;

	cout << endl << "The IACO version is: " << endl << endl;
	
	displayChar(stringInput, Letter, Length, LetterPosition);
	
	return 0;
}//end of main

void displayChar(string& wordIn,char& let,int& len,int& letPos)
//inData=letInput l=Letter len=Length letPos=LetterPosittion
{
	len = wordIn.length();
	letPos = 0;
	
	while (letPos <= len -1)
	{
		let = wordIn.at(letPos);
		if (isalpha(let) == 0)
		cout << endl << endl << "Will skip character " << let << endl << endl;
		
		else (isalpha(let));
		{
			switch (let)
			{
			case 'a':
			case 'A': cout << " Alpha ";
				break;
			case 'b':
			case 'B': cout << " Bravo ";
				break;
			case 'c':
			case 'C': cout << " Charlie ";
				break;
			case 'd':
			case 'D': cout << " Delta ";
				break;
			case 'e':
			case 'E': cout << " Echo ";
				break;
			case 'f':
			case 'F': cout << " Foxtrot ";
				break;
			case 'g':
			case 'G': cout << " Golf ";
				break;
			case 'h':
			case 'H': cout << " Hotel ";
				break;
			case 'i':
			case 'I': cout << " India ";
				break;
			case 'j':
			case 'J': cout << " Juliet ";
				break;
			case 'k':
			case 'K': cout << " Kilo ";
				break;
			case 'l':
			case 'L': cout << " Lima ";
				break;
			case 'm':
			case 'M': cout << " Mike ";
				break;
			case 'n':
			case 'N': cout << " November ";
				break;
			case 'o':
			case 'O': cout << " Oscar ";
				break;
			case 'p':
			case 'P': cout << " Papa ";
				break;
			case 'q':
			case 'Q': cout << " Quebec ";
				break;
			case 'r':
			case 'R': cout << " Romeo ";
				break;
			case 's':
			case 'S': cout << " Sierra ";
				break;
			case 't':
			case 'T': cout << " Tango ";
				break;
			case 'u':
			case 'U': cout << " Uniform ";
				break;
			case 'v':
			case 'V': cout << " Victor ";
				break;
			case 'w':
			case 'W': cout << " Whiskey ";
				break;
			case 'x':
			case 'X': cout << " X-ray ";
				break;
			case 'y':
			case 'Y': cout << " Yankee ";
				break;
			case 'z':
			case 'Z': cout << " Zulu ";
				break;
			}//end of switch
			letPos = letPos + 1;
		}//end of else
	}//end of while
	system("pause");

}//end of void