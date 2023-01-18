#include <iostream>

#include <map>

using namespace std;

map<int,string> ones = {{1,"one"},{2,"two"},{3,"three"},{4,"four"},{5,"five"},{6,"six"},{7,"seven"},{8,"eight"},{9,"nine"}};

map<int,string> tens = {{2,"twenty"},{3,"thirty"},{4,"forty"},{5,"fifty"},{6,"sixty"},{7,"seventy"},{8,"eighty"},{9,"ninety"}};

map<int,string> teens = {{10,"ten"},{11,"eleven"},{12,"twelve"},{13,"thirteen"},{14,"fourteen"},{15,"fifteen"},{16,"sixteen"},{17,"seventeen"},{18,"eighteen"},{19,"nineteen"}};

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

    if (n < 10)

        return ones[n];

    else if (n < 20)

        return teens[n];

    else if (n < 100)

        return tens[n/10] + " " + ones[n%10];

    else if (n < 1000)

        return ones[n/100] + " hundred " + convert(n%100);

    else 

        return ones[n/1000] + " thousand " + convert(n%1000);

}

int main() {

    int num;

    cout << "Enter a number between 1 and 9999: ";

    cin >> num;

    if(num>=1 && num<=9999){

        if (isPrime(num))

            cout << convert(num) << endl;

        else

            cout << num << " is not a prime number." << endl;

    }else{

        cout << "Invalid input"<<endl;

    }

    return 0;

}

