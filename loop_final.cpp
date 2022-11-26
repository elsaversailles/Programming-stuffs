#include <iostream>
using namespace std;
int main()
{ 
int num, sum=0, userval, sum1 = 0, sum2 = 0, sum3 = 0 , sum4 = 0;
int pos=0, neg=0;
cout<<"Enter number of Values: ";
cin>>userval;
for(int i=0; i<userval; i++)
{
//check if the number is negative
cin>>num;
if(num>0)//positive
{
    if(num%2==0)//even
    {
        pos++;
        sum4=sum4+num;
    }
    if(num%2!=0) //odd
    {
        pos++;
        sum2=sum2+num;
    }
}

if(num<0)//negative
{
    if(num%2==0)
    {
        neg++;
        sum1=sum1+num;
    }
 if(num%2!=0) 
    {
        neg++;
        sum3=sum3+num;
    }
}
sum=sum+num;
}

// adding 10 numbers
sum=sum+num;

cout << "\n Sum of Positive Odd Numbers is: "<<sum2 << endl;
cout << "\n Sum of Negative Odd Numbers is: "<<sum3 << endl;
cout << "\n Sum of Positive Even Numbers is: "<<sum4 << endl;
cout << "\n Sum of Negative Even Numbers is: "<<sum1 << endl;
return 0;
}


