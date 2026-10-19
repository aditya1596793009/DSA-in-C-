#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    string s = to_string(n);
    cout<<s.length();
}