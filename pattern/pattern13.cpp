#include<iostream>
using namespace std;

// PATTERNS QUESTION: TO PRINT ->
// 1      1
// 12    21
// 123  321
// 12344321
int main() {
    int i,j,n;
    cin>>n;
    int space=2*(n-1);
    for(i=1;i<=n;i++){
        // for numbers
        for(j=1;j<=i;j++){
            cout<<j;
        }
        // for space
        for(j=1;j<=space;j++){
            cout<<" ";
        }
        // for numbers
         for(j=i;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
        space -=2;
    }
}