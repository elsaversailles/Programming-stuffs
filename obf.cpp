#include <iostream>
using namespace std;
int main(){ 
    int amount; 
      cout << "Enter amount :"; cin >> amount; cout  <<endl;
      
      
      
      cout << "1000'S      :" << amount /1000; cout <<endl;
      amount = amount%1000;
      
       cout << "500'S       :" << amount /500; cout <<endl;
      amount = amount%500;
      
       cout << "200'S       :" << amount /200; cout <<endl;
      amount = amount%200;
      
      
       cout << "100'S       :" << amount /100; cout <<endl;
      amount = amount%100;
      
       cout << "50'S        :" << amount /50; cout <<endl;
      amount = amount%50;
      
       cout << "20'S        :" << amount /20; cout <<endl;
      amount = amount%20; 
      
       cout << "10'S        :" << amount /10; cout <<endl;
      amount = amount%10;
      
       cout << "5'S         :" << amount /5; cout <<endl;
      amount = amount%5; 
      
       cout << "1'S         :" << amount /1; cout <<endl;
      amount = amount%1;
      
      return 0;}
