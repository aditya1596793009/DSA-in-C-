#include <iostream>
using namespace std;
int fact(int a){
    int product=1;
    for(int i=a; i>=1; i--){
        product*=i;
    }
    return product;
}
int main(){
    int n,r;
    cout<<"Enter value of n and r: ";
    cin>>n>>r;
    cout<<fact(n)/(fact(r)*fact(n-r));
}