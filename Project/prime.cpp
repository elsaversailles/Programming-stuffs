#include <iostream>
#include <stdlib.h>
using namespace std;

struct Number {
    int value;
    string name;
};

Number ones[] = {{1,"one"},{2,"two"},{3,"three"},{4,"four"},{5,"five"},{6,"six"},{7,"seven"},{8,"eight"},{9,"nine"}};
Number tens[] = {{2,"twenty"},{3,"thirty"},{4,"forty"},{5,"fifty"},{6,"sixty"},{7,"seventy"},{8,"eighty"},{9,"ninety"}};
Number teens[] = {{10,"ten"},{11,"eleven"},{12,"twelve"},{13,"thirteen"},{14,"fourteen"},{15,"fifteen"},{16,"sixteen"},{17,"seventeen"},{18,"eighteen"},{19,"nineteen"}};

bool isPrime(int num) {
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

string convert(int num) {
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
return EXIT_SUCCESS;
}

int debugger(){
    int num, largestPrime = 0;
    cout << "Enter a number: ";
    cin >> num;
    for (int i = num; i > 0; i--) {
        if (isPrime(i)) {
            largestPrime = i;
            break;
        }
    }
    cout << "The largest prime number in the range up to " << num << " is: " << largestPrime << endl;
    }

int main() {
    int num, a;
cout << "Enter a number between 1 and 9999: ";
cin >> num;
if (num == 0){
    debugger();
    cout << "\nPress X + Enter to exit" << endl;
    cin >> a;
    terminate();
}

else if(num>=1 && num<=9999){
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
else{
cout << "\nInvalid input"<<endl;
cout << "\nPress X + Enter to exit" << endl;
cin >> a;
}
return 0;
}
