#include <iostream>
using namespace std;
int main()
{ 
    double base, exponent, reciprocal, reciprocal1, pw, exponent1;
    int f,x, i;
    cout << "Enter Base: ";
    cin >> base;
    cout << "Enter Exponent: ";
    cin >> exponent;

    //write a loop to calculate the negative power with given base and exponent
    reciprocal = 1/base;
    reciprocal1 = reciprocal;

    for (int i = 1; i < exponent; i++)
    {
        reciprocal = reciprocal * reciprocal1;
    }
    pw = reciprocal;
    cout << "answer = " << pw << endl;
 
    exponent1 = exponent*-1;
    while (x<=exponent1)
    {
        pw = pw * reciprocal1;
        x++;
        cout << "answer = " << pw << endl;
    }

 

   


}
