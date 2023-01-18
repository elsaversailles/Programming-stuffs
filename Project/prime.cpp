#include <iostream>
using namespace std;

struct Number {
    int value;
    string name;
};

Number ones[] = {{1,"one"},{2,"two"},{3,"three"},{4,"four"},{5,"five"},{6,"six"},{7,"seven"},{8,"eight"},{9,"nine"}};
Number tens[] = {{2,"twenty"},{3,"thirty"},{4,"forty"},{5,"fifty"},{6,"sixty"},{7,"seventy"},{8,"eighty"},{9,"ninety"}};
Number teens[] = {{10,"ten"},{11,"eleven"},{12,"twelve"},{13,"thirteen"},{14,"fourteen"},{15,"fifteen"},{16,"sixteen"},{17,"seventeen"},{18,"eighteen"},{19,"nineteen"}};

bool isPrime(int n) {
    if (n <= 1) 
        return false;
    if (n <= 3) 
        return true;
    if (n % 2 == 0 || n % 3 == 0) 
        return false;
    for (int i = 5; i * i <= n; i = i + 6) 
        if (n % i == 0 || n % (i + 2) == 0) 
            return false;
    return true;
}

string convert(int n) {
    if (n < 10) {
        for (int i = 0; i < 9; i++) {
            if (ones[i].value == n) {
                return ones[i].name;
            }
        }
    } else if (n < 20) {
        for (int i = 0; i < 10; i++) {
            if (teens[i].value == n) {
                return teens[i].name;
            }
        }
    } else if (n < 100) {
        string result = "";
        for (int i = 0; i < 8; i++) {
            if (tens[i].value == n/10) {
                result += tens[i].name;
            }
        }
        for (int i = 0; i < 9; i++) {
            if (ones[i].value == n%10) {
                result += " " + ones[i].name;
            }
        }
        return result;
    } else if (n < 1000) {
        string result = "";
        for (int i = 0; i < 9; i++) {
            if (ones[i].value == n/100) {
                result += ones[i].name + " hundred ";
            }
        }
        result += convert(n%100);
        return result;
    } else {
        string result = "";
        for (int i = 0; i < 9; i++) {
            if (ones[i].value == n/1000) {
                result += ones[i].name + " thousand ";
            }
        }
        result += convert(n%1000);
        return result;
    }
}

int main() {
    int num, a;
cout << "Enter a number between 1 and 9999: ";
cin >> num;
if(num>=1 && num<=9999){
    if (isPrime(num)){
    cout << convert(num) << endl;
    cout << "Press X + Enter to exit" << endl;
    cin >> a;
    }
    else
    cout << num << " is not a prime number." << endl;
    cout << "Press X + Enter to exit" << endl;
    cin >> a;
}
else{
cout << "Invalid input"<<endl;
cout << "Press X + Enter to exit" << endl;
cin >> a;
}
return 0;
}
