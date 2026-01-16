#include <iostream>
using namespace std;

// 10 done ,11 done, 12 done, 17 done, 18 done, 21 done, 22 done
void pattern1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void pattern2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void pattern3(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}
void pattern4(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}
void pattern5(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void pattern6(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (n - i) + 1; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}
void pattern7(int n)
{
    for (int i = 0; i < n; i++)
    {
        // for space
        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }
        // for star
        for (int j = 1; j <= 2 * i + 1; j++)
        {
            cout << "*";
        }
        // for space
        //  for(int j=1;j<n-i;j++){
        //      cout<<" ";
        //  }
        cout << endl;
    }
}
void pattern8(int n)
{
    for (int i = 0; i < n; i++)
    {
        // for space
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        // for star
        for (int j = 1; j <= (2 * n) - (2 * i + 1); j++)
        {
            cout << "*";
        }
        // for space
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
void pattern9(int n)
{
    for (int i = 0; i < n; i++)
    {
        // for space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        // for star
        for (int j = 1; j <= 2 * i + 1; j++)
        {
            cout << "*";
        }
        // for space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        // for space
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        // for star
        for (int j = 1; j <= (2 * n) - (2 * i + 1); j++)
        {
            cout << "*";
        }
        // for space
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
void pattern10(int n){
    for(int i=1;i<=(2*n)-1;i++){
        int stars=i;
        if(i>n) {
            stars=(2*n)-i;
        }
        for(int j=1;j<=stars;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void pattern11(int n)
{
    for (int i = 0; i < n; i++)
    {
        int start = 1;
        for (int j = 0; j <= i; j++)
        {
            if(i%2 == 0){
            cout << start<<" "; 
            start =1-start;
        }
            else if(i%2 != 0){
            cout<<1-start<<" ";
            start =1-start;
         }
        }
        cout << endl;
    }
}
void pattern12(int n){
    for(int i=1;i<=n;i++){
        // for nos.
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        // for space
        for(int j=1;j<=(2*n)-(2*i);j++){
            cout<<" ";
        }
        // for nos.
        for(int j=i;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
    }
}
void pattern13(int n){
    int start=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<start<<" ";
            start++;
        }
        cout<<endl;
    }
}
void pattern14(char o){
    for(char ch='A';ch<=o;ch++){
        for(char cy='A';cy<=ch;cy++){
            cout<<cy;
        }
        cout<<endl;
    }
}
void pattern15(char o){
    for(char i='A';i<=o;i++)
    {  char start='A';
        for(char j=o;j>=i;j--){
            cout<<start;
            start++;
        }
        cout<<endl;
    }
}
void pattern16(char o){
    for(char i='A';i<=o;i++){
        for(char j='A';j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }
}
void pattern17(char o){
    for(char i='A';i<=o;i++){
        // for space
        for(char j=o;j>i;j--){
            cout<<" ";
        }
        // for increasing letters
        for(char j='A';j<=i;j++){
            cout<<j;
        }
        // for decreasing letters
        for(char j=i-1;j>='A';j--){
            cout<<j;
        }
        cout<<endl;
    }
}
void pattern18(char o){
    for(char i=o;i>='A';i--){
        for(char j=i;j<=o;j++){
            cout<<j;
        }
        cout<<endl;
    }
}
void pattern19(int n){
    // UPPER HALF
    for(int i=0;i<n;i++){
        // for star
        for(int j=n-1;j>=i;j--){
            cout<<"*";
        }
        // for space
        for(int j=0;j<2*i;j++){
            cout<<" ";
        }
        // for star
        for(int j=n-1;j>=i;j--){
            cout<<"*";
        }
        cout<<endl;
    }
    // LOWER HALF
    for(int i=1;i<=n;i++){
        // for star
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        // for space
        for(int j=1;j<=(2*n)-(2*i);j++){
            cout<<" ";
        }
        // for star
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void pattern20(int n){
    for(int i=1;i<=(2*n)-1;i++){
        // for star
        int start=i;
        if(i>n){
            start = (2*n)-i;
        }
        for(int j=1;j<=start;j++){
            cout<<"*";
        }
        // for space
        int startt=(2*n)-(2*i);
        if(i>n){
            startt= (2*i)-(2*n);
        }
        for(int j=1;j<=startt;j++){
            cout<<" ";
        }
        // for star
        int starttt=i;
        if(i>n){
            starttt = (2*n)-i;
        }
        for(int j=1;j<=starttt;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void pattern21(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i == 1 || j==1 || i == n || j == n){
                cout<<"*";
            }
            else {
                cout<<" ";
            }
            
        }cout<<endl;
        
    }
}
void pattern22(int n){
    for(int i=0;i<(2*n)-1;i++){
        for(int j=0;j<(2*n)-1;j++){
            int top = i;
            int left = j;
            int bottom = (2*n)-1-1-i;
            int right = (2*n)-1-1-j;
            cout<<(n-min(min(top,bottom), min(left,right)));
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    cin >> n;
    pattern22(n);
    // char o;
    // cin>>o;
    // pattern17(o);
    return 0;
}