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
    } else if (month == 7 && day == 4) {
        holiday = "Independence Day";
    } else if (month == 12 && day == 25) {
        holiday = "Christmas Day";
    } else {
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


if (leap) {
    cout << "The date is " << months[month] << " " << days[day] << ", " << year_words[year - YEAR_OFFSET] << " and it is a leap year, " << holiday << endl;
    cin >> a; //dummy pause

if (month == 2){
    if (day >=30){
        cout << "Invalid date" << endl;
    }
}
}
else if (holiday == "None") {
cout << "The date is " << months[month] << " " << days[day] << ", " << year_words[year - YEAR_OFFSET] << " and there's no holiday " << endl;
cin >> a; //dummy pause
}
else {
    cout << "The date is " << months[month] << " " << days[day] << ", " << year_words[year - YEAR_OFFSET] << " and it is " << holiday << endl;
    cin >> a; //dummy pause
}

  //use this build comman for .exe ( g++ -o project_group2.exe project_g2.cpp)
  //otherwise this (g++ -o project project_g2.cpp)
  
return 0;

}
