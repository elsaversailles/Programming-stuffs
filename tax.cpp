#include <iostream>
using namespace std;
int main()
{
    int single, married, widow, hof, salary, tax, medicare, sss, monthly_income, deduction, total_deduction; //single, married, widow, hof = array

    string lastname, firstname, marital_status;
    cout << "Enter your lastname: ";
    cin >> lastname;
    cout << "Enter your firstname: ";
    cin >> firstname;
    cout << "Enter your marital status (Single, Married, Widow, HOF): ";
    cin >> marital_status;
    cout << "Enter your monthly income: ";
    cin >> monthly_income;

    /*
    cout << lastname;
    cout << firstname;
    cout << marital_status;
    cout << monthly_income;
    */

   if (marital_status == "Single")
   {      // deduction = 0;
           sss = monthly_income * 0.08;
           tax = monthly_income * 0.06;
           medicare = monthly_income * 0.04;
           cout << "Your sss is: " << sss << endl;
           cout << "Your tax is: " << tax << endl;
           cout << "Your medicare is: " << medicare << endl;
           cout << "Total deduction: " << sss + tax + medicare << endl;
       }

    if (marital_status == "Married")
   {      // deduction = 0;
           sss = monthly_income * 0.05;
           tax = monthly_income * 0.03;
           medicare = monthly_income * 0.01;
           cout << "Your sss is: " << sss << endl;
           cout << "Your tax is: " << tax << endl;
           cout << "Your medicare is: " << medicare << endl;
           cout << "Total deduction: " << sss + tax + medicare << endl;
       }
       if (marital_status == "Widow")
   {      // deduction = 0;
           sss = monthly_income * 0.06;
           tax = monthly_income * 0.04;
           medicare = monthly_income * 0.02;
           cout << "Your sss is: " << sss << endl;
           cout << "Your tax is: " << tax << endl;
           cout << "Your medicare is: " << medicare << endl;
           cout << "Total deduction: " << sss + tax + medicare << endl;
       }

       if (marital_status == "HOF")
   {      // deduction = 0;
           sss = monthly_income * 0.06;
           tax = monthly_income * 0.04;
           medicare = monthly_income * 0.02;
           cout << "Your sss is: " << sss << endl;
           cout << "Your tax is: " << tax << endl;
           cout << "Your medicare is: " << medicare << endl;
           cout << "Total deduction: " << sss + tax + medicare << endl;
       }
       






    
}
