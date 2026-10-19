#include <iostream>
using namespace std;
int main(){
    for(int i=1; i<=4; i++){
        for(int j=1; j<=4; j++){
           if(i%2==1) cout<<char(i+96)<<" ";
           else cout<<char(i+64)<<" ";
        }
        cout<<endl;
    }
}