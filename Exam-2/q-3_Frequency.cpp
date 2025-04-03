#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main() {
    string str = "Hello World!";
    

    unordered_map<char, int> frequencyMap;

    for (char ch : str) {
        frequencyMap[ch]++;
    }

    cout << "Character frequencies: " << endl;
    for (auto& pair : frequencyMap) {
        cout << pair.first << ": " << pair.second << endl;
    }

    return 0;
}
