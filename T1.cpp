#include<iostream>
using namespace std;
 
string month_name[12] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
string zodiac_name[12] = { "Capricon", "Aquarius", "Pisces", "Aries", "Taurus", "Gemini", "Cancer", "Leo", "Virgo", "Libra", "Scorpio", "Sagittarius" };
 
void print_zodiac(int month, int day){
    string sign;
    if (month == 1)
    {
        if (day < 20)
            sign = zodiac_name[0];
        else
            sign = zodiac_name[1];
    }
    else if (month == 2)
    {
        if (day < 19)
            sign = zodiac_name[1];
        else
            sign = zodiac_name[2];
    }
    else if (month == 3)
    {
        if (day < 21)
            sign = zodiac_name[2];
        else
            sign = zodiac_name[3];
    }
    else if (month == 4)
    {
        if (day < 20)
            sign = zodiac_name[3];
        else
            sign = zodiac_name[4];
    }
    else if (month == 5)
    {
        if (day < 21)
            sign = zodiac_name[4];
        else
            sign = zodiac_name[5];
    }
    else if (month == 6)
    {
        if (day < 21)
            sign = zodiac_name[5];
        else
            sign = zodiac_name[6];
    }
    else if (month == 7)
    {
        if (day < 23)
            sign = zodiac_name[6];
        else
            sign = zodiac_name[7];
    }
    else if (month == 8)
    {
        if (day < 23)
            sign = zodiac_name[7];
        else
            sign = zodiac_name[8];
    }
    else if (month == 9)
    {
        if (day < 23)
            sign = zodiac_name[8];
        else
            sign = zodiac_name[9];
    }
    else if (month == 10)
    {
        if (day < 23)
            sign = zodiac_name[9];
        else
            sign = zodiac_name[10];
    }
    else if (month == 11)
    {
        if (day < 22)
            sign = zodiac_name[10];
        else
            sign = zodiac_name[11];
    }
    else if (month == 12)
    {
        if (day < 22)
            sign = zodiac_name[11];
        else
            sign = zodiac_name[0];
    }
    cout << "Your birth month is " << month_name[month-1] << " and your Zodiac sign is " << sign << endl;
}
 
int main()
{
int month, day;
cout << "Enter birth month";
cin >> month;
cout << "Enter your birth day: ";
cin >> day;
print_zodiac(month, day);
return 0;
}
