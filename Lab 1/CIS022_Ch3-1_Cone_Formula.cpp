#include <iostream>;
using namespace std;

int main ()
{
	//declares pi r h v
	float radius, height, volume;
	float pi = 3.14159;

	//input a value for radius
	cout << "Please enter the radius of the Cone." << endl << endl;
	cin >> radius;

	//input value for height
	cout << endl << "Please enter the height of the Cone." << endl << endl;
	cin >> height;

	//calculates cones volume
	volume = (1.0/3.0) * pi * (radius*radius) * height;

	cout << endl << "The Volume of the Cone is " << volume << endl << endl;

	system("pause");

}
