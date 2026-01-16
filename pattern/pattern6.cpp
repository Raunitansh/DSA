#include<iostream>
using namespace std;

// PATTERNS QUESTION 1: TO PRINT ->
// * * * * *
// * * * * 
// * * * 
// * *
// * 
 
int main() {
    int i,j,n;
    cin>>n;
    // for(i=0;i<n;i++){
    //     for(j=n-1;j>=i;j--){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // OR 
    for(i=1;i<=n;i++){
        for(j=0;j<=n-i+1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}