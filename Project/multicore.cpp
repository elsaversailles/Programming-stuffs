#include <iostream>
#include <vector>
#include <thread>
using namespace std;

vector<int> primes;

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

void findPrimes(int start, int end) {
    for (int i = start; i <= end; i++) {
        if (isPrime(i)) {
            primes.push_back(i);
        }
    }
}

int main() {
    int num = 100000000000;
    int numThreads = 8;
    int range = num / numThreads;
    vector<thread> threads;

    for (int i = 0; i < numThreads; i++) {
        int start = i * range + 1;
        int end = (i + 1) * range;
        if (i == numThreads - 1) {
            end = num; // to make sure we include the last prime number
        }
        threads.push_back(thread(findPrimes, start, end));
    }

    for (int i = 0; i < numThreads; i++) {
        threads[i].join();
    }

    cout << "Prime numbers up to " << num << " are: " << endl;
    for (int i = 0; i < primes.size(); i++) {
        cout << primes[i] << " ";
    }
    cout << endl;

    return 0;
}
