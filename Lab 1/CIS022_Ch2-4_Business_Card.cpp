#include <iostream>
#include <string>
using namespace std;

const string BUSINESS = "	CIS022 Incorporated  ";
const string NAME = "	Taylor Allen	";
const string ADDRESS = "	575 Phelps Court";
const string PHONE = "	707-319-8529	";
const string EMAIL = "  tallen30@students.solano.edu"  ;
const string SPACE = "	";

int main()
{
string businessRow; //a row begining with business name
string nameRow;//a row beinning with name 
string addressRow;// a row beginning with address
string phoneRow;//a row beinning with phone number
string spaceRow;//a row beinning with a space
string emailRow;//a row beinning with email address

//create businessRow with basic strings
businessRow = BUSINESS + SPACE + BUSINESS;
nameRow = NAME + SPACE + NAME;
addressRow = ADDRESS + SPACE + ADDRESS;
phoneRow = PHONE + SPACE + PHONE;
emailRow = EMAIL + SPACE + EMAIL;

//prints 4 rows business-name-address
cout << businessRow << endl;
cout << nameRow << endl;
cout << addressRow << endl;
cout << phoneRow << endl;
cout << emailRow << endl;
cout << spaceRow << endl;

cout << businessRow << endl;
cout << nameRow << endl;
cout << addressRow << endl;
cout << phoneRow << endl;
cout << emailRow << endl;
cout << spaceRow << endl;

cout << businessRow << endl;
cout << nameRow << endl;
cout << addressRow << endl;
cout << phoneRow << endl;
cout << emailRow << endl;
cout << spaceRow << endl;

cout << businessRow << endl;
cout << nameRow << endl;
cout << addressRow << endl;
cout << phoneRow << endl;
cout << emailRow << endl;
cout << spaceRow << endl;

system("pause");

return 0;

}