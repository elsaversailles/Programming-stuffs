#include <iostream>
using namespace std;
int main()
{ 
//ask user to input 5 numbers and display the sum of the numbers
//and segregrate the positive and negative numbers
int num, sum=0, userval, sum1, sum2 = 0;
int pos=0, neg=0;
// cout<<"Please enter 10 numbers:"<<endl;
cout<<"Enter number of Values: ";
cin>>userval;
for(int i=0; i<userval; i++)
{
//check if the number is negative
cin>>num;
if(num>0)
{
pos++;
sum1=sum1+num;
}
if(num<0)
//else
{
neg++;
sum2=sum2+num;
}
// adding 10 numbers
sum=sum+num;
}

cout << "\n The sum of Positive numbers is: "<<sum1 << endl;
cout << "\n The sum of Negative numbers is: "<<sum2 << endl;
if (sum1%2==0)
{
   cout << "\n Sum of Positive Even Numbers is: "<<sum1 << endl;
}
else
{
   cout << "\n Sum of Positive Odd Numbers is: "<<sum1 << endl;
}

if (sum2%2==0)
{
   cout << "\n Sum of Negative Even Numbers is: "<<sum2 << endl;
}
else
{
   cout << "\n Sum of Negative Odd Numbers is: "<<sum2 << endl;
}

/*
cout << "\n Sum of Positive Odd Numbers is: "<<sum1 << endl;
cout << "\n Sum of Positive Even Numbers is: "<<sum2 << endl;
cout << "\n Sum of Negative Odd Numbers is: "<<sum1 << endl;
cout << "\n Sum of Negative Even Numbers is: "<<sum2 << endl;
*/
return 0;
}


