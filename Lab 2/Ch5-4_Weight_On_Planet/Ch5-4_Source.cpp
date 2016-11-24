#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int userWeight;
float weightOnPlanet;
string Planet;
int main()
{
cout << "Please enter you're weight:	" << endl << endl;
cin >> userWeight;

cout << endl << "Enter the name of the planet you would like to see your weight on:	" << endl << endl;
cin >> Planet;

if (Planet == "Mercury")
weightOnPlanet = userWeight * .4155;

else if (Planet == "Venus")
weightOnPlanet = userWeight * .8975;

else if (Planet == "Earth")
weightOnPlanet = userWeight * 1.0;

else if (Planet == "Moon")
weightOnPlanet = userWeight * .166;

else if (Planet == "Mars")
weightOnPlanet = userWeight * .3507;

else if (Planet == "Jupiter")
weightOnPlanet = userWeight * 2.5374;

else if (Planet == "Saturn")
weightOnPlanet = userWeight * 1.0677;

else if (Planet == "Uranus")
weightOnPlanet = userWeight * .8947;

else if (Planet == "Neptune")
weightOnPlanet = userWeight * 1.1794;

else if (Planet == "Pluto")
weightOnPlanet = userWeight * .0899;

else
{
cout << "Please enter a valid weight." << endl << endl;
cout << "Please enter a valid planet name make sure the first letter is capitalized." << endl << endl;
}
cout << endl << "Your weight on the planet '" << Planet << "' is " <<  ceil(weightOnPlanet) << " lbs." << endl << endl;

system("pause");

return 0;
}