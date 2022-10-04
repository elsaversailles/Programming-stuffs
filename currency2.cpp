#include<iostream>
using namespace std;
int main()
{
	int amount;
	int n1,n2,n5,n10,n20,n50,n100,n200,n500,n1000;
	n1 = n2 = n5 = n10 = n20 = n50 = n100 = n200 = n500 = n1000 =0;
	cout<<"Please Enter Your total Amount to find the notes : ";
	cin>>amount;
	switch(amount>=1000)
	{
		case 1:
			n1000 = amount/1000;
        	amount -= n1000 * 1000;
        break;
	}

    switch(amount>=500)

	{
		case 1:
			n500 = amount/500;
        	amount -= n500 * 500;
        break;
	}
	
	 switch(amount>=200)

	{
		case 1:
			n200 = amount/200;
        	amount -= n200 * 200;
        break;
	}
	
	switch(amount >=100)
	{
		case 1:
			n100 = amount/100;
        	amount -= n100 * 100;
        break;
	}
	switch(amount >=50)
	{
		case 1:
			n50 = amount/50;
        	amount -= n50 * 50;
	}
	switch(amount >=20)
	{
		case 1:
			n20 = amount/20;
        	amount -= n20 * 20;
        break;
	}
	switch(amount >=10)
	{
		case 1:
			n10 = amount/10;
        	amount  -= n10 * 10;
        break;
	}
	
	switch(amount >=1)
	{
		case 1:
			n1 = amount/1;
        	amount  -= n1 * 10;
        break;
	}
	cout << "1000 = " << n1000 <<endl;
	cout << "500 = " << n500 <<endl;
	cout << "200 = " << n200 <<endl;
    	cout << "100 = " << n100 <<endl;
    	cout << "50 = " << n50 <<endl;
    	cout << "20 = " << n20 <<endl;
    	cout << "10 = " << n10 <<endl;
    	cout << "1 = " << n1 <<endl;
}
