#include <iostream>
using namespace std;

int main()
{
int weight;

int planet;

cout << "Please enter your weight in pounds:" << endl << endl;
cin >> weight;
cout << endl << "Enter the number of the planet to find out how much you weight on that planet," << endl << endl;
cout << "1. Mercury 2. Venus 3. Earth 4. Moon 5. Mars " << endl << endl << "6. Jupiter 7. Saturn 8. Uranus. 9. Neputune 10. Pluto " << endl << endl;
cin >> planet;

switch(planet)
{
case 1: weight = (weight * .4155);

cout << endl << "Your wieght on Mercury is " << weight << " lbs." << endl << endl;
break;

case 2: weight = (weight * .8975);
cout << endl << "Your wieght on Venus is " << weight << " lbs." << endl << endl;
break;

case 3: weight = (weight * 1.0);
cout << endl << "Your wieght on Earth is " << weight << " lbs." << endl << endl;
break;

case 4: weight = (weight * .166);
cout << endl << "Your wieght on the Moon is " << weight << " lbs." << endl << endl;
break;

case 5: weight = (weight * .3507);
cout << endl << "Your wieght on Mars is " << weight << " lbs." << endl << endl;
break;

case 6: weight = (weight * 2.5374);
cout << endl << "Your wieght on Jupiter is " << weight << " lbs." << endl << endl;
break;

case 7: weight = (weight * 1.0677);
cout << endl << "Your wieght on Saturn is " << weight << " lbs." << endl << endl;
break;

case 8: weight = (weight * .8947);
cout << endl << "Your wieght on Uranus is " << weight << " lbs." << endl << endl;
break;

case 9: weight = (weight * 1.1794);
cout << endl << "Your wieght on Neptune is " << weight << " lbs." << endl << endl;
break;

case 10: weight = (weight * .0899);
cout << endl << "Your wieght on Pluto is " << weight << " lbs." << endl << endl;
break;

default: cout << endl << "Number is not on the list" << endl << endl;
break;
}

system("pause");

return 0;

}