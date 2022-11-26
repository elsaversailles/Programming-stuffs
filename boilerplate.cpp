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
