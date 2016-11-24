#include <iostream>
#include <string>
using namespace std;

int main()
{
	string In_String,Out_String;
	char Letter;
	int Lenght, LetterPosition;

	string wordICAO[26] = {"Alpha","Bravo","Charlie","Delta","Echo","Foxtrot","Golf","Hotel","India","Juliet","Kilo","Lima","Mike","November","Oscar","Papa","Quebec","Romeo","Sierra","Tango","Uniform","Victor","Whiskey","X-ray","Yankee","Zula",};

	cout << "Please type the word to be converted into IACO. If you wish to quit type 'quit'." << endl << endl;
	cin >> In_String;

	
	Lenght = In_String.length();
	LetterPosition = 0;
	cout << endl << "The IACO version is: " << endl << endl;

	while (In_String != "quit")
	{
		for(int LetterPosition = 0;LetterPosition < In_String.length();LetterPosition ++)
		{

			Letter = In_String[LetterPosition];
			Letter = toupper(Letter);

			if (isalpha(Letter) == 0)
			{
				cout << endl << "Will skip character " << Letter << endl << endl;
			}
			else
			{
				Out_String = wordICAO[ Letter - 'A' ];
				cout << Out_String << " " << endl;
			}
		}//end of for statment

	cout << endl << "Please type the word to be converted into IACO. If you wish to quit type 'quit'." << endl << endl;
	cin >> In_String;

	}//end of while statement

	while(In_String == "quit")
	{
		return 0;
	}

	Lenght = In_String.length();
	cout << endl << "The IACO version is: " << endl << endl;																		
	
}//end of int main
