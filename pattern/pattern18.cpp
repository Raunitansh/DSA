#include<iostream>
using namespace std;

// PATTERNS QUESTION 1: TO PRINT ->
//      A
//     ABA
//    ABCBA
//   ABCDCBA
int main() {
    char n;
    cin >> n;   // e.g. D

    for(char i = 'A'; i <= n; i++) {

        // 1️⃣ spaces
        for(char j = i; j < n; j++) {
            cout << " ";
        }

        // 2️⃣ increasing letters
        for(char ch = 'A'; ch <= i; ch++) {
            cout << ch;
        }

        // 3️⃣ decreasing letters
        for(char ch = i - 1; ch >= 'A'; ch--) {
            cout << ch;
        }

        cout << endl;
    }
    return 0;
}

   
