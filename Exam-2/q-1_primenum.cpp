#include <iostream>
#include <vector>

using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false; 
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) return false; 
    }
    return true;
}

int main() {
    vector<vector<int>> arr = {
        {2, 4, 6},
        {3, 5, 8},
        {9, 11, 12}
    };

    cout << "Prime numbers :" << endl;
    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr[i].size(); j++) {
            if (isPrime(arr[i][j])) {
                cout << arr[i][j] << " "; 
            }
        }
    }

    return 0;
}
