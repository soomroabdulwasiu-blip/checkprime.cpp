#include <iostream>
using namespace std;
int main () {
     int n;
     cout<< "Enter a Number to check Prime or Not: ";
     cin>> n;
        bool isPrime = true;
        if (n <= 1) {
            isPrime = false;
        } else {
            for (int i = 2; i <= n / 2; i++) {
                if (n % i == 0) {
                    isPrime = false;
                    break;
                }
            }
        }
        if (isPrime) {
            cout << n << " is a Prime Number." << endl;
        } else {
            cout << n << " is not a Prime Number." << endl;
        }
        










    return 0;
}