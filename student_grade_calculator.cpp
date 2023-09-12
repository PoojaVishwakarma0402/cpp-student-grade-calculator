// C++ Student Grade Calculator
#include <iostream>
using namespace std;

class Student {
public:
    int sub[4];
};

int main() {
    Student S[6];

    // Input subject marks for each student
    for (int i = 0; i < 6; i++) {
        cout << "Enter 4 Subject marks for student " << i + 1 << endl;
        for (int j = 0; j < 4; j++) {
            cin >> S[i].sub[j];
        }
    }

    // Calculate and display the average grade for each student
    for (int i = 0; i < 6; i++) {
        int sum = 0;
        for (int j = 0; j < 4; j++) {
            sum += S[i].sub[j];
        }
        cout << "Average for student " << i + 1 << " = " << static_cast<double>(sum) / 4.0 << endl;
    }

    return 0;
}
