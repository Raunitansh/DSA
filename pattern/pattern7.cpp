#include<iostream>
using namespace std;

// PATTERNS QUESTION 1: TO PRINT ->
// 12345
// 1234
// 123
// 12
// 1
int main() {
    int i,j,n;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i+1;j++){
            cout<<j;
        }
        cout<<endl;
    }

    return 0;
}