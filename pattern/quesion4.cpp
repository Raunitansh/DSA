#include<iostream>
using namespace std;

// PATTERNS QUESTION 1: TO PRINT ->
// 1
// 1 2
// 1 2 3
// 1 2 3 4
// and so on 
int main() {
    int i,j,n;
    cin>>n;
    for(i=1;i<n;i++){
        for(j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}