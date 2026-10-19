#include <iostream>
using namespace std;
void pyramid(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
int main(){
    pyramid(4);
    pyramid(5);
    pyramid(6);
    pyramid(7);
}