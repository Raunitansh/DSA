#include<iostream>
using namespace std;

// PATTERNS QUESTION 1: TO PRINT ->
// * * * *
// * * * *
// * * * *
// * * * *
int main() {
    int i,j;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}