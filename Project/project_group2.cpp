#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

struct Holiday { //This is for the holiday array, we declare month and day as number
    int month;
    int day;
    string name;
};

int main() {
    int month, day, year, a; //we as the usser for 3 numbers, the month, day and year. "A" is exit variable
    cout << "Enter month (in numerical form): ";
    cin >> month; //ask for user input and put it in "MONTH variable"
    cout << "Enter day: ";
    cin >> day; //ask for user input and put it in "DAY variable"
    cout << "Enter year: ";
    cin >> year; //ask for user input and put it in "YEAR variable"

    // Determine if leap year
    bool leap = false;
    if (year % 4 == 0) { //Divide the user added year by 4 if there's no remainder go to next line
        if (year % 100 == 0) { //Now divide it by 100 if there's no remainder go to next line
            if (year % 400 == 0) { //after dividing by 400 if there's no remainder 
                leap = true; //the YEAR is LEAP Year!
            }
        } else {
            leap = true; //else, still leap year
        }
    }

      // Create array of holidays, THIS IS DIRECTLY ACCESSIBLE BY THE CODE
    Holiday holidays[] = {
        {1, 1, "New Year's Day"},
        {1, 6, "Epiphany"},
        {3, 19, "St. Joseph's Day"},
        {4, 6, "Maundy Thursday"},
        {4, 7, "Good Friday"},
        {4, 10, "Day of Valor"},
        {5, 1, "Labor Day"},
        {6, 12, "Independence Day"},
        {8, 15, "Assumption Day"},
        {8, 28, "National Heroes Day"},
        {11, 1, "All Saints' Day"},
        {11, 2, "All Souls' Day"},
        {11, 30, "Bonifacio Day"},
        {12, 8, "Immaculate Conception"},
        {12, 24, "Christmas Eve"},
        {12, 25, "Christmas Day"},
        {12, 30, "Rizal Day"},
        {12, 31, "Last Day of the Year"}
    };

    // Check for holiday, this uses For loop which runs around the array at the top
    string holiday = "None";
    for (int i = 0; i < sizeof(holidays)/sizeof(Holiday); i++) {
        if (holidays[i].month == month && holidays[i].day == day) {
            holiday = holidays[i].name;
            break;
        }
    }

    // Month array DIRECT ACCESS
    string months[] = {"Invalid month", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    // Day array
    string days[] = {"Invalid day", "first", "second", "third", "fourth", "fifth", "sixth", "seventh", "eighth", "ninth", "tenth", "eleventh", "twelfth", "thirteenth", "fourteenth", "fifteenth", "sixteenth", "seventeenth", "eighteenth", "nineteenth", "twentieth", "twenty-first", "twenty-second", "twenty-third", "twenty-fourth", "twenty-fifth", "twenty-sixth", "twenty-seventh", "twenty-eighth", "twenty-ninth", "thirtieth", "thirty-first"};

    if (month == 2 && day == 28) {
        if (leap) {
            days[29] = "twenty-ninth";
        }
    }

// Year array
enum year_offset {YEAR_OFFSET = 1970}; //Magic Sauce :) This moves the default "index 0" all the way to 1970, which allows us to access the array without integer conversion

string year_words[58] = {"Invalid year", "nineteen seventy one", "nineteen seventy two", "nineteen seventy three", "nineteen seventy four", "nineteen seventy five", "nineteen seventy six", "nineteen seventy seven", "nineteen seventy eight", "nineteen seventy nine", "nineteen eighty", "nineteen eighty one", "nineteen eighty two", "nineteen eighty three", "nineteen eighty four", "nineteen eighty five", "nineteen eighty six", "nineteen eighty seven", "nineteen eighty eight", "nineteen eighty nine", "nineteen ninety", "nineteen ninety one", "nineteen ninety two", "nineteen ninety three", "nineteen ninety four", "nineteen ninety five", "nineteen ninety six", "nineteen ninety seven", "nineteen ninety eight", "nineteen ninety nine", "two thousand", "two thousand one", "two thousand two", "two thousand three", "two thousand four", "two thousand five", "two thousand six", "two thousand seven", "two thousand eight", "two thousand nine", "two thousand ten", "two thousand eleven", "two thousand twelve", "two thousand thirteen", "two thousand fourteen", "two thousand fifteen", "two thousand sixteen", "two thousand seventeen", "two thousand eighteen", "two thousand nineteen", "two thousand twenty", "two thousand twenty one", "two thousand twenty two", "two thousand twenty three"};

//this variable is use for printing messages, this makes the code cleaner and smaller
string error_msg = "\nInvalid date \nPress X + Enter to Exit";
string exit_msg = "\nPress X + Enter to Exit";

if (month == 2){ //if the user insert 30 or more on FEBRUARY
    if (day >=30){
        cout << error_msg << endl; //show this messsage
        cin >> a; //delay CMD termination
        terminate(); //Kill the process
    }
}
else if (month >= 13 || month <= 0){ //check if month is greater than 13 or less than 0
    cout << error_msg << endl;
    cin >> a;
    terminate(); //for C++11 or later only
}
else if (month == 4 || month == 6 || month == 9 || month == 11) { //simplified statement for months with 30 days. We use OR gate which mimics conditional statement
    if (day >=31){ //June, September, April check
        cout << error_msg << endl;
        cin >> a;
        terminate();
    }
}
else if (day >= 32 || day <= 0){ //Check if user inputs day 0 or 32 and up if yes
    cout << error_msg << endl; //Throw error message
    cin >> a;
    terminate(); //kill the process
}
else if (year <=1969 || year >= 2024) { //check if the user inputs out of range year
    cout << error_msg << endl; //Throw error message
    cin >> a;
    terminate(); //this exist because of a bug that keeps the program running even after an error
}

// Print Part
if (leap) { //check if the yearr is leap year if yes run the code below
    cout << "\n" << endl;
    cout << "The date is " << months[month] << " " << days[day] << ", " << year_words[year - YEAR_OFFSET] << " and it is a leap year, " << holiday << endl; //Print this
    cout << exit_msg << endl; //Print exit message
    cin >> a; //dummy pause

}
else if (leap == false && day == 29 && month == 2){ // This check if the year is leap year and if not check the day if 29 and if it is end the program
    cout << "\n" << endl;
    cout << "Given date is not leap year, Invalid Date" << endl;
    cout << exit_msg << endl;
    cin >> a; //dummy pause
}
else if (holiday == "None") { //If here's no holiday execute this code
    cout << "\n" << endl;
    cout << "The date is " << months[month] << " " << days[day] << ", " << year_words[year - YEAR_OFFSET] << " and there's no holiday " << endl;
    cout << exit_msg << endl;
    cin >> a; //dummy pause
}
else { //ELSE, this
    cout << "\n" << endl;
    cout << "The date is " << months[month] << " " << days[day] << ", " << year_words[year - YEAR_OFFSET] << " and it is " << holiday << endl;
    cout << exit_msg << endl;
    cin >> a; //dummy pause
}

//use this build command for .exe ( g++ -o project_group2.exe project_g2.cpp)
//otherwise this (g++ -o project project_g2.cpp)
return 0;

}
