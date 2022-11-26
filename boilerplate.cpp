#include <iostream>
using namespace std;

int main()
{
   int num, sum=0;

   cout<<"Please enter 10 numbers:"<<endl;

  for(int i=0; i<10; i++)
  {
   // input is stored in num
    cin>>num;

   // adding 10 numbers
    sum=sum+num;
  }
//https://codescracker.com/cpp/program/cpp-program-insert-element-in-array.htm
     cout << "\n The sum of 10 numbers is: "<<sum << endl;
     return 0;
}

#include <iostream> //odd even
using namespace std;

int main() {
  int n;

  cout << "Enter an integer: ";
  cin >> n;

  if ( n % 2 == 0)
    cout << n << " is even.";
  else
    cout << n << " is odd.";

  return 0;
}



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

cout << "\n The sum of" << userval << "numbers is: "<<sum1 << endl;
cout << "\n The sum of" << userval << "numbers is: "<<sum2 << endl;
return 0;
}


