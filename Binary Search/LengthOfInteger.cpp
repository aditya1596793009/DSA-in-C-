#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    string s;
    if(n>0){
        while(n!=0){
            char ch = (n%10)+48;
            s.push_back(ch);
            n/=10;
        }
        reverse(s.begin(),s.end());
    }
    else if (n==0) {
        char ch = 48;
        s.push_back(ch);
    }
    else {
        while(n!=0){
        char ch = (abs(n)%10)+48;
        s.push_back(ch);
        n/=10;
    }
    char c = '-';
    s.push_back(c);
    reverse(s.begin(),s.end());
    }

    cout<<s;
}