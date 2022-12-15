#include <iostream> //Initializes main library, this is where the code start on the flowchart
#include <string>
using namespace std; //We are defining here that we will use inputs and strings

#define length 10 //This is a macro for easy repetitive callout

int main() {

	cout<<"What's your First name? "; //Prints what's inside the quote mark
	std::string fname; //Defines a variable fname
	std::getline(cin, fname); //scans the absolute one line of the console
	printf ("\n"); //prints a one blank line
	cout<<"Nice! What's your Middle initial? "; //Just like on line 9
	std::string mname; //defines a variable
	std::cin >> mname; //inserts a value to the variable above
	printf ("\n"); //similar to line 12
	cout<<"Awesome! Lastly, enter your Surname! "; //just like line 9
	std::string sname; //similar to line 14
	std::cin >> sname; //like line 15
	printf ("\n"); //just like line 12
	
	cout << "Good day! " + fname << " " + mname << ". " + sname << + "\nHave a nice day! " + fname + " ingat :)";
		cout << endl; //prints everything on the variable's value and add a strongent string
	return 0; //code ended
}
