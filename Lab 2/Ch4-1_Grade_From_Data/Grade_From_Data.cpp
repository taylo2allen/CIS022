#include <iostream>
#include <cmath> //used to round up to the nearest whole value
#include <fstream> //used to read data from an input file
#include <iomanip> //used for setprecision to show 5 decimal places
using namespace std;

int main()
{
	string filename = "Score_Data.txt";
	float StudentScore;
	float TotalPoints;
	float StudentGrade;
	float StudentGradePercentage;

	ifstream Score_Input;
	Score_Input.open(filename);
	Score_Input >> StudentScore >> TotalPoints;

	StudentGrade = StudentScore/TotalPoints;
	StudentGradePercentage = StudentGrade * 100;
	
	cout << "The Students Score of " << StudentScore << " and with a total possible points of " << TotalPoints << "\nthen the students grade is:" << endl << endl;
	cout << ceil(StudentGradePercentage) << "%" << endl << endl;
	
	cout << "The Students Grade as a Floating Point is " << endl << endl;
	cout << fixed << setprecision(5) << StudentGrade << endl << endl;

	system("pause");

	return 0;
}
