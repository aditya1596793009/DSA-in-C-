#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string s = "Arjun is the smartest";
    int n=s.length();
    string st;
    int i=0, j=0, mxlen=0;
    while(j<n){
        if(s[j]!=' ') j++;
        else{
            int len = j-i;
            if(len>mxlen){
                mxlen=len;
                st = s.substr(i,len);
            }
            i=j;
        }
        while(i<n && s[i]==' '){
            i++;
            j++;
        }
    }
    int len = j-i;
    if(len>mxlen){
        mxlen=len;
        st = s.substr(i,len);
    }
    cout<<mxlen<<" "<<st;
}