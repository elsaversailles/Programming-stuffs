#include <iostream>
#include <string>
using namespace std;

#define length 10

int main() {

	cout<<"What's your Surname? ";
	std::string sname;
	std::getline(cin, sname);
	printf ("\n");
	cout<<"Nice! What's your First name? ";
	std::string fname;
	std::getline(cin, fname);
	printf ("\n");
	cout<<"Lastly, Tell us your Middle initial? ";
	std::string mname;
	std::getline(cin, mname);
	printf ("\n");
	
	cout << "Good day! " + fname << " " + mname << ". " + sname << + "\nHave a nice day! " + fname + " ingat :)";
		cout << endl;
	return 0;
}
