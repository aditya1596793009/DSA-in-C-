#include <iostream>
using namespace std;

// int pow(int a, int b){
//     if(b==0) return 1;
//     return a*pow(a,b-1);
// }
// int main(){
//     int a,b;
//     cout<<"Enter base and power: ";
//     cin>>a>>b;
//     cout<<pow(a,b);
// }

int pow(int a, int b){
    if(b==0) return 1;
    if(b%2==0) return pow(a,b/2)*pow(a,b/2);
    else return pow(a,b/2)*pow(a,b/2)*a;
}
int main(){
    int a,b;
    cout<<"Enter base and power: ";
    cin>>a>>b;
    cout<<pow(a,b);
}
