#include <iostream>
using namespace std;

int main()
{
	int a=16, b=3, c=2, d=1;
	
	cout<< ("\n \t");
	cout << ("not fix precedemce ");
	cout << (c==2) && (a<2); 
	//this returns 1 (true)
	
	cout << ("precedence fix ");
	cout << ((c==2) && (a<2));
	//this fixes precedence issue
	
	
	return 0;
}
