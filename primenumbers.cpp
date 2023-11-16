#include <iostream>
using namespace std;

int main() {
    int limit;
    int number = 2;
    // input for the limit
    cout << "Enter the limit to generate prime numbers: ";
    cin >> limit;

    bool isPrime(int number);
    if (number <= 1) {
        return false;
    }
    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
    // Print prime numbers to the specified limit
    cout << "Prime numbers up to " << limit << ":" << endl;
    for (int i = 2; i <= limit; i++) {
            cout << i << " ";
        }
    

    return 0;
   }

