#include<iostream>
using namespace std;

// PATTERNS QUESTION: TO PRINT ->
// 1
// 0 1
// 1 0 1
// 0 1 0 1 
// 1 0 1 0 1
int main() {
    int i,j,n;
    cin>>n;
    int start;
    for(i=0;i<n;i++){
        if(i%2==0)
        start=1;
        else start=0; 
        for(j=0;j<=i;j++){
            cout<<start<<" ";
            start=1-start;
        }
        cout<<endl;
    }
    return 0;
}