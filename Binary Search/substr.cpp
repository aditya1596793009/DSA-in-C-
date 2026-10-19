#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    // string s = "Aditya";
    // string sub = s.substr(3,3);
    // cout<<sub;
    string s="srilakshmi";
    int n=s.length();
    string sub = s.substr((n+1)/2);
    cout<<sub;
}