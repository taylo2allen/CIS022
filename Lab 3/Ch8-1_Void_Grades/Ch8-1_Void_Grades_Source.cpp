#include <iostream>
#include <string>
#include <cmath> 
#include <fstream> 
#include <iomanip> 
using namespace std;
ifstream Score_Input;
ofstream Score_Output;

void Grades(ifstream&, string&, float&, float&, float&, float&);

int main()
{
	float StudentScore;
	float TotalPoints;
	float StudentGrade;
	float StudentGradePercentage;
	string StudentName;
	string Filename;

	cout << "Please Enter The Filename Containing the Grades.\nFor Example use the Filename: Score_Data.txt" << endl << endl;
	cin >> Filename;
	cout << endl;
	
	if (!Score_Input)
	{
		cout << "Can't open input file." << endl << endl;
		system("pause");
	}

	Grades(Score_Input, Filename, StudentScore, TotalPoints, StudentGrade, StudentGradePercentage);

	return 0;
}//end of int main

void Grades(ifstream& inFile, string& Filename, float& StudentScore, float& TotalPoints, float& StudentGrade, float& StudentGradePercentage)
{

	inFile.open(Filename);
	string StudentName;

	while (inFile >> StudentName >> StudentScore >> TotalPoints)
	{
		StudentGrade = (StudentScore / TotalPoints);
	
		StudentGradePercentage = StudentGrade * 100;

		if (StudentGradePercentage > 90)
		{
		cout << fixed << setprecision(0) << StudentName << " " ;
		cout << ceil(StudentGradePercentage) << "% " << fixed << setprecision(5) << StudentGradePercentage << " Excellent!" << endl << endl;
		}
		else if (StudentGradePercentage > 80)
		{
		cout << fixed << setprecision(0) << StudentName << " " ;
		cout << ceil(StudentGradePercentage) << "% " << fixed << setprecision(5) << StudentGradePercentage << " Well Done!" << endl << endl;
		}
		else if (StudentGradePercentage > 70)
		{
		cout << fixed << setprecision(0) << StudentName << " " ;
		cout << ceil(StudentGradePercentage) << "% " << fixed << setprecision(5) << StudentGradePercentage << " Good!" << endl << endl;
		}
		else if (StudentGradePercentage >= 60)
		{
		cout << fixed << setprecision(0) << StudentName << " " ;
		cout << ceil(StudentGradePercentage) << "% " << fixed << setprecision(5) << StudentGradePercentage << " Needs Improvement!" << endl << endl;
		}
		else if (StudentGradePercentage < 50)
		{
		cout << fixed << setprecision(0) << StudentName << " " ;
		cout << ceil(StudentGradePercentage) << "% " << fixed << setprecision(5) << StudentGradePercentage << " Fail!" << endl << endl;
		}

	}//end of while
	
	system("Pause");
}