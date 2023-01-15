#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

struct Holiday {
    int month;
    int day;
    string name;
};
int main() {
    int month, day, year, a;
    cout << "Enter month (in numerical form): ";
    cin >> month;
    cout << "Enter day: ";
    cin >> day;
    cout << "Enter year: ";
    cin >> year;

    // Determine if leap year
    bool leap = false;
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                leap = true;
            }
        } else {
            leap = true;
        }
    }

      // Create array of holidays
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

    // Check for holiday
    string holiday = "None";
    for (int i = 0; i < sizeof(holidays)/sizeof(Holiday); i++) {
        if (holidays[i].month == month && holidays[i].day == day) {
            holiday = holidays[i].name;
            break;
        }
    }


    // Month array
    string months[] = {"Invalid month", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    // Day array
    string days[] = {"Invalid day", "first", "second", "third", "fourth", "fifth", "sixth", "seventh", "eighth", "ninth", "tenth", "eleventh", "twelfth", "thirteenth", "fourteenth", "fifteenth", "sixteenth", "seventeenth", "eighteenth", "nineteenth", "twentieth", "twenty-first", "twenty-second", "twenty-third", "twenty-fourth", "twenty-fifth", "twenty-sixth", "twenty-seventh", "twenty-eighth", "twenty-ninth", "thirtieth", "thirty-first"};

    // Leap year adjustment for days
    /*
    if (leap) {
        days[28] = "twenty-eighth";
        days[29] = "twenty-ninth";
    }
*/
    if (month == 2 && day == 28) {
        if (leap) {
            days[29] = "twenty-ninth";
        }
    }

    // Year array
   enum year_offset {YEAR_OFFSET = 1970}; //Magic Sauce :)
string year_words[58] = {"Invalid year", "nineteen seventy one", "nineteen seventy two", "nineteen seventy three", "nineteen seventy four", "nineteen seventy five", "nineteen seventy six", "nineteen seventy seven", "nineteen seventy eight", "nineteen seventy nine", "nineteen eighty", "nineteen eighty one", "nineteen eighty two", "nineteen eighty three", "nineteen eighty four", "nineteen eighty five", "nineteen eighty six", "nineteen eighty seven", "nineteen eighty eight", "nineteen eighty nine", "nineteen ninety", "nineteen ninety one", "nineteen ninety two", "nineteen ninety three", "nineteen ninety four", "nineteen ninety five", "nineteen ninety six", "nineteen ninety seven", "nineteen ninety eight", "nineteen ninety nine", "two thousand", "two thousand one", "two thousand two", "two thousand three", "two thousand four", "two thousand five", "two thousand six", "two thousand seven", "two thousand eight", "two thousand nine", "two thousand ten", "two thousand eleven", "two thousand twelve", "two thousand thirteen", "two thousand fourteen", "two thousand fifteen", "two thousand sixteen", "two thousand seventeen", "two thousand eighteen", "two thousand nineteen", "two thousand twenty", "two thousand twenty one", "two thousand twenty two", "two thousand twenty three"};

string error_msg = "\nInvalid date \nPress X + Enter to Exit";
string exit_msg = "\nPress X + Enter to Exit";

if (month == 2){
    if (day >=30){
        cout << error_msg << endl;
        cin >> a;
    }
}

if (year <=1969) {
    cout << error_msg << endl;
    cin >> a;
    terminate(); //this exist because of a bug that keeps the program running even after an error
}

if (year >= 2024) {
    cout << error_msg << endl;
    cin >> a;
    terminate();
}

if (day >= 32){
    cout << error_msg << endl;
    cin >> a;
}

else if (day <= 0){
    cout << error_msg << endl;
    cin >> a;
}
    
else if (month <= 0){
    cout << error_msg << endl;
    cin >> a;
}

else if (month >= 13){ //check if month is greater than 13
    cout << error_msg << endl;
    cin >> a;
}

else if (month == 2){ //Feb check
    if (day >=30){
        cout << error_msg << endl;
        cin >> a;
    }
}

else if (month == 4){
    if (day >=31){ //April check
        cout << error_msg << endl;
        cin >> a;
    }
}

else if (month == 6) {
    if (day >=31){ //June check
        cout << error_msg << endl;
        cin >> a;
    }
}

else if (month == 9) {
    if (day >=31){  //Sep check
        cout << error_msg << endl;
        cin >> a;
    }
}

else if (month == 11) {
    if (day >=31){  //Nov check
        cout << error_msg << endl;
        cin >> a;
    }
}


// Print Part
if (leap) {
    cout << "\n" << endl;
    cout << "The date is " << months[month] << " " << days[day] << ", " << year_words[year - YEAR_OFFSET] << " and it is a leap year, " << holiday << endl;
    cout << exit_msg << endl;
    cin >> a; //dummy pause

}
else if (leap == false && day == 29 && month == 2){ // This check if the year is leap year and if not check the day if 29 and if it is end the program
    cout << "\n" << endl;
    cout << "Given date is not leap year, Invalid Date" << endl;
    cout << exit_msg << endl;
    cin >> a; //dummy pause
}
else if (holiday == "None") {
    cout << "\n" << endl;
    cout << "The date is " << months[month] << " " << days[day] << ", " << year_words[year - YEAR_OFFSET] << " and there's no holiday " << endl;
    cout << exit_msg << endl;
    cin >> a; //dummy pause
}
else {
    cout << "\n" << endl;
    cout << "The date is " << months[month] << " " << days[day] << ", " << year_words[year - YEAR_OFFSET] << " and it is " << holiday << endl;
    cout << exit_msg << endl;
    cin >> a; //dummy pause
}

//use this build command for .exe ( g++ -o project_group2.exe project_g2.cpp)
//otherwise this (g++ -o project project_g2.cpp)
return 0;

}
