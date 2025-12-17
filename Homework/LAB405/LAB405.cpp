#include <iostream>
using namespace std;

int main() {
    int answer = 20;   // เลขที่ถูกต้อง
    int guess;
    int count = 0;

    cout << "Welcome to the Number Guessing Game!" << endl;

    while (true) {
        cout << "Enter the number you want to guess!: ";
        cin >> guess;
        count++;

        if (guess > answer) {
            cout << "That's too far! Try again!" << endl;
            cout << "You should decrease the number more!" << endl;
        }
        else if (guess < answer) {
            cout << "That's too low! Try again!" << endl;
            cout << "You should increase the number more!" << endl;
        }
        else {
            cout << "Congratulations, you guessed correctly! In "
                << count << " Time!" << endl;
            break; // ออกจาก loop
        }
    }

    // บรรทัดนี้จะรันแน่นอน
    cout << "Game Ended. Thank you for playing!" << endl;

    system("pause"); // กันหน้าจอปิด (Visual Studio)
    return 0;
}
