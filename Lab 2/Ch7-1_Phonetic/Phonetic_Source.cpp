#include <iostream>
#include <string>
using namespace std;

int main()
{
	//using std :: string;

	string In_String;
	char Letter;
	int Lenght, LetterPosition;

	cout << "Please type the word to be converted into IACO:" << endl << endl;
	cin >> In_String;

	cout << endl << "The IACO version is: " << endl << endl;
	Lenght = In_String.length();
	LetterPosition = 0;

	while (LetterPosition <= Lenght -1)
	{
		Letter = In_String.at(LetterPosition);
		if (isalpha(Letter) == 0)
		cout << endl << "Will skip character " << Letter << endl << endl;
		
		else (isalpha(Letter));
		{
			switch (Letter) 
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
			}

			LetterPosition = LetterPosition ++;

		}

	}
	system("pause");
	return 0;																			
	
}
