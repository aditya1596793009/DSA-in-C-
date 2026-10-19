#include <iostream>
#include <string>
using namespace std;
int main(){
    string s = "ADITYA";
    int n=s.length();
    int i=0, j=(n/2)-1;
    while(i<j){
        swap(s[i],s[j]);
        i++;
        j--;
    }
    cout<<s;
}