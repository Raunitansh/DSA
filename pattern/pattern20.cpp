#include<iostream>
using namespace std;

// PATTERNS QUESTION : TO PRINT ->
// **********
// ****  ****
// ***    ***
// **      **
// *        *
// *        *
// **      **
// ***    ***
// ****  ****
// **********
int main() {
    int i,j,n;
    cin>>n;
    //upper half
    for( i=0;i<n;i++){
        // for stars
        for(j=0;j<n-i;j++){
            cout<<"*";
        }
        
        //for spaces
        for( j=0;j<2*i;j++){
            cout<<" ";
        }
        
        // for stars
        for(j=0;j<n-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    // lower half
    for(int i = 0; i < n; i++) {

        // left stars
        for(int j = 0; j <= i; j++)
            cout << "*";

        // spaces
        for(int j = 0; j < 2 * (n - i - 1); j++)
            cout << " ";

        // right stars
        for(int j = 0; j <= i; j++)
            cout << "*";

        cout << endl;
    }
    return 0;
}