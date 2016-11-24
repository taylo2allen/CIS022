#include "Period.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	//creating object of period by calling default constructor
	Period period;
	//creating object of period by calling constructor w/ param
    PeriodName name;
    char ch = 'y';
    int range1, range2;
    
    //loop
    while (ch == 'y' || ch == 'Y')
    {
        //user prompt to enter year ranges
        cout << "Enter the range of the prehistoric dates"
        << endl << "(in Million years, seperated" << "by space):";
        //read years
        cin >> range1 >> range2;
        //check validity of range then display error
        if(range1 < 0||range2 < 0)
            cout << "Invalid range. Please try again." << endl;
        else
       {
            //loop to display peroid names within range
            for(name = NEOGENE; name <= PRECAMBRIAN;
                name = PeriodName(name + 1))
            {
				if(period.toInt(name) >= range1 &&
				period.toInt(name)< range2)
				cout << "Period Name: " << period.toString(name) << endl << "The Period Began At " << period.toInt(name) << " Million Years." << endl << endl;
            }//end of for statement
            cout << endl << endl;
            //prompt user to continue
            cout << "Do you want to continue?"
            << "(Press 'n' to Exit 'y' to continue):";
            cin >> ch;
            cout << endl;
		}
    }
    system("Pause");
    return 0;
}