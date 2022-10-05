#include<iostream>
using namespace std;
int main()
{
	int amount; //user define
	
	int n1,n2,n5,n10,n20,n50,n100,n200,n500,n1000,n1k,n500k, amount1, amount2,amount3,n200k,amount4,n100k, n50k,amount5,n20k,amount6,n10k,amount7,amount8,n5k,amount9;
	
	cout<<"Please Enter Your total Amount to find the notes : ";
	cin>>amount;
	
	n1000 = amount/1000; //show if its whole number
	//cout<<("\t");
	//cout<<(n1000);
	cout<<("\t \n \t");
	
	n1k = (n1000>=1); //compare if the value is divisible
	cout<<("1000: ");
	cout<<(n1000); //print it for debug use
	
	if (n1k >= 1){
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
	//cout<<(" 500: ");
	//cout<<(n500k);
	
	if (n500k >= 1){
	amount2 = (amount1 - (n500*500));
	//cout<<("\n");
	//cout<<n500k;
	//cout<<("\n amount2: ");
	//cout<<amount2;	
	} //nest this so compiler knows the end of statement
	
	else
	amount2 = amount;
	
	
	n200 = amount2/200;
	//cout<<("\n n200 = ");
	//cout<<n200;
	
	n200k = (n200>=1);
	cout<<("\n \t");
	cout<<("200: ");
	cout<<(n200k);
	
	if (n200k >= 1){
	amount3 = (amount2 - (n200*200));
	cout<<("\n");
	//cout<<("\n amount3: ");
	//cout<<amount3;
	//cout<<n200k;
	}
	
	else
	amount3 = amount;
	
	n100 = amount3/100;
	
	n100k = (n100>=1);
	cout<<("\n \t");
	cout<<("100: ");
	cout<<n100k;
	
	if (n100k >= 1) {
		amount4 = (amount3 - (n100*100)); //amount5 is the new value of amount if its divisbile by 100
		cout<<("\n");
		cout<<("\n amount4: ");
		cout<<amount4;
	}
	
	else
	amount4 = amount; //if the amount is not divisble by 100 it'll retain its value
	
	n50 = amount4/50;
	
	n50k = (n50>=1);
	cout<<("\n \t");
	cout<<("50: ");
	cout<<n50k;
	
	if (n50k >= 1) {
		amount5 = (amount4 - (n50*50)); //amount5 is the new value of amount if its divisbile by 50
		cout<<("\n");
		//cout<<("\n amount5: ");
		//cout<<amount5;
	}
	
	else
	amount5 = amount;
	
	n20 = amount5/20;
	
	n20k = (n20>=1);
	cout<<("\n \t");
	
	if (n20k >= 1) {
		amount6 = (amount5 - (n20*20)); //amount5 is the new value of amount if its divisbile by 100
		cout<<("\n");
		cout<<("20: ");
		cout<<n20;
	}
	
	else  //compartmentalized
	amount6 = amount;
	cout<<("\n 20: ");
	cout<<n20k;

	n10 = amount6/10;
	
	n10k = (n10>=1);
	cout<<("\n \t");
	
	
	if (n10k >= 1) {
		amount7 = (amount6 - (n10*10)); //amount5 is the new value of amount if its divisbile by 10
		cout<<("\n");
		cout<<("10: ");
		cout<<n10;
	}
	
	else{
	amount7 = amount;
	cout<<("\n 10: ");
	cout<<n10k;
}
	n5 = amount7/5;
	
	n5k = (n5>=1);
	cout<<("\n \t");
	
	if (n5k >= 1) {
		amount8 = (amount7 - (n5*5)); //amount5 is the new value of amount if its divisbile by 5
		cout<<("\n");
		cout<<("5: ");
		cout<<n5k;
	}
	
	else{
		amount8 = amount;
		cout<<("\n 5: ");
		cout<<n5k;

	}
	
	n1 = amount8/1;
	
	n1k = (n1>=1);
	cout<<("\n \t");
	

	if (amount8 == 10){
		cout<<"\n 1: 0";
		exit(0);
	}
	
	else if (n1k >= 1) 
	amount9 = (amount8 - (n1*1)); //amount5 is the new value of amount if its divisbile by 1
		cout<<("\n 1: ");
		cout<<n1;

}

