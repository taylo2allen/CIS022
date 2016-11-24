#include <iostream>
#include <iostream>
#include <string>
using namespace std;
string hoursInWords, minutesInWords, timeInWords;

int main()
{
// local variables to hold numeric hour and minute inputs
int Hours = 0, Minutes = 0;

// local variable to hold time in words for output
string hoursInWords = "", minutesInWords = "", timeInWords = "";

// output instructions
cout << "Enter time in  and Minutes separated by a space." << endl;
cout << "For example, 7:45, you type : 7 45" << endl;
cout << "For example, 14:02, you type : 14 02" << endl << endl;
cin >> Hours >> Minutes;

// test for special cases
if (Hours == 0 && Minutes == 0)
{
cout << endl << "Midnight" << endl << endl;
system("pause");
return 0;
}// if Hours == 0 && Minutes == 0

if (Hours == 12 && Minutes == 0)
{
cout << endl << "Noon" << endl << endl;
system("pause");
return 0;
}//endif Hours == 12 && Minutes == 0

// determine AM / PM
if (Hours > 11)
{

Hours = Hours - 12;
timeInWords = " PM";

if (Hours == 0) { Hours = 12; } // 0 PM is really 12 PM

} //endif Hours > 11

else
{

timeInWords = " AM";

if (Hours == 0) { Hours = 12;} // 0 AM is really 12 AM

}// endif else

// convert Hours to words. switch based on number value and get a string
switch (Hours)
{

case 1:
hoursInWords = "One ";
break;

case 2:
hoursInWords = "Two ";
break;

case 3:
hoursInWords = "Three ";
break;

case 4:
hoursInWords = "Four ";
break;

case 5:
hoursInWords = "Five ";
break;

case 6:
hoursInWords = "Six ";
break;

case 7:
hoursInWords = "Seven ";
break;

case 8:
hoursInWords = "Eight ";
break;

case 9:
hoursInWords = "Nine ";
break;

case 10:
hoursInWords = "Ten ";
break;

case 11:
hoursInWords = "Eleven ";
break;

case 12:
default:
hoursInWords = "Twelve ";
break;

}//end of switch Hours

// same thing for Minutes...
switch (Minutes)
{

case 1:
minutesInWords = "O' One";
break;

case 2:
minutesInWords = "O' Two";
break;

case 3:
minutesInWords = "O' Three";
break;

case 4:
minutesInWords = "O' Four";
break;

case 5:
minutesInWords = "O' Five";
break;

case 6:
minutesInWords = "O' Six";
break;

case 7:
minutesInWords = "O' Seven";
break;

case 8:
minutesInWords = "O' Eight";
break;

case 9:
minutesInWords = "O' Nine";
break;

case 10:
minutesInWords = "Ten";
break;

case 11:
minutesInWords = "Eleven";
break;

case 12:
minutesInWords = "Twelve";
break;

case 13:
minutesInWords = "thirteen";
break;

case 14:
minutesInWords = "Fourteen";
break;

case 15:
minutesInWords = "Fifteen";
break;

case 16:
minutesInWords = "Sixteen";
break;

case 17:
minutesInWords = "Seventeen";
break;

case 18:
minutesInWords = "Eighteen";
break;

case 19:
minutesInWords = "Nineteen";
break;

case 20:
minutesInWords = "Twenty";
break;

case 21:
minutesInWords = "Twenty One";
break;

case 22:
minutesInWords = "Twenty Two";
break;

case 23:
minutesInWords = "Twenty Three";
break;

case 24:
minutesInWords = "Twenty Four";
break;

case 25:
minutesInWords = "Twenty Five";
break;

case 26:
minutesInWords = "Twenty Six";
break;

case 27:
minutesInWords = "Twenty Seven";
break;

case 28:
minutesInWords = "Twenty Eight";
break;

case 29:
minutesInWords = "Twenty Nine";
break;

case 30:
minutesInWords = "Thirty";
break;

case 31:
minutesInWords = "Thirty One";
break;

case 32:
minutesInWords = "Thirty Two";
break;

case 33:
minutesInWords = "Thirty Three";
break;

case 34:
minutesInWords = "Thirty Four";
break;

case 35:
minutesInWords = "Thirty Five";
break;

case 36:
minutesInWords = "Thirty Six";
break;

case 37:
minutesInWords = "Thirty Seven";
break;

case 38:
minutesInWords = "Thirty Eight";
break;

case 39:
minutesInWords = "Thirty Nine";
break;

case 40:
minutesInWords = "Forty";
break;

case 41:
minutesInWords = "Forty One";
break;

case 42:
minutesInWords = "Forty Two";
break;

case 43:
minutesInWords = "Forty Three";
break;

case 44:
minutesInWords = "Forty Four";
break;

case 45:
minutesInWords = "Forty Five";
break;

case 46:
minutesInWords = "Forty Six";
break;

case 47:
minutesInWords = "Forty Seven";
break;

case 48:
minutesInWords = "Forty Eight";
break;

case 49:
minutesInWords = "Forty Nine";
break;

case 50:
minutesInWords = "Fifty";
break;

case 51:
minutesInWords = "Fifty One";
break;

case 52:
minutesInWords = "Fifty Two";
break;

case 53:
minutesInWords = "Fifty Three";
break;

case 54:
minutesInWords = "Fifty Four";
break;

case 55:
minutesInWords = "Fifty Five";
break;

case 56:
minutesInWords = "Fifty Six";
break;

case 57:
minutesInWords = "Fifty Seven";
break;

case 58:
minutesInWords = "Fifty Eight";
break;

case 59:
minutesInWords = "Fifty Nine";
break;

case 0:
default:

minutesInWords = "O'Clock";
break;

}

cout << endl << "The time is : " << hoursInWords << minutesInWords << timeInWords << endl << endl;

system("pause");

return 0;

}//end of int main
