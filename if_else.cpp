#include <iostream>
using namespace std;
int main()
{ 
   //create a program that will display if the given number is positive or negative and divisible by 2 and 5
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (num > 0)
    {
       // cout << "The number is positive and divisible by 2 and 5" << endl;
        if ((num % 2 == 0) && (num % 5 == 0))
        {
            cout << "The number is positive and divisible by 2 and 5" << endl;
        }

        if ((num % 2 == 0))
        {
            cout << "The number is positive and divisible by 2" << endl;
            goto f;
        }
        if ((num % 5 == 0))
        {
            cout << "The number is positive and divisible by 5" << endl;
            goto f;
        }
        else
        {
            cout << "The number is positive but not divisible by 2 and 5" << endl;
        }

        f:
        cout << "END" << endl;
    }
    else if (num < 0)
    {
        if ((num % 2 <= 0) && (num % 5 == 0))
        {
            cout << "The number is negative and divisible by 5 but not 2" << endl;
            goto k;
        }
         if ((num % 2 == 0) && (num % 5 <= 0))
        {
            cout << "The number is negative and divisible by 2 but not divisible but not 5" << endl;
            goto f;
        }
        if ((num % 5 < 0))
        {
            cout << "The number is negative and divisible by 5" << endl;
            goto k;
        }
        else
        {
            cout << "The number is negative but not divisible by 2 and 5" << endl;
        }

        k:
        cout << "END" << endl;
    }
    
    }

