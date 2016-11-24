#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float NumberRight, TotalPoints, GradePercent;

	cout << "Please enter the students score." << endl << endl;
	cin >> NumberRight;

	cout << endl << "Please enter the total points of the assignment." << endl << endl;
	cin >> TotalPoints;

//calculate values

	GradePercent = (NumberRight / TotalPoints) * 100;

	cout << endl << GradePercent << "%" << endl << endl;

	system("pause");

	return 0;
}