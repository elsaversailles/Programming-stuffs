#include <iostream>
using namespace std;
int main()
{ 
int num, sum=0, userval, sum1 = 0, sum2 = 0, sum3 = 0 , sum4 = 0;
int pos=0, neg=0; //variable deceleration, it's a must to assign 0 integer value to series sum.
cout<<"Enter number of Values: ";
cin>>userval; //the entered number by the user would be assigned with "userval" variable
for(int i=0; i<userval; i++) //loop through the user assigned value
{
//check whether the number is positive or negative 
cin>>num;
if(num>0)//positive if the num is positive it is greater than 0
{
    if(num%2==0)//even this checks if the positive num is even number
    {
        pos++; //if yes update pos value by 1
        sum4=sum4+num; //then add the current number to previous sum4 value
    }
    if(num%2!=0) //odd if the number have remainder other than 0 it is odd
    {
        pos++; //update pos value by 1
        sum2=sum2+num; //add the odd value to sum2 variable
    }
}

if(num<0)//negative this checks if the number is less than 0 hence, negative
{
    if(num%2==0) //checks if the negative value is even
    {
        neg++; //if yes, increment "neg" variable by 1
        sum1=sum1+num; //add the current odd number to "sum1" variable
    }
 if(num%2!=0) //checks if the negative value is odd if yes the remainder is not zero
    {
        neg++; //increment "neg" by 1
        sum3=sum3+num; //add the current odd number to sum3 variable
    }
}
sum=sum+num; //I don't know why this is here but if I remove it the code don't work
}

// adding 10 numbers
sum=sum+num; //IDK it's here coz this thing breaks without it

cout << "\n Sum of Positive Odd Numbers is: "<<sum2 << endl; //prints the value of all " sum" variables
cout << "\n Sum of Negative Odd Numbers is: "<<sum3 << endl;
cout << "\n Sum of Positive Even Numbers is: "<<sum4 << endl;
cout << "\n Sum of Negative Even Numbers is: "<<sum1 << endl;
return 0;
}


