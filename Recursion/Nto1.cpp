#include <iostream>
using namespace std;

// void print(int x,int n){
//     if(x>n) return;
//     cout<<x<<" ";
//     print(x+1,n);
// }
// int main(){
//     int m;
//     cout<<"Enter a number: ";
//     cin>>m;
//     print(1,m);
// }

// int n; //global variable
// void print(int x){
//     if(x>n) return; // base case
//     cout<<x<<" "; // work
//     print(x+1); // call
// }
// int main(){
//     cout<<"Enter a number: ";
//     cin>>n;
//     print(1);
// }

void print(int n){
    if(n==0) return;
    if(n!=1) cout<<n<<" ";
    print(n-1);
    cout<<n<<" ";
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    print(n);
}