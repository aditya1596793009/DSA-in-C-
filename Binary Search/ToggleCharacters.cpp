#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string s;
    cout<<"Enter your name: ";
    getline(cin,s);
    int n = s.length();
    for(int i=0; i<n; i++){
        if(s[i]>=65 && s[i]<=90) s[i]+=32;
        else if(s[i]>=97 && s[i]<=122) s[i]-=32;
    }
    cout<<s;
    
}