#include <iostream>
using namespace std;

int main() {
    int number, lastDigit, firstDigit;

    cout << "Enter any number: ";
    cin >> number;

    lastDigit = number % 10;
    firstDigit = number;

    while (firstDigit >= 10) {
        firstDigit /= 10;
    }

    int sum = firstDigit + lastDigit;

    cout << "The sum of the first and the last digit: " << sum << endl;

    return 0;
}
