#include <iostream>
using namespace std;

int main() {
    int score;
    char grade;

    cout << "Enter your score ";
    cin >> score;

    if (score < 0 || score > 100) {
        cout << "Invalid input" << endl;
        return 1;
    }

    if (score >= 90) {
        grade = 'A';
    } else if (score >= 80) {
        grade = 'B';
    } else if (score >= 70) {
        grade = 'C';
    } else if (score >= 60) {
        grade = 'D';
    } else if (score >= 50) {
        grade = 'E';
    } else {
        grade = 'F';
    }

    cout << "Your grade is: " << grade << endl;

    return 0;
}
