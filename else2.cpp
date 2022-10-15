#include <iostream>
using namespace std;
int main()
{ int x, result;
cout<<"Enter number: ";
    cin>>x;
    //check if the number is odd or even
    if(x%2==0) {
        cout<<"Even number";
    }
    else
        cout<<"Odd number";
    
        
}

#include <iostream>
using namespace std;
int main()
{ 
    int x;
    cout<<"Enter number: ";
    cin>>x;

    if(x%2==0) {
        cout<<"\n Even number";
    }
    else if(x%2==1) {
        cout<<"\n Odd number";
    }
    else {
        cout<<"\n Zero number";
    }   
}
