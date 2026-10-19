#include <iostream>
using namespace std;
// int gcd(int a, int b){
//     for(int i=min(a,b); i>=1; i--){
//         if(a%i==0 && b%i==0) return i;
//     }
//     return 1;
// }
int gcd(int a, int b){
    int rem = max(a,b)%min(a,b);
    if(rem==0) return min(a,b);
    if(rem==1) return 1;
    gcd(min(a,b),rem);
}
int main(){
    int a,b;
    cout<<"Enter 2 numbers: ";
    cin>>a>>b;
    cout<<gcd(a,b);
}