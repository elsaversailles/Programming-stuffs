#include <iostream>
using namespace std;
int main()
{
    int single, married, widow, hof, salary, tax, medicare, sss, monthly_income, deduction, total_deduction, dependents,
    gross_income, exemption, net_monthly_income, annual_tax_income, tax_due, antaxinc; //single, married, widow, hof = array

    string lastname, firstname, marital_status;
    cout << "Enter your lastname: ";
    cin >> lastname;
    cout << "Enter your firstname: ";
    cin >> firstname;
    cout << "Enter your marital status (Single, Married, Widow, HOF): ";
    cin >> marital_status;
    cout << "Enter your monthly income: ";
    cin >> monthly_income;
    cout << "Enter your dependents: ";
    cin >> dependents;

    if (dependents <= 4)
    {



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
           cout << "\n Total deduction: " << sss + tax + medicare << endl;

           gross_income = monthly_income - (sss + tax + medicare);

           cout << "Gross income: " << gross_income << endl;

           exemption = dependents * 4000;

           cout << "Exemption: " << dependents * 4000 << endl;

            net_monthly_income = gross_income - exemption;

           cout << "Net monthly income: " << net_monthly_income << endl;

           annual_tax_income = net_monthly_income * 12;

           cout << "Annual tax income: " << annual_tax_income << endl;

           if (annual_tax_income <= 250000)
           {
               tax_due = 0;
               cout << "Tax due: " << tax_due << endl;
           }
           else if (annual_tax_income >= 250001 && annual_tax_income <= 400000)
           {
               tax_due = (annual_tax_income - 250000) * 0.15;
               cout << "Tax due: " << tax_due << endl;
           }
           else if (annual_tax_income == 400000)
           {
               tax_due = annual_tax_income - 22500;
               cout << "Tax due: " << tax_due << endl;
 
           }
           else if (annual_tax_income >= 400001 && annual_tax_income <= 800000)
           {
                tax_due = (annual_tax_income - 400000);
               // tax_due = 192,800
               tax_due = (tax_due * 0.20) + 22500 ;
               cout << "Tax due: " << tax_due << endl;
 
           }

         else if (annual_tax_income == 800000)
           {
               tax_due = annual_tax_income - 102500;
               cout << "Tax due: " << tax_due << endl;
 
           }


           else if (annual_tax_income >= 800001 && annual_tax_income <= 2000000)
           {
               tax_due = (annual_tax_income - 800000);
                tax_due = (tax_due * 0.25) + 102500 ;
               cout << "Tax due: " << tax_due << endl;
 
           }

           else if (annual_tax_income == 2000000)
           {
               tax_due = annual_tax_income - 402500;
               cout << "Tax due: " << tax_due << endl;
 
           }
           else if (annual_tax_income >= 2000001 && annual_tax_income <= 8000000)
           {
               tax_due = (annual_tax_income - 2000000);
               tax_due = (tax_due * 0.30) + 402500 ;
               cout << "Tax due: " << tax_due << endl;
           }

           else if (annual_tax_income == 8000000)
           {
               tax_due = annual_tax_income - 2202500;
               cout << "Tax due: " << tax_due << endl;
 
           }

           else if (annual_tax_income >= 8000001)
           {
               tax_due = (annual_tax_income - 8000000);
               tax_due = (tax_due * 0.35) + 2202500 ;
               cout << "Tax due: " << tax_due << endl;
           }


    }

    if (marital_status == "Married")
   {      // deduction = 0;
           sss = monthly_income * 0.05;
           tax = monthly_income * 0.03;
           medicare = monthly_income * 0.01;
           cout << "Your sss is: " << sss << endl;
           cout << "Your tax is: " << tax << endl;
           cout << "Your medicare is: " << medicare << endl;
           cout << "\n Total deduction: " << sss + tax + medicare << endl;

           gross_income = monthly_income - (sss + tax + medicare);

           cout << "Gross income: " << gross_income << endl;

           exemption = dependents * 4000;

           cout << "Exemption: " << dependents * 4000 << endl;

            net_monthly_income = gross_income - exemption;

           cout << "Net monthly income: " << net_monthly_income << endl;

           annual_tax_income = net_monthly_income * 12;

           cout << "Annual tax income: " << annual_tax_income << endl;

           if (annual_tax_income <= 250000)
           {
               tax_due = 0;
               cout << "Tax due: " << tax_due << endl;
           }
           else if (annual_tax_income >= 250001 && annual_tax_income <= 400000)
           {
               tax_due = (annual_tax_income - 250000) * 0.20;
               cout << "Tax due: " << tax_due << endl;
           }
           else if (annual_tax_income >= 400001 && annual_tax_income <= 800000)
           {
               tax_due = (annual_tax_income - 400000) * 0.25;
               cout << "Tax due: " << tax_due << endl;
           }
           else if (annual_tax_income >= 800001 && annual_tax_income <= 2000000)
           {
               tax_due = (annual_tax_income - 800000) * 0.30;
               cout << "Tax due: " << tax_due << endl;
           }
           else if (annual_tax_income >= 2000001 && annual_tax_income <= 8000000)
           {
               tax_due = (annual_tax_income - 2000000) * 0.32;
               cout << "Tax due: " << tax_due << endl;
           }
           else if (annual_tax_income >= 8000001)
           {
               tax_due = (annual_tax_income - 8000000) * 0.35;
               cout << "Tax due: " << tax_due << endl;
           }
       }

    if (marital_status == "Widow")
   {      // deduction = 0;
           sss = monthly_income * 0.06;
           tax = monthly_income * 0.04;
           medicare = monthly_income * 0.02;
           cout << "Your sss is: " << sss << endl;
           cout << "Your tax is: " << tax << endl;
           cout << "Your medicare is: " << medicare << endl;
           cout << "\n Total deduction: " << sss + tax + medicare << endl;

           gross_income = monthly_income - (sss + tax + medicare);

           cout << "Gross income: " << gross_income << endl;

           exemption = dependents * 4000;

           cout << "Exemption: " << dependents * 4000 << endl;

            net_monthly_income = gross_income - exemption;

           cout << "Net monthly income: " << net_monthly_income << endl;

           annual_tax_income = net_monthly_income * 12;

           cout << "Annual tax income: " << annual_tax_income << endl;

           if (annual_tax_income <= 250000)
           {
               tax_due = 0;
               cout << "Tax due: " << tax_due << endl;
           }
           else if (annual_tax_income >= 250001 && annual_tax_income <= 400000)
           {
               tax_due = (annual_tax_income - 250000) * 0.20;
               cout << "Tax due: " << tax_due << endl;
           }
           else if (annual_tax_income >= 400001 && annual_tax_income <= 800000)
           {
               tax_due = (annual_tax_income - 400000) * 0.25;
               cout << "Tax due: " << tax_due << endl;
           }
           else if (annual_tax_income >= 800001 && annual_tax_income <= 2000000)
           {
               tax_due = (annual_tax_income - 800000) * 0.30;
               cout << "Tax due: " << tax_due << endl;
           }
           else if (annual_tax_income >= 2000001 && annual_tax_income <= 8000000)
           {
               tax_due = (annual_tax_income - 2000000) * 0.32;
               cout << "Tax due: " << tax_due << endl;
           }
           else if (annual_tax_income >= 8000001)
           {
               tax_due = (annual_tax_income - 8000000) * 0.35;
               cout << "Tax due: " << tax_due << endl;
           }
       }

       if (marital_status == "HOF")
   {      // deduction = 0;
           sss = monthly_income * 0.06;
           tax = monthly_income * 0.04;
           medicare = monthly_income * 0.02;
           cout << "Your sss is: " << sss << endl;
           cout << "Your tax is: " << tax << endl;
           cout << "Your medicare is: " << medicare << endl;
           cout << "\n Total deduction: " << sss + tax + medicare << endl;

           gross_income = monthly_income - (sss + tax + medicare);

           cout << "Gross income: " << gross_income << endl;

           exemption = dependents * 4000;

           cout << "Exemption: " << dependents * 4000 << endl;

            net_monthly_income = gross_income - exemption;

           cout << "Net monthly income: " << net_monthly_income << endl;

           annual_tax_income = net_monthly_income * 12;

           cout << "Annual tax income: " << annual_tax_income << endl;

           if (annual_tax_income <= 250000)
           {
               tax_due = 0;
               cout << "Tax due: " << tax_due << endl;
           }
           else if (annual_tax_income >= 250001 && annual_tax_income <= 400000)
           {
               tax_due = (annual_tax_income - 250000) * 0.20;
               cout << "Tax due: " << tax_due << endl;
           }
           else if (annual_tax_income >= 400001 && annual_tax_income <= 800000)
           {
               tax_due = (annual_tax_income - 400000) * 0.25;
               cout << "Tax due: " << tax_due << endl;
           }
           else if (annual_tax_income >= 800001 && annual_tax_income <= 2000000)
           {
               tax_due = (annual_tax_income - 800000) * 0.30;
               cout << "Tax due: " << tax_due << endl;
           }
           else if (annual_tax_income >= 2000001 && annual_tax_income <= 8000000)
           {
               tax_due = (annual_tax_income - 2000000) * 0.32;
               cout << "Tax due: " << tax_due << endl;
           }
           else if (annual_tax_income >= 8000001)
           {
               tax_due = (annual_tax_income - 8000000) * 0.35;
               cout << "Tax due: " << tax_due << endl;
           }
       }
       

  }


    else
    {
    cout << "Dependents must not exceed 4" << endl;

    }

}

    
