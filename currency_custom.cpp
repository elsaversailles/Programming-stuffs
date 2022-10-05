#include<iostream>
using namespace std;
int main()
{
	int amount; //user define
	
	int n1,n2,n5,n10,n20,n50,n100,n200,n500,n1000,n1k,n500k, amount1, amount2,amount3,n200k,amount4;
	
	cout<<"Please Enter Your total Amount to find the notes : ";
	cin>>amount;
	
	n1000 = amount/1000; //1
	cout<<("\t");
	cout<<(n1000);
	cout<<("\t \n \t");
	
	n1k = (n1000>=1); //compare if the value is divisible
	cout<<("1000: ");
	cout<<(n1k); //print it for debug use
	
	if (n1k == 1){
	amount1 = (amount - (n1000*1000)); //print the whole number remainder
	}
	else {
	amount1 = amount;
	}
	n500 = amount1/500; //2
	cout<< ("\n \t 500: ");
	cout<<(n500);
	cout<<("\t \n \t");
	
	n500k = (n500>=1); //checkline
	cout<<(" 500: ");
	cout<<(n500k);
	
	if (n500k == 1){
	amount2 = (amount1 - (n500k*500));
	cout<<("\n");
	cout<<n500k;
	cout<<("\n amount2: ");
	cout<<amount2;	
	} //nest this so compiler knows the end of statement
	
	else
	amount3 = amount;
	
	n200 = amount3/200;
	cout<<("\n n200 = ");
	cout<<n200;
	
	n200k = (n200>=1);
	cout<<("\n");
	cout<<("200: ");
	cout<<(n200k);
	
	if (n200k == 1){
	amount4 = (amount3 - (n200k*200));
	cout<<("\n");
	cout<<n200k;
	}
	
	else
	amount4 = amount3;

 
}
