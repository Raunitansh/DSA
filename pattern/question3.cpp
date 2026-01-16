#include<iostream>
using namespace std;

// PATTERNS QUESTION 1: TO PRINT ->
// *
// * *
// * * *
// * * * * 
int main() {
    int i,j,n;
    cin>>n;
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}