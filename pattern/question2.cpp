#include<iostream>
using namespace std;

// PATTERNS QUESTION 1: TO PRINT n NUMBER OF wo bhi test cases ke according->
// * * * *
// * * * *
// * * * *
// * * * *
void print(int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

int main() {
    int t; // t = number of test cases (kitni baar code repeat hoga)
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        print(n);
    }
    
    return 0;
}