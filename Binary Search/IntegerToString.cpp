#include <iostream>
#include <string>
using namespace std;
int main(){
    int x=12345;
    string s;
    while(x>0){
        int n=x%10;
        char ch=n+48;
        s.push_back(ch);
        x/=10;
    }
    cout<<s;
}