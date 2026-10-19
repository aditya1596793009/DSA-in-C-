#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int fac=1;
    for(int i=2; i<=n; i++){
        fac*=i;
    }
    cout<<fac;
}