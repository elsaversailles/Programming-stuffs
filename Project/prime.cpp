#include <iostream>
#include <stdlib.h>
using namespace std;

struct Number {
    int value;
    string name;
};
//-
Number ones[] = {{1,"one"},{2,"two"},{3,"three"},{4,"four"},{5,"five"},{6,"six"},{7,"seven"},{8,"eight"},{9,"nine"}};
Number tens[] = {{2,"twenty"},{3,"thirty"},{4,"forty"},{5,"fifty"},{6,"sixty"},{7,"seventy"},{8,"eighty"},{9,"ninety"}};
Number teens[] = {{10,"ten"},{11,"eleven"},{12,"twelve"},{13,"thirteen"},{14,"fourteen"},{15,"fifteen"},{16,"sixteen"},{17,"seventeen"},{18,"eighteen"},{19,"nineteen"}};

bool isPrime(int num) { //check if number is prime
    if (num <= 1) 
        return false;
    if (num <= 3) 
        return true;
    if (num % 2 == 0 || num % 3 == 0) 
        return false;
    for (int i = 5; i * i <= num; i = i + 6) 
        if (num % i == 0 || num % (i + 2) == 0) 
            return false;
    return true;
}

string convert(int num) { //converts intteger value to words using array
    if (num < 10) {
        for (int i = 0; i < 9; i++) {
            if (ones[i].value == num) {
                return ones[i].name;
            }
        }
    } else if (num < 20) {
        for (int i = 0; i < 10; i++) {
            if (teens[i].value == num) {
                return teens[i].name;
            }
        }
    } else if (num < 100) {
        string result = "";
        for (int i = 0; i < 8; i++) {
            if (tens[i].value == num/10) {
                result += tens[i].name;
            }
        }
        for (int i = 0; i < 9; i++) {
            if (ones[i].value == num%10) {
                result += " " + ones[i].name;
            }
        }
        return result;
    } else if (num < 1000) {
        string result = "";
        for (int i = 0; i < 9; i++) {
            if (ones[i].value == num/100) {
                result += ones[i].name + " hundred ";
            }
        }
        result += convert(num%100);
        return result;
    } else {
        string result = "";
        for (int i = 0; i < 9; i++) {
            if (ones[i].value == num/1000) {
                result += ones[i].name + " thousand ";
            }
        }
        result += convert(num%1000);
        return result;
    }
return EXIT_SUCCESS; //used to extinguish compile warning
}

int debugger(){ //built in tester
    int num, largestPrime = 0;
    cout << "Enter number to check: ";
    cin >> num;
    if (num >=1 && num <= 9999){
    for (int i = num; i > 0; i--) {
        if (isPrime(i)) {
            largestPrime = i;
            break;
        }
    }
    cout << "The largest prime number in the range up to " << num << " is: " << largestPrime << endl;
    return num;
    }
    else{
        cout << "Invalid input" << endl;
        return 0;
    }
}
int main() { //main function
    int num, a;
    cout << "Enter a number between 1 and 9999 \n0 invokes Prime checker: " << endl;
    cin >> num;

if(num>=1 && num<=9999){ ///check if the number is in range
    if (isPrime(num)){
    cout <<"\n" << convert(num) <<" is a prime number" << endl;
    cout << "\nPress X + Enter to exit" << endl;
    cin >> a;
    terminate();
    }
    else
    cout << "\n" << num << " is not a prime number" << endl;
    cout << "\nPress X + Enter to exit" << endl;
    cin >> a;
}
if (num == 0){ //check if tester should be invoked
    debugger();
    cout << "\nPress X + Enter to exit" << endl;
    cin >> a;
    terminate();
}
else{ //catch all
cout << "\nInvalid input"<<endl;
cout << "\nPress X + Enter to exit" << endl;
cin >> a;
}
return 0;
}
