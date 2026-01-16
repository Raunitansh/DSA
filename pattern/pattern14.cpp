#include<iostream>
using namespace std;

// PATTERNS QUESTION: TO PRINT ->
// 1
// 2 3
// 4 5 6
// 7 8 9 10 
// 11 12 13 14 15
int main() {
    int i,j,n;
    cin>>n;
    int start=1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++){
        cout<<start<<" ";
        start++;
    }
    cout<<endl; }
    return 0;
}