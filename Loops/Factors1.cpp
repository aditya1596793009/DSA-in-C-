#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int fact=0;
    for(int i=2; i<n; i++){
        if(n%i==0) {
            fact++;
            cout<<i<<" ";
        }
        
    }
    cout<<endl;
    cout<<fact;
}