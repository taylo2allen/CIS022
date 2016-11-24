#include <iostream>
#include <string>
#include <cmath> //used to round up to the nearest whole value
#include <fstream> //used to read data from an input file
#include <iomanip> //used for setprecision to show 5 decimal places
using namespace std;

int main()
{
	float StudentScore;
	float TotalPoints;
	float StudentGrade;
	float StudentGradePercentage;
	string filename;
	
	cout << "Please Enter The Filename Containing the Grades.\nFor Example use the Filename: Score_Data.txt" << endl << endl;
	cin >> filename;
	
	ifstream Score_Input;

	Score_Input.open(filename);

	Score_Input >> StudentScore >> TotalPoints;

	StudentGrade = StudentScore/TotalPoints;

	StudentGradePercentage = StudentGrade * 100;
	
	if (StudentGradePercentage > 90){
	cout << endl << "Excellent!" << endl << endl;
	}
	else if (StudentGradePercentage > 80){
	cout << endl << "Well Done!" << endl << endl;
	}
	else if (StudentGradePercentage > 70){
	cout << endl << "Good!" << endl << endl;
	}
	else if (StudentGradePercentage >= 60){
	cout << endl << "Needs Improvement!" << endl << endl;
	}
	else if (StudentGradePercentage < 50){
	cout << endl << "Fail!" << endl << endl;
	}
	
	cout << endl << "The Students Grade is " << ceil(StudentGradePercentage) << "%" << endl << endl;
	cout << "The Students Grade as a Floating Point is " << fixed << setprecision(5) << StudentGradePercentage << endl << endl;

	system("pause");

	return 0;
}

