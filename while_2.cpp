#include <iostream>
using namespace std;
 
int main()
{
    int i, x, ro, n;
    cout << " Enter number: ";
    cin >> ro;
    for (i = 1; i <= ro; i++) 
    {
        for (x = 1; x <= ro - i; x++) //inverted pyramid 
        {
            cout << " ";
        }
        n = i;
        for (x = 1; x <= i; x++) //normal half pyramid
        {
            cout << "*";
            n--;
        }
        cout << endl;
    }
}
