#include <iostream>
#include <string>
//#include <iomanip>
using namespace std;

//declare enum

enum PeriodName {NEOGENE, PALEOGENE, CRETACEOUS,JURASSIC,
				TRIASSIC,PERMIAN,CARBONIFEROUS,DEVONIAN,
				SILURIAN,ORDOVICIAN,CAMBRIAN,PRECAMBRIAN};

//funtion declarations

int toInt(PeriodName);
string toString(PeriodName);

int main()
{
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
                if(toInt(name) >= range1 &&
                   toInt(name)< range2)
                    cout << "Period Name: " << toString(name) << endl << "The Period Began At " << toInt(name) << " Million Years." << endl << endl;
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
// function that returns the starting date/interger
int toInt(PeriodName name)
{

int startingYear;
//switch case
    switch(name)
    {
    case PRECAMBRIAN:
        startingYear = 4500;
        break;
    case CAMBRIAN:
        startingYear = 570;
        break;
    case ORDOVICIAN:
        startingYear = 500;
        break;
    case SILURIAN:
        startingYear = 435;
        break;
    case DEVONIAN:
        startingYear = 395;
        break;
    case CARBONIFEROUS:
        startingYear = 345;
        break;
    case PERMIAN:
        startingYear = 280;
        break;
    case TRIASSIC:
        startingYear = 225;
        break;
    case JURASSIC:
        startingYear = 192;
        break;
    case CRETACEOUS:
        startingYear = 136;
        break;
    case PALEOGENE:
        startingYear = 65;
        break;
    case NEOGENE:
        startingYear = 23;
        break;
    }
        return startingYear;
}


//function that returns the timeperiod as a string
string toString(PeriodName name)
{
    string periodName;
    //switch case to return name based on parameter
    switch(name)
    {
        case PRECAMBRIAN:
            periodName = "Precambrian";
            break;
        case CAMBRIAN:
            periodName = "Cambrian";
            break;
        case ORDOVICIAN:
            periodName = "Ordovician";
            break;
        case SILURIAN:
            periodName = "Silurian";
            break;
        case DEVONIAN:
            periodName = "Devonian";
            break;
        case CARBONIFEROUS:
            periodName = "Carboniferous";
            break;
        case PERMIAN:
            periodName = "Permian";
            break;
        case TRIASSIC:
            periodName = "Triassic";
            break;
        case JURASSIC:
            periodName = "Jurassic";
            break;
        case CRETACEOUS:
            periodName = "Cretaceous";
            break;
        case PALEOGENE:
            periodName = "Paleogene";
            break;
        case NEOGENE:
            periodName = "Neogene";
            break;
    }
    return periodName;
}