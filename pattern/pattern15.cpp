#include<iostream>
using namespace std;

// PATTERNS QUESTION : TO PRINT ->
// A
// AB
// ABC
// ABCD
// ABCDE
int main() {
    char i,j,n;
    cin>>n;
    for(i='A';i<=n;i++){
        for(j='A';j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}