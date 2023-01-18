#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    if (num <= 3) {
        return true;
    }
    if (num % 2 == 0 || num % 3 == 0) {
        return false;
    }
    for (int i = 5; i * i <= num; i = i + 6) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

int main() {
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
    return 0;
}
