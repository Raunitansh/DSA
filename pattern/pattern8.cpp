#include<iostream>
using namespace std;

// PATTERNS QUESTION 1: TO PRINT ->
//         *
//       * * *
//     * * * * *
//   * * * * * * *
// * * * * * * * * *
int main() {
    int i,j,n;
    cin>>n;
    for(i=0;i<n;i++){
        // for space
        for(j=0;j<n-i-1;j++){
            cout<<" ";
        }
        // for star
        for(j=0;j<2*i+1;j++){
            cout<<"*";
        }
        // for space
        for(j=0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }
         return 0;
    }
   
