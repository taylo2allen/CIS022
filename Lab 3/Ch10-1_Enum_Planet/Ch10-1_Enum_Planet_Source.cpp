#include <iostream>
using namespace std;

int main()
{
int weight;
int planet;

enum Planet { Mercury, Venus, Earth, Moon, Mars, Jupiter, Saturn, Uranus, Neptune, Pluto };

cout << "Please enter your weight in pounds :" << endl << endl;
cin >> weight;
cout << endl << "Enter the number of the planet to find out how much you weight on that planet," << endl << endl;
cout << "0. Mercury 1. Venus 2. Earth 3. Moon 4. Mars " << endl << endl << "5. Jupiter 6. Saturn 7. Uranus. 8. Neputune 9. Pluto " << endl << endl;
cin >> planet;

switch(planet)
{
case Mercury: weight = (weight * .4155);
cout << endl << "Your wieght on Mercury is " << weight << " lbs." << endl << endl;
break;

case Venus: weight = (weight * .8975);
cout << endl << "Your wieght on Venus is " << weight << " lbs." << endl << endl;
break;

case Earth: weight = (weight * 1.0);
cout << endl << "Your wieght on Earth is " << weight << " lbs." << endl << endl;
break;

case Moon: weight = (weight * .166);
cout << endl << "Your wieght on the Moon is " << weight << " lbs." << endl << endl;
break;

case Mars: weight = (weight * .3507);
cout << endl << "Your wieght on Mars is " << weight << " lbs." << endl << endl;
break;

case Jupiter: weight = (weight * 2.5374);
cout << endl << "Your wieght on Jupiter is " << weight << " lbs." << endl << endl;
break;

case Saturn: weight = (weight * 1.0677);
cout << endl << "Your wieght on Saturn is " << weight << " lbs." << endl << endl;
break;

case Uranus: weight = (weight * .8947);
cout << endl << "Your wieght on Uranus is " << weight << " lbs." << endl << endl;
break;

case Neptune: weight = (weight * 1.1794);
cout << endl << "Your wieght on Neptune is " << weight << " lbs." << endl << endl;
break;

case Pluto: weight = (weight * .0899);
cout << endl << "Your wieght on Pluto is " << weight << " lbs." << endl << endl;
break;

default: cout << endl << "Number is not on the list" << endl << endl;
break;
}

system("pause");
return 0;

}
