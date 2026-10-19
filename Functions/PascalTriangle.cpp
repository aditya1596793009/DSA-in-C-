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
    int n;
    cout<<"Enter value of n: ";
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
        }
        cout<<endl;
    }
}