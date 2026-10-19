#include <iostream>
using namespace std;
int main(){
    char x;
    cout<<"Enter a character: ";
    cin>>x;
    if(int(x)>=65 && int(x)<=90) cout<<"Capital Alphabet";
    else cout<<"Not an capital alphabet";
}