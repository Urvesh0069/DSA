#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 1) {
        return n;  
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

void printFibonacci(int n) {
    cout << "Fibonacci Series for " << n << " terms: " << endl;
    
    for (int i = 0; i < n; i++) {
        cout << fibonacci(i) << " ";  
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    printFibonacci(n);

    return 0;
}


