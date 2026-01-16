#include<iostream>
using namespace std;

// PATTERNS QUESTION : TO PRINT ->
// ABCDE
// ABCD
// ABC
// AB
// A
int main() {
    int i,j,n;
    cin>>n;
    for(i=0;i<n;i++){
        for(char c='A';c<='A'+ (n-i-1);c++){
            cout<<c;
        }
        cout<<endl;
    }
    return 0;
}