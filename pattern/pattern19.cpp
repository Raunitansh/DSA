#include<iostream>
using namespace std;

// PATTERNS QUESTION : TO PRINT ->
// E
// D E
// C D E
// B C D E
// A B C D E
int main() {
    char n;
    cin >> n;   // e.g. E

    for(char i = n; i >= 'A'; i--) {
        for(char j = i; j <= n; j++) {
            cout << j << " ";
        }
        cout << endl; }
    return 0;
}