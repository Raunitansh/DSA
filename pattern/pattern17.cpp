#include<iostream>
using namespace std;

// PATTERNS QUESTION : TO PRINT ->
// A
// BB
// CCC
// DDDD
// EEEEE
int main() {
    char i,j,n;
    cin>>n;
    for(i='A';i<=n;i++){
        char c=i;
        for(j='A';j<=i;j++){
            cout<<c;
        }
        cout<<endl;
    }
    return 0;
}