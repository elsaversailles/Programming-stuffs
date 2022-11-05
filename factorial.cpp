#include <iostream>
using namespace std;
int main()
{ 
  int n, r, x;
  cout << "Enter value of N: ";
  cin >> n;
  cout << "Enter value of R: ";
  cin >> r;

  //get the factorial of n
  int nfact = 1;
  for (int i = 1; i <= n; i++) 
  {
    nfact = nfact * i;
   // cout << "Factorial of " << n << " is " << nfact << endl; //n factorial
  }
    x = (n-r);
    //cout << "n ";
   // cout << x << endl;
    int nfact2 = 1;
    for (int i = 1; i <= x; i++)
    {
    nfact2 = nfact2 * i;

   // cout << "factorial of (n-r) = " << x << " is " << nfact2 <<  endl; //(n-r) factorial
  //  cout << x;  //cout (n-r)!
    }

  int nfact3 = 1;
  for (int i = 1; i <= r; i++) 
  {
    nfact3 = nfact3 * i;
    //cout << "Factorial of " << r << " is " << nfact3 << endl; //n factorial
  }

  cout << "Combination = " << nfact / nfact2 * nfact3 << endl;




}

