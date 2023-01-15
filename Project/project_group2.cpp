#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

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

    // Determine holiday
    string holiday;
    if (month == 1 && day == 1) {
        holiday = "New Year's Day";
    } else if (month == 1 && day == 6) {
        holiday = "Epiphany";
    } else if (month == 3 && day == 19) {
        holiday = "St. Joseph's Day";
    } else if (month == 5 && day == 1) {
        holiday = "Labor Day";
    } else if (month == 6 && day == 12) {
        holiday = "Independence Day";
    } else if (month == 8 && day == 15) {
        holiday = "Assumption Day";
    } else if (month == 11 && day == 1) {
        holiday = "All Saints' Day";
    } else if (month == 11 && day == 2) {
        holiday = "All Souls' Day";
    } else if (month == 11 && day == 30) {
        holiday = "Bonifacio Day";
    } else if (month == 12 && day == 8) {
        holiday = "Immaculate Conception";
    } else if (month == 12 && day == 24) {
        holiday = "Christmas Eve";
    } else if (month == 12 && day == 25) {
        holiday = "Christmas Day";
    } else if (month == 4 && day == 6) {
        holiday = "Maundy Thursday";
    }else if (month == 4 && day == 7) {
        holiday = "Maundy Friday";
    } else if (month == 4 && day == 10) {
        holiday = "Day of Valor";
    } else if (month == 5 && day == 1){
        holiday = "Labor Day";
    } else if (month == 4 && day == 7){
        holiday = "Good Friday";
    } else if (month == 8 && day == 28){
        holiday = "National Heroes Day";
    } else if (month == 12 && day == 30){
        holiday = "Rizal Day";
    } else if (month == 12 && day == 31){
        holiday = "Last Day of the Year";
    }

    
    else {
        holiday = "None";
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


if (month == 2){
    if (day >=30){
        cout << "\nInvalid date" << endl;
        cout << "\n" << "Press X + Enter to Exit" << endl;
        cin >> a;
        return 0;
    }
}

if (leap) {
    cout << "\n" << endl;
    cout << "The date is " << months[month] << " " << days[day] << ", " << year_words[year - YEAR_OFFSET] << " and it is a leap year, " << holiday << endl;
    cout << "\n" << "Press X + Enter to Exit" << endl;
    cin >> a; //dummy pause

}
else if (holiday == "None") {
    cout << "\n" << endl;
    cout << "The date is " << months[month] << " " << days[day] << ", " << year_words[year - YEAR_OFFSET] << " and there's no holiday " << endl;
    cout << "\n" << "Press X + Enter to Exit" << endl;
    cin >> a; //dummy pause
}
else {
    cout << "\n" << endl;
    cout << "The date is " << months[month] << " " << days[day] << ", " << year_words[year - YEAR_OFFSET] << " and it is " << holiday << endl;
    cout << "\n" << "Press X + Enter to Exit" << endl;
    cin >> a; //dummy pause
}

//use this build command for .exe ( g++ -o project_group2.exe project_g2.cpp)
//otherwise this (g++ -o project project_g2.cpp)
return 0;

}
